__int64 __fastcall sub_19B9C0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v7; // rbp
  unsigned __int8 v8; // al
  unsigned __int8 *v9; // rax
  __m128i si128; // xmm2
  __int64 v11; // r14
  __m128i v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __m128i v16; // xmm0
  int *v17; // rsi
  unsigned __int8 *v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rdi
  unsigned __int8 v23; // al
  unsigned __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // r13
  __int64 tinfo_size; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __m128i v34; // [rsp+10h] [rbp-168h] BYREF
  unsigned __int8 *v35; // [rsp+20h] [rbp-158h]
  __int64 v36; // [rsp+28h] [rbp-150h]
  __m128i v37; // [rsp+30h] [rbp-148h] BYREF
  unsigned __int8 v38[16]; // [rsp+40h] [rbp-138h] BYREF
  __m128i v39; // [rsp+50h] [rbp-128h]
  __int64 v40; // [rsp+60h] [rbp-118h]
  __m128i v41; // [rsp+68h] [rbp-110h] BYREF
  int v42; // [rsp+78h] [rbp-100h] BYREF
  __int64 v43; // [rsp+80h] [rbp-F8h]
  int v44; // [rsp+88h] [rbp-F0h]
  unsigned __int8 v45[8]; // [rsp+90h] [rbp-E8h] BYREF
  int *v46; // [rsp+98h] [rbp-E0h]
  __int64 v47; // [rsp+A0h] [rbp-D8h]
  __int64 v48; // [rsp+B0h] [rbp-C8h]
  __m128i v49; // [rsp+B8h] [rbp-C0h]
  int v50; // [rsp+D8h] [rbp-A0h]
  _BYTE v51[8]; // [rsp+E0h] [rbp-98h] BYREF
  int *v52; // [rsp+E8h] [rbp-90h]
  __int64 v53; // [rsp+F0h] [rbp-88h]
  __int64 v54; // [rsp+100h] [rbp-78h]
  __m128i v55; // [rsp+108h] [rbp-70h]
  int v56; // [rsp+128h] [rbp-50h]
  char v57; // [rsp+130h] [rbp-48h] BYREF
  unsigned __int64 v58; // [rsp+138h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 != 4 )
    return 0;
  v7 = *(int *)(a2 + 68);
  if ( v7 != get_tinfo_size() )
    return 0;
  if ( !sub_19B880(*(_QWORD *)(a1 + 1496), (char *)(a2 + 64), (__int64)a3) )
    goto LABEL_27;
  v8 = *(_BYTE *)(a2 + 32);
  if ( v8 > 6u )
  {
    if ( (unsigned __int8)(v8 - 9) <= 1u )
      goto LABEL_7;
    goto LABEL_27;
  }
  if ( v8 <= 4u )
  {
LABEL_27:
    if ( sub_19B880(*(_QWORD *)(a1 + 1496), (char *)(a2 + 32), (__int64)a3) )
    {
      v23 = *(_BYTE *)(a2 + 64);
      if ( v23 > 6u )
      {
        if ( (unsigned __int8)(v23 - 9) <= 1u )
          goto LABEL_7;
      }
      else if ( v23 > 4u )
      {
        goto LABEL_7;
      }
    }
    return 0;
  }
