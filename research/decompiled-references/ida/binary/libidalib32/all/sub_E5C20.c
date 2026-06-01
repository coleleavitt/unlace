__int64 __fastcall sub_E5C20(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r13d
  unsigned int v3; // r12d
  int v4; // ebx
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rbx
  void *p_s2; // rsi
  char *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  _BOOL8 v15; // rsi
  void *v16; // r14
  size_t v17; // rax
  size_t v18; // rbx
  unsigned int v19; // eax
  int *v21; // rbx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __m128i *v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // r15
  __int64 v27; // rax
  size_t v28; // r15
  int v29; // esi
  int v30; // [rsp+0h] [rbp-158h]
  __int64 v31; // [rsp+10h] [rbp-148h] BYREF
  char *s2; // [rsp+18h] [rbp-140h] BYREF
  __int128 v33; // [rsp+20h] [rbp-138h]
  int v34; // [rsp+30h] [rbp-128h]
  __int64 (__fastcall **v35)(); // [rsp+40h] [rbp-118h] BYREF
  __int64 v36; // [rsp+48h] [rbp-110h]
  __int128 v37; // [rsp+50h] [rbp-108h]
  __int64 v38; // [rsp+60h] [rbp-F8h]
  const char *v39; // [rsp+68h] [rbp-F0h]
  int v40; // [rsp+70h] [rbp-E8h]
  __m128i v41; // [rsp+78h] [rbp-E0h] BYREF
  int v42; // [rsp+88h] [rbp-D0h]
  char v43; // [rsp+90h] [rbp-C8h] BYREF
  char v44; // [rsp+D8h] [rbp-80h] BYREF
  int v45; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v46; // [rsp+F8h] [rbp-60h]
  __int128 v47; // [rsp+100h] [rbp-58h]
  unsigned __int64 v48; // [rsp+118h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( !dbg )
    return (unsigned int)-4;
  v2 = dword_2515A4;
  if ( dword_2515A4 )
    return (unsigned int)-4;
  v3 = a1;
  if ( !(unsigned __int8)sub_E55C0(0) )
    return (unsigned int)-4;
  if ( (*(_BYTE *)(dbg + 36LL) & 2) == 0 )
    return (unsigned int)-3;
  if ( a1 == -1 )
  {
    v38 = 0;
    v35 = (__int64 (__fastcall **)())&stru_235898;
    v21 = (int *)&v43;
    v36 = 0x803FF000004LL;
    v39 = "@0:1452[]\nChoose process to attach to";
    v37 = -1;
    v40 = 2;
    v42 = -1;
    v41 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_22FC80), (__m128i)(unsigned __int64)&off_22FB70);
    do
    {
      *(_QWORD *)v21 = 0;
      v21 += 6;
      *((_OWORD *)v21 - 1) = 0;
    }
    while ( v21 != &v45 );
    v45 = 0;
    if ( ((HIDWORD(v36) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v36) != 0xFF )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      BYTE3(v36) = ((HIDWORD(v36) >> 19) & 0x3F) - 1;
      HIDWORD(v36) &= 0xFE07FFFF;
    }
    v35 = off_22F228;
    v46 = 0;
    LODWORD(v31) = -1;
    v47 = 0;
    v22 = sub_198260(&v35, &v31);
    v23 = v46;
    if ( v22 != -2 )
    {
      if ( v22 == -1 )
      {
        v3 = -2;
      }
      else if ( v22 < (unsigned __int64)v47 )
      {
        v3 = *(_DWORD *)(v46 + 32 * v22);
        v35 = off_22F228;
        if ( !v46 )
          goto LABEL_53;
        v25 = v47;
        goto LABEL_66;
      }
    }
    v35 = off_22F228;
    if ( !v46 )
    {
LABEL_53:
      v24 = (__m128i *)&v44;
      v35 = (__int64 (__fastcall **)())&stru_235898;
      do
      {
        if ( v24->m128i_i64[0] )
        {
          v24->m128i_i64[1] = 0;
          qfree();
        }
        v24 = (__m128i *)((char *)v24 - 24);
      }
      while ( &v41 != v24 );
      if ( v3 == -1 )
        return (unsigned int)-2;
      if ( v3 == -2 )
        return v2;
      goto LABEL_6;
    }
    v25 = v47;
    if ( !(_QWORD)v47 )
    {
LABEL_70:
      *(_QWORD *)&v47 = 0;
      qfree();
      goto LABEL_53;
    }
LABEL_66:
    v26 = 0;
    do
    {
      v27 = v23 + 32 * v26;
      if ( *(_QWORD *)(v27 + 8) )
      {
        *(_QWORD *)(v27 + 16) = 0;
        qfree();
        v23 = v46;
      }
      ++v26;
    }
    while ( v25 != v26 );
    goto LABEL_70;
  }
