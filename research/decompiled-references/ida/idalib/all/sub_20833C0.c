_QWORD *__fastcall sub_20833C0(
        _QWORD *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        unsigned int a9,
        int a10)
{
  __int64 v12; // r14
  int v13; // eax
  int v14; // r8d
  unsigned int v15; // eax
  __int64 *v16; // rsi
  int v17; // edi
  __int64 v18; // rdx
  unsigned __int8 v19; // cl
  _QWORD *v20; // rcx
  int v21; // r9d
  __int64 v22; // r11
  _QWORD *v23; // r15
  _QWORD *v24; // rdx
  _QWORD *v25; // r15
  __int64 v26; // r9
  _QWORD *v27; // rsi
  __int8 v28; // dl
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int16 v31; // ax
  char v32; // r12
  __int64 v34; // r9
  _QWORD *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rcx
  bool v40; // zf
  __m128i *v41; // rax
  _QWORD *v42; // rcx
  _QWORD *v43; // r11
  __int64 v44; // rcx
  __m128i *v45; // rax
  __m128i *v46; // rax
  _BYTE *v47; // rax
  __m128i *v48; // rax
  _QWORD *v49; // r9
  char *v50; // r8
  _QWORD *v51; // r9
  __m128i v52; // xmm5
  __m128i v53; // xmm6
  __m128i v54; // xmm2
  __m128i v55; // xmm3
  __int16 v56; // r9
  __int64 v57; // [rsp-8h] [rbp-1B0h]
  __int64 v58; // [rsp+0h] [rbp-1A8h]
  int v60; // [rsp+8h] [rbp-1A0h]
  double v61; // [rsp+10h] [rbp-198h] BYREF
  __int8 v62; // [rsp+1Bh] [rbp-18Dh]
  int v63; // [rsp+1Ch] [rbp-18Ch]
  __int64 v64; // [rsp+20h] [rbp-188h]
  __int64 v65; // [rsp+28h] [rbp-180h]
  __int16 v66; // [rsp+32h] [rbp-176h]
  int v67; // [rsp+34h] [rbp-174h]
  unsigned __int64 v68; // [rsp+38h] [rbp-170h]
  _QWORD *p_src; // [rsp+40h] [rbp-168h]
  signed __int64 v70; // [rsp+48h] [rbp-160h]
  char *v71; // [rsp+50h] [rbp-158h]
  _QWORD *v72; // [rsp+58h] [rbp-150h]
  __m128i v73; // [rsp+60h] [rbp-148h] BYREF
  __m128i v74; // [rsp+70h] [rbp-138h] BYREF
  __m128i v75; // [rsp+80h] [rbp-128h] BYREF
  __int64 v76; // [rsp+90h] [rbp-118h]
  __int8 v77; // [rsp+A7h] [rbp-101h] BYREF
  char *v78; // [rsp+A8h] [rbp-100h] BYREF
  _QWORD *v79; // [rsp+B0h] [rbp-F8h] BYREF
  _QWORD *v80; // [rsp+B8h] [rbp-F0h] BYREF
  _QWORD *v81; // [rsp+C0h] [rbp-E8h] BYREF
  _QWORD *src; // [rsp+C8h] [rbp-E0h] BYREF
  __m128 v83; // [rsp+D0h] [rbp-D8h] BYREF
  unsigned __int64 v84; // [rsp+E0h] [rbp-C8h]
  int v85; // [rsp+E8h] [rbp-C0h]
  __int16 v86; // [rsp+ECh] [rbp-BCh] BYREF
  char v87[2]; // [rsp+EEh] [rbp-BAh] BYREF
  void *ptr[2]; // [rsp+F0h] [rbp-B8h] BYREF
  _OWORD v89[3]; // [rsp+100h] [rbp-A8h] BYREF
  __m128i v90; // [rsp+130h] [rbp-78h] BYREF
  __m128i v91; // [rsp+140h] [rbp-68h]
  __m128i v92; // [rsp+150h] [rbp-58h]
  __m128i si128; // [rsp+160h] [rbp-48h]

  v12 = *a1;
  *(_QWORD *)&v61 = a5;
  v67 = a10;
  if ( a3 >= (unsigned int)&stru_10000 )
    LOWORD(a3) = 0;
  v63 = a6;
  v58 = a7 & 0x1FFFFFFFFFFFFFFFLL;
  v66 = a3;
  v62 = a8 & 7;
  if ( a9 )
  {
LABEL_30:
    v26 = 1;
    ptr[0] = v89;
    *(_QWORD *)&v89[0] = a4;
    ptr[1] = (void *)0x200000001LL;
    if ( *(_QWORD *)&v61 )
    {
      *((double *)v89 + 1) = v61;
      v26 = 2;
      LODWORD(ptr[1]) = 2;
    }
    v60 = v26;
    v25 = (_QWORD *)sub_20B4330(24, v26, a9);
    v27 = a1;
    sub_20B2FD0((_DWORD)v25, (_DWORD)a1, 6, a9, (unsigned int)v89, v60, 0, 0);
    v28 = v62;
    v29 = v58 | v25[2] & 0xE000000000000000LL;
    v25[2] = v29;
    *((_BYTE *)v25 + 23) = (32 * v28) | HIBYTE(v29) & 0x1F;
    v30 = v57;
    if ( a7 )
    {
      v27 = (_QWORD *)(a7 + 1);
      sub_20922D0(a1, a7 + 1, v57);
    }
    v31 = v66;
    *((_DWORD *)v25 + 1) = a2;
    v32 = v63;
    *((_WORD *)v25 + 1) = v31;
    *((_BYTE *)v25 + 1) = *((_BYTE *)v25 + 1) & 0x7F | (v32 << 7);
    v81 = v25;
    if ( a9 )
    {
      if ( a9 != 1 )
        goto LABEL_38;
      sub_20AC2A0(v25, v27, v30);
LABEL_37:
      v25 = v81;
LABEL_38:
      if ( ptr[0] != v89 )
        free(ptr[0]);
      return v25;
    }
    if ( (unsigned __int8)sub_207D690((__int64 *)(v12 + 592), (__int64 *)&v81, &src) )
    {
      sub_20819C0(&v83, src, (_QWORD *)(*(_QWORD *)(v12 + 592) + 8LL * *(unsigned int *)(v12 + 608)), v12 + 592, 1);
      goto LABEL_37;
    }
    v35 = src;
    v36 = (unsigned int)(*(_DWORD *)(v12 + 600) + 1);
    v37 = *(unsigned int *)(v12 + 608);
    v83.m128_u64[0] = (unsigned __int64)src;
    v38 = (unsigned int)(4 * v36);
    if ( (unsigned int)v38 >= 3 * (int)v37 )
    {
      sub_20831E0(v12 + 592, 2 * v37, v36, (unsigned int)(2 * v37), v38, v34);
    }
    else
    {
      v39 = (unsigned int)(v37 - *(_DWORD *)(v12 + 604) - v36);
      if ( (unsigned int)v39 > (unsigned int)v37 >> 3 )
      {
LABEL_44:
        v40 = *v35 == -4096;
        *(_DWORD *)(v12 + 600) = v36;
        if ( !v40 )
          --*(_DWORD *)(v12 + 604);
        *v35 = v81;
        src = v35;
        sub_20819C0(&v83, v35, (_QWORD *)(*(_QWORD *)(v12 + 592) + 8 * v37), v12 + 592, 1);
        goto LABEL_37;
      }
      sub_20831E0(v12 + 592, v37, v36, v39, v38, v34);
    }
    sub_207D690((__int64 *)(v12 + 592), (__int64 *)&v81, &v83);
    v37 = *(unsigned int *)(v12 + 608);
    v35 = (_QWORD *)v83.m128_u64[0];
    LODWORD(v36) = *(_DWORD *)(v12 + 600) + 1;
    goto LABEL_44;
  }
  v85 = a2;
  v84 = v58 | v84 & 0xE000000000000000LL;
  v83 = _mm_loadh_ps(&v61);
  v86 = a3;
  HIBYTE(v84) = (32 * (a8 & 7)) | HIBYTE(v84) & 0x1F;
  v87[0] = v63;
  v64 = v12 + 592;
  v65 = *(_QWORD *)(v12 + 592);
  LODWORD(v68) = *(_DWORD *)(v12 + 608);
  if ( !(_DWORD)v68 )
  {
LABEL_25:
    sub_20819C0(
      (__m128 *)ptr,
      (_QWORD *)(v65 + 8LL * (unsigned int)v68),
      (_QWORD *)(v65 + 8LL * (unsigned int)v68),
      v64,
      1);
    v23 = ptr[0];
    goto LABEL_26;
  }
  if ( v84 )
  {
    *(_OWORD *)ptr = 0;
    memset(v89, 0, sizeof(v89));
    v90 = 0;
    v91 = 0;
    v92 = 0;
    v78 = nullptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
    v41 = sub_A0C4A0((__m128i *)ptr, &v78, ptr, (unsigned __int64)&v90, a2);
    v42 = v78;
    v43 = (__int64 *)((char *)v41->m128i_i64 + 2);
    LOWORD(src) = v86;
    if ( &v41->m128i_i16[1] <= (__int16 *)&v90 )
    {
      v41->m128i_i16[0] = v86;
      p_src = &src;
    }
    else
    {
      v70 = (signed __int64)v78;
      p_src = &src;
      v71 = (char *)((char *)&v90 - (char *)v41);
      memcpy(v41, &src, (char *)&v90 - (char *)v41);
      if ( v70 )
      {
        sub_9B6F20((unsigned __int64 *)&v90, ptr);
        v44 = v70 + 64;
      }
      else
      {
        sub_A09B80((unsigned __int64 *)&v73, ptr, si128.m128i_u64[1]);
        v54 = _mm_loadu_si128(&v74);
        v44 = 64;
        v55 = _mm_loadu_si128(&v75);
        v90 = _mm_loadu_si128(&v73);
        v91 = v54;
        v92 = v55;
        si128.m128i_i64[0] = v76;
      }
      v72 = (_QWORD *)v44;
      v70 = (signed __int64)ptr + 2LL - (_QWORD)v71;
      memcpy(ptr, &v71[(_QWORD)p_src], 2LL - (_QWORD)v71);
      v42 = v72;
      v43 = (_QWORD *)v70;
    }
    v79 = v42;
    v45 = sub_206E9E0((__m128i *)ptr, &v79, v43, (unsigned __int64)&v90, v83.m128_i64[0]);
    v80 = v79;
    v46 = sub_206E9E0((__m128i *)ptr, &v80, v45, (unsigned __int64)&v90, v83.m128_i64[1]);
    v81 = v80;
    v47 = sub_207A9D0((__m128i *)ptr, &v81, v46, (unsigned __int64)&v90, v87[0]);
    src = v81;
    v48 = sub_A232E0((__m128i *)ptr, p_src, v47, (unsigned __int64)&v90, v58);
    v49 = src;
    v50 = &v48->m128i_i8[1];
    v77 = v62;
    if ( &v48->m128i_i8[1] > (__int8 *)&v90 )
    {
      p_src = src;
      v71 = &v77;
      v70 = (char *)&v90 - (char *)v48;
      memcpy(v48, &v77, (char *)&v90 - (char *)v48);
      if ( p_src )
      {
        sub_9B6F20((unsigned __int64 *)&v90, ptr);
        v51 = p_src + 8;
      }
      else
      {
        sub_A09B80((unsigned __int64 *)&v73, ptr, si128.m128i_u64[1]);
        v52 = _mm_loadu_si128(&v74);
        v51 = (_QWORD *)&dword_40;
        v53 = _mm_loadu_si128(&v75);
        v90 = _mm_loadu_si128(&v73);
        v91 = v52;
        v92 = v53;
        si128.m128i_i64[0] = v76;
      }
      v72 = v51;
      p_src = (void **)((char *)ptr + 1 - v70);
      memcpy(ptr, &v71[v70], 1 - v70);
      v49 = v72;
      v50 = (char *)p_src;
    }
    else
    {
      v48->m128i_i8[0] = v62;
    }
    v13 = sub_206C6F0((char *)ptr, (__int64)v49, v50, v90.m128i_i8);
  }
  else
  {
    v13 = sub_207CEB0(a2, &v86, (__int64 *)&v83, &v83.m128_i64[1], v87);
  }
  v14 = v68 - 1;
  v15 = (v68 - 1) & v13;
  v16 = (__int64 *)(v65 + 8LL * v15);
  v17 = 1;
  v18 = *v16;
  if ( *v16 == -4096 )
  {
LABEL_24:
    v65 = *(_QWORD *)(v12 + 592);
    LODWORD(v68) = *(_DWORD *)(v12 + 608);
    goto LABEL_25;
  }
  while ( 1 )
  {
    if ( v18 != -8192 && v85 == *(_DWORD *)(v18 + 4) && v86 == *(_WORD *)(v18 + 2) )
    {
      v19 = *(_BYTE *)(v18 - 16);
      if ( (v19 & 2) != 0 )
      {
        v20 = *(_QWORD **)(v18 - 32);
        if ( *v20 != v83.m128_u64[0] )
          goto LABEL_9;
        v21 = *(_DWORD *)(v18 - 24);
        v68 = v83.m128_u64[1];
      }
      else
      {
        v20 = (_QWORD *)(v18 + -16 - 8LL * ((v19 >> 2) & 0xF));
        if ( v83.m128_u64[0] != *v20 )
          goto LABEL_9;
        v56 = *(_WORD *)(v18 - 16) >> 6;
        v68 = v83.m128_u64[1];
        v21 = v56 & 0xF;
      }
      v22 = 0;
      if ( v21 == 2 )
        v22 = v20[1];
      if ( v68 == v22
        && v87[0] == (unsigned __int8)BYTE1(*(_QWORD *)v18) >> 7
        && (v84 & 0x1FFFFFFFFFFFFFFFLL) == (*(_QWORD *)(v18 + 16) & 0x1FFFFFFFFFFFFFFFLL)
        && HIBYTE(v84) >> 5 == *(_BYTE *)(v18 + 23) >> 5 )
      {
        break;
      }
    }
LABEL_9:
    v15 = v14 & (v17 + v15);
    v16 = (__int64 *)(v65 + 8LL * v15);
    v18 = *v16;
    if ( *v16 == -4096 )
      goto LABEL_24;
    ++v17;
  }
  sub_20819C0((__m128 *)ptr, v16, (_QWORD *)(*(_QWORD *)(v12 + 592) + 8LL * *(unsigned int *)(v12 + 608)), v64, 1);
  v23 = ptr[0];
LABEL_26:
  v24 = (_QWORD *)(*(_QWORD *)(v12 + 592) + 8LL * *(unsigned int *)(v12 + 608));
  sub_20819C0((__m128 *)ptr, v24, v24, v64, 1);
  if ( ptr[0] == v23 || (v25 = (_QWORD *)*v23) == nullptr )
  {
    if ( (_BYTE)v67 )
    {
      v12 = *a1;
      goto LABEL_30;
    }
    return nullptr;
  }
  return v25;
}
