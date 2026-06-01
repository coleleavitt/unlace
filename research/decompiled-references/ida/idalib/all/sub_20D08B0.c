void __fastcall sub_20D08B0(__int64 a1, _QWORD *a2)
{
  size_t v2; // rbp
  __int64 v3; // rax
  size_t v5; // rsi
  const void *v6; // r12
  char *v7; // rdi
  unsigned __int64 v8; // rdx
  size_t v9; // rsi

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = a2[2];
    v5 = a2[3];
    v6 = *(const void **)(a1 + 24);
    v7 = (char *)a2[1];
    if ( v3 + v2 > v5 )
    {
      v8 = v3 + v2 + 992;
      v9 = 2 * v5;
      if ( v8 > v9 )
      {
        a2[3] = v8;
        v9 = v3 + v2 + 992;
      }
      else
      {
        a2[3] = v9;
      }
      v7 = (char *)realloc(v7, v9);
      a2[1] = v7;
      if ( !v7 )
        abort();
      v3 = a2[2];
    }
    memcpy(&v7[v3], v6, v2);
    a2[2] += v2;
  }
}
