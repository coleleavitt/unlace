// attributes: thunk
void *dwarf_memcpy_noswap_bytes(void *dest, const void *src, size_t n)
{
  return memcpy(dest, src, n);
}

