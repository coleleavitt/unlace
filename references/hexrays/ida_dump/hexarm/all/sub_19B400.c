__int64 __fastcall sub_19B400(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbp
  unsigned __int8 v6; // al
  char *v7; // rax
  __m128i si128; // xmm2
  __int64 v9; // r14
  __m128i v10; // xmm0
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rdi
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rax
  __int64 v19; // r13
  unsigned __int64 v20; // rax
  __int64 v21; // r13
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __m128i v26; // [rsp+10h] [rbp-168h] BYREF
  char *v27; // [rsp+20h] [rbp-158h]
  __int64 v28; // [rsp+28h] [rbp-150h]
  __m128i v29; // [rsp+30h] [rbp-148h] BYREF
  unsigned __int8 v30[16]; // [rsp+40h] [rbp-138h] BYREF
  __m128i v31; // [rsp+50h] [rbp-128h] BYREF
  __int64 v32; // [rsp+60h] [rbp-118h]
  __m128i v33; // [rsp+68h] [rbp-110h] BYREF
  int v34; // [rsp+78h] [rbp-100h] BYREF
  __int64 v35; // [rsp+80h] [rbp-F8h]
  int v36; // [rsp+88h] [rbp-F0h]
  char v37[8]; // [rsp+90h] [rbp-E8h] BYREF
  int *v38; // [rsp+98h] [rbp-E0h]
  __int64 v39; // [rsp+A0h] [rbp-D8h]
  _BYTE v40[8]; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-C8h]
  __m128i v42; // [rsp+B8h] [rbp-C0h]
  _BYTE v43[16]; // [rsp+C8h] [rbp-B0h] BYREF
  int v44; // [rsp+D8h] [rbp-A0h]
  _BYTE v45[8]; // [rsp+E0h] [rbp-98h] BYREF
  int *v46; // [rsp+E8h] [rbp-90h]
  __int64 v47; // [rsp+F0h] [rbp-88h]
  _BYTE v48[8]; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v49; // [rsp+100h] [rbp-78h]
  __m128i v50; // [rsp+108h] [rbp-70h]
  _BYTE v51[16]; // [rsp+118h] [rbp-60h] BYREF
  int v52; // [rsp+128h] [rbp-50h]
  char v53; // [rsp+130h] [rbp-48h] BYREF
  unsigned __int64 v54; // [rsp+138h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 != 4 )
    return 0;
  v5 = *(int *)(a2 + 68);
  if ( v5 != get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 248LL), 0) )
    return 0;
  if ( !sub_19B2C0(*(_QWORD *)(a1 + 1496), (char *)(a2 + 64), (__int64)a3) )
    goto LABEL_27;
  v6 = *(_BYTE *)(a2 + 32);
  if ( v6 > 6u )
  {
    if ( (unsigned __int8)(v6 - 9) <= 1u )
      goto LABEL_7;
    goto LABEL_27;
  }
  if ( v6 <= 4u )
  {
LABEL_27:
    if ( sub_19B2C0(*(_QWORD *)(a1 + 1496), (char *)(a2 + 32), (__int64)a3) )
    {
      v17 = *(_BYTE *)(a2 + 64);
      if ( v17 > 6u )
      {
        if ( (unsigned __int8)(v17 - 9) <= 1u )
          goto LABEL_7;
      }
      else if ( v17 > 4u )
      {
        goto LABEL_7;
      }
    }
    return 0;
  }
