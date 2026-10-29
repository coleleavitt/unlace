__int64 __fastcall sub_2579E0(
        unsigned int a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // r13d
  unsigned int v11; // r12d
  int v12; // ebx
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  double v17; // xmm4_8
  double v18; // xmm5_8
  int v19; // eax
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22; // rbx
  void *p_s2; // rsi
  int v24; // eax
  double v25; // xmm4_8
  double v26; // xmm5_8
  double v27; // xmm4_8
  double v28; // xmm5_8
  __int64 v29; // rcx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  void *v38; // r14
  size_t v39; // rax
  size_t v40; // rbx
  int v41; // eax
  unsigned int v42; // eax
  unsigned __int8 v43; // si
  int *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __m128i *v51; // rbx
  __int64 v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // r15
  __int64 v55; // rax
  __int64 v56; // rdi
  char *v57; // rdi
  size_t v58; // r15
  __int64 v59; // rsi
  int v60; // eax
  __int64 v61; // r8
  __int64 v62; // r9
  __m128 v63; // xmm4
  __m128 v64; // xmm5
  __int64 v65; // rcx
  int v66; // [rsp+0h] [rbp-158h]
  char v67; // [rsp+0h] [rbp-158h]
  __int64 v68; // [rsp+10h] [rbp-148h] BYREF
  char *s2; // [rsp+18h] [rbp-140h] BYREF
  __int128 v70; // [rsp+20h] [rbp-138h]
  int v71; // [rsp+30h] [rbp-128h]
  __int64 (__fastcall **v72)(); // [rsp+40h] [rbp-118h] BYREF
  __int64 v73; // [rsp+48h] [rbp-110h]
  __int128 v74; // [rsp+50h] [rbp-108h]
  __int64 v75; // [rsp+60h] [rbp-F8h]
  const char *v76; // [rsp+68h] [rbp-F0h]
  int v77; // [rsp+70h] [rbp-E8h]
  __m128i v78; // [rsp+78h] [rbp-E0h] BYREF
  int v79; // [rsp+88h] [rbp-D0h]
  char v80; // [rsp+90h] [rbp-C8h] BYREF
  char v81; // [rsp+D8h] [rbp-80h] BYREF
  int v82; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v83; // [rsp+F8h] [rbp-60h]
  __int128 v84; // [rsp+100h] [rbp-58h]
  unsigned __int64 v85; // [rsp+118h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  if ( !dbg )
    return (unsigned int)-4;
  v10 = dword_8CC5F0;
  if ( dword_8CC5F0 )
    return (unsigned int)-4;
  v11 = a1;
  if ( !(unsigned __int8)sub_257390(0, a3, a4, a5, a6, a7, a8, a9, a10) )
    return (unsigned int)-4;
  if ( (*(_BYTE *)(dbg + 36) & 2) == 0 )
    return (unsigned int)-3;
  if ( a1 == -1 )
  {
    v75 = 0;
    v72 = (__int64 (__fastcall **)())&stru_86F6A0;
    v45 = (int *)&v80;
    v73 = 0x803FF000004LL;
    v76 = "@0:1452[]\nChoose process to attach to";
    v74 = -1;
    a4 = (__m128)(unsigned __int64)&off_860150;
    v77 = 2;
    v79 = -1;
    v78 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_8602E0), (__m128i)(unsigned __int64)&off_860150);
    do
    {
      *(_QWORD *)v45 = 0;
      v45 += 6;
      *((_OWORD *)v45 - 1) = 0;
    }
    while ( v45 != &v82 );
    v82 = 0;
    v46 = HIDWORD(v73);
    v47 = ((HIDWORD(v73) >> 19) & 0x3F) - 1;
    if ( ((HIDWORD(v73) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v73) != 0xFF )
      {
        if ( !under_debugger )
          interr(3449, a2, HIDWORD(v73), v47, 0.0);
        BUG();
      }
      v46 = HIDWORD(v73) & 0xFE07FFFF;
      BYTE3(v73) = ((HIDWORD(v73) >> 19) & 0x3F) - 1;
      HIDWORD(v73) &= 0xFE07FFFF;
    }
    a3 = 0;
    v72 = proc_chooser_t___vtable;
    v83 = 0;
    LODWORD(v68) = -1;
    v84 = 0;
    v48 = sub_4AED50(&v72, &v68, v46, v47);
    v50 = v83;
    if ( v48 != -2 )
    {
      if ( v48 == -1 )
      {
        v11 = -2;
      }
      else if ( v48 < (unsigned __int64)v84 )
      {
        v11 = *(_DWORD *)(v83 + 32 * v48);
        v72 = proc_chooser_t___vtable;
        if ( !v83 )
          goto LABEL_56;
        v53 = v84;
        goto LABEL_69;
      }
    }
    v72 = proc_chooser_t___vtable;
    if ( !v83 )
    {
LABEL_56:
      v51 = (__m128i *)&v81;
      v72 = (__int64 (__fastcall **)())&stru_86F6A0;
      do
      {
        v52 = v51->m128i_i64[0];
        if ( v51->m128i_i64[0] )
        {
          v51->m128i_i64[1] = 0;
          *(double *)a3.m128_u64 = qfree(v52, (const char *)&v68, v49, v50);
        }
        v51 = (__m128i *)((char *)v51 - 24);
      }
      while ( &v78 != v51 );
      if ( v11 == -1 )
        return (unsigned int)-2;
      if ( v11 == -2 )
        return v10;
      goto LABEL_6;
    }
    v53 = v84;
    if ( !(_QWORD)v84 )
    {
LABEL_73:
      *(_QWORD *)&v84 = 0;
      *(double *)a3.m128_u64 = qfree(v50, (const char *)&v68);
      goto LABEL_56;
    }
