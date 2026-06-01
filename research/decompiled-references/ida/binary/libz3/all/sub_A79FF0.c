void __fastcall sub_A79FF0(_QWORD *a1)
{
  __int64 v1; // r12
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  void *v6; // rbp
  __int64 v7; // rbp
  __int64 i; // r13
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  __m128i v10; // [rsp+10h] [rbp-38h]

  if ( !a1[41] )
  {
    v1 = sub_186B270(8u);
    sub_1021CC0(v1, a1[63], *(_QWORD *)(*a1 + 16LL) + 120LL, a1[1]);
    v6 = (void *)a1[41];
    if ( (void *)v1 != v6 )
    {
      if ( v6 )
      {
        sub_1021E20(a1[41]);
        sub_186B220(v6);
      }
      a1[41] = v1;
    }
    v7 = a1[53];
    if ( v7 )
    {
      for ( i = v7 + 12LL * *(unsigned int *)(v7 - 4); i != v7; v1 = a1[41] )
      {
        v7 += 12;
        sub_1021CA0(v1);
      }
    }
    v10 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C565F0), (__m128i)(unsigned __int64)sub_A77C50);
    sub_1021B90(v1, (unsigned int)&v9, v2, v3, v4, v5, (_DWORD)a1, 0);
    if ( v10.m128i_i64[0] )
      ((void (__fastcall *)(__int64 *, __int64 *, __int64))v10.m128i_i64[0])(&v9, &v9, 3);
  }
}

