__int64 __fastcall sub_269A90(
        __int64 a1,
        const __m128i *a2,
        __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __m128i *v7; // r13
  const __m128i *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int32 v13; // eax
  char v14; // r15
  __int64 v15; // rax
  __int64 *v16; // r13
  int v17; // eax
  int v18; // r14d
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // r12
  __int64 v23; // r14
  __int64 v24; // r12
  unsigned __int64 v25; // rcx
  __int64 v26; // rdi
  unsigned __int64 v27; // r10
  __int64 tinfo_property4; // rax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r15
  _QWORD *v31; // rbp
  __int64 v32; // rdi
  __int64 v33; // rdi
  char v34; // al
  int v35; // r13d
  int v36; // eax
  __int64 v37; // r12
  __int64 v38; // rcx
  __int64 v39; // r8
  int tinfo_property; // r13d
  int tinfo_size; // eax
  __int64 v42; // r14
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // r15
  __int64 v45; // rbx
  _QWORD *v46; // rbp
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 v52; // [rsp+20h] [rbp-158h]
  __int64 v53; // [rsp+20h] [rbp-158h]
  __int64 v54; // [rsp+28h] [rbp-150h]
  __int64 v55; // [rsp+28h] [rbp-150h]
  unsigned __int64 v56; // [rsp+30h] [rbp-148h]
  int v57; // [rsp+30h] [rbp-148h]
  int v58; // [rsp+30h] [rbp-148h]
  __int64 v59; // [rsp+38h] [rbp-140h]
  __int64 v60; // [rsp+40h] [rbp-138h]
  char v61; // [rsp+40h] [rbp-138h]
  __int64 v62; // [rsp+50h] [rbp-128h] BYREF
  __int64 v63; // [rsp+58h] [rbp-120h] BYREF
  __int64 v64; // [rsp+60h] [rbp-118h] BYREF
  __int128 v65; // [rsp+68h] [rbp-110h]
  __int128 v66; // [rsp+78h] [rbp-100h]
  __int64 v67; // [rsp+88h] [rbp-F0h]
  int v68; // [rsp+90h] [rbp-E8h]
  __m128i v69; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-C8h]
  __int128 v71; // [rsp+B8h] [rbp-C0h]
  __int64 v72; // [rsp+C8h] [rbp-B0h]
  __int128 v73; // [rsp+D0h] [rbp-A8h]
  __int128 v74[3]; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v75; // [rsp+110h] [rbp-68h]
  int v76; // [rsp+118h] [rbp-60h]
  __int64 v77; // [rsp+120h] [rbp-58h]
  char v78; // [rsp+128h] [rbp-50h]
  unsigned __int64 v79; // [rsp+138h] [rbp-40h]

  v7 = (__m128i *)&a2[3];
  v10 = a2;
  v11 = a2[3].m128i_i64[0];
  v79 = __readfsqword(0x28u);
  if ( (unsigned __int8)((get_tinfo_property(v11, 2) & 0xF) - 10) <= 1u )
    goto LABEL_12;
  v12 = *(_QWORD *)a1;
  v70 = 0;
  v72 = 0;
  v52 = v12;
  v13 = a2->m128i_i32[2];
  v75 = 1;
  v76 = -1;
  v77 = 0;
  v78 = 0;
  v62 = 0;
  v69 = 0;
  v71 = 0;
  v73 = 0;
  v74[0] = 0;
  if ( v13 == 64 )
  {
    if ( (get_tinfo_property(a2[3].m128i_i64[0], 2) & 0xF) == 0xC
      || (get_flags_ex(a2[1].m128i_i64[1], 4) & 0x600) != 0x400 )
    {
      goto LABEL_4;
    }
    v55 = -1;
    LODWORD(v27) = 0;
    v59 = a2[1].m128i_i64[1];
    goto LABEL_50;
  }
  if ( v13 != 65 )
    goto LABEL_4;
  v54 = *(_QWORD *)(a2[1].m128i_i64[1] + 432) + 104LL * a2[2].m128i_i32[0];
  if ( (unsigned int)lexcompare_tinfo(*(_QWORD *)(v54 + 80), a2[3].m128i_i64[0], 0) )
  {
    copy_tinfo_t(v7, v54 + 80);
    if ( (get_tinfo_property(a2[3].m128i_i64[0], 2) & 0xF) != 0xB )
    {
      if ( !under_debugger )
        sub_37B760(50204);
      goto LABEL_108;
    }
    v14 = 1;
    clear_tinfo_t(&v62);
    goto LABEL_6;
  }
  if ( (unsigned int)(*(_DWORD *)v54 - 3) <= 1 )
    goto LABEL_4;
  if ( *(_DWORD *)v54 != 1 )
    goto LABEL_4;
  v55 = sub_1C9330((_QWORD *)a2[1].m128i_i64[1], &v69, *(_QWORD *)(v54 + 8), &v63, &v62);
  if ( v55 == -1 || !(_BYTE)v62 )
    goto LABEL_4;
  v64 = 0;
  v67 = 0;
  v68 = 1;
  v65 = 0;
  v66 = 0;
  get_tinfo_details(v62, 13, &v64);
  v25 = v65;
  v26 = v64;
  if ( v55 + 1 == (_QWORD)v65 )
  {
    if ( v64 )
    {
      v44 = v65;
      v53 = a1;
      v45 = 0;
      while ( 1 )
      {
        v46 = (_QWORD *)(v26 + 144 * v45);
        clear_tinfo_t(v46 + 8);
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
        if ( ++v45 >= v44 )
          break;
        v26 = v64;
      }
      a1 = v53;
      *(_QWORD *)&v65 = 0;
      v10 = a2;
      qfree(v64);
    }
    goto LABEL_4;
  }
  if ( v69.m128i_i64[1] <= 7uLL )
  {
    if ( !under_debugger )
      sub_37B760(50205);
    goto LABEL_108;
  }
  v27 = ((unsigned __int64)(*(_QWORD *)(v64 + 144 * (v55 + 1)) - v69.m128i_i64[0]) >> 3)
      / ((unsigned __int64)v69.m128i_i64[1] >> 3);
  if ( v27 == 1 )
  {
    if ( !v64 )
      goto LABEL_4;
    v59 = -1;
    if ( !(_QWORD)v65 )
    {
      qfree(v64);
      goto LABEL_4;
    }
LABEL_39:
    v57 = v27;
    v60 = a1;
    v29 = 0;
    v30 = v25;
    do
    {
      v31 = (_QWORD *)(v26 + 144 * v29);
      clear_tinfo_t(v31 + 8);
      v32 = v31[5];
      if ( v32 )
      {
        v31[6] = 0;
        qfree(v32);
      }
      v33 = v31[2];
      if ( v33 )
      {
        v31[3] = 0;
        qfree(v33);
      }
      ++v29;
      v26 = v64;
    }
    while ( v29 < v30 );
    LODWORD(v27) = v57;
    a1 = v60;
    v10 = a2;
    goto LABEL_46;
  }
  v56 = ((unsigned __int64)(*(_QWORD *)(v64 + 144 * (v55 + 1)) - v69.m128i_i64[0]) >> 3)
      / ((unsigned __int64)v69.m128i_i64[1] >> 3);
  tinfo_property4 = get_tinfo_property4(v62, 297, v55, 0, 0, 0);
  v26 = v64;
  LODWORD(v27) = v56;
  v59 = tinfo_property4;
  if ( !v64 )
    goto LABEL_50;
  v25 = v65;
  if ( (_QWORD)v65 )
    goto LABEL_39;
