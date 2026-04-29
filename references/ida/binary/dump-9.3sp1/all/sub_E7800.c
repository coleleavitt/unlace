__int64 __fastcall sub_E7800(__int64 *a1, __int64 a2, int a3, _QWORD *a4, int a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 v10; // r14
  int v11; // r12d
  unsigned int v12; // eax
  int *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 i; // r12
  __int64 v17; // rbx
  __int64 v18; // rsi
  __m128i v19; // xmm0
  unsigned int v20; // ebx
  __int64 v22; // r12
  __int64 v23; // rax
  unsigned int v24; // [rsp+Ch] [rbp-8Ch]
  int v26; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+44h] [rbp-54h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v7 = a5;
  v28 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_11CA80((unsigned int)a3) )
  {
    v22 = *(_QWORD *)(a1[2] + 8);
    v23 = (unsigned __int8)getinf() ? (unsigned __int8)getinf() : *(_QWORD *)(v22 + 120);
    if ( a3 != v23 )
    {
      if ( !under_debugger )
        sub_383060(52004);
      goto LABEL_25;
    }
  }
  v10 = *a4 + 80 * v7;
  if ( *(_DWORD *)(v10 + 4) >= a3 )
  {
    if ( !under_debugger )
      sub_383060(52012);
LABEL_25:
    BUG();
  }
  v11 = a3;
  copy_argloc();
  if ( a3 > 0 )
  {
    while ( v10 != *a4 + 80LL * a4[1] )
    {
      v11 -= *(_DWORD *)(v10 + 4);
      if ( v11 < 0 || (unsigned int)compare_arglocs() )
        break;
      v10 += 80;
      if ( !v11 )
        goto LABEL_10;
    }
    goto LABEL_15;
  }
  if ( a3 )
  {
LABEL_15:
    v20 = 0;
    goto LABEL_16;
  }
LABEL_10:
  v12 = sub_138140(a1[1], a3, 1);
  v24 = v12;
  if ( v12 == -1 )
    goto LABEL_15;
  v13 = &v26;
  v26 = 1;
  v27 = __PAIR64__(v12, a3);
  sub_125180(a2);
  sub_11CDA0(&v26);
  for ( i = *a4 + 80 * v7; i != v10; i += 80 )
  {
    v17 = j__qalloc_or_throw(80, (__int64)v13, v14, v15);
    v18 = *(_QWORD *)(a6 + 24);
    *(_QWORD *)(v17 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v17 + 40) = 0;
    *(_QWORD *)(v17 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v17 + 56) = 0;
    *(_QWORD *)(v17 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v17 + 72) = 0;
    sub_330970(v17, v18);
    *(_DWORD *)v17 = 4;
    sub_125180(v17 + 32);
    v19 = _mm_cvtsi32_si128(*(_DWORD *)(v17 + 36));
    v26 = 1;
    v27 = _mm_unpacklo_epi32(v19, _mm_cvtsi32_si128(v24)).m128i_u64[0];
    sub_125180(v17 + 64);
    sub_11CDA0(&v26);
    v13 = (int *)v17;
    v24 += *(_DWORD *)(v17 + 68);
    sub_A3160(*a1, (_QWORD *)v17, *(_QWORD *)(a6 + 16));
  }
  v20 = 1;
LABEL_16:
  cleanup_argloc();
  return v20;
}
