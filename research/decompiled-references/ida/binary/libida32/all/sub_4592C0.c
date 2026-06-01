__int64 __fastcall sub_4592C0(__m128i *a1, unsigned int a2, int a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // r13d
  __int64 v8; // rbp
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int first_fcref_to; // r15d
  __int64 *v13; // rbp
  unsigned __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 *v18; // rax
  __int64 v19; // rax
  __m128i v20; // xmm0
  int v21; // [rsp+0h] [rbp-128h]
  void *v22; // [rsp+8h] [rbp-120h]
  __m128i v23; // [rsp+10h] [rbp-118h] BYREF
  __m128i v24; // [rsp+20h] [rbp-108h] BYREF
  __m128i v25; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v26; // [rsp+40h] [rbp-E8h] BYREF
  __m128i v27; // [rsp+50h] [rbp-D8h] BYREF
  __m128i v28; // [rsp+60h] [rbp-C8h] BYREF
  __m128i v29; // [rsp+70h] [rbp-B8h] BYREF
  __m128i v30; // [rsp+80h] [rbp-A8h] BYREF
  __m128i v31; // [rsp+90h] [rbp-98h] BYREF
  __m128i v32; // [rsp+A0h] [rbp-88h] BYREF
  __m128i v33; // [rsp+B0h] [rbp-78h] BYREF
  __m128i v34; // [rsp+C0h] [rbp-68h] BYREF
  __m128i v35; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v36; // [rsp+E0h] [rbp-48h]
  _QWORD v37[8]; // [rsp+E8h] [rbp-40h] BYREF

  v6 = a2;
  v8 = a5;
  v37[0] = __readfsqword(0x28u);
  v9 = a1->m128i_u16[7];
  if ( (_WORD)v9 && v9 <= a3 )
    return 0;
  v10 = a3 + a2;
  switch_dbctx(*(int *)(a4 + 4LL * a6 + 16));
  if ( (get_flags_ex(v10, 4) & 0x1000) == 0
    || (HIDWORD(v22) = 0, first_fcref_to = get_first_fcref_to(v10), first_fcref_to == -1)
    && (HIDWORD(v22) = 1, first_fcref_to = get_first_dref_to(v10), first_fcref_to == -1) )
  {
    switch_dbctx(*(int *)(a4 + 4 * v8 + 16));
    return 0;
  }
  BYTE3(v22) = sub_3FDBC0();
  v13 = *(__int64 **)(switch_dbctx(*(int *)(a4 + 4 * v8 + 16)) + 1480);
  v14 = sub_3B9AA0((__int64)v13, v10, 0);
  v15 = v14;
  BYTE1(v14) |= 0x10u;
  sub_3CAE70(v13, v10, v14);
  sub_3FDEE0(
    v13,
    first_fcref_to,
    v10,
    SBYTE4(v22),
    SBYTE3(v22),
    v16,
    v21,
    v22,
    v23.m128i_i64[0],
    v23.m128i_i32[2],
    v24.m128i_i32[0],
    v24.m128i_i32[2],
    v25.m128i_i32[0],
    v25.m128i_i32[2],
    v26.m128i_i32[0],
    v26.m128i_i32[2],
    v27.m128i_i32[0],
    v27.m128i_i32[2],
    v28.m128i_i32[0],
    v28.m128i_i32[2],
    v29.m128i_i64[0]);
  v23.m128i_i64[0] = -1;
  v24.m128i_i64[0] = 0;
  v23.m128i_i64[1] = 0xFFFFFFFFLL;
  v18 = &v24.m128i_i64[1];
  do
  {
    *(_WORD *)v18 = 0;
    v18 += 3;
    *((_WORD *)v18 - 11) = 0;
    *((_WORD *)v18 - 10) = 0;
    *((_DWORD *)v18 - 1) = 0;
    *((_WORD *)v18 - 9) = 0;
    *(v18 - 2) = 0;
    *((_DWORD *)v18 - 2) = 0;
  }
  while ( v37 != v18 );
  v19 = v36;
  *a1 = _mm_load_si128(&v23);
  v20 = _mm_load_si128(&v24);
  a1[13].m128i_i64[0] = v19;
  a1[1] = v20;
  a1[2] = _mm_load_si128(&v25);
  a1[3] = _mm_load_si128(&v26);
  a1[4] = _mm_load_si128(&v27);
  a1[5] = _mm_load_si128(&v28);
  a1[6] = _mm_load_si128(&v29);
  a1[7] = _mm_load_si128(&v30);
  a1[8] = _mm_load_si128(&v31);
  a1[9] = _mm_load_si128(&v32);
  a1[10] = _mm_load_si128(&v33);
  a1[11] = _mm_load_si128(&v34);
  a1[12] = _mm_load_si128(&v35);
  LOBYTE(v6) = (int)decode_insn(a1, a2, v37, 0, 0, v17) > 0;
  sub_3DDE70(v13, v10);
  sub_3CAE70(v13, v10, v15);
  return v6;
}

