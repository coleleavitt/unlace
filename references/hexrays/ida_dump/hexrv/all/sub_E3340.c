__int64 __fastcall sub_E3340(__int64 *a1, __int64 a2, int a3, _QWORD *a4, int a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 v10; // r14
  int v11; // r12d
  int v12; // edi
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 i; // r12
  __int64 v16; // rbx
  __int64 v17; // rsi
  __m128i v18; // xmm0
  unsigned int v19; // ebx
  __int64 v21; // r12
  __int64 v22; // rax
  unsigned int v23; // [rsp+Ch] [rbp-8Ch]
  int v26; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v27; // [rsp+38h] [rbp-60h]
  int v28; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+44h] [rbp-54h]
  unsigned __int64 v30; // [rsp+58h] [rbp-40h]

  v7 = a5;
  v30 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_1185C0((unsigned int)a3) )
  {
    v21 = *(_QWORD *)(a1[2] + 8);
    v22 = (unsigned __int8)getinf(66) ? (unsigned __int8)getinf(66) : *(_QWORD *)(v21 + 120);
    if ( a3 != v22 )
    {
      if ( !under_debugger )
        sub_37DDE0(52004);
      goto LABEL_32;
    }
  }
  v10 = *a4 + 80 * v7;
  if ( *(_DWORD *)(v10 + 4) >= a3 )
  {
    if ( !under_debugger )
      sub_37DDE0(52012);
LABEL_32:
    BUG();
  }
  v26 = 0;
  v11 = a3;
  copy_argloc(&v26, v10 + 56);
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      if ( v10 == *a4 + 80LL * a4[1] )
        goto LABEL_22;
      v11 -= *(_DWORD *)(v10 + 4);
      if ( v11 < 0 || (unsigned int)compare_arglocs(v10 + 56, &v26) )
        goto LABEL_22;
      v13 = *(int *)(v10 + 4);
      if ( v26 == 5 )
        break;
      if ( v26 <= 5 )
      {
        if ( v26 != 1 )
        {
          if ( v26 == 3 )
          {
            HIWORD(v12) = WORD1(v27);
            LOWORD(v12) = 0;
            LODWORD(v27) = v12 | (v13 + (unsigned __int16)v27);
          }
          goto LABEL_8;
        }
LABEL_15:
        v27 = (_QWORD *)((char *)v27 + v13);
        v10 += 80;
        if ( !v11 )
          goto LABEL_16;
      }
      else
      {
        if ( v26 == 6 )
          goto LABEL_15;
LABEL_8:
        v10 += 80;
        if ( !v11 )
          goto LABEL_16;
      }
    }
    *v27 += v13;
    goto LABEL_8;
  }
  if ( a3 )
    goto LABEL_22;
LABEL_16:
  v14 = sub_133C80(a1[1], a3, 1);
  v23 = v14;
  if ( v14 == -1 )
  {
LABEL_22:
    v19 = 0;
    goto LABEL_23;
  }
  v28 = 1;
  v29 = __PAIR64__(v14, a3);
  sub_120CC0(a2);
  sub_1188E0(&v28);
  for ( i = *a4 + 80 * v7; i != v10; i += 80 )
  {
    v16 = j__qalloc_or_throw(80);
    v17 = *(_QWORD *)(a6 + 24);
    *(_QWORD *)(v16 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 40) = 0;
    *(_QWORD *)(v16 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 56) = 0;
    *(_QWORD *)(v16 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 72) = 0;
    sub_32B5A0(v16, v17);
    *(_DWORD *)v16 = 4;
    sub_120CC0(v16 + 32);
    v18 = _mm_cvtsi32_si128(*(_DWORD *)(v16 + 36));
    v28 = 1;
    v29 = _mm_unpacklo_epi32(v18, _mm_cvtsi32_si128(v23)).m128i_u64[0];
    sub_120CC0(v16 + 64);
    sub_1188E0(&v28);
    v23 += *(_DWORD *)(v16 + 68);
    sub_9ECA0(*a1, (_QWORD *)v16, *(_QWORD *)(a6 + 16));
  }
  v19 = 1;
LABEL_23:
  cleanup_argloc(&v26);
  return v19;
}
