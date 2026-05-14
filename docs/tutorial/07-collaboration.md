# Chapter 7: Collaboration

## The Lumina Annotation Server

Reverse engineering is rarely a solo activity — teams working on large firmware
images or malware campaigns need to share discoveries without duplicating effort.
Unlace integrates with the Lumina protocol (originally from Hex-Rays) to push
and pull function annotations from a shared server. When you rename a function,
fix a type, or add a comment, those annotations are associated with a
content-addressable function hash and can be uploaded for teammates to pull
automatically.

```bash
# Configure the Lumina server (self-hosted or public)
$ unlace config set lumina.server https://lumina.example.com
$ unlace config set lumina.token $LUMINA_API_TOKEN

# Push annotations for all analyzed functions
$ unlace lumina push ./target_binary

# Pull known annotations before starting analysis
$ unlace lumina pull ./target_binary
```

The protocol hashes function bodies using a normalized form (ignoring relocation
targets and absolute addresses) so that the same library function compiled at
different addresses in different binaries shares annotations. This means that
once anyone on your team identifies `sub_402100` as `custom_base64_decode`, every
future analysis of any binary containing that function body picks up the name
automatically.

## Team Workflows and Conflict Resolution

In practice, multiple analysts may annotate the same function differently —
perhaps one names it `parse_header` while another calls it `read_pkt_hdr`.
Lumina handles this with a priority system: annotations carry a confidence
score, a timestamp, and an author identity. By default, higher-confidence
annotations win; ties are broken by timestamp (most recent wins). Teams can
configure merge policies in their server's settings: `first-wins`,
`last-wins`, `highest-confidence`, or `manual-review` which queues conflicts
for a lead analyst to resolve.

Annotations are stored as append-only logs, so nothing is ever lost. You can
view the full history with `unlace lumina history --function 0x402100` and
revert to any prior state. The server also supports annotation namespaces —
useful when the same team works on related but distinct binaries (e.g.,
different firmware versions) and wants per-project overrides without polluting
the global namespace.

## Self-hosting and Privacy

For sensitive work (vulnerability research, incident response), you'll want a
private Lumina instance rather than the public server. The `unlace-lumina` crate
includes a standalone server binary that stores annotations in SQLite and
requires token-based authentication. Deploy it behind your organization's VPN
and configure access control per-project. All data in transit is encrypted via
TLS, and at rest the SQLite database can be wrapped with SQLCipher for
additional protection.

```bash
$ cargo install unlace-lumina --features server
$ unlace-lumina serve --bind 0.0.0.0:8443 --db ./annotations.db --tls-cert cert.pem --tls-key key.pem
```
