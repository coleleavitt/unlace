__int64 __fastcall sub_3E4320(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v6; // rdx
  _BYTE *v7; // r15
  __int64 v8; // rax
  char *v10; // rbx
  __m128i si128; // xmm1
  __m128i *v12; // rax
  __int64 v13; // rsi
  unsigned int v14; // r12d
  int i; // r8d
  __int64 v16; // rax
  __int64 v17; // r15
  _QWORD *v18; // r13
  int v19; // eax
  _QWORD *v20; // r12
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rdi
  _QWORD *v23; // rsi
  _QWORD *v24; // r11
  unsigned __int64 v25; // rax
  _QWORD *v26; // rdx
  bool v27; // al
  __int64 v28; // rdi
  int v29; // eax
  __m128i v30; // xmm0
  _QWORD *v31; // rax
  _QWORD *v32; // r10
  _QWORD *v33; // r9
  _QWORD *v34; // rbx
  __int64 v35; // r12
  void *v36; // rax
  __int64 v37; // rsi
  unsigned int v38; // r13d
  __int64 v39; // rax
  unsigned int dtype_size; // [rsp+8h] [rbp-2D8h]
  __int64 v43; // [rsp+8h] [rbp-2D8h]
  char v44; // [rsp+8h] [rbp-2D8h]
  unsigned int v45; // [rsp+8h] [rbp-2D8h]
  __int64 v46; // [rsp+10h] [rbp-2D0h]
  char *v47; // [rsp+18h] [rbp-2C8h]
  int v48; // [rsp+30h] [rbp-2B0h]
  __int64 v49; // [rsp+30h] [rbp-2B0h]
  __int64 v50; // [rsp+38h] [rbp-2A8h]
  __int64 v51; // [rsp+48h] [rbp-298h] BYREF
  _BYTE v52[12]; // [rsp+50h] [rbp-290h] BYREF
  __int64 v53[2]; // [rsp+60h] [rbp-280h] BYREF
  __int64 *v54; // [rsp+70h] [rbp-270h] BYREF
  __int128 v55; // [rsp+78h] [rbp-268h]
  __int64 v56; // [rsp+90h] [rbp-250h]
  __int64 v57; // [rsp+98h] [rbp-248h]
  __int64 *v58; // [rsp+A0h] [rbp-240h] BYREF
  __int128 v59; // [rsp+A8h] [rbp-238h]
  _BYTE v60[24]; // [rsp+C0h] [rbp-220h] BYREF
  _BYTE v61[56]; // [rsp+D8h] [rbp-208h] BYREF
  _BYTE v62[24]; // [rsp+110h] [rbp-1D0h] BYREF
  _BYTE v63[376]; // [rsp+128h] [rbp-1B8h] BYREF
  char v64; // [rsp+2A0h] [rbp-40h] BYREF
  unsigned __int64 v65; // [rsp+2A8h] [rbp-38h]

  v6 = *(unsigned __int16 *)(a1 + 48);
  v65 = __readfsqword(0x28u);
  switch ( (_WORD)v6 )
  {
    case 2:
      v8 = 0;
      break;
    case 4:
      v8 = 1;
      break;
    case 5:
      v8 = 2;
      break;
    case 0x28:
      v8 = 3;
      break;
    default:
      LODWORD(v7) = 0;
      v8 = 4;
      if ( (_WORD)v6 != 33 )
        return (unsigned int)v7;
      break;
  }
  v10 = &v64;
  v46 = v8;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3FA110);
  v7 = v60;
  v47 = (&off_4B6200)[2 * v8];
  v12 = (__m128i *)v60;
  do
  {
    v12->m128i_i32[1] = -1;
    v12 += 5;
    v12[-5].m128i_i16[0] = 0;
    v12[-5].m128i_i16[1] = 0;
    v12[-5].m128i_i64[1] = 0;
    v12[-4] = si128;
    v12[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v12[-3] + 8) = 0;
    v12[-2].m128i_i32[2] = 0;
    v12[-1].m128i_i64[0] = 0;
    v12[-1].m128i_i32[2] = 0;
  }
  while ( v12 != (__m128i *)&v64 );
  v53[0] = 0;
  v53[1] = 0;
  v54 = nullptr;
  v56 = 0;
  v57 = 0;
  v58 = nullptr;
  v51 = 0;
  v55 = 0;
  v59 = 0;
  switch ( v6 )
  {
    case 2LL:
      v44 = 1;
      goto LABEL_67;
    case 4LL:
      v13 = *(_QWORD *)(a1 + 832);
      dtype_size = get_dtype_size(*(unsigned __int8 *)(a1 + 69));
      sub_324F00((__int64 *)v52, v13, dtype_size, 2);
      sub_327B90((__int64)v60, a3, dtype_size, (__int64)v52);
      clear_tinfo_t(v52);
      v43 = *(_QWORD *)(a1 + 832);
      v14 = get_dtype_size(*(unsigned __int8 *)(a1 + 109));
      sub_324F00((__int64 *)v52, v43, v14, 2);
      sub_327B90((__int64)v62, a4, v14, (__int64)v52);
      clear_tinfo_t(v52);
      *(_QWORD *)v52 = 39;
      copy_tinfo_t(v61, v52);
      clear_tinfo_t(v52);
      *(_QWORD *)v52 = 39;
      copy_tinfo_t(v63, v52);
      clear_tinfo_t(v52);
      goto LABEL_12;
    case 5LL:
      v37 = *(_QWORD *)(a1 + 832);
      v45 = get_dtype_size(*(unsigned __int8 *)(a1 + 69));
      sub_324F00((__int64 *)v52, v37, v45, 2);
      sub_327B90((__int64)v60, a3, v45, (__int64)v52);
      clear_tinfo_t(v52);
      *(_QWORD *)v52 = 39;
      copy_tinfo_t(v61, v52);
      clear_tinfo_t(v52);
      goto LABEL_12;
    case 33LL:
LABEL_12:
      v44 = 1;
      a3 = a2;
      v48 = 0;
      break;
    case 40LL:
      v44 = 0;
LABEL_67:
      v49 = *(_QWORD *)(a1 + 832);
      v38 = get_dtype_size(*(unsigned __int8 *)(a1 + 69));
      sub_324F00((__int64 *)v52, v49, v38, 2);
      sub_327B90((__int64)v60, a4, v38, (__int64)v52);
      clear_tinfo_t(v52);
      v39 = 7;
      if ( *(_WORD *)(a1 + 48) == 2 )
        v39 = 39;
      *(_QWORD *)v52 = v39;
      copy_tinfo_t(v61, v52);
      clear_tinfo_t(v52);
      copy_tinfo_t(&v51, v61);
      v48 = 1;
      break;
  }
  if ( !v47 )
    goto LABEL_31;
  for ( i = 0; i != 6; ++i )
  {
    if ( !*v7 )
      break;
    v7 += 80;
  }
  v16 = sub_32E2F0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)v47, &v51, i, (__int64)v60, v48);
  v17 = *(_QWORD *)(v16 + 72);
  v18 = (_QWORD *)v16;
  v19 = *(_DWORD *)(v17 + 280);
  *(_DWORD *)(v17 + 280) = v19 | 4;
  if ( *((_BYTE *)&off_4B6200 + 16 * v46 + 10) )
    *(_DWORD *)(v17 + 280) = v19 | 0x14;
  sub_5DD00((__int64 *)(v17 + 136), v53);
  sub_30F930((__int64 *)(v17 + 152), &v54);
  sub_30F930((__int64 *)(v17 + 216), &v54);
  sub_30F930((__int64 *)(v17 + 216), &v58);
  if ( v44 )
  {
    v29 = *((_DWORD *)v18 + 1) | 0x80000;
    *((_DWORD *)v18 + 1) = v29;
    if ( !v48 )
    {
LABEL_41:
      *((_DWORD *)v18 + 1) = v29 | 0x20000;
      goto LABEL_21;
    }
LABEL_42:
    v30 = _mm_cvtsi32_si128(*((_DWORD *)v18 + 17));
    *(_DWORD *)v52 = 1;
    *(_QWORD *)&v52[4] = _mm_unpacklo_epi32(v30, _mm_cvtsi32_si128(a3)).m128i_u64[0];
    v18 = sub_11EBA0((__int64)v18, v52);
    sub_1166E0((__int64)v52);
    if ( !v44 )
      goto LABEL_21;
    v29 = *((_DWORD *)v18 + 1);
    goto LABEL_41;
  }
  if ( v48 )
    goto LABEL_42;
