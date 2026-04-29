unsigned __int64 __fastcall sub_BC950(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  __m128i *v8; // rax
  char *v10; // rbx
  __m128i si128; // xmm1
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v28; // [rsp-8h] [rbp-1B8h]
  __int64 v30; // [rsp+10h] [rbp-1A0h]
  __int64 v31; // [rsp+10h] [rbp-1A0h]
  __int64 v33; // [rsp+18h] [rbp-198h]
  __int64 v34; // [rsp+28h] [rbp-188h] BYREF
  __int64 v35; // [rsp+30h] [rbp-180h] BYREF
  __int64 v36; // [rsp+38h] [rbp-178h] BYREF
  __int64 v37; // [rsp+40h] [rbp-170h] BYREF
  __int128 v38; // [rsp+48h] [rbp-168h]
  __int128 v39; // [rsp+60h] [rbp-150h] BYREF
  __int64 v40; // [rsp+70h] [rbp-140h] BYREF
  int v41; // [rsp+78h] [rbp-138h]
  __int16 v42; // [rsp+7Ch] [rbp-134h]
  _BYTE v43[24]; // [rsp+80h] [rbp-130h] BYREF
  __int64 v44; // [rsp+98h] [rbp-118h]
  char v45; // [rsp+D0h] [rbp-E0h]
  int v46; // [rsp+D4h] [rbp-DCh]
  __int64 v47; // [rsp+D8h] [rbp-D8h]
  _BYTE v48[60]; // [rsp+E8h] [rbp-C8h] BYREF
  int v49; // [rsp+124h] [rbp-8Ch]
  __int64 v50; // [rsp+128h] [rbp-88h]
  _BYTE v51[56]; // [rsp+138h] [rbp-78h] BYREF
  char v52; // [rsp+170h] [rbp-40h] BYREF
  unsigned __int64 v53; // [rsp+178h] [rbp-38h]

  v8 = (__m128i *)v43;
  v10 = &v52;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3FE250);
  v53 = __readfsqword(0x28u);
  do
  {
    v8->m128i_i32[1] = -1;
    v8 += 5;
    v8[-5].m128i_i16[0] = 0;
    v8[-5].m128i_i16[1] = 0;
    v8[-5].m128i_i64[1] = 0;
    v8[-4] = si128;
    v8[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v8[-3] + 8) = 0;
    v8[-2].m128i_i32[2] = 0;
    v8[-1].m128i_i64[0] = 0;
    v8[-1].m128i_i32[2] = 0;
  }
  while ( v8 != (__m128i *)&v52 );
  sub_118550(v43, a3);
  v13 = *a4;
  v14 = v44;
  v37 = 0;
  v44 = v13;
  *a4 = v14;
  v38 = 0;
  print_tinfo(&v37, 0, 0, 0, 0, a5, 0, 0);
  v15 = v37;
  v45 = 11;
  if ( (unsigned __int64)v38 < *((_QWORD *)&v38 + 1) )
  {
    if ( v37 )
    {
      if ( (_QWORD)v38 )
      {
        v15 = qrealloc(v37, v38);
        if ( !v15 )
          v15 = v37;
      }
    }
  }
  v47 = v15;
  v37 = 0;
  v16 = *(_QWORD *)(a1 + 40);
  v38 = 0;
  copy_tinfo_t(v48, v16 + 232);
  v17 = a6[1];
  v18 = *a6;
  v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL) + 84LL);
  v48[56] = 11;
  v46 = v19;
  if ( v17 < a6[2] )
  {
    if ( v18 )
    {
      if ( v17 )
      {
        v18 = qrealloc(v18, v17);
        if ( !v18 )
          v18 = *a6;
      }
    }
  }
  *a6 = 0;
  *(_OWORD *)(a6 + 1) = 0;
  v50 = v18;
  copy_tinfo_t(v51, *(_QWORD *)(a1 + 40) + 232LL);
  v20 = *(_QWORD *)(a1 + 40);
  v34 = 0;
  v39 = 0;
  v35 = 0;
  v21 = *(_QWORD *)(v20 + 112);
  v36 = 0;
  v49 = *(_DWORD *)(v21 + 84);
  copy_tinfo_t((char *)&v39 + 8, &v36);
  v40 = 0;
  copy_tinfo_t(&v40, &v35);
  v41 = 0;
  v42 = 0;
  clear_tinfo_t(&v36);
  clear_tinfo_t(&v35);
  copy_tinfo_t(&v39, a5);
  create_tinfo(&v34, 10, 10, &v39);
  clear_tinfo_t(&v40);
  clear_tinfo_t((char *)&v39 + 8);
  clear_tinfo_t(&v39);
  v22 = sub_330570(
          *(_QWORD *)(a1 + 8),
          *(_QWORD *)(a2 + 24),
          (unsigned int)"CONTAINING_RECORD",
          (unsigned int)&v34,
          3,
          (unsigned int)v43,
          0,
          v28,
          (unsigned int)&v40,
          (unsigned int)&v39 + 8,
          a5,
          a1);
  v23 = *(_QWORD *)(v22 + 72);
  v24 = *(_QWORD *)(v23 + 152);
  *(_QWORD *)(v23 + 144) = 0;
  if ( v24 )
  {
    *(_QWORD *)(v23 + 160) = 0;
    v30 = v23;
    qfree(v24);
    v23 = v30;
    *(_QWORD *)(v30 + 152) = 0;
    *(_QWORD *)(v30 + 168) = 0;
  }
  v25 = *(_QWORD *)(v23 + 112);
  *(_QWORD *)(v23 + 104) = 0;
  if ( v25 )
  {
    *(_QWORD *)(v23 + 120) = 0;
    v31 = v23;
    qfree(v25);
    v23 = v31;
    *(_QWORD *)(v31 + 112) = 0;
    *(_QWORD *)(v31 + 128) = 0;
  }
  *(_DWORD *)(v23 + 280) |= 0x10u;
  *(_DWORD *)(v23 + 284) = 14;
  sub_EE070(*(_QWORD *)(v33 + 16), v22, 0);
  sub_118550(v22 + 64, a2 + 64);
  sub_1193D0(v22, a2);
  if ( v22 )
  {
    sub_1188E0(v22 + 64);
    sub_1188E0(v22 + 48);
    sub_1188E0(v22 + 32);
    j__qfree(v22);
  }
  if ( a7 )
  {
    *(_DWORD *)a2 = 12;
    sub_11C550(
      a2 + 48,
      *(_QWORD *)(*(_QWORD *)(v33 + 40) + 112LL),
      a7,
      *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v33 + 40) + 112LL) + 84LL),
      *(_QWORD *)(a2 + 24),
      0);
  }
  else
  {
    *(_DWORD *)a2 = 4;
  }
  clear_tinfo_t(&v34);
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  do
  {
    v10 -= 80;
    cleanup_argloc(v10 + 56);
    v26 = *((_QWORD *)v10 + 4);
    if ( v26 )
    {
      *((_QWORD *)v10 + 5) = 0;
      qfree(v26);
    }
    clear_tinfo_t(v10 + 24);
    sub_1188E0(v10);
  }
  while ( v10 != v43 );
  return v53 - __readfsqword(0x28u);
}
