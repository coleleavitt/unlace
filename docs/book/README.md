# Decompilation with unlace

A practical tutorial covering binary analysis using the unlace decompiler.

## Table of Contents

1. [Getting Started](./01-getting-started.md)
2. [Your First Decompilation](./02-first-decompile.md)
3. [Understanding the Output](./03-understanding-output.md)
4. [Working with Architectures](./04-architectures.md)
5. [The Optimization Pipeline](./05-pipeline.md)
6. [Type Recovery](./06-type-recovery.md)
7. [Annotations and Renaming](./07-annotations.md)
8. [Batch Analysis](./08-batch.md)
9. [Writing Plugins](./09-plugins.md)
10. [Advanced: IR Internals](./10-ir-internals.md)

## Who This Book Is For

- Reverse engineers migrating from IDA/Hex-Rays or Ghidra
- CTF players wanting a fast, open-source decompiler
- Security researchers integrating decompilation into automated pipelines
- Contributors wanting to understand unlace internals

## Prerequisites

- Basic understanding of assembly language (any architecture)
- Familiarity with C (unlace outputs C pseudocode)
- A Rust toolchain (for building from source)
