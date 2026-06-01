__int64 __fastcall sub_270E10(
        __int64 *a1,
        const __m128i *a2,
        __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v8; // rbp
  const __m128i *v9; // rbx
  __int64 v10; // rax
  __int32 v11; // eax
  char v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r13
  int v18; // eax
  int v19; // r14d
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // r12
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  __int64 v31; // rdi
  unsigned __int64 v32; // r10
  __int64 tinfo_property4; // rax
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // r15
  _QWORD *v36; // rbp
  __int64 v37; // rdi
  __int64 v38; // rdi
  char v39; // al
  int v40; // r13d
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r12
  __int64 v45; // r8
  int tinfo_property; // r13d
  int tinfo_size; // eax
  __int64 v48; // r14
  unsigned __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int64 v52; // r15
  __int64 v53; // rbx
  _QWORD *v54; // rbp
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v60; // [rsp+20h] [rbp-158h]
  __int64 v61; // [rsp+20h] [rbp-158h]
  __int64 v62; // [rsp+28h] [rbp-150h]
  __int64 v63; // [rsp+28h] [rbp-150h]
  unsigned __int64 v64; // [rsp+30h] [rbp-148h]
  int v65; // [rsp+30h] [rbp-148h]
  int v66; // [rsp+30h] [rbp-148h]
  __int64 v67; // [rsp+38h] [rbp-140h]
  __int64 v68; // [rsp+40h] [rbp-138h]
  char tinfo; // [rsp+40h] [rbp-138h]
  __int64 v70; // [rsp+50h] [rbp-128h] BYREF
  __int64 v71; // [rsp+58h] [rbp-120h] BYREF
  __int64 v72; // [rsp+60h] [rbp-118h]
  __int128 v73; // [rsp+68h] [rbp-110h]
  __int128 v74; // [rsp+78h] [rbp-100h]
  __int64 v75; // [rsp+88h] [rbp-F0h]
  int v76; // [rsp+90h] [rbp-E8h]
  __m128i v77; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v78; // [rsp+B0h] [rbp-C8h]
  __int128 v79; // [rsp+B8h] [rbp-C0h]
  __int64 v80; // [rsp+C8h] [rbp-B0h]
  __int128 v81; // [rsp+D0h] [rbp-A8h]
  __int128 v82; // [rsp+E0h] [rbp-98h]
  __int64 v83; // [rsp+110h] [rbp-68h]
  int v84; // [rsp+118h] [rbp-60h]
  __int64 v85; // [rsp+120h] [rbp-58h]
  char v86; // [rsp+128h] [rbp-50h]
  unsigned __int64 v87; // [rsp+138h] [rbp-40h]

  v8 = (__int64)a1;
  v9 = a2;
  v87 = __readfsqword(0x28u);
  if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 1u )
    goto LABEL_11;
  v10 = *a1;
  v78 = 0;
  v80 = 0;
  v60 = v10;
  v11 = a2->m128i_i32[2];
  v83 = 1;
  v84 = -1;
  v85 = 0;
  v86 = 0;
  v70 = 0;
  v77 = 0;
  v79 = 0;
  v81 = 0;
  v82 = 0;
  if ( v11 == 64 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC || (get_flags_ex() & 0x600) != 0x400 )
      goto LABEL_4;
    v63 = -1;
    LODWORD(v32) = 0;
    v67 = a2[1].m128i_i64[1];
    goto LABEL_49;
  }
  if ( v11 != 65 )
    goto LABEL_4;
  v62 = *(_QWORD *)(a2[1].m128i_i64[1] + 432) + 104LL * a2[2].m128i_i32[0];
  if ( (unsigned int)lexcompare_tinfo() )
  {
    copy_tinfo_t();
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      if ( !under_debugger )
        sub_383060(50204);
      goto LABEL_107;
    }
    v12 = 1;
    goto LABEL_5;
  }
  if ( (unsigned int)(*(_DWORD *)v62 - 3) <= 1 )
    goto LABEL_4;
  if ( *(_DWORD *)v62 != 1 )
    goto LABEL_4;
  v63 = sub_1D0250((_QWORD *)a2[1].m128i_i64[1], &v77, *(_QWORD *)(v62 + 8), &v71, &v70);
  if ( v63 == -1 || !(_BYTE)v70 )
    goto LABEL_4;
  v72 = 0;
  v75 = 0;
  v76 = 1;
  v73 = 0;
  v74 = 0;
  get_tinfo_details();
  v30 = v73;
  v31 = v72;
  if ( v63 + 1 == (_QWORD)v73 )
  {
    if ( v72 )
    {
      v52 = v73;
      v61 = v8;
      v53 = 0;
      while ( 1 )
      {
        v54 = (_QWORD *)(v31 + 144 * v53);
        clear_tinfo_t();
        v55 = v54[5];
        if ( v55 )
        {
          v54[6] = 0;
          qfree(v55);
        }
        v56 = v54[2];
        if ( v56 )
        {
          v54[3] = 0;
          qfree(v56);
        }
        if ( ++v53 >= v52 )
          break;
        v31 = v72;
      }
      v8 = v61;
      *(_QWORD *)&v73 = 0;
      v9 = a2;
      qfree(v72);
    }
    goto LABEL_4;
  }
  if ( v77.m128i_i64[1] <= 7uLL )
  {
    if ( !under_debugger )
      sub_383060(50205);
    goto LABEL_107;
  }
  v32 = ((unsigned __int64)(*(_QWORD *)(v72 + 144 * (v63 + 1)) - v77.m128i_i64[0]) >> 3)
      / ((unsigned __int64)v77.m128i_i64[1] >> 3);
  if ( v32 == 1 )
  {
    if ( !v72 )
      goto LABEL_4;
    v67 = -1;
    if ( !(_QWORD)v73 )
    {
      qfree(v72);
      goto LABEL_4;
    }
LABEL_38:
    v65 = v32;
    v68 = v8;
    v34 = 0;
    v35 = v30;
    do
    {
      v36 = (_QWORD *)(v31 + 144 * v34);
      clear_tinfo_t();
      v37 = v36[5];
      if ( v37 )
      {
        v36[6] = 0;
        qfree(v37);
      }
      v38 = v36[2];
      if ( v38 )
      {
        v36[3] = 0;
        qfree(v38);
      }
      ++v34;
      v31 = v72;
    }
    while ( v34 < v35 );
    LODWORD(v32) = v65;
    v8 = v68;
    v9 = a2;
    goto LABEL_45;
  }
  v64 = ((unsigned __int64)(*(_QWORD *)(v72 + 144 * (v63 + 1)) - v77.m128i_i64[0]) >> 3)
      / ((unsigned __int64)v77.m128i_i64[1] >> 3);
  tinfo_property4 = get_tinfo_property4();
  v31 = v72;
  LODWORD(v32) = v64;
  v67 = tinfo_property4;
  if ( !v72 )
    goto LABEL_49;
  v30 = v73;
  if ( (_QWORD)v73 )
    goto LABEL_38;