LABEL_6:
  v4 = (unsigned __int8)getinf_flag();
  if ( !byte_2515A9 )
  {
    if ( (getinf() & 6) == 2 )
      v4 |= 4u;
    v4 |= 8 * (unsigned __int8)getinf_flag();
  }
  v5 = v4 | (32 * (unsigned __int8)getinf_flag());
  v9 = v5;
  if ( (dword_24412C & 0x80000) != 0 )
  {
    LOBYTE(v9) = v5 | 0x80;
    v5 = v9;
  }
  if ( (int)sub_CDFC0(v3, a2, v5, v6, v7, v8, v30) > 0 )
  {
    v10 = dbg;
    p_s2 = (void *)&byte_6;
    v34 = -1;
    v31 = 0x400000028LL;
    v12 = (char *)dbg;
    s2 = nullptr;
    v33 = 0;
    if ( (unsigned int)sub_9E0A0() )
    {
      if ( v34 < 0 )
      {
        if ( SHIDWORD(v31) <= 4 )
          goto LABEL_13;
        goto LABEL_21;
      }
    }
    else
    {
      v16 = *(void **)(v10 + 8);
      if ( v16 && (v12 = *(char **)(v10 + 8), v17 = strlen(v12), (v18 = v17) != 0) )
      {
        v12 = s2;
        v28 = v17 + 1;
        if ( *((_QWORD *)&v33 + 1) < v17 + 1 )
        {
          s2 = (char *)qvector_reserve();
          v12 = s2;
        }
        p_s2 = v16;
        *(_QWORD *)&v33 = v28;
        memmove(v12, v16, v18);
        s2[v18] = 0;
      }
      else
      {
        *(_QWORD *)&v33 = 0;
      }
      HIDWORD(v31) = -1;
      if ( v34 < 0 )
        goto LABEL_13;
    }
    p_s2 = &qword_20;
    v12 = (_BYTE *)(&dword_0 + 3);
    setinf_flag();
    if ( SHIDWORD(v31) > 4 )
    {
LABEL_21:
      p_s2 = &byte_4;
      v12 = (_BYTE *)(&dword_0 + 3);
      setinf_flag();
    }
LABEL_13:
    if ( (unsigned __int64)v33 <= 1 )
      goto LABEL_16;
    p_s2 = s2;
    v12 = (char *)s1;
    if ( xmmword_251308 )
    {
      v12 = qword_251300;
      if ( !strcmp(qword_251300, s2) )
        goto LABEL_16;
    }
    else if ( !strcmp(s1, s2) )
    {
      goto LABEL_16;
    }
    v12 = (char *)dbg;
    p_s2 = &s2;
    sub_D6770(dbg, (__int64)&s2, 0);
LABEL_16:
    sub_DDAB0((__int64)v12, (__int64)p_s2, v13, v14);
    dword_25153C = sub_C3500(dword_24411C);
    sub_CB8A0(0);
    sub_CB8A0(*(_BYTE *)(dbg + 33LL) >> 7);
    v15 = dbg != 0;
    sub_10AC80(1, v15);
    TView::disableCommand((TView *)unk_24DF86, v15);
    if ( HIDWORD(v31) == 4 || HIDWORD(v31) == 8 || HIDWORD(v31) == 2 )
    {
      if ( byte_2515A9 || (unsigned __int8)is_miniidb() )
      {
        getinf();
        setinf();
      }
      else
      {
        v29 = (unsigned __int8)getinf_flag() == 0 ? 16 : 32;
        if ( 8 * HIDWORD(v31) != v29 )
          sub_92120(
            (__int64)"AUTOHIDE NONE\n"
                     "The current database is for a %d-bit application\n"
                     "but the debugged application (pid=%d) is %d-bit.\n"
                     "Please check that you are running the correct application.",
            v29,
            v3,
            8 * HIDWORD(v31));
      }
    }
    else if ( HIDWORD(v31) != -1 )
    {
      sub_92120((__int64)"AUTOHIDE NONE\nUnexpected addrsize of the debugged program: %d", HIDWORD(v31));
    }
    if ( !(unsigned int)getinf() && (unsigned __int8)is_miniidb() )
      setinf();
    if ( (getinf() & 0xF) == 0 )
    {
      v19 = getinf();
      if ( v19 <= 0x17 )
      {
        if ( byte_1D3B50[v19] )
          setinf();
      }
    }
    sub_DAC80(-1, 1);
    if ( s2 )
    {
      *(_QWORD *)&v33 = 0;
      qfree();
    }
    return 1;
  }
  if ( byte_2515AA )
    sub_C3090(v3, a2);
  return (unsigned int)-1;
}

