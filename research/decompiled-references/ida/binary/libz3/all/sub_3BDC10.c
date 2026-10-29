__m128 *__fastcall sub_3BDC10(__m128 *a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // eax
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a2 + 48);
  v3 = *(_DWORD *)(v2 + 3072);
  switch ( v3 )
  {
    case 0:
      sub_1872CE0("");
      sub_1873130(114, 1398);
    case 1:
      sub_3C7D00(v8, *(_QWORD *)(a2 + 48));
      v5 = v8[0];
      *a1 = _mm_loadh_ps((const double *)(v2 + 8));
      if ( v5 && !*(_DWORD *)(v5 + 8) )
        sub_15D7BC0(v8[1], v5);
      break;
    case -1:
      v6 = *(_QWORD *)(v2 + 8);
      v7 = *(_QWORD *)(v6 + 856);
      *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v6);
      if ( v7 )
        ++*(_DWORD *)(v7 + 8);
      break;
    default:
      sub_1872CE0("");
      sub_1873130(114, 1408);
  }
  return a1;
}