LABEL_21:
  sub_AEBD0(*(_QWORD **)(a1 + 16), (__int64)v18);
  v20 = *(_QWORD **)(a1 + 8);
  v21 = *(_QWORD *)(a1 + 40);
  v22 = (_QWORD *)v20[127];
  v7 = v20 + 126;
  v23 = v20 + 126;
  if ( v22 )
  {
    v24 = (_QWORD *)v20[127];
    while ( 1 )
    {
      while ( 1 )
      {
        v25 = v24[4];
        if ( v25 >= v21 )
          break;
        v24 = (_QWORD *)v24[3];
        if ( !v24 )
          goto LABEL_27;
      }
      v26 = (_QWORD *)v24[2];
      if ( v21 >= v25 )
        break;
      v23 = v24;
      v24 = (_QWORD *)v24[2];
      if ( !v26 )
      {
LABEL_27:
        v27 = v7 == (_BYTE *)v23;
        goto LABEL_28;
      }
    }
    v31 = (_QWORD *)v24[3];
    v32 = v24;
    while ( v31 )
    {
      if ( v21 < v31[4] )
      {
        v23 = v31;
        v31 = (_QWORD *)v31[2];
      }
      else
      {
        v31 = (_QWORD *)v31[3];
      }
    }
    if ( v26 )
    {
      v33 = v24;
      do
      {
        if ( v26[4] >= v21 )
        {
          v33 = v26;
          v26 = (_QWORD *)v26[2];
        }
        else
        {
          v26 = (_QWORD *)v26[3];
        }
      }
      while ( v26 );
      v32 = v33;
    }
    if ( (_QWORD *)v20[128] != v32 || v23 != (_QWORD *)v7 )
    {
      if ( v32 != v23 )
      {
        v50 = (__int64)v32;
        v34 = v20;
        do
        {
          v35 = v50;
          v50 = std::_Rb_tree_increment(v50);
          v36 = (void *)std::_Rb_tree_rebalance_for_erase(v35, v7);
          operator delete(v36, 0x28u);
          --v34[130];
        }
        while ( v23 != (_QWORD *)v50 );
        v10 = &v64;
      }
      goto LABEL_31;
    }
  }
  else
  {
    v27 = 1;
LABEL_28:
    if ( (_QWORD *)v20[128] != v23 || !v27 )
      goto LABEL_31;
  }
  sub_3E3A90(v22);
  v20[128] = v7;
  v20[127] = 0;
  v20[129] = v7;
  v20[130] = 0;
LABEL_31:
  LOBYTE(v7) = v47 != nullptr;
  clear_tinfo_t(&v51);
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58);
  }
  qfree(v56);
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  qfree(v53[0]);
  do
  {
    v10 -= 80;
    cleanup_argloc(v10 + 56);
    v28 = *((_QWORD *)v10 + 4);
    if ( v28 )
    {
      *((_QWORD *)v10 + 5) = 0;
      qfree(v28);
    }
    clear_tinfo_t(v10 + 24);
    sub_1166E0((__int64)v10);
  }
  while ( v10 != v60 );
  return (unsigned int)v7;
}
