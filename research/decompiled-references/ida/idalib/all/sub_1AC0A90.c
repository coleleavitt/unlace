void *__fastcall sub_1AC0A90(_QWORD *a1, __int64 a2)
{
  void *result; // rax
  unsigned int v3; // r12d
  size_t v4; // rdx

  result = a1 + 2;
  a1[1] = 0x300000000LL;
  v3 = *(_DWORD *)(a2 + 8);
  *a1 = a1 + 2;
  if ( v3 && (_QWORD *)a2 != a1 )
  {
    v4 = 16LL * v3;
    if ( v3 <= 3uLL
      || (sub_2237220(a1, a1 + 2, v3, 16), result = (void *)*a1, (v4 = 16LL * *(unsigned int *)(a2 + 8)) != 0) )
    {
      result = memcpy(result, *(const void **)a2, v4);
    }
    *((_DWORD *)a1 + 2) = v3;
  }
  return result;
}
