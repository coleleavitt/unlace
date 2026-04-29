__int64 __fastcall sub_18AD00(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  bool v5; // zf
  __int64 v6; // r12
  int v7; // eax
  int v8; // r14d
  _BYTE *v9; // rdx
  unsigned __int8 v10; // r12
  _BYTE *v11; // rax
  unsigned __int64 v12; // r13
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  char v16; // r15
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // r15
  int v21; // r13d
  __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // r14d
  __m128i v26; // xmm0
  __m128i *v27; // rax
  __int64 v28; // r15
  __m128i v29; // xmm0
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rbp
  __int64 v38; // rbx
  __int64 *v39; // rax
  __int64 v40; // rdi
  int v41; // r15d
  __int64 v42; // r8
  int v43; // eax
  size_t v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r12
  __int64 v47; // rax
  unsigned __int64 v48; // r10
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  _BYTE *v52; // rax
  unsigned __int8 nc; // [rsp+8h] [rbp-290h]
  int n; // [rsp+8h] [rbp-290h]
  size_t na; // [rsp+8h] [rbp-290h]
  size_t nb; // [rsp+8h] [rbp-290h]
  __m128i v57; // [rsp+10h] [rbp-288h] BYREF
  __int64 v58; // [rsp+20h] [rbp-278h]
  __int64 v59; // [rsp+28h] [rbp-270h]
  _BYTE *v60; // [rsp+30h] [rbp-268h]
  char *v61; // [rsp+38h] [rbp-260h]
  _BYTE *v62; // [rsp+40h] [rbp-258h] BYREF
  __int128 v63; // [rsp+48h] [rbp-250h]
  __int64 v64; // [rsp+60h] [rbp-238h] BYREF
  __int128 v65; // [rsp+68h] [rbp-230h]
  unsigned __int8 v66[16]; // [rsp+80h] [rbp-218h] BYREF
  __m128i v67; // [rsp+90h] [rbp-208h]
  __int64 v68; // [rsp+A0h] [rbp-1F8h]
  __m128i v69; // [rsp+A8h] [rbp-1F0h] BYREF
  int v70; // [rsp+B8h] [rbp-1E0h]
  __int64 v71; // [rsp+C0h] [rbp-1D8h]
  int v72; // [rsp+C8h] [rbp-1D0h]
  __int64 src; // [rsp+D0h] [rbp-1C8h] BYREF
  __int64 v74; // [rsp+D8h] [rbp-1C0h]
  int v75; // [rsp+E0h] [rbp-1B8h]
  char v76; // [rsp+E4h] [rbp-1B4h]
  unsigned __int64 v77; // [rsp+E8h] [rbp-1B0h] BYREF
  __int128 v78; // [rsp+F0h] [rbp-1A8h] BYREF
  __int128 v79; // [rsp+100h] [rbp-198h]
  __int64 v80; // [rsp+110h] [rbp-188h]
  __int128 v81; // [rsp+118h] [rbp-180h]
  __int128 v82; // [rsp+128h] [rbp-170h]
  __int128 v83; // [rsp+138h] [rbp-160h]
  __m128i si128; // [rsp+148h] [rbp-150h]
  int v85; // [rsp+158h] [rbp-140h]
  _BYTE v86[4]; // [rsp+160h] [rbp-138h] BYREF
  int v87; // [rsp+164h] [rbp-134h]
  __int64 v88; // [rsp+170h] [rbp-128h]
  char v89; // [rsp+178h] [rbp-120h] BYREF
  __int64 v90; // [rsp+180h] [rbp-118h]
  __m128i v91; // [rsp+188h] [rbp-110h]
  int v92; // [rsp+1A8h] [rbp-F0h]
  char v93[4]; // [rsp+1B0h] [rbp-E8h] BYREF
  int v94; // [rsp+1B4h] [rbp-E4h]
  __int64 v95; // [rsp+1B8h] [rbp-E0h]
  __int64 v96; // [rsp+1C0h] [rbp-D8h]
  _BYTE v97[24]; // [rsp+200h] [rbp-98h] BYREF
  _BYTE v98[8]; // [rsp+250h] [rbp-48h] BYREF
  unsigned __int64 v99; // [rsp+258h] [rbp-40h]

  v99 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(v3 + 312) <= 1 )
    return 0;
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 1344) + 8LL) )
  {
    v17 = *(_QWORD *)(a2 + 24);
    LODWORD(v74) = 0;
    src = v17;
    if ( (sub_137670(v3, (__int64)&src) & 7) != 0 )
      return 0;
  }
  v62 = nullptr;
  v5 = *(_DWORD *)a2 == 1;
  v63 = 0;
  if ( !v5 )
    return 0;
  v6 = a2;
  v7 = -1;
  v8 = 0;
  while ( *(_BYTE *)(v6 + 32) == 2 )
  {
    if ( *(_BYTE *)(v6 + 48) != 1 )
      break;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 52LL) != *(_DWORD *)(v6 + 56) )
      break;
    v41 = *(_DWORD *)(v6 + 72);
    if ( v7 != -1 && v7 != v41 )
      break;
    v42 = *(_QWORD *)(v6 + 8);
    if ( !v42 )
      break;
    if ( *(_DWORD *)v42 != 12 )
      break;
    if ( *(_BYTE *)(v42 + 32) != 1 )
      break;
    if ( *(_DWORD *)(v42 + 40) != v41 )
      break;
    v43 = *(_DWORD *)(v6 + 68);
    v57.m128i_i64[0] = *(_QWORD *)(v6 + 8);
    n = v43;
    if ( !(unsigned __int8)sub_11FD80((char *)(v42 + 48), &src, 1u)
      || n != src
      || *(_BYTE *)(v57.m128i_i64[0] + 64) != 1
      || *(_DWORD *)(v57.m128i_i64[0] + 72) != v41 )
    {
      break;
    }
    ++v8;
    src = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL), *(unsigned int *)(v6 + 36), 0);
    v44 = *(int *)(v6 + 68);
    v45 = v57.m128i_i64[0];
    na = v44;
    if ( *(_DWORD *)(v6 + 68) )
    {
      v46 = v63;
      v47 = v63;
      v48 = v63 + v44;
      if ( !__CFADD__((_QWORD)v63, v44) )
        goto LABEL_73;
      if ( (unsigned __int64)v63 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v48 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_73:
        if ( *((_QWORD *)&v63 + 1) < v48 )
        {
          v58 = v57.m128i_i64[0];
          v57.m128i_i64[0] = v48;
          v52 = (_BYTE *)qvector_reserve((__int64)&v62, (__int64)v62, v48, 1);
          v45 = v58;
          v48 = v57.m128i_i64[0];
          v62 = v52;
          v47 = v63;
        }
        v58 = v45;
        v57.m128i_i64[0] = v48;
        memset(&v62[v47], 0, v48 - v47);
        v45 = v58;
        *(_QWORD *)&v63 = v57.m128i_i64[0];
      }
      else if ( (_QWORD)v63 != 0x7FFFFFFFFFFFFFFFLL )
      {
        *(_QWORD *)&v63 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v57.m128i_i64[0] = v45;
      memcpy(&v62[v46], &src, na);
      v45 = v57.m128i_i64[0];
    }
    v6 = *(_QWORD *)(v45 + 8);
    if ( !v6 || *(_DWORD *)v6 != 1 )
      break;
    v7 = v41;
  }
  if ( v8 <= 2 )
  {
    result = 0;
  }
  else
  {
    v9 = v62;
    v59 = v63;
    v10 = *v62;
    if ( &v62[(_QWORD)v63] == v62 )
    {
LABEL_27:
      v64 = 0;
      LODWORD(v58) = 2;
      v65 = 0;
    }
    else
    {
      v11 = v62;
      while ( v10 == *v11 )
      {
        if ( &v62[(_QWORD)v63] == ++v11 )
          goto LABEL_27;
      }
      v64 = 0;
      v65 = 0;
      if ( v59 == -10 || (v51 = qvector_reserve((__int64)&v64, 0, v59 + 10, 1), v9 = v62, v64 = v51, (_QWORD)v63) )
      {
        v12 = 0;
        while ( 1 )
        {
          v16 = v9[v12];
          if ( v16 == 92 || v16 == 34 || (unsigned __int8)(v16 - 32) > 0x5Eu )
          {
            sub_FAAD0(&v64);
            if ( ++v12 >= (unsigned __int64)v63 )
              break;
          }
          else
          {
            v13 = v65;
            v14 = 2;
            if ( (_QWORD)v65 )
            {
              v14 = v65 + 1;
              v13 = v65 - 1;
            }
            v15 = v64;
            if ( *((_QWORD *)&v65 + 1) < v14 )
            {
              v57.m128i_i64[0] = v13;
              nb = v14;
              v64 = qvector_reserve((__int64)&v64, v64, v14, 1);
              v13 = v57.m128i_i64[0];
              v15 = v64;
              v14 = nb;
            }
            *(_QWORD *)&v65 = v14;
            ++v12;
            *(_BYTE *)(v15 + v13) = v16;
            *(_BYTE *)(v64 + v13 + 1) = 0;
            if ( v12 >= (unsigned __int64)v63 )
              break;
          }
          v9 = v62;
        }
      }
      LODWORD(v58) = 5;
    }
    v74 = 0;
    src = 0xFFFFFFFF00000000LL;
    v77 = 0xFFFFFFFF00000000LL;
    v19 = *(_QWORD *)(a2 + 8);
    v78 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v75 = 0;
    v76 = 0;
    v80 = 0;
    v85 = 16;
    v82 = -1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_424810);
    v20 = *(_QWORD *)(v19 + 8);
    if ( 2 * v8 - 2 > 0 )
    {
      v21 = 2 * v8 - 2;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      while ( 1 )
      {
        if ( v23 < v24 + 1 )
        {
          *((_QWORD *)&v78 + 1) = qvector_reserve((__int64)&v78 + 8, v22, v24 + 1, 8);
          v24 = v79;
          v22 = *((_QWORD *)&v78 + 1);
        }
        *(_QWORD *)(v22 + 8 * v24) = v20;
        ++v25;
        v24 = v79 + 1;
        *(_QWORD *)&v79 = v79 + 1;
        v20 = *(_QWORD *)(v20 + 8);
        if ( v25 == v21 )
          break;
        v23 = *((_QWORD *)&v79 + 1);
        v22 = *((_QWORD *)&v78 + 1);
      }
    }
    v26 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v60 = v98;
    v27 = (__m128i *)v86;
    do
    {
      v27->m128i_i32[1] = -1;
      v27 += 5;
      v27[-5].m128i_i16[0] = 0;
      v27[-5].m128i_i16[1] = 0;
      v27[-5].m128i_i64[1] = 0;
      v27[-4] = v26;
      v27[-3].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v27[-3] + 8) = 0;
      v27[-2].m128i_i32[2] = 0;
      v27[-1].m128i_i64[0] = 0;
      v27[-1].m128i_i32[2] = 0;
    }
    while ( v98 != (_BYTE *)v27 );
    v57.m128i_i64[0] = (__int64)v97;
    sub_123A40((__int64)v66, (unsigned __int8 *)(a2 + 64), (__int64)v98, (__int64)v97);
    v68 = 0;
    v70 = 0;
    v67 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v71 = 0;
    v72 = 0;
    v69 = 0;
    sub_125180((__int64)v86, v66);
    v88 = v67.m128i_i64[0];
    v61 = &v89;
    copy_tinfo_t();
    v28 = v68;
    v68 = 0;
    v29 = _mm_loadu_si128(&v69);
    v69 = 0;
    if ( v90 )
    {
      v57 = v29;
      v91.m128i_i64[0] = 0;
      qfree(v90);
      v29 = _mm_load_si128(&v57);
    }
    v90 = v28;
    v91 = v29;
    copy_argloc();
    v92 = v72;
    cleanup_argloc();
    if ( v68 )
    {
      v69.m128i_i64[0] = 0;
      qfree(v68);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v66);
    v88 = *(_QWORD *)(a2 + 24);
    v57.m128i_i64[0] = (__int64)v97;
    copy_tinfo_t();
    if ( (_DWORD)v58 == 5 )
    {
      v93[0] = 3;
      v49 = v64;
      if ( (unsigned __int64)v65 < *((_QWORD *)&v65 + 1) )
      {
        if ( v64 )
        {
          if ( (_QWORD)v65 )
          {
            v57.m128i_i64[0] = (__int64)v97;
            v49 = qrealloc();
            if ( !v49 )
              v49 = v64;
          }
        }
      }
      v95 = v49;
      v65 = 0;
      v94 = v87;
      v50 = *(_QWORD *)(a2 + 24);
      v64 = 0;
      v96 = v50;
      v57.m128i_i64[0] = (__int64)v97;
      copy_tinfo_t();
    }
    else
    {
      v30 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL);
      v57.m128i_i64[0] = (__int64)v97;
      sub_120A10((__int64)v93, v30, v10, 1, -1, 0);
      *(_QWORD *)v66 = 34;
      copy_tinfo_t();
      clear_tinfo_t();
    }
    v31 = *(_QWORD *)(a1 + 64);
    v32 = v59;
    v57.m128i_i64[0] = (__int64)v97;
    sub_120A10((__int64)v97, *(_QWORD *)(v31 + 1504), v59, *(unsigned __int8 *)(*(_QWORD *)(v31 + 1496) + 130LL), -1, 0);
    *(_QWORD *)v66 = 39;
    copy_tinfo_t();
    clear_tinfo_t();
    sub_186120(a1, a2, (__int64)&src, 3, v86, v58);
    v33 = *(_QWORD *)(a2 + 8);
    v34 = (__int64)v60;
    *(_QWORD *)(*(_QWORD *)(v33 + 56) + 16LL) = v32;
    do
    {
      v34 -= 80;
      cleanup_argloc();
      v35 = *(_QWORD *)(v34 + 32);
      if ( v35 )
      {
        *(_QWORD *)(v34 + 40) = 0;
        qfree(v35);
      }
      clear_tinfo_t();
      sub_11CDA0(v34);
    }
    while ( (_BYTE *)v34 != v86 );
    clear_tinfo_t();
    v36 = v80;
    if ( v80 )
    {
      v37 = v81;
      if ( (_QWORD)v81 )
      {
        v38 = 0;
        do
        {
          v39 = (__int64 *)(v36 + 40 * v38);
          v40 = *v39;
          if ( *v39 )
          {
            v39[1] = 0;
            qfree(v40);
            v36 = v80;
          }
          ++v38;
        }
        while ( v37 != v38 );
      }
      *(_QWORD *)&v81 = 0;
      qfree(v36);
    }
    if ( *((_QWORD *)&v78 + 1) )
    {
      *(_QWORD *)&v79 = 0;
      qfree(*((__int64 *)&v78 + 1));
    }
    sub_11CDA0((__int64)&v77);
    sub_11CDA0((__int64)&src);
    if ( v64 )
    {
      *(_QWORD *)&v65 = 0;
      qfree(v64);
    }
    result = 1;
  }
  if ( v62 )
  {
    nc = result;
    *(_QWORD *)&v63 = 0;
    qfree((__int64)v62);
    return nc;
  }
  return result;
}
