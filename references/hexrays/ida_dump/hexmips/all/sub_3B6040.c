_BOOL8 __fastcall sub_3B6040(__int64 a1, char a2, double a3)
{
  __int64 *v4; // rax
  __int64 *v5; // r13
  __int64 v7; // rbx
  int tinfo_property; // eax
  bool v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rax
  __m128i si128; // xmm0
  __int64 v17; // rbx
  unsigned int v18; // edx
  __int64 v19; // rsi
  int v20; // r13d
  __int64 v21; // rsi
  int v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rbp
  __int64 v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // rbx
  __int64 v33; // r15
  __int64 v34; // rax
  void *v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // rsi
  unsigned int v39; // r13d
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r12d
  int v44; // r15d
  __int64 v45; // rax
  int v46; // eax
  bool v47; // [rsp+Fh] [rbp-179h]
  __int64 v48; // [rsp+10h] [rbp-178h]
  __int64 v49; // [rsp+20h] [rbp-168h]
  size_t n; // [rsp+28h] [rbp-160h]
  __int64 v51; // [rsp+30h] [rbp-158h]
  __int64 v52; // [rsp+48h] [rbp-140h] BYREF
  __int64 v53; // [rsp+50h] [rbp-138h] BYREF
  __int128 v54; // [rsp+58h] [rbp-130h]
  __int64 v55; // [rsp+70h] [rbp-118h] BYREF
  __int128 v56; // [rsp+78h] [rbp-110h]
  int v57; // [rsp+88h] [rbp-100h]
  _QWORD v58[4]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-D8h]
  __int64 v60; // [rsp+B8h] [rbp-D0h]
  __int64 v61; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+C8h] [rbp-C0h]
  unsigned __int64 v63; // [rsp+D0h] [rbp-B8h]
  __int64 v64; // [rsp+E0h] [rbp-A8h]
  __int64 v65; // [rsp+E8h] [rbp-A0h]
  __int64 v66; // [rsp+118h] [rbp-70h]
  __int64 v67; // [rsp+120h] [rbp-68h]
  __int64 v68; // [rsp+130h] [rbp-58h]
  __int64 v69; // [rsp+138h] [rbp-50h]
  unsigned __int64 v70; // [rsp+148h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  v4 = (__int64 *)sub_388DC0(*(_QWORD *)(a1 + 32), a1 + 80, a3);
  if ( !v4 )
    return 0;
  v5 = v4;
  if ( *v4 == -1 )
    return 0;
  if ( (v7 = sub_3C0A30(*(_QWORD *)(a1 + 24) + 1312LL)) != 0 )
    return 0;
  sub_240340(&v61, (__int64)v5);
  tinfo_property = get_tinfo_property(v61, 20);
  v9 = (tinfo_property & 0xFFFFFFF0) == 208 || (tinfo_property & 0xFFFFFFF0) == 64;
  v47 = v9;
  clear_tinfo_t(&v61);
  if ( !v9 || *(_DWORD *)(v5[4] + 8) <= (int)get_tinfo_property(*(_QWORD *)(v5[4] + 24), 23) && a2 != 1 )
    return 0;
  v10 = *v5;
  v11 = *(_QWORD *)(a1 + 24);
  memset(&v58[1], 0, 24);
  v49 = v10;
  v59 = 0;
  v58[0] = &off_4C7F88;
  v60 = v10;
  if ( !(unsigned int)sub_11BA20(v11, (__int64)v58) )
  {
    if ( !under_debugger )
      sub_37E160(0xC51Eu, (__int64)v58, a3);
    goto LABEL_82;
  }
  v53 = 0;
  v54 = 0;
  v12 = *(_QWORD *)(*(_QWORD *)(v59 + 72) + 32LL);
  v48 = *(_QWORD *)(v59 + 72);
  if ( v12 )
  {
    v31 = 0;
    v51 = 4 * v12;
    *((_QWORD *)&v54 + 1) = *(_QWORD *)(*(_QWORD *)(v59 + 72) + 32LL);
    v53 = qalloc_or_throw(80 * v12);
    v7 = v53;
    do
    {
      v32 = 80 * v31 + v7;
      v33 = *(_QWORD *)(v48 + 24) + 80 * v31;
      sub_11F840(v32, (unsigned __int8 *)v33);
      v34 = *(_QWORD *)(v33 + 16);
      *(_QWORD *)(v32 + 24) = 0;
      *(_QWORD *)(v32 + 16) = v34;
      copy_tinfo_t(v32 + 24, v33 + 24);
      *(_QWORD *)(v32 + 32) = 0;
      *(_OWORD *)(v32 + 40) = 0;
      if ( *(_QWORD *)(v33 + 40) )
      {
        n = *(_QWORD *)(v33 + 40);
        v35 = (void *)qalloc_or_throw(n);
        *(_QWORD *)(v32 + 32) = v35;
        *(_QWORD *)(v32 + 48) = n;
        memcpy(v35, *(const void **)(v33 + 32), n);
        *(_QWORD *)(v32 + 40) = n;
      }
      *(_DWORD *)(v32 + 56) = 0;
      copy_argloc(v32 + 56, v33 + 56);
      ++v31;
      *(_DWORD *)(v32 + 72) = *(_DWORD *)(v33 + 72);
      v7 = v53;
    }
    while ( v12 != v31 );
    *(_QWORD *)&v54 = v12;
    if ( !a2 )
    {
      *(_QWORD *)&v54 = v12 - 1;
      v36 = 80 * (v12 - 1) + v53;
      cleanup_argloc(v36 + 56);
      v37 = *(_QWORD *)(v36 + 32);
      if ( v37 )
      {
        *(_QWORD *)(v36 + 40) = 0;
        qfree(v37);
      }
      clear_tinfo_t(v36 + 24);
      sub_118BA0(v36);
      goto LABEL_27;
    }
    v13 = *(_QWORD *)(a1 + 24);
    v14 = v12 + 1;
    if ( *((_QWORD *)&v54 + 1) >= (unsigned __int64)(v12 + 1) )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( a2 )
  {
    v13 = *(_QWORD *)(a1 + 24);
    v14 = 1;
LABEL_13:
    v15 = qvector_reserve(&v53, v7, v14, 80);
    v12 = v54;
    v53 = v15;
    v7 = v15;
    v51 = 4 * v54;
LABEL_14:
    si128 = _mm_load_si128((const __m128i *)&xmmword_407230);
    v17 = 16 * (v12 + v51) + v7;
    *(_QWORD *)v17 = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v17 + 8) = 0;
    *(__m128i *)(v17 + 16) = si128;
    *(_QWORD *)(v17 + 32) = 0;
    *(_QWORD *)(v17 + 56) = 0;
    *(_QWORD *)(v17 + 64) = 0;
    *(_DWORD *)(v17 + 72) = 0;
    *(_OWORD *)(v17 + 40) = 0;
    v18 = *(_DWORD *)(v48 + 20);
    v19 = *(_QWORD *)(v13 + 1496);
    *(_QWORD *)&v54 = v54 + 1;
    sub_CCEB0((__int64)&v61, v19, v18);
    v55 = 0;
    v57 = 0;
    v56 = 0;
    sub_D20A0((__int64)&v61, (unsigned int *)&v55, v13, (_QWORD *)(v48 + 24));
    v20 = -1;
    if ( !(unsigned __int8)getinf_flag(67, 16) && (int)v55 < v63 )
      v20 = *(_DWORD *)(v62 + 4LL * (int)v55);
    v21 = *(_QWORD *)(v13 + 1504);
    v22 = *(_DWORD *)(v21 + 80);
    sub_327340(&v52, v21, v22);
    copy_tinfo_t(v17 + 24, &v52);
    clear_tinfo_t(&v52);
    if ( v20 != -1 )
    {
      *(_DWORD *)(v17 + 56) = 3;
      *(_DWORD *)(v17 + 64) = v20;
LABEL_19:
      if ( v68 )
      {
        v69 = 0;
        qfree(v68);
      }
      if ( v66 )
      {
        v67 = 0;
        qfree(v66);
      }
      if ( v64 )
      {
        v65 = 0;
        qfree(v64);
      }
      if ( v62 )
      {
        v63 = 0;
        qfree(v62);
      }
      goto LABEL_27;
    }
    v38 = *(_QWORD *)(v17 + 24);
    v39 = *(_DWORD *)(v48 + 20);
    LODWORD(v52) = 0;
    get_tinfo_size(&v52, v38, 0);
    v43 = v52;
    if ( ((unsigned int)v52 & ((_DWORD)v52 - 1)) == 0 )
    {
      v44 = 2 * v22;
      if ( (int)v52 <= 2 * v22 )
      {
        if ( v22 > (int)v52 )
        {
          if ( v39 > 0x10 )
          {
LABEL_48:
            if ( v39 == 176 || v39 == 256 )
              goto LABEL_51;
            goto LABEL_50;
          }
LABEL_70:
          v39 = getinf(99);
          goto LABEL_48;
        }
        if ( v39 > 0x10 )
          goto LABEL_61;
        goto LABEL_75;
      }
      if ( v39 <= 0x10 )
      {
        v46 = getinf(99);
        if ( v46 == 176 || v46 == 256 )
        {
          if ( v22 > v44 )
          {
LABEL_69:
            v43 = 2 * v22;
            goto LABEL_70;
          }
LABEL_74:
          v43 = 2 * v22;
LABEL_75:
          v39 = getinf(99);
LABEL_61:
          if ( v39 == 176 || v39 == 256 )
            goto LABEL_52;
LABEL_63:
          if ( (unsigned __int8)getinf_flag(67, 4) )
            v22 = v43;
          goto LABEL_52;
        }
      }
      else if ( v39 == 256 || v39 == 176 )
      {
        if ( v22 > v44 )
          v22 *= 2;
        goto LABEL_52;
      }
      if ( (unsigned __int8)getinf_flag(67, 512) )
        goto LABEL_51;
      if ( v22 > v44 )
      {
        if ( v39 > 0x10 )
        {
          v43 = 2 * v22;
LABEL_50:
          if ( !(unsigned __int8)getinf_flag(67, 2) )
          {
LABEL_52:
            v45 = sub_D0ED0((__int64)&v55, v22);
            *(_DWORD *)(v17 + 56) = 1;
            *(_QWORD *)(v17 + 64) = v45;
            goto LABEL_19;
          }
LABEL_51:
          v22 = v43;
          goto LABEL_52;
        }
        goto LABEL_69;
      }
      if ( v39 > 0x10 )
      {
        v43 = 2 * v22;
        goto LABEL_63;
      }
      goto LABEL_74;
    }
    if ( !under_debugger )
      interr(2858, v38, v40, v41, v42);
LABEL_82:
    BUG();
  }
LABEL_27:
  sub_2B3310(*(_QWORD *)(a1 + 24), v49, (unsigned __int64)&v53);
  sub_390DC0(a1, 1u, v23, v24, v25, 0.0);
  v26 = v53;
  if ( v53 )
  {
    v27 = v54;
    if ( (_QWORD)v54 )
    {
      v28 = 0;
      do
      {
        v29 = v26 + 80 * v28;
        cleanup_argloc(v29 + 56);
        v30 = *(_QWORD *)(v29 + 32);
        if ( v30 )
        {
          *(_QWORD *)(v29 + 40) = 0;
          qfree(v30);
        }
        ++v28;
        clear_tinfo_t(v29 + 24);
        sub_118BA0(v29);
        v26 = v53;
      }
      while ( v27 != v28 );
    }
    *(_QWORD *)&v54 = 0;
    qfree(v26);
  }
  return v47;
}