LABEL_7:
  v7 = v37;
  v27 = &v53;
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
    *(_OWORD *)(v7 + 40) = 0;
    *(_WORD *)v7 = 0;
    v7 += 80;
    *((_WORD *)v7 - 39) = 0;
    *((_DWORD *)v7 - 19) = -1;
    *((_QWORD *)v7 - 9) = 0;
    *((__m128i *)v7 - 4) = si128;
    *((_QWORD *)v7 - 6) = 0;
    *((_DWORD *)v7 - 6) = 0;
    *((_QWORD *)v7 - 2) = 0;
    *((_DWORD *)v7 - 2) = 0;
  }
  while ( v27 != v7 );
  v26.m128i_i64[0] = (__int64)v45;
  sub_123480((__int64)v30, (unsigned __int8 *)(a2 + 64));
  v32 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v31 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v33 = 0;
  sub_124BC0((__int64)v37, v30);
  v39 = v31.m128i_i64[0];
  copy_tinfo_t(v40, &v31.m128i_u64[1]);
  v9 = v32;
  v32 = 0;
  v10 = _mm_loadu_si128(&v33);
  v33 = 0;
  if ( v41 )
  {
    v26 = v10;
    v42.m128i_i64[0] = 0;
    qfree(v41);
    v10 = _mm_load_si128(&v26);
  }
  v41 = v9;
  v42 = v10;
  copy_argloc(v43, &v34);
  v44 = v36;
  cleanup_argloc(&v34);
  if ( v32 )
  {
    v33.m128i_i64[0] = 0;
    qfree(v32);
  }
  clear_tinfo_t(&v31.m128i_u64[1]);
  sub_11C7E0((__int64)v30);
  v26.m128i_i64[0] = (__int64)v45;
  sub_123480((__int64)v30, (unsigned __int8 *)(a2 + 32));
  v32 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v26.m128i_i64[0] = (__int64)v45;
  v31 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v33 = 0;
  sub_124BC0((__int64)v45, v30);
  v47 = v31.m128i_i64[0];
  copy_tinfo_t(v48, &v31.m128i_u64[1]);
  v11 = v32;
  v32 = 0;
  v12 = _mm_loadu_si128(&v33);
  v33 = 0;
  if ( v49 )
  {
    v28 = v11;
    v29 = v12;
    v50.m128i_i64[0] = 0;
    qfree(v49);
    v12 = _mm_load_si128(&v29);
    v11 = v28;
  }
  v49 = v11;
  v50 = v12;
  copy_argloc(v51, &v34);
  v52 = v36;
  cleanup_argloc(&v34);
  if ( v32 )
  {
    v33.m128i_i64[0] = 0;
    qfree(v32);
  }
  clear_tinfo_t(&v31.m128i_u64[1]);
  sub_11C7E0((__int64)v30);
  v13 = *(_QWORD *)(a1 + 1496);
  if ( v37[0] == 9 )
  {
    v20 = v38[4];
    if ( *(_QWORD *)(*(_QWORD *)v38 + 440LL) < v20 )
      sub_194E20();
    v21 = *(_QWORD *)(*(_QWORD *)v38 + 432LL) + 104 * v20;
    if ( (get_tinfo_property(*(_QWORD *)(v21 + 80), 2) & 0xF) == 0xB )
      goto LABEL_46;
    if ( (get_tinfo_property(*(_QWORD *)(v13 + 248), 2) & 0xF) == 0xB )
    {
      if ( a3 )
      {
        if ( *(_DWORD *)v21 == 1 )
        {
          v22 = (_QWORD *)*a3;
          v23 = *a3 + 8LL * a3[1];
          if ( *a3 != v23 )
          {
            while ( *(_QWORD *)(v21 + 8) != *v22 )
            {
              if ( (_QWORD *)v23 == ++v22 )
                goto LABEL_45;
            }
            if ( v22 != (_QWORD *)v23 )
              goto LABEL_46;
          }
        }
      }
LABEL_45:
      if ( get_tinfo_size(0, *(_QWORD *)(v21 + 80), 0) != *(_DWORD *)(*(_QWORD *)(v13 + 112) + 80LL) )
LABEL_46:
        sub_11C390(v37, *(_QWORD *)(v13 + 112));
    }
    v13 = *(_QWORD *)(a1 + 1496);
  }
  if ( v45[0] == 9 )
  {
    v18 = v46[4];
    if ( *(_QWORD *)(*(_QWORD *)v46 + 440LL) < v18 )
      sub_194E20();
    v19 = *(_QWORD *)(*(_QWORD *)v46 + 432LL) + 104 * v18;
    if ( (get_tinfo_property(*(_QWORD *)(v19 + 80), 2) & 0xF) != 0xB )
    {
      if ( (get_tinfo_property(*(_QWORD *)(v13 + 248), 2) & 0xF) != 0xB )
        goto LABEL_19;
      if ( !a3 )
        goto LABEL_38;
      if ( *(_DWORD *)v19 != 1 )
        goto LABEL_38;
      v24 = (_QWORD *)*a3;
      v25 = *a3 + 8LL * a3[1];
      if ( *a3 == v25 )
        goto LABEL_38;
      while ( *(_QWORD *)(v19 + 8) != *v24 )
      {
        if ( (_QWORD *)v25 == ++v24 )
          goto LABEL_38;
      }
      if ( (_QWORD *)v25 == v24 )
      {
LABEL_38:
        if ( get_tinfo_size(0, *(_QWORD *)(v19 + 80), 0) == *(_DWORD *)(*(_QWORD *)(v13 + 112) + 80LL) )
          goto LABEL_19;
      }
    }
    sub_11C390((char *)v26.m128i_i64[0], *(_QWORD *)(v13 + 112));
  }
LABEL_19:
  v14 = sub_196480(a1, *(_QWORD *)(a2 + 24), (__int64)v37);
  *(_QWORD *)(v14 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v14 + 16) = *(_QWORD *)(a2 + 16);
  sub_11D2D0(a2, v14);
  if ( v14 )
  {
    sub_11C7E0(v14 + 64);
    sub_11C7E0(v14 + 48);
    sub_11C7E0(v14 + 32);
    j__qfree(v14);
  }
  v15 = (__int64)v27;
  do
  {
    v15 -= 80;
    cleanup_argloc(v15 + 56);
    v16 = *(_QWORD *)(v15 + 32);
    if ( v16 )
    {
      *(_QWORD *)(v15 + 40) = 0;
      qfree(v16);
    }
    clear_tinfo_t(v15 + 24);
    sub_11C7E0(v15);
  }
  while ( (char *)v15 != v37 );
  return 1;
}