LABEL_46:
  v58 = v27;
  *(_QWORD *)&v65 = 0;
  qfree(v26);
  LODWORD(v27) = v58;
LABEL_50:
  if ( v59 != -1 )
  {
    LODWORD(v65) = 0;
    DWORD1(v65) = v27;
    v63 = 0;
    v64 = 0;
    copy_tinfo_t(&v64, v7);
    v61 = create_tinfo(&v63, 11, 11, &v64);
    clear_tinfo_t(&v64);
    if ( v61
      && (v10->m128i_i32[2] == 65
        ? (v34 = sub_271C40(v52, v59, &v63, &v10[1].m128i_u64[1], &v62, v55))
        : (v34 = sub_271B30(v52, v59, &v63, 0, &v62, v55)),
          (v14 = v34) != 0) )
    {
      copy_tinfo_t(v7, &v63);
    }
    else
    {
      v14 = 0;
    }
    clear_tinfo_t(&v63);
    goto LABEL_5;
  }
LABEL_4:
  v14 = 0;
LABEL_5:
  clear_tinfo_t(&v62);
LABEL_6:
  clear_tinfo_t(v74);
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree(v72);
  }
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree(v70);
  }
  if ( !v14 )
    goto LABEL_13;
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 104LL) = 1;
LABEL_12:
  if ( (unsigned int)sub_265810(a1, v7) && !(unsigned __int8)sub_24F440((__int64)v10) )
  {
    if ( *(_DWORD *)(a1 + 444) != 3 )
      goto LABEL_23;
    if ( a7 )
    {
      if ( *(_DWORD *)(a1 + 440) )
        return 0;
      if ( *(_BYTE *)(a1 + 453) )
        goto LABEL_25;
    }
    else if ( *(_BYTE *)(a1 + 453) )
    {
LABEL_23:
      if ( !*(_DWORD *)(a1 + 440) || (get_tinfo_property(v10[3].m128i_i64[0], 2) & 0xF) == 0xB )
      {
LABEL_25:
        v23 = sub_265B10((__int64 *)a1, a3, a4, a5, a6);
        if ( v23 )
          goto LABEL_26;
        return 0;
      }
      if ( (get_tinfo_property(v10[3].m128i_i64[0], 2) & 0xF) != 0xA )
      {
        if ( !under_debugger )
          sub_37B760(51274);
        goto LABEL_108;
      }
      tinfo_property = get_tinfo_property(v10[3].m128i_i64[0], 14);
      tinfo_size = get_tinfo_size(0, v10[3].m128i_i64[0], 0);
      if ( tinfo_size <= 0 )
        return 0;
      if ( tinfo_size != tinfo_property )
      {
        v42 = a6 / tinfo_size;
        if ( a6 % tinfo_size || a4 && !is_mul_ok(a4, tinfo_size) )
          return 0;
        a4 *= tinfo_size;
        if ( a3 )
        {
          v43 = a3[3];
          if ( tinfo_property )
          {
            if ( v43 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 16LL) / (unsigned __int64)tinfo_property < v43 )
              return 0;
          }
          a3[3] = v43 * tinfo_property;
          if ( !sub_263760(*(_QWORD *)a1, a3, a4) )
            return 0;
        }
        a6 = v42;
      }
      v23 = sub_265B10((__int64 *)a1, a3, a4, a5, a6);
      if ( !v23 )
        return 0;
      v10 = (const __m128i *)sub_2643B0(a1, (__int64)v10);
LABEL_26:
      if ( (unsigned __int8)((get_tinfo_property(v10[3].m128i_i64[0], 2) & 0xF) - 10) <= 2u
        && (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v23 + 48), 2) & 0xF) - 10) > 2u )
      {
        v24 = j__qalloc_or_throw(64);
        *(_QWORD *)v24 = -1;
        *(_DWORD *)(v24 + 8) = 58;
        *(_QWORD *)(v24 + 12) = -1;
        *(_QWORD *)(v24 + 24) = v10;
        *(_QWORD *)(v24 + 32) = v23;
        *(_QWORD *)(v24 + 40) = 0;
        *(_QWORD *)(v24 + 48) = 0;
        *(_DWORD *)(v24 + 56) = 0;
        sub_23CE40(v24, *(_QWORD *)(*(_QWORD *)a1 + 112LL), 0);
        *(_DWORD *)(v24 + 56) |= 1u;
        ++*(_DWORD *)(a1 + 440);
        return sub_2643B0(a1, v24);
      }
      if ( !under_debugger )
        sub_37B760(50207);
