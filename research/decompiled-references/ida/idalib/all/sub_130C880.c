__int64 __fastcall sub_130C880(__int64 a1, int *a2, const void *a3, __int64 a4, const void *a5, __int64 a6)
{
  size_t v6; // rbp
  const void *v7; // r13
  int v8; // eax
  int v10; // eax
  const void *v11; // [rsp+0h] [rbp-38h]

  if ( !*(_BYTE *)(a1 + 20) )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(const void **)a1;
    if ( v6 == a4 )
    {
      v11 = a5;
      if ( !v6 )
        goto LABEL_5;
      v10 = memcmp(v7, a3, v6);
      a5 = v11;
      if ( !v10 )
        goto LABEL_5;
      if ( v6 != a6 )
        return a1;
      goto LABEL_10;
    }
    if ( v6 == a6 )
    {
      if ( !v6 )
      {
LABEL_5:
        v8 = *a2;
        *(_BYTE *)(a1 + 20) = 1;
        *(_DWORD *)(a1 + 16) = v8;
        return a1;
      }
LABEL_10:
      if ( memcmp(v7, a5, v6) )
        return a1;
      goto LABEL_5;
    }
  }
  return a1;
}
