_BOOL8 __fastcall sub_3BAF40(__int64 a1, char a2, double a3)
{
  __int64 *v4; // rax
  __int64 *v5; // r13
  __int64 v7; // rbx
  int tinfo_property; // eax
  bool v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i si128; // xmm0
  __int64 v19; // rbx
  unsigned int v20; // edx
  __int64 v21; // rsi
  int v22; // r13d
  __int64 v23; // rsi
  int v24; // r14d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdi
  __int64 v29; // r12
  __int64 v30; // rbp
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rdi
  unsigned int v43; // r13d
  int v44; // r12d
  int v45; // r15d
  __int64 v46; // rax
  int v47; // eax
  bool v48; // [rsp+Fh] [rbp-179h]
  __int64 v49; // [rsp+10h] [rbp-178h]
  __int64 v50; // [rsp+20h] [rbp-168h]
  size_t n; // [rsp+28h] [rbp-160h]
  __int64 v52; // [rsp+30h] [rbp-158h]
  __int64 v53; // [rsp+48h] [rbp-140h] BYREF
  __int64 v54; // [rsp+50h] [rbp-138h] BYREF
  __int128 v55; // [rsp+58h] [rbp-130h]
  __int64 v56; // [rsp+70h] [rbp-118h] BYREF
  __int128 v57; // [rsp+78h] [rbp-110h]
  int v58; // [rsp+88h] [rbp-100h]
  _QWORD v59[4]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-D8h]
  __int64 v61; // [rsp+B8h] [rbp-D0h]
  __int64 v62; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+C8h] [rbp-C0h]
  unsigned __int64 v64; // [rsp+D0h] [rbp-B8h]
  __int64 v65; // [rsp+E0h] [rbp-A8h]
  __int64 v66; // [rsp+E8h] [rbp-A0h]
  __int64 v67; // [rsp+118h] [rbp-70h]
  __int64 v68; // [rsp+120h] [rbp-68h]
  __int64 v69; // [rsp+130h] [rbp-58h]
  __int64 v70; // [rsp+138h] [rbp-50h]
  unsigned __int64 v71; // [rsp+148h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  v4 = (__int64 *)sub_38DCC0(*(_QWORD *)(a1 + 32), a1 + 80, a3);
  if ( !v4 )
    return 0;
  v5 = v4;
  if ( *v4 == -1 )
    return 0;
  if ( (v7 = sub_3C5930(*(_QWORD *)(a1 + 24) + 1312LL)) != 0 )
    return 0;
  sub_244BC0(&v62, (__int64)v5);
  tinfo_property = get_tinfo_property();
  v9 = (tinfo_property & 0xFFFFFFF0) == 208 || (tinfo_property & 0xFFFFFFF0) == 64;
  v48 = v9;
  clear_tinfo_t();
  if ( !v9 || *(_DWORD *)(v5[4] + 8) <= (int)get_tinfo_property() && a2 != 1 )
    return 0;
  v10 = *v5;
  v11 = *(_QWORD *)(a1 + 24);
  memset(&v59[1], 0, 24);
  v50 = v10;
  v60 = 0;
  v59[0] = &off_4E7868;
  v61 = v10;
  if ( !(unsigned int)sub_11FC20(v11, (__int64)v59) )
  {
    if ( !under_debugger )
      sub_383060(0xC51Eu, a3);
    goto LABEL_82;
  }
  v54 = 0;
  v55 = 0;
  v14 = *(_QWORD *)(*(_QWORD *)(v60 + 72) + 32LL);
  v49 = *(_QWORD *)(v60 + 72);
  if ( v14 )
  {
    v33 = 0;
    v52 = 4 * v14;
    *((_QWORD *)&v55 + 1) = *(_QWORD *)(*(_QWORD *)(v60 + 72) + 32LL);
    v54 = qalloc_or_throw(80 * v14, (__int64)v59, v12, v13);
    v7 = v54;
    do
    {
      v35 = 80 * v33 + v7;
      v36 = *(_QWORD *)(v49 + 24) + 80 * v33;
      sub_123A40(v35, (unsigned __int8 *)v36, v34, v36);
      v37 = *(_QWORD *)(v36 + 16);
      *(_QWORD *)(v35 + 24) = 0;
      *(_QWORD *)(v35 + 16) = v37;
      copy_tinfo_t();
      *(_QWORD *)(v35 + 32) = 0;
      *(_OWORD *)(v35 + 40) = 0;
      if ( *(_QWORD *)(v36 + 40) )
      {
        n = *(_QWORD *)(v36 + 40);
        v40 = (void *)qalloc_or_throw(n, v36 + 24, v38, v39);
        *(_QWORD *)(v35 + 32) = v40;
        *(_QWORD *)(v35 + 48) = n;
        memcpy(v40, *(const void **)(v36 + 32), n);
        *(_QWORD *)(v35 + 40) = n;
      }
      *(_DWORD *)(v35 + 56) = 0;
      copy_argloc();
      ++v33;
      *(_DWORD *)(v35 + 72) = *(_DWORD *)(v36 + 72);
      v7 = v54;
    }
    while ( v14 != v33 );
    *(_QWORD *)&v55 = v14;
    if ( !a2 )
    {
      *(_QWORD *)&v55 = v14 - 1;
      v41 = 80 * (v14 - 1) + v54;
      cleanup_argloc();
      v42 = *(_QWORD *)(v41 + 32);
      if ( v42 )
      {
        *(_QWORD *)(v41 + 40) = 0;
        qfree(v42);
      }
      clear_tinfo_t();
      sub_11CDA0(v41);
      goto LABEL_27;
    }
    v15 = *(_QWORD *)(a1 + 24);
    v16 = v14 + 1;
    if ( *((_QWORD *)&v55 + 1) >= (unsigned __int64)(v14 + 1) )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( a2 )
  {
    v15 = *(_QWORD *)(a1 + 24);
    v16 = 1;
LABEL_13:
    v17 = qvector_reserve((__int64)&v54, v7, v16, 80);
    v14 = v55;
    v54 = v17;
    v7 = v17;
    v52 = 4 * v55;
LABEL_14:
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v19 = 16 * (v14 + v52) + v7;
    *(_QWORD *)v19 = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v19 + 8) = 0;
    *(__m128i *)(v19 + 16) = si128;
    *(_QWORD *)(v19 + 32) = 0;
    *(_QWORD *)(v19 + 56) = 0;
    *(_QWORD *)(v19 + 64) = 0;
    *(_DWORD *)(v19 + 72) = 0;
    *(_OWORD *)(v19 + 40) = 0;
    v20 = *(_DWORD *)(v49 + 20);
    v21 = *(_QWORD *)(v15 + 1496);
    *(_QWORD *)&v55 = v55 + 1;
    sub_D10B0((__int64)&v62, v21, v20);
    v56 = 0;
    v58 = 0;
    v57 = 0;
    sub_D62A0((__int64)&v62, (unsigned int *)&v56, v15, (_QWORD *)(v49 + 24));
    v22 = -1;
    if ( !(unsigned __int8)getinf_flag() && (int)v56 < v64 )
      v22 = *(_DWORD *)(v63 + 4LL * (int)v56);
    v23 = *(_QWORD *)(v15 + 1504);
    v24 = *(_DWORD *)(v23 + 80);
    sub_32C270(&v53, v23, v24);
    copy_tinfo_t();
    clear_tinfo_t();
    if ( v22 != -1 )
    {
      *(_DWORD *)(v19 + 56) = 3;
      *(_DWORD *)(v19 + 64) = v22;
LABEL_19:
      if ( v69 )
      {
        v70 = 0;
        qfree(v69);
      }
      if ( v67 )
      {
        v68 = 0;
        qfree(v67);
      }
      if ( v65 )
      {
        v66 = 0;
        qfree(v65);
      }
      if ( v63 )
      {
        v64 = 0;
        qfree(v63);
      }
      goto LABEL_27;
    }
    v43 = *(_DWORD *)(v49 + 20);
    LODWORD(v53) = 0;
    get_tinfo_size();
    v44 = v53;
    if ( ((unsigned int)v53 & ((_DWORD)v53 - 1)) == 0 )
    {
      v45 = 2 * v24;
      if ( (int)v53 <= 2 * v24 )
      {
        if ( v24 > (int)v53 )
        {
          if ( v43 > 0x10 )
          {
LABEL_48:
            if ( v43 == 176 || v43 == 256 )
              goto LABEL_51;
            goto LABEL_50;
          }
LABEL_70:
          v43 = getinf();
          goto LABEL_48;
        }
        if ( v43 > 0x10 )
          goto LABEL_61;
        goto LABEL_75;
      }
      if ( v43 <= 0x10 )
      {
        v47 = getinf();
        if ( v47 == 176 || v47 == 256 )
        {
          if ( v24 > v45 )
          {
LABEL_69:
            v44 = 2 * v24;
            goto LABEL_70;
          }
LABEL_74:
          v44 = 2 * v24;
LABEL_75:
          v43 = getinf();
LABEL_61:
          if ( v43 == 176 || v43 == 256 )
            goto LABEL_52;
LABEL_63:
          if ( (unsigned __int8)getinf_flag() )
            v24 = v44;
          goto LABEL_52;
        }
      }
      else if ( v43 == 256 || v43 == 176 )
      {
        if ( v24 > v45 )
          v24 *= 2;
        goto LABEL_52;
      }
      if ( (unsigned __int8)getinf_flag() )
        goto LABEL_51;
      if ( v24 > v45 )
      {
        if ( v43 > 0x10 )
        {
          v44 = 2 * v24;
LABEL_50:
          if ( !(unsigned __int8)getinf_flag() )
          {
LABEL_52:
            v46 = sub_D50D0((__int64)&v56, v24);
            *(_DWORD *)(v19 + 56) = 1;
            *(_QWORD *)(v19 + 64) = v46;
            goto LABEL_19;
          }
LABEL_51:
          v24 = v44;
          goto LABEL_52;
        }
        goto LABEL_69;
      }
      if ( v43 > 0x10 )
      {
        v44 = 2 * v24;
        goto LABEL_63;
      }
      goto LABEL_74;
    }
    if ( !under_debugger )
      interr();
LABEL_82:
    BUG();
  }
LABEL_27:
  sub_2B7B90(*(_QWORD *)(a1 + 24), v50, (unsigned __int64)&v54);
  sub_395CC0(a1, 1u, v25, v26, v27, 0.0);
  v28 = v54;
  if ( v54 )
  {
    v29 = v55;
    if ( (_QWORD)v55 )
    {
      v30 = 0;
      do
      {
        v31 = v28 + 80 * v30;
        cleanup_argloc();
        v32 = *(_QWORD *)(v31 + 32);
        if ( v32 )
        {
          *(_QWORD *)(v31 + 40) = 0;
          qfree(v32);
        }
        ++v30;
        clear_tinfo_t();
        sub_11CDA0(v31);
        v28 = v54;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)&v55 = 0;
    qfree(v28);
  }
  return v48;
}