LABEL_7:
  v9 = v45;
  v35 = (unsigned __int8 *)&v57;
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    *(_OWORD *)(v9 + 40) = 0;
    *(_WORD *)v9 = 0;
    v9 += 80;
    *((_WORD *)v9 - 39) = 0;
    *((_DWORD *)v9 - 19) = -1;
    *((_QWORD *)v9 - 9) = 0;
    *((__m128i *)v9 - 4) = si128;
    *((_QWORD *)v9 - 6) = 0;
    *((_DWORD *)v9 - 6) = 0;
    *((_QWORD *)v9 - 2) = 0;
    *((_DWORD *)v9 - 2) = 0;
  }
  while ( v35 != v9 );
  v34.m128i_i64[0] = (__int64)v51;
  sub_123A40((__int64)v38, (unsigned __int8 *)(a2 + 64), 0, 0);
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v39 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v41 = 0;
  sub_125180((__int64)v45, v38);
  v47 = v39.m128i_i64[0];
  copy_tinfo_t();
  v11 = v40;
  v40 = 0;
  v12 = _mm_loadu_si128(&v41);
  v41 = 0;
  if ( v48 )
  {
    v34 = v12;
    v49.m128i_i64[0] = 0;
    qfree(v48);
    v12 = _mm_load_si128(&v34);
  }
  v48 = v11;
  v49 = v12;
  copy_argloc();
  v50 = v44;
  cleanup_argloc();
  if ( v40 )
  {
    v41.m128i_i64[0] = 0;
    qfree(v40);
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)v38);
  v34.m128i_i64[0] = (__int64)v51;
  sub_123A40((__int64)v38, (unsigned __int8 *)(a2 + 32), v13, v14);
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v34.m128i_i64[0] = (__int64)v51;
  v39 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v41 = 0;
  sub_125180((__int64)v51, v38);
  v53 = v39.m128i_i64[0];
  copy_tinfo_t();
  v15 = v40;
  v40 = 0;
  v16 = _mm_loadu_si128(&v41);
  v41 = 0;
  if ( v54 )
  {
    v36 = v15;
    v37 = v16;
    v55.m128i_i64[0] = 0;
    qfree(v54);
    v16 = _mm_load_si128(&v37);
    v15 = v36;
  }
  v17 = &v42;
  v54 = v15;
  v55 = v16;
  copy_argloc();
  v56 = v44;
  cleanup_argloc();
  if ( v40 )
  {
    v41.m128i_i64[0] = 0;
    qfree(v40);
  }
  clear_tinfo_t();
  v18 = v38;
  sub_11CDA0((__int64)v38);
  v19 = *(_QWORD *)(a1 + 1496);
  if ( v45[0] == 9 )
  {
    v28 = v46[4];
    if ( *(_QWORD *)(*(_QWORD *)v46 + 440LL) < v28 )
      sub_1953E0(v38, &v42);
    v29 = *(_QWORD *)(*(_QWORD *)v46 + 432LL) + 104 * v28;
    if ( (get_tinfo_property() & 0xF) == 0xB )
      goto LABEL_46;
    v18 = *(unsigned __int8 **)(v19 + 248);
    v17 = (_DWORD *)&word_2;
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      if ( a3 )
      {
        if ( *(_DWORD *)v29 == 1 )
        {
          v32 = (_QWORD *)*a3;
          tinfo_size = *a3 + 8LL * a3[1];
          if ( *a3 != tinfo_size )
          {
            while ( *(_QWORD *)(v29 + 8) != *v32 )
            {
              if ( (_QWORD *)tinfo_size == ++v32 )
                goto LABEL_45;
            }
            if ( v32 != (_QWORD *)tinfo_size )
              goto LABEL_46;
          }
        }
      }
LABEL_45:
      v17 = *(int **)(v29 + 80);
      v18 = nullptr;
      tinfo_size = get_tinfo_size();
      if ( tinfo_size != *(_DWORD *)(*(_QWORD *)(v19 + 112) + 80LL) )
      {
LABEL_46:
        v17 = *(int **)(v19 + 112);
        v18 = v45;
        sub_11C950(v45, (__int64)v17, tinfo_size, v31);
      }
    }
    v19 = *(_QWORD *)(a1 + 1496);
  }
  if ( v51[0] == 9 )
  {
    v24 = v52[4];
    if ( *(_QWORD *)(*(_QWORD *)v52 + 440LL) < v24 )
      sub_1953E0(v18, v17);
    v25 = *(_QWORD *)(*(_QWORD *)v52 + 432LL) + 104 * v24;
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      if ( (get_tinfo_property() & 0xF) != 0xB )
        goto LABEL_19;
      if ( !a3 )
        goto LABEL_38;
      if ( *(_DWORD *)v25 != 1 )
        goto LABEL_38;
      v33 = (_QWORD *)*a3;
      v26 = *a3 + 8LL * a3[1];
      if ( *a3 == v26 )
        goto LABEL_38;
      while ( *(_QWORD *)(v25 + 8) != *v33 )
      {
        if ( (_QWORD *)v26 == ++v33 )
          goto LABEL_38;
      }
      if ( (_QWORD *)v26 == v33 )
      {
LABEL_38:
        v26 = get_tinfo_size();
        if ( v26 == *(_DWORD *)(*(_QWORD *)(v19 + 112) + 80LL) )
          goto LABEL_19;
      }
    }
    sub_11C950((unsigned __int8 *)v34.m128i_i64[0], *(_QWORD *)(v19 + 112), v26, v27);
  }
LABEL_19:
  v20 = sub_196A40(a1, *(_QWORD *)(a2 + 24), (__int64)v45);
  *(_QWORD *)(v20 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v20 + 16) = *(_QWORD *)(a2 + 16);
  sub_11D890(a2, v20);
  if ( v20 )
  {
    sub_11CDA0(v20 + 64);
    sub_11CDA0(v20 + 48);
    sub_11CDA0(v20 + 32);
    j__qfree(v20);
  }
  v21 = (__int64)v35;
  do
  {
    v21 -= 80;
    cleanup_argloc();
    v22 = *(_QWORD *)(v21 + 32);
    if ( v22 )
    {
      *(_QWORD *)(v21 + 40) = 0;
      qfree(v22);
    }
    clear_tinfo_t();
    sub_11CDA0(v21);
  }
  while ( (unsigned __int8 *)v21 != v45 );
  return 1;
}
