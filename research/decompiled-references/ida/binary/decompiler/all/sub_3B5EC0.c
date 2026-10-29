_BOOL8 __fastcall sub_3B5EC0(__int64 a1, char a2)
{
  __int64 *v3; // rax
  __int64 *v4; // r13
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rbx
  __m128i si128; // xmm0
  __int64 v13; // rbx
  unsigned int v14; // edx
  __int64 v15; // rsi
  int v16; // r13d
  __int64 v17; // rsi
  int v18; // r14d
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // rbx
  __int64 v25; // r15
  __int64 v26; // rax
  void *v27; // rax
  __int64 v28; // rbx
  unsigned int v29; // r13d
  int v30; // r12d
  int v31; // r15d
  __int64 v32; // rax
  int v33; // eax
  bool v34; // [rsp+Fh] [rbp-179h]
  __int64 v35; // [rsp+10h] [rbp-178h]
  __int64 v36; // [rsp+20h] [rbp-168h]
  size_t n; // [rsp+28h] [rbp-160h]
  __int64 v38; // [rsp+30h] [rbp-158h]
  int v39; // [rsp+48h] [rbp-140h] BYREF
  __int64 v40; // [rsp+50h] [rbp-138h] BYREF
  __int128 v41; // [rsp+58h] [rbp-130h]
  __int64 v42; // [rsp+70h] [rbp-118h] BYREF
  __int128 v43; // [rsp+78h] [rbp-110h]
  int v44; // [rsp+88h] [rbp-100h]
  _QWORD v45[4]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-D8h]
  __int64 v47; // [rsp+B8h] [rbp-D0h]
  __int64 v48; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-C0h]
  unsigned __int64 v50; // [rsp+D0h] [rbp-B8h]
  __int64 v51; // [rsp+E0h] [rbp-A8h]
  __int64 v52; // [rsp+E8h] [rbp-A0h]
  __int64 v53; // [rsp+118h] [rbp-70h]
  __int64 v54; // [rsp+120h] [rbp-68h]
  __int64 v55; // [rsp+130h] [rbp-58h]
  __int64 v56; // [rsp+138h] [rbp-50h]
  unsigned __int64 v57; // [rsp+148h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v3 = (__int64 *)sub_3894C0(*(_QWORD *)(a1 + 32), a1 + 80);
  if ( !v3 )
    return 0;
  v4 = v3;
  if ( *v3 == -1 )
    return 0;
  if ( sub_3C0830(*(_QWORD *)(a1 + 24) + 1312LL) )
    return 0;
  sub_2421A0(&v48, v4);
  v6 = get_tinfo_property() & 0xFFFFFFF0;
  v34 = v6 == 208 || v6 == 64;
  clear_tinfo_t();
  if ( !v34 || *(_DWORD *)(v4[4] + 8) <= (int)get_tinfo_property() && a2 != 1 )
    return 0;
  v7 = *v4;
  v8 = *(_QWORD *)(a1 + 24);
  memset(&v45[1], 0, 24);
  v36 = v7;
  v46 = 0;
  v45[0] = off_4E6DC8;
  v47 = v7;
  if ( !(unsigned int)sub_11D7E0(v8, (__int64)v45) )
  {
    if ( !under_debugger )
      sub_37EA20(50462);
    goto LABEL_82;
  }
  v40 = 0;
  v41 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(v46 + 72) + 32LL);
  v35 = *(_QWORD *)(v46 + 72);
  if ( v9 )
  {
    v23 = 0;
    v38 = 4 * v9;
    *((_QWORD *)&v41 + 1) = *(_QWORD *)(*(_QWORD *)(v46 + 72) + 32LL);
    v40 = qalloc_or_throw();
    v11 = v40;
    do
    {
      v24 = 80 * v23 + v11;
      v25 = *(_QWORD *)(v35 + 24) + 80 * v23;
      sub_121540(v24, (unsigned __int8 *)v25);
      v26 = *(_QWORD *)(v25 + 16);
      *(_QWORD *)(v24 + 24) = 0;
      *(_QWORD *)(v24 + 16) = v26;
      copy_tinfo_t();
      *(_QWORD *)(v24 + 32) = 0;
      *(_OWORD *)(v24 + 40) = 0;
      if ( *(_QWORD *)(v25 + 40) )
      {
        n = *(_QWORD *)(v25 + 40);
        v27 = (void *)qalloc_or_throw();
        *(_QWORD *)(v24 + 32) = v27;
        *(_QWORD *)(v24 + 48) = n;
        memcpy(v27, *(const void **)(v25 + 32), n);
        *(_QWORD *)(v24 + 40) = n;
      }
      *(_DWORD *)(v24 + 56) = 0;
      copy_argloc();
      ++v23;
      *(_DWORD *)(v24 + 72) = *(_DWORD *)(v25 + 72);
      v11 = v40;
    }
    while ( v9 != v23 );
    *(_QWORD *)&v41 = v9;
    if ( !a2 )
    {
      *(_QWORD *)&v41 = v9 - 1;
      v28 = 80 * (v9 - 1) + v40;
      cleanup_argloc();
      if ( *(_QWORD *)(v28 + 32) )
      {
        *(_QWORD *)(v28 + 40) = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_11A960(v28);
      goto LABEL_27;
    }
    v10 = *(_QWORD *)(a1 + 24);
    if ( *((_QWORD *)&v41 + 1) >= (unsigned __int64)(v9 + 1) )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( a2 )
  {
    v10 = *(_QWORD *)(a1 + 24);
LABEL_13:
    v9 = v41;
    v40 = qvector_reserve();
    v11 = v40;
    v38 = 4 * v41;
LABEL_14:
    si128 = _mm_load_si128((const __m128i *)&xmmword_425B90);
    v13 = 16 * (v9 + v38) + v11;
    *(_QWORD *)v13 = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v13 + 8) = 0;
    *(__m128i *)(v13 + 16) = si128;
    *(_QWORD *)(v13 + 32) = 0;
    *(_QWORD *)(v13 + 56) = 0;
    *(_QWORD *)(v13 + 64) = 0;
    *(_DWORD *)(v13 + 72) = 0;
    *(_OWORD *)(v13 + 40) = 0;
    v14 = *(_DWORD *)(v35 + 20);
    v15 = *(_QWORD *)(v10 + 1496);
    *(_QWORD *)&v41 = v41 + 1;
    sub_D6330((__int64)&v48, v15, v14);
    v42 = 0;
    v44 = 0;
    v43 = 0;
    sub_DB760((__int64)&v48, (__int64)&v42, v10, (_QWORD *)(v35 + 24));
    v16 = -1;
    if ( !(unsigned __int8)getinf_flag() && (int)v42 < v50 )
      v16 = *(_DWORD *)(v49 + 4LL * (int)v42);
    v17 = *(_QWORD *)(v10 + 1504);
    v18 = *(_DWORD *)(v17 + 80);
    sub_328E20(&v39, v17, (unsigned int)v18);
    copy_tinfo_t();
    clear_tinfo_t();
    if ( v16 != -1 )
    {
      *(_DWORD *)(v13 + 56) = 3;
      *(_DWORD *)(v13 + 64) = v16;
LABEL_19:
      if ( v55 )
      {
        v56 = 0;
        qfree();
      }
      if ( v53 )
      {
        v54 = 0;
        qfree();
      }
      if ( v51 )
      {
        v52 = 0;
        qfree();
      }
      if ( v49 )
      {
        v50 = 0;
        qfree();
      }
      goto LABEL_27;
    }
    v29 = *(_DWORD *)(v35 + 20);
    v39 = 0;
    get_tinfo_size();
    v30 = v39;
    if ( (v39 & (v39 - 1)) == 0 )
    {
      v31 = 2 * v18;
      if ( v39 <= 2 * v18 )
      {
        if ( v18 > v39 )
        {
          if ( v29 > 0x10 )
          {
LABEL_48:
            if ( v29 == 176 || v29 == 256 )
              goto LABEL_51;
            goto LABEL_50;
          }
LABEL_70:
          v29 = getinf();
          goto LABEL_48;
        }
        if ( v29 > 0x10 )
          goto LABEL_61;
        goto LABEL_75;
      }
      if ( v29 <= 0x10 )
      {
        v33 = getinf();
        if ( v33 == 176 || v33 == 256 )
        {
          if ( v18 > v31 )
          {
LABEL_69:
            v30 = 2 * v18;
            goto LABEL_70;
          }
LABEL_74:
          v30 = 2 * v18;
LABEL_75:
          v29 = getinf();
LABEL_61:
          if ( v29 == 176 || v29 == 256 )
            goto LABEL_52;
LABEL_63:
          if ( (unsigned __int8)getinf_flag() )
            v18 = v30;
          goto LABEL_52;
        }
      }
      else if ( v29 == 256 || v29 == 176 )
      {
        if ( v18 > v31 )
          v18 *= 2;
        goto LABEL_52;
      }
      if ( (unsigned __int8)getinf_flag() )
        goto LABEL_51;
      if ( v18 > v31 )
      {
        if ( v29 > 0x10 )
        {
          v30 = 2 * v18;
LABEL_50:
          if ( !(unsigned __int8)getinf_flag() )
          {
LABEL_52:
            v32 = sub_DA520((__int64)&v42, v18);
            *(_DWORD *)(v13 + 56) = 1;
            *(_QWORD *)(v13 + 64) = v32;
            goto LABEL_19;
          }
LABEL_51:
          v18 = v30;
          goto LABEL_52;
        }
        goto LABEL_69;
      }
      if ( v29 > 0x10 )
      {
        v30 = 2 * v18;
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
  sub_2B4CC0(*(_QWORD *)(a1 + 24), v36, &v40);
  sub_3912F0(a1, 1);
  v19 = v40;
  if ( v40 )
  {
    v20 = v41;
    if ( (_QWORD)v41 )
    {
      v21 = 0;
      do
      {
        v22 = v19 + 80 * v21;
        cleanup_argloc();
        if ( *(_QWORD *)(v22 + 32) )
        {
          *(_QWORD *)(v22 + 40) = 0;
          qfree();
        }
        ++v21;
        clear_tinfo_t();
        sub_11A960(v22);
        v19 = v40;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v41 = 0;
    qfree();
  }
  return v34;
}
