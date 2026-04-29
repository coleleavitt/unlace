void __fastcall sub_3E8E20(__int64 a1, __int64 a2, __int64 a3, int a4, double a5)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // rdx
  char v9; // r13
  __int64 v10; // r12
  unsigned __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rax
  int v20; // r13d
  unsigned __int64 i; // r15
  int v22; // eax
  int v23; // [rsp+14h] [rbp-84h]
  unsigned int v24; // [rsp+1Ch] [rbp-7Ch]
  int v25; // [rsp+2Ch] [rbp-6Ch] BYREF
  __int128 v26; // [rsp+30h] [rbp-68h] BYREF
  __m128i v27; // [rsp+40h] [rbp-58h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v5 = a4;
  v28 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 832);
  if ( a4 < *(_DWORD *)(v6 + 488) || a4 > *(_DWORD *)(v6 + 500) )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCEE4u, a2, a5);
LABEL_29:
    BUG();
  }
  v8 = *(_QWORD *)(v6 + 584);
  if ( !v8 )
    goto LABEL_27;
  v9 = a2;
  v23 = (unsigned __int8)a2;
  v10 = *(int *)(*(_QWORD *)(v6 + 576) + 4 * v8 - 4);
  *(_QWORD *)(v6 + 584) = v8 - 1;
  sub_1D14D0(
    a1,
    3u,
    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
    *(int *)(*(_QWORD *)(a1 + 832) + 80LL),
    0x3BEA45E214ADDC55LL,
    v10,
    (unsigned __int8)a2);
  sub_3E8420(a1, 0xEu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v5, v10, v5, 0);
  if ( *(_BYTE *)(a3 + 1) != 9 )
  {
    if ( !under_debugger )
      sub_37CFE0(0x291Au, 14, a5);
    goto LABEL_29;
  }
  v11 = *(_QWORD *)(a3 + 8);
  if ( !v11 )
    goto LABEL_6;
  v12 = bitcount(*(_QWORD *)(a3 + 8));
  sub_1D14D0(
    a1,
    3u,
    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) * v12,
    0x3BEA45E214ADDC55LL,
    v10,
    (unsigned __int8)a2);
  a2 = 12;
  sub_3E8420(a1, 0xCu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v5, v10, v5, 0);
  v13 = *(_QWORD *)(a1 + 832);
  v14 = *(_QWORD *)(v13 + 584);
  if ( !v14 )
LABEL_27:
    sub_3E4140(a5, a1, a2);
  v15 = *(int *)(*(_QWORD *)(v13 + 576) + 4 * v14 - 4);
  *(_QWORD *)(v13 + 584) = v14 - 1;
  v16 = *(_QWORD *)(a1 + 832);
  v24 = v15;
  v17 = *(int *)(v16 + 60);
  v18 = *(_DWORD *)(v16 + 84);
  if ( v9 )
    sub_3E8420(a1, 4u, v18, v17, 0x3BEA45E214ADDC55LL, v15, 0);
  else
    sub_3E8420(a1, 0xCu, v18, v17, v5, v15, 0);
  sub_1D14D0(
    a1,
    3u,
    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
    *(int *)(*(_QWORD *)(a1 + 832) + 80LL),
    0x3BEA45E214ADDC55LL,
    v10,
    v23);
  v26 = 0;
  v19 = operator new(0x18u);
  *(_QWORD *)v19 = a1;
  *(_BYTE *)(v19 + 8) = v9;
  *(_QWORD *)&v26 = v19;
  *(_QWORD *)(v19 + 12) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v24), _mm_cvtsi32_si128(v10)).m128i_u64[0];
  v27 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4BD3C0), (__m128i)(unsigned __int64)sub_3E8580);
  v20 = ((__int64 (__fastcall *)(unsigned __int64))bitcountr_zero)(v11);
  for ( i = v11 >> v20; i; i >>= 1 )
  {
    while ( (i & 1) == 0 )
    {
      ++v20;
      i >>= 1;
    }
    if ( v20 > 31 )
      v22 = -1;
    else
      v22 = v20;
    v25 = v22;
    if ( !v27.m128i_i64[0] )
      std::__throw_bad_function_call();
    if ( ((unsigned int (__fastcall *)(__int128 *, int *))v27.m128i_i64[1])(&v26, &v25) )
      break;
    ++v20;
  }
  if ( v27.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v27.m128i_i64[0])(&v26, &v26, 3);
  sub_3E62F0(*(_QWORD *)(a1 + 832), v24);
LABEL_6:
  sub_3E8420(
    a1,
    v23 + 12,
    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
    *(int *)(*(_QWORD *)(a1 + 832) + 60LL),
    v5,
    *(int *)(*(_QWORD *)(a1 + 832) + 60LL),
    0);
  sub_3E62F0(*(_QWORD *)(a1 + 832), v10);
}
