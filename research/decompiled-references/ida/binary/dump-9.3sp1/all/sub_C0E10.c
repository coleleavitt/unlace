unsigned __int64 __fastcall sub_C0E10(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5, _QWORD *a6, __int64 a7)
{
  __m128i *v8; // rax
  char *v10; // rbx
  __m128i si128; // xmm1
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v26; // [rsp+10h] [rbp-1A0h]
  __int64 v27; // [rsp+10h] [rbp-1A0h]
  __int64 v29; // [rsp+18h] [rbp-198h]
  _QWORD v30[3]; // [rsp+28h] [rbp-188h] BYREF
  __int64 v31; // [rsp+40h] [rbp-170h]
  __int128 v32; // [rsp+48h] [rbp-168h]
  __int128 v33; // [rsp+60h] [rbp-150h] BYREF
  __int64 v34; // [rsp+70h] [rbp-140h] BYREF
  int v35; // [rsp+78h] [rbp-138h]
  __int16 v36; // [rsp+7Ch] [rbp-134h]
  _BYTE v37[24]; // [rsp+80h] [rbp-130h] BYREF
  __int64 v38; // [rsp+98h] [rbp-118h]
  char v39; // [rsp+D0h] [rbp-E0h]
  int v40; // [rsp+D4h] [rbp-DCh]
  __int64 v41; // [rsp+D8h] [rbp-D8h]
  char v42; // [rsp+120h] [rbp-90h]
  int v43; // [rsp+124h] [rbp-8Ch]
  __int64 v44; // [rsp+128h] [rbp-88h]
  char v45; // [rsp+170h] [rbp-40h] BYREF
  unsigned __int64 v46; // [rsp+178h] [rbp-38h]

  v8 = (__m128i *)v37;
  v10 = &v45;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v46 = __readfsqword(0x28u);
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
  while ( v8 != (__m128i *)&v45 );
  sub_11CA10(v37, a3);
  v13 = *a4;
  v14 = v38;
  v31 = 0;
  v38 = v13;
  *a4 = v14;
  print_tinfo();
  v39 = 11;
  v41 = v31;
  v31 = 0;
  v32 = 0;
  copy_tinfo_t();
  v15 = a6[1];
  v16 = *a6;
  v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL) + 84LL);
  v42 = 11;
  v40 = v17;
  if ( v15 < a6[2] )
  {
    if ( v16 )
    {
      if ( v15 )
      {
        v16 = qrealloc();
        if ( !v16 )
          v16 = *a6;
      }
    }
  }
  *a6 = 0;
  *(_OWORD *)(a6 + 1) = 0;
  v44 = v16;
  copy_tinfo_t();
  v18 = *(_QWORD *)(a1 + 40);
  memset(v30, 0, sizeof(v30));
  v33 = 0;
  v43 = *(_DWORD *)(*(_QWORD *)(v18 + 112) + 84LL);
  copy_tinfo_t();
  v34 = 0;
  copy_tinfo_t();
  v35 = 0;
  v36 = 0;
  clear_tinfo_t();
  clear_tinfo_t();
  copy_tinfo_t();
  create_tinfo();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  v19 = sub_335B10(
          *(_QWORD *)(a1 + 8),
          *(_QWORD *)(a2 + 24),
          (unsigned int)"CONTAINING_RECORD",
          (unsigned int)v30,
          3,
          (unsigned int)v37,
          0,
          0,
          (unsigned int)&v34,
          (unsigned int)&v33 + 8,
          a5,
          a1);
  v20 = *(_QWORD *)(v19 + 72);
  v21 = *(_QWORD *)(v20 + 152);
  *(_QWORD *)(v20 + 144) = 0;
  if ( v21 )
  {
    *(_QWORD *)(v20 + 160) = 0;
    v26 = v20;
    qfree(v21);
    v20 = v26;
    *(_QWORD *)(v26 + 152) = 0;
    *(_QWORD *)(v26 + 168) = 0;
  }
  v22 = *(_QWORD *)(v20 + 112);
  *(_QWORD *)(v20 + 104) = 0;
  if ( v22 )
  {
    *(_QWORD *)(v20 + 120) = 0;
    v27 = v20;
    qfree(v22);
    v20 = v27;
    *(_QWORD *)(v27 + 112) = 0;
    *(_QWORD *)(v27 + 128) = 0;
  }
  *(_DWORD *)(v20 + 280) |= 0x10u;
  *(_DWORD *)(v20 + 284) = 14;
  sub_F2530(*(_QWORD *)(v29 + 16), v19, 0);
  sub_11CA10(v19 + 64, a2 + 64);
  sub_11D890(v19, a2);
  if ( v19 )
  {
    sub_11CDA0(v19 + 64);
    sub_11CDA0(v19 + 48);
    sub_11CDA0(v19 + 32);
    j__qfree(v19);
  }
  if ( a7 )
  {
    *(_DWORD *)a2 = 12;
    sub_120A10(
      a2 + 48,
      *(_QWORD *)(*(_QWORD *)(v29 + 40) + 112LL),
      a7,
      *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v29 + 40) + 112LL) + 84LL),
      *(_QWORD *)(a2 + 24),
      0);
  }
  else
  {
    *(_DWORD *)a2 = 4;
  }
  clear_tinfo_t();
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  do
  {
    v10 -= 80;
    cleanup_argloc();
    v23 = *((_QWORD *)v10 + 4);
    if ( v23 )
    {
      *((_QWORD *)v10 + 5) = 0;
      qfree(v23);
    }
    clear_tinfo_t();
    sub_11CDA0(v10);
  }
  while ( v10 != v37 );
  return v46 - __readfsqword(0x28u);
}
