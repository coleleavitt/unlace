__int64 __fastcall sub_97ACB0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 *v16; // rax
  bool v17; // zf
  __int64 v19; // rax
  __m128i v20; // [rsp+8h] [rbp-40h]

  v7 = *(_QWORD *)(a2 + 24);
  v20 = _mm_loadu_si128(a1 + 8);
  sub_979740((__int64)a1, v7, 1, 0, a5, a6);
  v12 = a1[1].m128i_i64[0];
  if ( !v12 )
    v12 = sub_975DA0((__int64)a1, v7, v8, v9, v10, v11);
  if ( (unsigned __int8)sub_978340(a1, (_WORD *)a2) )
  {
    v19 = a1[22].m128i_i64[0];
    if ( v19 )
      *(_QWORD *)(v19 + 8) = v12;
  }
  v16 = *(unsigned __int64 **)(v12 + 8);
  if ( (unsigned __int64)v16 >= *(_QWORD *)(v12 + 16) )
  {
    sub_975850((const __m128i **)v12, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v13, v14, v15);
    v16 = *(unsigned __int64 **)(v12 + 8);
  }
  *v16 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v16[1] = 1;
  *(_QWORD *)(v12 + 8) += 16LL;
  v17 = a1[20].m128i_i8[0] == 0;
  *(_QWORD *)(v12 + 24) = a2;
  if ( v17 )
    a1[1].m128i_i64[0] = 0;
  else
    v12 = 0;
  a1[8].m128i_i64[0] = v20.m128i_i64[0];
  a1[8].m128i_i32[2] = v20.m128i_i32[2];
  return v12;
}

