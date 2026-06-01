void *__fastcall sub_57C1C0(__int64 a1, _DWORD *a2)
{
  size_t v3; // rdi
  void *v4; // rax

  v3 = *(unsigned int *)(a1 + 24);
  *a2 = v3;
  v4 = off_8C52B0(v3, 0x18u);
  return memcpy(v4, *(const void **)(a1 + 16), 24LL * *(unsigned int *)(a1 + 24));
}
