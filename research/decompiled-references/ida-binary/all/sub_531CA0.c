__int64 __fastcall sub_531CA0(__int64 *a1, __int64 a2, const char *a3, int a4)
{
  __int64 *v4; // r15
  __int64 v6; // rbp
  size_t v8; // rax
  size_t v9; // r14
  size_t v11; // rbp
  void *v12; // rax

  v4 = a1 + 1;
  v6 = a2;
  *a1 = a2;
  a1[1] = 0;
  *((_DWORD *)a1 + 8) = 0;
  *((_OWORD *)a1 + 1) = 0;
  if ( a3 )
  {
    v4 = a1 + 1;
    v8 = strlen(a3);
    v9 = v8;
    if ( v8 )
    {
      v11 = v8 + 1;
      v12 = (void *)qvector_reserve(a1 + 1, 0, v8 + 1, 1);
      a1[2] = v11;
      a1[1] = (__int64)v12;
      memmove(v12, a3, v9);
      *(_BYTE *)(a1[1] + v9) = 0;
      v6 = *a1;
    }
  }
  *((_DWORD *)a1 + 8) = a4;
  return sub_531C60(v4, (__int64 *)(v6 + 96));
}
