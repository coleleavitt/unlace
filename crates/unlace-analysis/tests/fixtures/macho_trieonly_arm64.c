/* Source for the `macho_trieonly_arm64` fixture: the `exporttrie` witness.
 *
 * A dylib whose symbol table was emptied after linking (LC_SYMTAB nsyms and
 * LC_DYSYMTAB's ranges set to zero), so its exports are named only by the
 * export trie (LC_DYLD_EXPORTS_TRIE), as on a stripped system dylib.
 *
 *   clang -target arm64-apple-macos11 -O1 -fno-stack-protector -c macho_trieonly_arm64.c -o t.o
 *   ld64.lld -arch arm64 -platform_version macos 11.0 11.0 -dylib -fixup_chains \
 *       -install_name /usr/lib/libtrieonly.dylib -o macho_trieonly_arm64 t.o
 *   then zero nsyms/strsize in LC_SYMTAB and every LC_DYSYMTAB range
 *   (crates/unlace-analysis/tests/fixtures/macho_trieonly_arm64.py).
 */
__attribute__((noinline)) int trie_scale(int x) { return x * 3 + 1; }
int trie_entry(int y) { return trie_scale(y) ^ 0x55; }
