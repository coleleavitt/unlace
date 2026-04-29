__int64 __fastcall sub_272C50(
        __m128i *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int64 a5,
        _BYTE *a6,
        int a7,
        __int64 a8)
{
  __int64 v10; // r13
  unsigned __int64 v11; // rbx
  __m128i v12; // xmm1
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // r15
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // edx
  char tinfo_property; // al
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 tinfo_size; // rax
  __int64 v32; // r15
  __int64 v34; // rax
  __int64 v35; // r14
  int v36; // r9d
  const char *v37; // r8
  const char *v38; // rcx
  char tinfo_details; // al
  __int64 v40; // rdi
  int v41; // r14d
  _QWORD *v42; // r15
  __int64 v43; // rax
  __int64 v44; // rbx
  __m128i *v45; // r12
  _QWORD *v46; // r14
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rbx
  __int64 v50; // r15
  int v51; // [rsp+24h] [rbp-1ACh]
  char v52; // [rsp+37h] [rbp-199h]
  int v53; // [rsp+48h] [rbp-188h]
  __m128i *v54; // [rsp+58h] [rbp-178h]
  __int64 v55; // [rsp+58h] [rbp-178h]
  __int64 v56; // [rsp+60h] [rbp-170h] BYREF
  __int64 v57; // [rsp+68h] [rbp-168h] BYREF
  __int64 v58[2]; // [rsp+70h] [rbp-160h] BYREF
  __int64 v59; // [rsp+80h] [rbp-150h]
  __m128i v60; // [rsp+88h] [rbp-148h] BYREF
  __int64 v61; // [rsp+98h] [rbp-138h]
  __int128 v62; // [rsp+A0h] [rbp-130h]
  __int128 v63; // [rsp+B0h] [rbp-120h]
  __int64 v64; // [rsp+E0h] [rbp-F0h]
  int v65; // [rsp+E8h] [rbp-E8h]
  __int64 v66; // [rsp+F0h] [rbp-E0h]
  char v67; // [rsp+F8h] [rbp-D8h]
  _BYTE v68[24]; // [rsp+100h] [rbp-D0h] BYREF
  __int128 v69; // [rsp+118h] [rbp-B8h]
  __int64 v70; // [rsp+128h] [rbp-A8h]
  __int128 v71; // [rsp+130h] [rbp-A0h]
  __int128 v72; // [rsp+140h] [rbp-90h]
  __int64 v73; // [rsp+170h] [rbp-60h]
  int v74; // [rsp+178h] [rbp-58h]
  __int64 v75; // [rsp+180h] [rbp-50h]
  char v76; // [rsp+188h] [rbp-48h]
  unsigned __int64 v77; // [rsp+198h] [rbp-38h]

  v54 = a1;
  v77 = __readfsqword(0x28u);
  v10 = *a3;
  v64 = 1;
  v58[1] = 0;
  v59 = 0;
  v61 = 0;
  v60 = 0;
  v62 = 0;
  v63 = 0;
  v65 = -1;
  v58[0] = 8 * a5;
  v66 = 0;
  v67 = 0;
  v52 = get_tinfo_property() & 0x3F;
  if ( v52 == 29 && (unsigned int)sub_272540(a1, v58, a6, a5) == -1
    || (LODWORD(v11) = find_tinfo_udt_member(), (_DWORD)v11 == -1) )
  {
    tinfo_size = get_tinfo_size();
    if ( (__int64)(a5 - 1) <= tinfo_size )
      tinfo_size = a5 - 1;
    v32 = tinfo_size;
    if ( tinfo_size < 0 )
      v32 = 0;
    while ( 1 )
    {
      LODWORD(v11) = sub_32D810(v58, &a1[8].m128i_u64[1], v32, 0);
      if ( (_DWORD)v11 != -1 )
        break;
      if ( v32-- == 0 )
        goto LABEL_56;
    }
  }
  if ( !a1[4].m128i_i64[0] || (get_tinfo_property() & 0x2F) == 0xD || (get_tinfo_property() & 0xF) == 0xB )
    goto LABEL_5;
  v34 = a1[7].m128i_i64[1];
  if ( !v34 )
  {
    memset(v68, 0, sizeof(v68));
    v70 = 0;
    LODWORD(v71) = 1;
    v69 = 0;
    tinfo_details = get_tinfo_details();
    v40 = *(_QWORD *)v68;
    if ( !tinfo_details )
      goto LABEL_109;
    if ( (int)v11 > 0 )
    {
      v41 = v11 - 1;
      v42 = (_QWORD *)(*(_QWORD *)v68 + 144LL * ((int)v11 - 1));
      if ( v42[1] )
      {
        if ( (get_tinfo_property() & 0xF) == 0xB )
          goto LABEL_108;
        v40 = *(_QWORD *)v68;
      }
    }
    v41 = v11 + 1;
    if ( (unsigned __int64)((int)v11 + 1) >= *(_QWORD *)&v68[8] )
      goto LABEL_109;
    v42 = (_QWORD *)(v40 + 144LL * v41);
    if ( v54[5].m128i_i64[1] < *v42 >> 3 )
    {
      if ( !v40 )
        goto LABEL_5;
      v43 = *(_QWORD *)&v68[8];
      goto LABEL_84;
    }
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      v40 = *(_QWORD *)v68;
LABEL_109:
      if ( !v40 )
        goto LABEL_5;
      v43 = *(_QWORD *)&v68[8];
      if ( !*(_QWORD *)&v68[8] )
      {
LABEL_91:
        *(_QWORD *)&v68[8] = 0;
        qfree(v40);
        goto LABEL_5;
      }
LABEL_84:
      v53 = v11;
      v44 = v43;
      v45 = v54;
      v55 = 0;
      do
      {
        v46 = (_QWORD *)(v40 + 144 * v55);
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
        ++v55;
        v40 = *(_QWORD *)v68;
      }
      while ( v55 != v44 );
      LODWORD(v11) = v53;
      v54 = v45;
      goto LABEL_91;
    }
LABEL_108:
    sub_26A3D0((__int64)v58, (__int64)v42);
    v40 = *(_QWORD *)v68;
    LODWORD(v11) = v41;
    goto LABEL_109;
  }
  v35 = a5 - v34;
  if ( a1[5].m128i_i64[1] >= v35 )
  {
    v58[0] = 8 * v35;
    LODWORD(v11) = find_tinfo_udt_member();
    if ( (_DWORD)v11 == -1 )
      goto LABEL_56;
  }