LABEL_45:
  v66 = v32;
  *(_QWORD *)&v73 = 0;
  qfree(v31);
  LODWORD(v32) = v66;
LABEL_49:
  if ( v67 != -1 )
  {
    LODWORD(v73) = 0;
    DWORD1(v73) = v32;
    v71 = 0;
    v72 = 0;
    copy_tinfo_t();
    tinfo = create_tinfo();
    clear_tinfo_t();
    if ( tinfo
      && (v9->m128i_i32[2] == 65
        ? (v39 = sub_278FC0(v60, v67, &v71, &v9[1].m128i_u64[1], &v70, v63))
        : (v39 = sub_278EB0(v60, v67, &v71, 0, &v70, v63)),
          (v12 = v39) != 0) )
    {
      copy_tinfo_t();
    }
    else
    {
      v12 = 0;
    }
    clear_tinfo_t();
    goto LABEL_5;
  }
LABEL_4:
  v12 = 0;
LABEL_5:
  clear_tinfo_t();
  clear_tinfo_t();
  if ( v80 )
  {
    *(_QWORD *)&v81 = 0;
    qfree(v80);
  }
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree(v78);
  }
  if ( !v12 )
    goto LABEL_12;
  *(_BYTE *)(*(_QWORD *)(v8 + 8) + 104LL) = 1;
LABEL_11:
  if ( (unsigned int)sub_26CB90(v8) && !(unsigned __int8)sub_2567C0((__int64)v9) )
  {
    if ( *(_DWORD *)(v8 + 444) != 3 )
      goto LABEL_22;
    if ( a7 )
    {
      if ( *(_DWORD *)(v8 + 440) )
        return 0;
      if ( *(_BYTE *)(v8 + 453) )
        goto LABEL_24;
    }
    else if ( *(_BYTE *)(v8 + 453) )
    {
LABEL_22:
      if ( !*(_DWORD *)(v8 + 440) || (get_tinfo_property() & 0xF) == 0xB )
      {
LABEL_24:
        v24 = sub_26CE90((__int64 *)v8, a3, a4, a5, a6);
        if ( v24 )
          goto LABEL_25;
        return 0;
      }
      if ( (get_tinfo_property() & 0xF) != 0xA )
      {
        if ( !under_debugger )
          sub_383060(51274);
        goto LABEL_107;
      }
      tinfo_property = get_tinfo_property();
      tinfo_size = get_tinfo_size();
      if ( tinfo_size <= 0 )
        return 0;
      if ( tinfo_size != tinfo_property )
      {
        v48 = a6 / tinfo_size;
        if ( a6 % tinfo_size || a4 && !is_mul_ok(a4, tinfo_size) )
          return 0;
        a4 *= tinfo_size;
        if ( a3 )
        {
          v49 = a3[3];
          if ( tinfo_property )
          {
            if ( v49 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 24LL) + 16LL) / (unsigned __int64)tinfo_property < v49 )
              return 0;
          }
          a3[3] = v49 * tinfo_property;
          if ( !sub_26AAE0(*(_QWORD *)v8, a3, a4) )
            return 0;
        }
        a6 = v48;
      }
      v24 = sub_26CE90((__int64 *)v8, a3, a4, a5, a6);
      if ( !v24 )
        return 0;
      v9 = (const __m128i *)sub_26B730(v8, (__int64)v9, v50, v51);
