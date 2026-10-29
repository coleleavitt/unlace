__int64 __fastcall sub_2278D70(_BYTE *a1, __int64 a2, __int64 a3, void **a4)
{
  _BYTE *v5; // rdi
  void *v6; // rdx
  size_t v8; // rdx
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  void *src; // [rsp+10h] [rbp-38h] BYREF
  size_t n; // [rsp+18h] [rbp-30h]
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 )
  {
    LOBYTE(v12[0]) = 0;
    v5 = *a4;
    v8 = 0;
    src = v12;
LABEL_12:
    a4[1] = (void *)v8;
    v5[v8] = 0;
    v5 = src;
    goto LABEL_6;
  }
  src = v12;
  sub_2276EC0(&src, a1, (__int64)&a1[a2]);
  v5 = *a4;
  if ( src == v12 )
  {
    v8 = n;
    if ( n )
    {
      if ( n == 1 )
        *v5 = v12[0];
      else
        memcpy(v5, src, n);
      v8 = n;
      v5 = *a4;
    }
    goto LABEL_12;
  }
  if ( v5 == (_BYTE *)(a4 + 2) )
  {
    v9 = v12[0];
    *a4 = src;
    *(__m128 *)(a4 + 1) = _mm_loadh_ps((const double *)&v9);
  }
  else
  {
    v9 = v12[0];
    v6 = a4[2];
    *a4 = src;
    *(__m128 *)(a4 + 1) = _mm_loadh_ps((const double *)&v9);
    if ( v5 )
    {
      src = v5;
      v12[0] = v6;
      goto LABEL_6;
    }
  }
  v5 = v12;
  src = v12;
LABEL_6:
  n = 0;
  *v5 = 0;
  if ( src != v12 )
    operator delete(src);
  return 0;
}