LABEL_69:
    v54 = 0;
    do
    {
      v55 = v50 + 32 * v54;
      v56 = *(_QWORD *)(v55 + 8);
      if ( v56 )
      {
        *(_QWORD *)(v55 + 16) = 0;
        qfree(v56, (const char *)&v68);
        v50 = v83;
      }
      ++v54;
    }
    while ( v53 != v54 );
    goto LABEL_73;
  }
LABEL_6:
  v12 = (unsigned __int8)getinf_flag(3, 8);
  if ( !byte_8CC5F5 )
  {
    if ( (getinf(3) & 6) == 2 )
      v12 |= 4u;
    v12 |= 8 * (unsigned __int8)getinf_flag(3, 4);
  }
  if ( (*(_BYTE *)(dbg + 32) & 1) == 0 )
    v12 |= 2u;
  v13 = v12 | (32 * (unsigned __int8)getinf_flag(45, 16));
  v19 = v13;
  if ( (dword_8BA5B0 & 0x80000) != 0 )
  {
    LOBYTE(v19) = v13 | 0x80;
    v13 = v19;
  }
  if ( (int)sub_23ED00(v11, a2, v13, *(double *)a3.m128_u64, a4, a5, a6, v17, v18, a9, a10, v14, v15, v16, v66) > 0 )
  {
    v22 = dbg;
    p_s2 = &byte_6;
    v71 = -1;
    v68 = 0x800000028LL;
    s2 = nullptr;
    v70 = 0;
    if ( (unsigned int)sub_20CEA0(dbg, 6, &v68) )
    {
      v24 = v71;
      if ( v71 < 0 )
      {
        if ( SHIDWORD(v68) <= 4 )
          goto LABEL_15;
        goto LABEL_23;
      }
    }
    else
    {
      v38 = *(void **)(v22 + 8);
      if ( v38 && (v39 = strlen(*(const char **)(v22 + 8)), (v40 = v39) != 0) )
      {
        v57 = s2;
        v58 = v39 + 1;
        if ( *((_QWORD *)&v70 + 1) < v39 + 1 )
        {
          s2 = (char *)qvector_reserve(&s2, s2, v58, 1);
          v57 = s2;
        }
        p_s2 = v38;
        *(_QWORD *)&v70 = v58;
        memmove(v57, v38, v40);
        s2[v40] = 0;
      }
      else
      {
        *(_QWORD *)&v70 = 0;
      }
      v24 = v71;
      HIDWORD(v68) = -1;
      if ( v71 < 0 )
        goto LABEL_15;
    }
    p_s2 = &qword_20;
    setinf_flag(3, 32, v24 != 0);
    if ( SHIDWORD(v68) > 4 )
    {
LABEL_23:
      p_s2 = &byte_4;
      setinf_flag(3, 4, 1);
    }
LABEL_15:
    if ( (unsigned __int64)v70 <= 1 )
      goto LABEL_18;
    p_s2 = s2;
    if ( xmmword_8CC318 )
    {
      if ( !strcmp(qword_8CC310, s2) )
        goto LABEL_18;
    }
    else if ( !strcmp(&s1, s2) )
    {
      goto LABEL_18;
    }
    p_s2 = &s2;
    sub_2451C0(dbg, (__int64 *)&s2, 0);
LABEL_18:
    sub_24DA10((__m128)0LL);
    dword_8CC560 = sub_233C20(dword_8BA594);
    sub_23C5D0(0, (__int64)p_s2, (__m128)0LL, a4, a5, a6, v25, v26, a9, a10);
    sub_23C5D0(*(_BYTE *)(dbg + 33) >> 7, (__int64)p_s2, (__m128)0LL, a4, a5, a6, v27, v28, a9, a10);
    sub_24BA10((QT::QVariant *)((char *)&dword_0 + 1), 1, 1, 0.0, v29, v30, v31);
    switch ( HIDWORD(v68) )
    {
      case 4:
        v10 = 2;
        break;
      case 8:
        v10 = 6;
        break;
      case 2:
        break;
      default:
        if ( HIDWORD(v68) != -1 )
          sub_169630(
            (int)"AUTOHIDE NONE\nUnexpected addrsize of the debugged program: %d",
            HIDWORD(v68),
            v32,
            v33,
            v34,
            v35,
            (__m128)0LL,
            a4,
            a5,
            a6,
            v36,
            v37,
            a9,
            a10,
            v67);
LABEL_36:
        if ( !(unsigned int)getinf(5) && (unsigned __int8)is_miniidb() )
          setinf(5, *(unsigned __int8 *)(dbg + 81));
        if ( (getinf(57) & 0xF) == 0 )
        {
          v42 = getinf(5);
          if ( v42 <= 0x17 )
          {
            v43 = byte_5E1850[v42];
            if ( v43 )
              setinf(57, v43 | 0x80u);
          }
        }
        sub_231190(-1, 1);
        if ( s2 )
        {
          *(_QWORD *)&v70 = 0;
          qfree(s2, (_BYTE *)&dword_0 + 1);
        }
        return 1;
    }
    if ( byte_8CC5F5 || (unsigned __int8)is_miniidb() )
    {
      v41 = getinf(3);
      setinf(3, v10 | v41 & 0xFFFFFFF9);
    }
    else
    {
      v59 = 16;
      v60 = getinf(3) & 6;
      if ( v60 )
      {
        v59 = 64;
        if ( v60 == 2 )
          v59 = 32;
      }
      v65 = (unsigned int)(8 * HIDWORD(v68));
      if ( (_DWORD)v65 != (_DWORD)v59 )
        sub_169630(
          (int)"AUTOHIDE NONE\n"
               "The current database is for a %d-bit application\n"
               "but the debugged application (pid=%d) is %d-bit.\n"
               "Please check that you are running the correct application.",
          v59,
          v11,
          v65,
          v61,
          v62,
          (__m128)0LL,
          a4,
          a5,
          a6,
          v63,
          v64,
          a9,
          a10,
          v67);
    }
    goto LABEL_36;
  }
  if ( byte_8CC5F6 )
    sub_233440(a3, a4, a5, a6, v20, v21, a9, a10, v11, (const char *)(unsigned int)a2);
  return (unsigned int)-1;
}