LABEL_25:
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u
        && (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u )
      {
        v27 = j__qalloc_or_throw(64, 2, v25, v26);
        *(_QWORD *)v27 = -1;
        *(_DWORD *)(v27 + 8) = 58;
        *(_QWORD *)(v27 + 12) = -1;
        *(_QWORD *)(v27 + 24) = v9;
        *(_QWORD *)(v27 + 32) = v24;
        *(_QWORD *)(v27 + 40) = 0;
        *(_QWORD *)(v27 + 48) = 0;
        *(_DWORD *)(v27 + 56) = 0;
        sub_2441C0(v27, *(_QWORD *)(*(_QWORD *)v8 + 112LL), 0);
        *(_DWORD *)(v27 + 56) |= 1u;
        ++*(_DWORD *)(v8 + 440);
        return sub_26B730(v8, v27, v28, v29);
      }
      if ( !under_debugger )
        sub_383060(50207);
LABEL_107:
      BUG();
    }
    v40 = get_tinfo_size();
    v41 = *(_DWORD *)(v8 + 436);
    if ( (!v41 || v41 == v40) && !*(_DWORD *)(v8 + 440) )
    {
      v24 = sub_26CE90((__int64 *)v8, a3, a4, a5, a6);
      if ( !v24 )
        return 0;
      v44 = j__qalloc_or_throw(64, (__int64)a3, v42, v43);
      *(_QWORD *)(v44 + 24) = v9;
      *(_QWORD *)(v44 + 40) = 0;
      v9 = (const __m128i *)v44;
      *(_QWORD *)v44 = -1;
      *(_DWORD *)(v44 + 8) = 51;
      *(_QWORD *)(v44 + 12) = -1;
      *(_QWORD *)(v44 + 32) = 0;
      *(_QWORD *)(v44 + 48) = 0;
      *(_DWORD *)(v44 + 56) = 0;
      *(_DWORD *)(v44 + 40) = v40;
      sub_2441C0(v44, *(_QWORD *)(*(_QWORD *)v8 + 112LL), 0);
      *(_DWORD *)(v44 + 56) |= 1u;
      goto LABEL_25;
    }
  }
LABEL_12:
  if ( v9->m128i_i32[2] != 58 )
    return 0;
  if ( a7 )
    return 0;
  v13 = (__int64)a3;
  v14 = sub_26CE90((__int64 *)v8, a3, a4, a5, a6);
  v17 = v14;
  if ( !v14 )
    return 0;
  v18 = *(_DWORD *)(v14 + 8);
  if ( v18 == 47 )
  {
    v13 = *(_QWORD *)(v17 + 24);
    v19 = 36;
    sub_255850((__int64 *)v17, v13);
  }
  else if ( v18 == 61 && (v13 = v17 + 48, sub_255A30(*(__int64 **)(v17 + 24)) < 0) )
  {
    v13 = *(_QWORD *)v8;
    v19 = (unsigned __int8)sub_240BD0(v17, *(_QWORD *)v8, *(_QWORD *)(*(_QWORD *)(v8 + 8) + 64LL), v16, v45) + 35;
  }
  else
  {
    v19 = 35;
  }
  v20 = j__qalloc_or_throw(64, v13, v15, v16);
  v21 = _mm_loadl_epi64(v9 + 2);
  v22 = v20;
  *(_QWORD *)v20 = -1;
  *(_DWORD *)(v20 + 8) = v19;
  *(_QWORD *)(v20 + 12) = -1;
  *(_QWORD *)(v20 + 40) = 0;
  *(_QWORD *)(v20 + 48) = 0;
  *(_DWORD *)(v20 + 56) = 0;
  *(__m128i *)(v20 + 24) = _mm_unpacklo_epi64(v21, (__m128i)(unsigned __int64)v17);
  sub_2441C0(v20, *(_QWORD *)(*(_QWORD *)v8 + 112LL), 0);
  *(_DWORD *)(v22 + 56) |= 1u;
  v9[2].m128i_i64[0] = v22;
  return (__int64)v9;
}
