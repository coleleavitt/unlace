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
  __int64 v35; // rdx
  __int64 v36; // rbp
  __int64 v37; // rbx
  _QWORD *v38; // rax
  int v39; // r15d
  __int64 v40; // r8
  int v41; // eax
  size_t v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r12
  __int64 v45; // rax
  unsigned __int64 v46; // r10
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int8 nc; // [rsp+8h] [rbp-290h]
  int n; // [rsp+8h] [rbp-290h]
  size_t na; // [rsp+8h] [rbp-290h]
  size_t nb; // [rsp+8h] [rbp-290h]
  __m128i v55; // [rsp+10h] [rbp-288h] BYREF
  __int64 v56; // [rsp+20h] [rbp-278h]
  __int64 v57; // [rsp+28h] [rbp-270h]
  char *v58; // [rsp+30h] [rbp-268h]
  char *v59; // [rsp+38h] [rbp-260h]
  _BYTE *v60; // [rsp+40h] [rbp-258h]
  __int128 v61; // [rsp+48h] [rbp-250h]
  __int64 v62; // [rsp+60h] [rbp-238h] BYREF
  __int128 v63; // [rsp+68h] [rbp-230h]
  unsigned __int8 v64[16]; // [rsp+80h] [rbp-218h] BYREF
  __m128i v65; // [rsp+90h] [rbp-208h]
  __int64 v66; // [rsp+A0h] [rbp-1F8h]
  __m128i v67; // [rsp+A8h] [rbp-1F0h] BYREF
  int v68; // [rsp+B8h] [rbp-1E0h]
  __int64 v69; // [rsp+C0h] [rbp-1D8h]
  int v70; // [rsp+C8h] [rbp-1D0h]
  __int64 src; // [rsp+D0h] [rbp-1C8h] BYREF
  __int64 v72; // [rsp+D8h] [rbp-1C0h]
  int v73; // [rsp+E0h] [rbp-1B8h]
  char v74; // [rsp+E4h] [rbp-1B4h]
  unsigned __int64 v75; // [rsp+E8h] [rbp-1B0h] BYREF
  __int128 v76; // [rsp+F0h] [rbp-1A8h]
  __int128 v77; // [rsp+100h] [rbp-198h]
  __int64 v78; // [rsp+110h] [rbp-188h]
  __int128 v79; // [rsp+118h] [rbp-180h]
  __int128 v80; // [rsp+128h] [rbp-170h]
  __int128 v81; // [rsp+138h] [rbp-160h]
  __m128i si128; // [rsp+148h] [rbp-150h]
  int v83; // [rsp+158h] [rbp-140h]
  _BYTE v84[4]; // [rsp+160h] [rbp-138h] BYREF
  int v85; // [rsp+164h] [rbp-134h]
  __int64 v86; // [rsp+170h] [rbp-128h]
  char v87; // [rsp+178h] [rbp-120h] BYREF
  __int64 v88; // [rsp+180h] [rbp-118h]
  __m128i v89; // [rsp+188h] [rbp-110h]
  int v90; // [rsp+1A8h] [rbp-F0h]
  char v91[4]; // [rsp+1B0h] [rbp-E8h] BYREF
  int v92; // [rsp+1B4h] [rbp-E4h]
  __int64 v93; // [rsp+1B8h] [rbp-E0h]
  __int64 v94; // [rsp+1C0h] [rbp-D8h]
  _BYTE v95[24]; // [rsp+200h] [rbp-98h] BYREF
  char v96; // [rsp+250h] [rbp-48h] BYREF
  unsigned __int64 v97; // [rsp+258h] [rbp-40h]

  v97 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(v3 + 312) <= 1 )
    return 0;
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 1344) + 8LL) )
  {
    v17 = *(_QWORD *)(a2 + 24);
    LODWORD(v72) = 0;
    src = v17;
    if ( (sub_137670(v3, (__int64)&src) & 7) != 0 )
      return 0;
  }
  v60 = nullptr;
  v5 = *(_DWORD *)a2 == 1;
  v61 = 0;
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
    v39 = *(_DWORD *)(v6 + 72);
    if ( v7 != -1 && v7 != v39 )
      break;
    v40 = *(_QWORD *)(v6 + 8);
    if ( !v40 )
      break;
    if ( *(_DWORD *)v40 != 12 )
      break;
    if ( *(_BYTE *)(v40 + 32) != 1 )
      break;
    if ( *(_DWORD *)(v40 + 40) != v39 )
      break;
    v41 = *(_DWORD *)(v6 + 68);
    v55.m128i_i64[0] = *(_QWORD *)(v6 + 8);
    n = v41;
    if ( !(unsigned __int8)sub_11FD80((char *)(v40 + 48), &src, 1u)
      || n != src
      || *(_BYTE *)(v55.m128i_i64[0] + 64) != 1
      || *(_DWORD *)(v55.m128i_i64[0] + 72) != v39 )
    {
      break;
    }
    ++v8;
    src = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL), *(unsigned int *)(v6 + 36), 0);
    v42 = *(int *)(v6 + 68);
    v43 = v55.m128i_i64[0];
    na = v42;
    if ( *(_DWORD *)(v6 + 68) )
    {
      v44 = v61;
      v45 = v61;
      v46 = v61 + v42;
      if ( !__CFADD__((_QWORD)v61, v42) )
        goto LABEL_73;
      if ( (unsigned __int64)v61 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v46 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_73:
        if ( *((_QWORD *)&v61 + 1) < v46 )
        {
          v56 = v55.m128i_i64[0];
          v55.m128i_i64[0] = v46;
          v50 = qvector_reserve();
          v43 = v56;
          v46 = v55.m128i_i64[0];
          v60 = (_BYTE *)v50;
          v45 = v61;
        }
        v56 = v43;
        v55.m128i_i64[0] = v46;
        memset(&v60[v45], 0, v46 - v45);
        v43 = v56;
        *(_QWORD *)&v61 = v55.m128i_i64[0];
      }
      else if ( (_QWORD)v61 != 0x7FFFFFFFFFFFFFFFLL )
      {
        *(_QWORD *)&v61 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v55.m128i_i64[0] = v43;
      memcpy(&v60[v44], &src, na);
      v43 = v55.m128i_i64[0];
    }
    v6 = *(_QWORD *)(v43 + 8);
    if ( !v6 || *(_DWORD *)v6 != 1 )
      break;
    v7 = v39;
  }
  if ( v8 <= 2 )
  {
    result = 0;
  }
  else
  {
    v9 = v60;
    v57 = v61;
    v10 = *v60;
    if ( &v60[(_QWORD)v61] == v60 )
    {
LABEL_27:
      v62 = 0;
      LODWORD(v56) = 2;
      v63 = 0;
    }
    else
    {
      v11 = v60;
      while ( v10 == *v11 )
      {
        if ( &v60[(_QWORD)v61] == ++v11 )
          goto LABEL_27;
      }
      v62 = 0;
      v63 = 0;
      if ( v57 == -10 || (v49 = qvector_reserve(), v9 = v60, v62 = v49, (_QWORD)v61) )
      {
        v12 = 0;
        while ( 1 )
        {
          v16 = v9[v12];
          if ( v16 == 92 || v16 == 34 || (unsigned __int8)(v16 - 32) > 0x5Eu )
          {
            sub_FAAD0(&v62);
            if ( ++v12 >= (unsigned __int64)v61 )
              break;
          }
          else
          {
            v13 = v63;
            v14 = 2;
            if ( (_QWORD)v63 )
            {
              v14 = v63 + 1;
              v13 = v63 - 1;
            }
            v15 = v62;
            if ( *((_QWORD *)&v63 + 1) < v14 )
            {
              v55.m128i_i64[0] = v13;
              nb = v14;
              v62 = qvector_reserve();
              v13 = v55.m128i_i64[0];
              v15 = v62;
              v14 = nb;
            }
            *(_QWORD *)&v63 = v14;
            ++v12;
            *(_BYTE *)(v15 + v13) = v16;
            *(_BYTE *)(v62 + v13 + 1) = 0;
            if ( v12 >= (unsigned __int64)v61 )
              break;
          }
          v9 = v60;
        }
      }
      LODWORD(v56) = 5;
    }
    v72 = 0;
    src = 0xFFFFFFFF00000000LL;
    v75 = 0xFFFFFFFF00000000LL;
    v19 = *(_QWORD *)(a2 + 8);
    v76 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v73 = 0;
    v74 = 0;
    v78 = 0;
    v83 = 16;
    v80 = -1;
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
          *((_QWORD *)&v76 + 1) = qvector_reserve();
          v24 = v77;
          v22 = *((_QWORD *)&v76 + 1);
        }
        *(_QWORD *)(v22 + 8 * v24) = v20;
        ++v25;
        v24 = v77 + 1;
        *(_QWORD *)&v77 = v77 + 1;
        v20 = *(_QWORD *)(v20 + 8);
        if ( v25 == v21 )
          break;
        v23 = *((_QWORD *)&v77 + 1);
        v22 = *((_QWORD *)&v76 + 1);
      }
    }
    v26 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v58 = &v96;
    v27 = (__m128i *)v84;
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
    while ( &v96 != (char *)v27 );
    v55.m128i_i64[0] = (__int64)v95;
    sub_123A40((__int64)v64, (unsigned __int8 *)(a2 + 64));
    v66 = 0;
    v68 = 0;
    v65 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v69 = 0;
    v70 = 0;
    v67 = 0;
    sub_125180((__int64)v84, v64);
    v86 = v65.m128i_i64[0];
    v59 = &v87;
    copy_tinfo_t();
    v28 = v66;
    v66 = 0;
    v29 = _mm_loadu_si128(&v67);
    v67 = 0;
    if ( v88 )
    {
      v55 = v29;
      v89.m128i_i64[0] = 0;
      qfree();
      v29 = _mm_load_si128(&v55);
    }
    v88 = v28;
    v89 = v29;
    copy_argloc();
    v90 = v70;
    cleanup_argloc();
    if ( v66 )
    {
      v67.m128i_i64[0] = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v64);
    v86 = *(_QWORD *)(a2 + 24);
    v55.m128i_i64[0] = (__int64)v95;
    copy_tinfo_t();
    if ( (_DWORD)v56 == 5 )
    {
      v91[0] = 3;
      v47 = v62;
      if ( (unsigned __int64)v63 < *((_QWORD *)&v63 + 1) )
      {
        if ( v62 )
        {
          if ( (_QWORD)v63 )
          {
            v55.m128i_i64[0] = (__int64)v95;
            v47 = qrealloc();
            if ( !v47 )
              v47 = v62;
          }
        }
      }
      v93 = v47;
      v63 = 0;
      v92 = v85;
      v48 = *(_QWORD *)(a2 + 24);
      v62 = 0;
      v94 = v48;
      v55.m128i_i64[0] = (__int64)v95;
      copy_tinfo_t();
    }
    else
    {
      v30 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL);
      v55.m128i_i64[0] = (__int64)v95;
      sub_120A10((__int64)v91, v30, v10, 1, -1, 0);
      *(_QWORD *)v64 = 34;
      copy_tinfo_t();
      clear_tinfo_t();
    }
    v31 = *(_QWORD *)(a1 + 64);
    v32 = v57;
    v55.m128i_i64[0] = (__int64)v95;
    sub_120A10((__int64)v95, *(_QWORD *)(v31 + 1504), v57, *(unsigned __int8 *)(*(_QWORD *)(v31 + 1496) + 130LL), -1, 0);
    *(_QWORD *)v64 = 39;
    copy_tinfo_t();
    clear_tinfo_t();
    sub_186120(a1, a2, (__int64)&src, 3, v84, v56);
    v33 = *(_QWORD *)(a2 + 8);
    v34 = (__int64)v58;
    *(_QWORD *)(*(_QWORD *)(v33 + 56) + 16LL) = v32;
    do
    {
      v34 -= 80;
      cleanup_argloc();
      if ( *(_QWORD *)(v34 + 32) )
      {
        *(_QWORD *)(v34 + 40) = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_11CDA0(v34);
    }
    while ( (_BYTE *)v34 != v84 );
    clear_tinfo_t();
    v35 = v78;
    if ( v78 )
    {
      v36 = v79;
      if ( (_QWORD)v79 )
      {
        v37 = 0;
        do
        {
          v38 = (_QWORD *)(v35 + 40 * v37);
          if ( *v38 )
          {
            v38[1] = 0;
            qfree();
            v35 = v78;
          }
          ++v37;
        }
        while ( v36 != v37 );
      }
      *(_QWORD *)&v79 = 0;
      qfree();
    }
    if ( *((_QWORD *)&v76 + 1) )
    {
      *(_QWORD *)&v77 = 0;
      qfree();
    }
    sub_11CDA0((__int64)&v75);
    sub_11CDA0((__int64)&src);
    if ( v62 )
    {
      *(_QWORD *)&v63 = 0;
      qfree();
    }
    result = 1;
  }
  if ( v60 )
  {
    nc = result;
    *(_QWORD *)&v61 = 0;
    qfree();
    return nc;
  }
  return result;
}
