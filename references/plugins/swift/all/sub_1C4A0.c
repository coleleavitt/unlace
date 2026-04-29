__int64 __fastcall sub_1C4A0(__int64 a1, _QWORD *a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v6; // rdi
  char tinfo_property; // al
  char v9; // dl
  char v10; // bl
  bool v11; // r15
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, bool, _QWORD, __int64, __int64); // r14
  __int64 tinfo_size; // r8
  unsigned int v16; // ebp
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 (__fastcall *v20)(__int64, _QWORD, _QWORD, __int64, _QWORD); // rbx
  int v21; // r8d
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 v24; // r12
  __int64 *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // r12
  __int64 v31; // rbp
  _QWORD *v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // r14
  __m128i v37; // xmm0
  size_t v38; // rbx
  size_t v39; // rbx
  __int64 v40; // rax
  __m128i v41; // xmm0
  __m128i v42; // xmm0
  __m128i si128; // xmm0
  __int64 v44; // r13
  __int64 v45; // r12
  _QWORD *v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 tinfo_pdata; // rax
  __int64 v50; // rdi
  __int64 v51; // r13
  __int64 v52; // r12
  __int64 v53; // rbp
  __int64 *v54; // rbx
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // [rsp+8h] [rbp-140h]
  char *s1; // [rsp+10h] [rbp-138h] BYREF
  __int128 v59; // [rsp+18h] [rbp-130h]
  __int64 v60; // [rsp+30h] [rbp-118h] BYREF
  __int128 v61; // [rsp+38h] [rbp-110h]
  __int128 v62; // [rsp+48h] [rbp-100h]
  __int64 v63; // [rsp+58h] [rbp-F0h]
  int v64; // [rsp+60h] [rbp-E8h]
  __m128i v65[3]; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v66; // [rsp+A0h] [rbp-A8h]
  __int64 v67; // [rsp+B0h] [rbp-98h] BYREF
  __m128i v68; // [rsp+B8h] [rbp-90h]
  __m128i v69; // [rsp+C8h] [rbp-80h]
  __m128i v70; // [rsp+D8h] [rbp-70h]
  __int64 v71; // [rsp+E8h] [rbp-60h]
  int v72; // [rsp+F0h] [rbp-58h]
  int v73; // [rsp+F4h] [rbp-54h]
  char v74; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v75; // [rsp+108h] [rbp-40h]

  v6 = *a2;
  v75 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(v6, 1);
  v9 = tinfo_property & 0x3F;
  if ( (tinfo_property & 0x3F) == 1 )
    return 0;
  v10 = tinfo_property & 0xF;
  if ( (tinfo_property & 0xF) == 0xB )
  {
    v28 = *a2;
    v65[0] = 0u;
    if ( (unsigned __int8)get_tinfo_details(v28, 11, v65) )
    {
      s1 = (_BYTE *)(&word_10 + 1);
      if ( !(unsigned int)lexcompare_tinfo(v65[0].m128i_i64[0], 17, 0) && v65[0].m128i_i32[3] <= 8u )
        goto LABEL_31;
      v60 = 50;
      v29 = lexcompare_tinfo(v65[0].m128i_i64[0], 50, 0);
      if ( !(v65[0].m128i_i32[3] | v29) )
      {
        clear_tinfo_t();
LABEL_31:
        clear_tinfo_t();
        v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 16LL))(
                a1,
                0,
                a4,
                a3,
                v65[0].m128i_u32[3]);
        clear_tinfo_t();
        return v16;
      }
      clear_tinfo_t();
      clear_tinfo_t();
    }
    clear_tinfo_t();
    return (unsigned int)-1;
  }
  v11 = v9 == 29 || v10 == 12;
  if ( v11 )
    return (unsigned int)-1;
  v12 = *a2;
  if ( v9 != 13 )
  {
    if ( v9 != 45 )
    {
      v13 = *(__int64 (__fastcall **)(__int64, bool, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 16LL);
      tinfo_size = get_tinfo_size(0, *a2, 0);
      return v13(a1, v10 == 9, a4, a3, tinfo_size);
    }
    memset(v65, 0, sizeof(v65));
    LODWORD(v66) = 0;
    BYTE4(v66) = 0x80;
    if ( (unsigned __int8)get_tinfo_details(v12, 45, v65) )
    {
      v19 = v65[2].m128i_i64[0];
      if ( !v65[2].m128i_i64[0] )
      {
        v20 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 16LL);
        if ( (BYTE4(v66) & 7) != 0 )
          v21 = 1 << ((BYTE4(v66) & 7) - 1);
        else
          v21 = (unsigned __int8)getinf(61);
        v16 = v20(a1, 0, a4, a3, v21);
        if ( v65[1].m128i_i64[1] )
        {
          v65[2].m128i_i64[0] = 0;
          qfree(v65[1].m128i_i64[1]);
        }
        v22 = v65[0].m128i_i64[0];
        if ( v65[0].m128i_i64[0] )
        {
          v23 = v65[0].m128i_i64[1];
          if ( v65[0].m128i_i64[1] )
          {
            v24 = 0;
            do
            {
              v25 = (__int64 *)(v22 + v24);
              v26 = *(_QWORD *)(v22 + v24 + 24);
              if ( v26 )
              {
                v25[4] = 0;
                qfree(v26);
              }
              v27 = *v25;
              if ( *v25 )
              {
                v25[1] = 0;
                qfree(v27);
              }
              ++v19;
              v22 = v65[0].m128i_i64[0];
              v24 += 56;
            }
            while ( v23 != v19 );
          }
          v65[0].m128i_i64[1] = 0;
          qfree(v22);
        }
        return v16;
      }
    }
    if ( v65[1].m128i_i64[1] )
    {
      v65[2].m128i_i64[0] = 0;
      qfree(v65[1].m128i_i64[1]);
    }
    v50 = v65[0].m128i_i64[0];
    if ( v65[0].m128i_i64[0] )
    {
      v51 = v65[0].m128i_i64[1];
      v52 = 0;
      v53 = 0;
      if ( v65[0].m128i_i64[1] )
      {
        do
        {
          v54 = (__int64 *)(v50 + v52);
          v55 = *(_QWORD *)(v50 + v52 + 24);
          if ( v55 )
          {
            v54[4] = 0;
            qfree(v55);
          }
          v56 = *v54;
          if ( *v54 )
          {
            v54[1] = 0;
            qfree(v56);
          }
          ++v53;
          v50 = v65[0].m128i_i64[0];
          v52 += 56;
        }
        while ( v51 != v53 );
      }
      v65[0].m128i_i64[1] = 0;
      qfree(v50);
    }
    return (unsigned int)-1;
  }
  v60 = 0;
  v63 = 0;
  v64 = 1;
  v61 = 0;
  v62 = 0;
  if ( !(unsigned __int8)get_tinfo_details(v12, 13, &v60) )
  {
LABEL_43:
    v18 = v60;
    if ( v60 )
    {
      v30 = v61;
      if ( (_QWORD)v61 )
      {
        v31 = 0;
        do
        {
          v32 = (_QWORD *)(v18 + 144 * v31);
          clear_tinfo_t();
          v33 = v32[5];
          if ( v33 )
          {
            v32[6] = 0;
            qfree(v33);
          }
          v34 = v32[2];
          if ( v34 )
          {
            v32[3] = 0;
            qfree(v34);
          }
          ++v31;
          v18 = v60;
        }
        while ( v30 != v31 );
      }
      v16 = -1;
      goto LABEL_52;
    }
    return (unsigned int)-1;
  }
  v17 = v61;
  if ( (_QWORD)v61 )
  {
    s1 = nullptr;
    v35 = *a2;
    v59 = 0;
    if ( (v35 & 0x100) != 0 )
    {
      tinfo_pdata = get_tinfo_pdata(&s1, v35, 0);
      v17 = v61;
      if ( tinfo_pdata )
      {
        if ( (unsigned __int64)v59 > 0xD )
          v11 = strncmp(s1, "Swift::tuple_", 0xDu) == 0;
      }
    }
    v36 = v60;
    v57 = v60 + 144 * v17;
    if ( v57 == v60 )
    {
LABEL_67:
      v16 = 0;
LABEL_68:
      if ( s1 )
      {
        *(_QWORD *)&v59 = 0;
        qfree(s1);
      }
      v18 = v60;
      if ( !v60 )
        return v16;
      v44 = v61;
      if ( (_QWORD)v61 )
      {
        v45 = 0;
        do
        {
          v46 = (_QWORD *)(v18 + 144 * v45);
          clear_tinfo_t();
          v47 = v46[5];
          if ( v47 )
          {
            v46[6] = 0;
            qfree(v47);
          }
          v48 = v46[2];
          if ( v48 )
          {
            v46[3] = 0;
            qfree(v48);
          }
          ++v45;
          v18 = v60;
        }
        while ( v44 != v45 );
      }
      goto LABEL_52;
    }
    while ( 1 )
    {
      v37 = _mm_loadu_si128((const __m128i *)v36);
      memset(&v65[1], 0, 24);
      v65[0] = v37;
      v38 = *(_QWORD *)(v36 + 24);
      if ( v38 )
      {
        v65[1].m128i_i64[0] = qalloc_or_throw(*(_QWORD *)(v36 + 24));
        v65[2].m128i_i64[0] = v38;
        memcpy((void *)v65[1].m128i_i64[0], *(const void **)(v36 + 16), v38);
        v65[1].m128i_i64[1] = v38;
      }
      v65[2].m128i_i64[1] = 0;
      v66 = 0;
      v39 = *(_QWORD *)(v36 + 48);
      if ( v39 )
      {
        v65[2].m128i_i64[1] = qalloc_or_throw(*(_QWORD *)(v36 + 48));
        *((_QWORD *)&v66 + 1) = v39;
        memcpy((void *)v65[2].m128i_i64[1], *(const void **)(v36 + 40), v39);
        *(_QWORD *)&v66 = v39;
      }
      v67 = 0;
      copy_tinfo_t(&v67, v36 + 64);
      v40 = *(_QWORD *)(v36 + 120);
      v68 = _mm_loadu_si128((const __m128i *)(v36 + 72));
      v41 = _mm_loadu_si128((const __m128i *)(v36 + 88));
      v71 = v40;
      LODWORD(v40) = *(_DWORD *)(v36 + 128);
      v69 = v41;
      v42 = _mm_loadu_si128((const __m128i *)(v36 + 104));
      v72 = v40;
      LODWORD(v40) = *(_DWORD *)(v36 + 132);
      v70 = v42;
      si128 = _mm_load_si128(v65);
      v73 = v40;
      v74 = *(_BYTE *)(v36 + 136);
      if ( (_mm_or_si128(si128, _mm_srli_si128(si128, 8)).m128i_u8[0] & 7) != 0 )
        break;
      v16 = sub_1C4A0(a1, &v67, a3 + ((unsigned __int64)si128.m128i_i64[0] >> 3), v11);
      if ( v16 )
      {
        clear_tinfo_t();
        if ( v65[2].m128i_i64[1] )
        {
          *(_QWORD *)&v66 = 0;
          qfree(v65[2].m128i_i64[1]);
        }
        if ( v65[1].m128i_i64[0] )
        {
          v65[1].m128i_i64[1] = 0;
          qfree(v65[1].m128i_i64[0]);
        }
        goto LABEL_68;
      }
      clear_tinfo_t();
      if ( v65[2].m128i_i64[1] )
      {
        *(_QWORD *)&v66 = 0;
        qfree(v65[2].m128i_i64[1]);
      }
      if ( v65[1].m128i_i64[0] )
      {
        v65[1].m128i_i64[1] = 0;
        qfree(v65[1].m128i_i64[0]);
      }
      v36 += 144;
      if ( v57 == v36 )
        goto LABEL_67;
    }
    clear_tinfo_t();
    if ( v65[2].m128i_i64[1] )
    {
      *(_QWORD *)&v66 = 0;
      qfree(v65[2].m128i_i64[1]);
    }
    if ( v65[1].m128i_i64[0] )
    {
      v65[1].m128i_i64[1] = 0;
      qfree(v65[1].m128i_i64[0]);
    }
    if ( s1 )
    {
      *(_QWORD *)&v59 = 0;
      qfree(s1);
    }
    goto LABEL_43;
  }
  v18 = v60;
  v16 = 0;
  if ( v60 )
  {
LABEL_52:
    *(_QWORD *)&v61 = 0;
    qfree(v18);
  }
  return v16;
}
