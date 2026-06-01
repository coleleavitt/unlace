void __fastcall sub_E4DEA0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
{
  unsigned __int64 v6; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned int *v10; // r14
  size_t v11; // rcx
  const void *v12; // r14
  __int64 v13; // rax
  size_t n; // [rsp+0h] [rbp-68h]
  void *s1; // [rsp+8h] [rbp-60h] BYREF
  char *s[2]; // [rsp+10h] [rbp-58h]
  char *v17[2]; // [rsp+20h] [rbp-48h]

  v6 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(a3 + 8) & 0x7F) != 0x18 || !sub_E3D7C0(a1, a3) )
    goto LABEL_2;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 17448LL) + 260LL) != 13 )
    goto LABEL_24;
  if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 58 > 3 )
    goto LABEL_24;
  v8 = *(_QWORD *)(v6 + 40);
  if ( (v8 & 7) != 0 )
    goto LABEL_24;
  v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v9 )
    goto LABEL_24;
  v10 = *(unsigned int **)(v9 + 16);
  s1 = "ldiv_t";
  v11 = *v10;
  v12 = v10 + 4;
  n = v11;
  *(__m128 *)s = _mm_loadh_ps((const double *)&s1);
  s1 = "tm";
  a5 = _mm_loadh_ps((const double *)&s1);
  *(__m128 *)v17 = a5;
  if ( v11 )
  {
    if ( s[0] )
    {
      s1 = s[0];
      if ( v11 == j__strlen(s[0]) && !memcmp(s1, v12, n) )
        goto LABEL_11;
    }
    if ( s[1] )
    {
      s1 = s[1];
      if ( n == j__strlen(s[1]) && !memcmp(s1, v12, n) )
        goto LABEL_11;
    }
    if ( v17[0] )
    {
      s1 = v17[0];
      if ( n == j__strlen(v17[0]) && !memcmp(s1, v12, n) )
        goto LABEL_11;
    }
    if ( v17[1] )
    {
      s1 = v17[1];
      if ( n == j__strlen(v17[1]) && !memcmp(s1, v12, n) )
        goto LABEL_11;
    }
    goto LABEL_24;
  }
  if ( s[0] && j__strlen(s[0]) && s[1] && j__strlen(s[1]) && v17[0] && j__strlen(v17[0]) && v17[1] && j__strlen(v17[1]) )
  {
LABEL_24:
    sub_995540(a1[1], "St");
LABEL_2:
    sub_E4D010(a1, a2, *(_QWORD *)(v6 + 40), a3, a4, *(double *)a5.m128_u64);
    return;
  }
LABEL_11:
  v13 = sub_227B910(a1[1], n);
  sub_9954E0(v13, v12, n);
}