LABEL_5:
  if ( (get_tinfo_property() & 0xF) == 0xE )
  {
LABEL_56:
    v10 = 0;
    goto LABEL_43;
  }
  if ( (v66 & 0x2000000000LL) != 0 )
  {
    print_tinfo();
  }
  else
  {
    v12 = _mm_loadu_si128(&v60);
    v13 = *(_QWORD *)a8;
    v14 = _mm_loadu_si128((const __m128i *)(a8 + 8));
    *(_QWORD *)a8 = v59;
    *(__m128i *)(a8 + 8) = v12;
    v59 = v13;
    v60 = v14;
  }
  v56 = 0;
  copy_tinfo_t();
  lower_type();
  v15 = v10;
  if ( *(_DWORD *)(v10 + 8) == 52 )
    v15 = *(_QWORD *)(v10 + 24);
  if ( (get_tinfo_property() & 0xF) == 0xA )
  {
    if ( v58[0] || *(_QWORD *)(a8 + 8) <= 1u )
    {
      if ( v54[28].m128i_i8[5] )
      {
LABEL_49:
        v10 = 0;
        goto LABEL_42;
      }
      v51 = 60;
      goto LABEL_28;
    }
    v51 = 60;
  }
  else
  {
    if ( v58[0] || *(_QWORD *)(a8 + 8) <= 1u )
    {
      if ( !v54[28].m128i_i8[5] )
      {
LABEL_27:
        v51 = 59;
        goto LABEL_28;
      }
LABEL_25:
      tinfo_property = get_tinfo_property();
      if ( (tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D )
        goto LABEL_49;
      goto LABEL_27;
    }
    v51 = 59;
  }
  v57 = 0;
  copy_tinfo_t();
  v16 = v54[1].m128i_i64[0];
  v17 = *(_DWORD *)(v16 + 8) - 1;
  if ( v17 >= 0 )
  {
    v18 = *(_QWORD *)v16 + 8LL * (unsigned int)v17;
    while ( *(_QWORD *)v18 )
    {
      v19 = *(_DWORD *)(*(_QWORD *)v18 + 8LL);
      if ( v19 == 51 )
      {
        *(_QWORD *)v68 = 0;
        *(_QWORD *)v68 = get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
        get_tinfo_size();
        break;
      }
      if ( v19 == 48 )
      {
        --v17;
        v18 -= 8;
        if ( v17 != -1 )
          continue;
      }
      break;
    }
  }
  clear_tinfo_t();
  if ( v54[28].m128i_i8[5] )
  {
    if ( v51 == 60 )
      goto LABEL_49;
    goto LABEL_25;
  }
LABEL_28:
  v21 = v54->m128i_i64[0];
  if ( !(unsigned __int8)sub_32CB80(&v56, v54->m128i_i64[0], -1) )
  {
    memset(v68, 0, sizeof(v68));
    print_tinfo();
    v37 = s1;
    if ( *(_QWORD *)(a8 + 8) )
      v37 = *(const char **)a8;
    v38 = s1;
    if ( *(_QWORD *)&v68[8] )
      LODWORD(v38) = *(_DWORD *)v68;
    sub_3311F0(*(_QWORD *)(*(_QWORD *)(v54->m128i_i64[1] + 64) + 8LL), -1, 23, (_DWORD)v38, (_DWORD)v37, v36);
    if ( *(_QWORD *)v68 )
    {
      *(_QWORD *)&v68[8] = 0;
      qfree(*(__int64 *)v68);
    }
    goto LABEL_49;
  }
  v24 = j__qalloc_or_throw(64, v21, v22, v23);
  *(_QWORD *)v24 = -1;
  v25 = v24;
  *(_QWORD *)(v24 + 12) = -1;
  *(_DWORD *)(v24 + 8) = v51;
  *(_QWORD *)(v24 + 24) = v15;
  *(_QWORD *)(v24 + 32) = 0;
  *(_QWORD *)(v24 + 40) = 0;
  if ( v52 != 29 )
    v11 = (unsigned __int64)v58[0] >> 3;
  v26 = v56;
  *(_DWORD *)(v25 + 32) = v11;
  *(_DWORD *)(v25 + 56) = 1;
  *(_QWORD *)(v25 + 48) = v26;
  v56 = 0;
  *(_DWORD *)(v25 + 40) = get_tinfo_size();
  copy_tinfo_t();
  if ( *(_DWORD *)(v10 + 8) == 52 )
  {
    *(_QWORD *)(v10 + 24) = v25;
    sub_32C540(v68, *(_QWORD *)(v54->m128i_i64[0] + 112), v25 + 48);
    copy_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
  }
  else
  {
    v27 = get_tinfo_property();
    if ( (v27 & 0xFu) <= 0xA || (v27 & 0x3F) == 0x2D )
    {
      if ( v54[28].m128i_i8[5] )
      {
        if ( !under_debugger )
          sub_383060(50209);
LABEL_122:
        BUG();
      }
      v54[28].m128i_i8[5] = 1;
    }
    if ( v51 == 60 )
      ++v54[27].m128i_i32[2];
    v10 = v25;
  }
  if ( v52 == 29 )
    goto LABEL_42;
  v28 = *(unsigned int *)(v25 + 32);
  v29 = v54[5].m128i_i64[1];
  if ( v28 > v29 )
  {
    if ( !under_debugger )
      sub_383060(50183);
    goto LABEL_122;
  }
  v54[5].m128i_i64[1] = v29 - v28;
  if ( (v66 & 0x10000000000LL) == 0 || *(_DWORD *)(v25 + 8) != 59 )
    goto LABEL_42;
  v49 = v54->m128i_i64[0];
  v50 = *(_QWORD *)(v25 + 24);
  if ( (unsigned int)(*(_DWORD *)(v50 + 8) - 59) > 1 )
    goto LABEL_106;
  while ( 1 )
  {
    v57 = 0;
    v57 = get_tinfo_property();
    v74 = -1;
    v73 = 1;
    v70 = 0;
    v75 = 0;
    v76 = 0;
    memset(v68, 0, sizeof(v68));
    v69 = 0;
    v71 = 0;
    v72 = 0;
    if ( (unsigned int)sub_32D810(v68, &v57, *(unsigned int *)(v50 + 32), 0) == -1 )
    {
      if ( !under_debugger )
        sub_383060(51853);
      goto LABEL_122;
    }
    if ( (v75 & 0x2000000000LL) == 0 )
      break;
    *(_DWORD *)(v50 + 32) += *(_DWORD *)(v25 + 32);
    sub_255850((__int64 *)v25, v50);
    *(_DWORD *)(v25 + 56) |= 0x100u;
    clear_tinfo_t();
    if ( v70 )
    {
      *(_QWORD *)&v71 = 0;
      qfree(v70);
    }
    if ( *(_QWORD *)&v68[16] )
    {
      *(_QWORD *)&v69 = 0;
      qfree(*(__int64 *)&v68[16]);
    }
    clear_tinfo_t();
    v50 = *(_QWORD *)(v25 + 24);
    if ( (unsigned int)(*(_DWORD *)(v50 + 8) - 59) > 1 )
      goto LABEL_106;
  }
  clear_tinfo_t();
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree(v70);
  }
  if ( *(_QWORD *)&v68[16] )
  {
    *(_QWORD *)&v69 = 0;
    qfree(*(__int64 *)&v68[16]);
  }
  clear_tinfo_t();
LABEL_106:
  if ( (*(_BYTE *)(v25 + 57) & 1) != 0 )
    sub_2441C0(v25, *(_QWORD *)(v49 + 112), 0);
LABEL_42:
  clear_tinfo_t();
LABEL_43:
  clear_tinfo_t();
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v61);
  }
  if ( v59 )
  {
    v60.m128i_i64[0] = 0;
    qfree(v59);
  }
  return v10;
}