LABEL_108:
      BUG();
    }
    v35 = get_tinfo_size(0, v10[3].m128i_i64[0], 0);
    v36 = *(_DWORD *)(a1 + 436);
    if ( (!v36 || v36 == v35) && !*(_DWORD *)(a1 + 440) )
    {
      v23 = sub_265B10((__int64 *)a1, a3, a4, a5, a6);
      if ( !v23 )
        return 0;
      v37 = j__qalloc_or_throw(64);
      *(_QWORD *)(v37 + 24) = v10;
      *(_QWORD *)(v37 + 40) = 0;
      v10 = (const __m128i *)v37;
      *(_QWORD *)v37 = -1;
      *(_DWORD *)(v37 + 8) = 51;
      *(_QWORD *)(v37 + 12) = -1;
      *(_QWORD *)(v37 + 32) = 0;
      *(_QWORD *)(v37 + 48) = 0;
      *(_DWORD *)(v37 + 56) = 0;
      *(_DWORD *)(v37 + 40) = v35;
      sub_23CE40(v37, *(_QWORD *)(*(_QWORD *)a1 + 112LL), 0);
      *(_DWORD *)(v37 + 56) |= 1u;
      goto LABEL_26;
    }
  }
LABEL_13:
  if ( v10->m128i_i32[2] != 58 )
    return 0;
  if ( a7 )
    return 0;
  v15 = sub_265B10((__int64 *)a1, a3, a4, a5, a6);
  v16 = (__int64 *)v15;
  if ( !v15 )
    return 0;
  v17 = *(_DWORD *)(v15 + 8);
  if ( v17 == 47 )
  {
    v18 = 36;
    sub_24E4D0(v16, v16[3]);
  }
  else if ( v17 == 61 && sub_24E6B0((__int64 *)v16[3], v16 + 6) < 0 )
  {
    v18 = (unsigned __int8)sub_239850((__int64)v16, *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL), v38, v39)
        + 35;
  }
  else
  {
    v18 = 35;
  }
  v19 = j__qalloc_or_throw(64);
  v20 = _mm_loadl_epi64(v10 + 2);
  v21 = v19;
  *(_QWORD *)v19 = -1;
  *(_DWORD *)(v19 + 8) = v18;
  *(_QWORD *)(v19 + 12) = -1;
  *(_QWORD *)(v19 + 40) = 0;
  *(_QWORD *)(v19 + 48) = 0;
  *(_DWORD *)(v19 + 56) = 0;
  *(__m128i *)(v19 + 24) = _mm_unpacklo_epi64(v20, (__m128i)(unsigned __int64)v16);
  sub_23CE40(v19, *(_QWORD *)(*(_QWORD *)a1 + 112LL), 0);
  *(_DWORD *)(v21 + 56) |= 1u;
  v10[2].m128i_i64[0] = v21;
  return (__int64)v10;
}
