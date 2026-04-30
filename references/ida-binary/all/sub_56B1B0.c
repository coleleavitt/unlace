void *__fastcall sub_56B1B0(_DWORD *a1, const void *a2, unsigned int a3)
{
  size_t v3; // r12
  void *v4; // rax

  v3 = a3;
  a1[6] = a3;
  if ( a3 <= 0x18 )
    return memcpy(a1, a2, a3);
  v4 = off_8C52B8(a3);
  *(_QWORD *)a1 = v4;
  return memcpy(v4, a2, v3);
}
