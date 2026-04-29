__int64 __fastcall sub_186140(__int64 a1, __int64 a2)
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
  unsigned __int8 v16; // r15
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // r15
  int v21; // r13d
  __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // r14d
  __m128i si128; // xmm0
  __m128i *v27; // rax
  __int64 v28; // r15
  __m128i v29; // xmm0
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rbp
  __int64 v39; // rbx
  __int64 *v40; // rax
  __int64 v41; // rdi
  int v42; // r15d
  __int64 v43; // r8
  int v44; // eax
  size_t v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r12
  __int64 v48; // rax
  unsigned __int64 v49; // r10
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int8 nc; // [rsp+8h] [rbp-290h]
  int n; // [rsp+8h] [rbp-290h]
  size_t na; // [rsp+8h] [rbp-290h]
  size_t nb; // [rsp+8h] [rbp-290h]
  __m128i v59; // [rsp+10h] [rbp-288h] BYREF
  __int64 v60; // [rsp+20h] [rbp-278h]
  __int64 v61; // [rsp+28h] [rbp-270h]
  char *v62; // [rsp+30h] [rbp-268h]
  _BYTE *v63; // [rsp+38h] [rbp-260h]
  _BYTE *v64; // [rsp+40h] [rbp-258h] BYREF
  __int128 v65; // [rsp+48h] [rbp-250h]
  __int64 v66; // [rsp+60h] [rbp-238h] BYREF
  __int128 v67; // [rsp+68h] [rbp-230h]
  unsigned __int8 v68[16]; // [rsp+80h] [rbp-218h] BYREF
  __m128i v69; // [rsp+90h] [rbp-208h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-1F8h]
  __m128i v71; // [rsp+A8h] [rbp-1F0h] BYREF
  int v72; // [rsp+B8h] [rbp-1E0h] BYREF
  __int64 v73; // [rsp+C0h] [rbp-1D8h]
  int v74; // [rsp+C8h] [rbp-1D0h]
  __int64 src; // [rsp+D0h] [rbp-1C8h] BYREF
  __int64 v76; // [rsp+D8h] [rbp-1C0h]
  int v77; // [rsp+E0h] [rbp-1B8h]
  char v78; // [rsp+E4h] [rbp-1B4h]
  unsigned __int64 v79; // [rsp+E8h] [rbp-1B0h] BYREF
  __int128 v80; // [rsp+F0h] [rbp-1A8h] BYREF
  __int128 v81; // [rsp+100h] [rbp-198h]
  __int64 v82; // [rsp+110h] [rbp-188h]
  __int128 v83; // [rsp+118h] [rbp-180h]
  __int128 v84; // [rsp+128h] [rbp-170h]
  _OWORD v85[2]; // [rsp+138h] [rbp-160h] BYREF
  int v86; // [rsp+158h] [rbp-140h]
  _BYTE v87[4]; // [rsp+160h] [rbp-138h] BYREF
  int v88; // [rsp+164h] [rbp-134h]
  __int64 v89; // [rsp+170h] [rbp-128h]
  _BYTE v90[8]; // [rsp+178h] [rbp-120h] BYREF
  __int64 v91; // [rsp+180h] [rbp-118h]
  __m128i v92; // [rsp+188h] [rbp-110h]
  _BYTE v93[16]; // [rsp+198h] [rbp-100h] BYREF
  int v94; // [rsp+1A8h] [rbp-F0h]
  char v95[4]; // [rsp+1B0h] [rbp-E8h] BYREF
  int v96; // [rsp+1B4h] [rbp-E4h]
  __int64 v97; // [rsp+1B8h] [rbp-E0h]
  __int64 v98; // [rsp+1C0h] [rbp-D8h]
  _BYTE v99[56]; // [rsp+1C8h] [rbp-D0h] BYREF
  _BYTE v100[24]; // [rsp+200h] [rbp-98h] BYREF
  _BYTE v101[56]; // [rsp+218h] [rbp-80h] BYREF
  char v102; // [rsp+250h] [rbp-48h] BYREF
  unsigned __int64 v103; // [rsp+258h] [rbp-40h]

  v103 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(v3 + 312) <= 1 )
    return 0;
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 1344) + 8LL) )
  {
    v17 = *(_QWORD *)(a2 + 24);
    LODWORD(v76) = 0;
    src = v17;
    if ( (sub_132AB0(v3, (__int64)&src) & 7) != 0 )
      return 0;
  }
  v64 = nullptr;
  v5 = *(_DWORD *)a2 == 1;
  v65 = 0;
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
    v42 = *(_DWORD *)(v6 + 72);
    if ( v7 != -1 && v7 != v42 )
      break;
    v43 = *(_QWORD *)(v6 + 8);
    if ( !v43 )
      break;
    if ( *(_DWORD *)v43 != 12 )
      break;
    if ( *(_BYTE *)(v43 + 32) != 1 )
      break;
    if ( *(_DWORD *)(v43 + 40) != v42 )
      break;
    v44 = *(_DWORD *)(v6 + 68);
    v59.m128i_i64[0] = *(_QWORD *)(v6 + 8);
    n = v44;
    if ( !(unsigned __int8)sub_11B1C0((char *)(v43 + 48), &src, 1u)
      || n != src
      || *(_BYTE *)(v59.m128i_i64[0] + 64) != 1
      || *(_DWORD *)(v59.m128i_i64[0] + 72) != v42 )
    {
      break;
    }
    ++v8;
    src = sub_325150(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL), *(unsigned int *)(v6 + 36), 0);
    v45 = *(int *)(v6 + 68);
    v46 = v59.m128i_i64[0];
    na = v45;
    if ( *(_DWORD *)(v6 + 68) )
    {
      v47 = v65;
      v48 = v65;
      v49 = v65 + v45;
      if ( !__CFADD__((_QWORD)v65, v45) )
        goto LABEL_73;
      if ( (unsigned __int64)v65 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v49 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_73:
        if ( *((_QWORD *)&v65 + 1) < v49 )
        {
          v60 = v59.m128i_i64[0];
          v59.m128i_i64[0] = v49;
          v54 = qvector_reserve(&v64, v64, v49, 1);
          v46 = v60;
          v49 = v59.m128i_i64[0];
          v64 = (_BYTE *)v54;
          v48 = v65;
        }
        v60 = v46;
        v59.m128i_i64[0] = v49;
        memset(&v64[v48], 0, v49 - v48);
        v46 = v60;
        *(_QWORD *)&v65 = v59.m128i_i64[0];
      }
      else if ( (_QWORD)v65 != 0x7FFFFFFFFFFFFFFFLL )
      {
        *(_QWORD *)&v65 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v59.m128i_i64[0] = v46;
      memcpy(&v64[v47], &src, na);
      v46 = v59.m128i_i64[0];
    }
    v6 = *(_QWORD *)(v46 + 8);
    if ( !v6 || *(_DWORD *)v6 != 1 )
      break;
    v7 = v42;
  }
  if ( v8 <= 2 )
  {
    result = 0;
  }
  else
  {
    v9 = v64;
    v61 = v65;
    v10 = *v64;
    if ( &v64[(_QWORD)v65] == v64 )
    {
LABEL_27:
      v66 = 0;
      LODWORD(v60) = 2;
      v67 = 0;
    }
    else
    {
      v11 = v64;
      while ( v10 == *v11 )
      {
        if ( &v64[(_QWORD)v65] == ++v11 )
          goto LABEL_27;
      }
      v66 = 0;
      v67 = 0;
      if ( v61 == -10 || (v53 = qvector_reserve(&v66, 0, v61 + 10, 1), v9 = v64, v66 = v53, (_QWORD)v65) )
      {
        v12 = 0;
        while ( 1 )
        {
          v16 = v9[v12];
          if ( v16 == 92 || v16 == 34 || (unsigned __int8)(v16 - 32) > 0x5Eu )
          {
            sub_F5F10(&v66, (__int64)"\\%03o", v16);
            if ( ++v12 >= (unsigned __int64)v65 )
              break;
          }
          else
          {
            v13 = v67;
            v14 = 2;
            if ( (_QWORD)v67 )
            {
              v14 = v67 + 1;
              v13 = v67 - 1;
            }
            v15 = v66;
            if ( *((_QWORD *)&v67 + 1) < v14 )
            {
              v59.m128i_i64[0] = v13;
              nb = v14;
              v66 = qvector_reserve(&v66, v66, v14, 1);
              v13 = v59.m128i_i64[0];
              v15 = v66;
              v14 = nb;
            }
            *(_QWORD *)&v67 = v14;
            ++v12;
            *(_BYTE *)(v15 + v13) = v16;
            *(_BYTE *)(v66 + v13 + 1) = 0;
            if ( v12 >= (unsigned __int64)v65 )
              break;
          }
          v9 = v64;
        }
      }
      LODWORD(v60) = 5;
    }
    v76 = 0;
    src = 0xFFFFFFFF00000000LL;
    v79 = 0xFFFFFFFF00000000LL;
    v19 = *(_QWORD *)(a2 + 8);
    v80 = 0;
    v81 = 0;
    v83 = 0;
    v85[0] = 0;
    v77 = 0;
    v78 = 0;
    v82 = 0;
    v86 = 16;
    v84 = -1;
    v85[1] = _mm_load_si128((const __m128i *)&xmmword_400190);
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
          *((_QWORD *)&v80 + 1) = qvector_reserve((char *)&v80 + 8, v22, v24 + 1, 8);
          v24 = v81;
          v22 = *((_QWORD *)&v80 + 1);
        }
        *(_QWORD *)(v22 + 8 * v24) = v20;
        ++v25;
        v24 = v81 + 1;
        *(_QWORD *)&v81 = v81 + 1;
        v20 = *(_QWORD *)(v20 + 8);
        if ( v25 == v21 )
          break;
        v23 = *((_QWORD *)&v81 + 1);
        v22 = *((_QWORD *)&v80 + 1);
      }
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_400170);
    v62 = &v102;
    v27 = (__m128i *)v87;
    do
    {
      v27->m128i_i32[1] = -1;
      v27 += 5;
      v27[-5].m128i_i16[0] = 0;
      v27[-5].m128i_i16[1] = 0;
      v27[-5].m128i_i64[1] = 0;
      v27[-4] = si128;
      v27[-3].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v27[-3] + 8) = 0;
      v27[-2].m128i_i32[2] = 0;
      v27[-1].m128i_i64[0] = 0;
      v27[-1].m128i_i32[2] = 0;
    }
    while ( &v102 != (char *)v27 );
    v59.m128i_i64[0] = (__int64)v100;
    sub_11EE80((__int64)v68, (unsigned __int8 *)(a2 + 64));
    v70 = 0;
    v72 = 0;
    v69 = _mm_load_si128((const __m128i *)&xmmword_400170);
    v73 = 0;
    v74 = 0;
    v71 = 0;
    sub_1205C0((__int64)v87, v68);
    v89 = v69.m128i_i64[0];
    v63 = v90;
    copy_tinfo_t(v90, &v69.m128i_u64[1]);
    v28 = v70;
    v70 = 0;
    v29 = _mm_loadu_si128(&v71);
    v71 = 0;
    if ( v91 )
    {
      v59 = v29;
      v92.m128i_i64[0] = 0;
      qfree(v91);
      v29 = _mm_load_si128(&v59);
    }
    v91 = v28;
    v92 = v29;
    copy_argloc(v93, &v72);
    v94 = v74;
    cleanup_argloc(&v72);
    if ( v70 )
    {
      v71.m128i_i64[0] = 0;
      qfree(v70);
    }
    clear_tinfo_t(&v69.m128i_u64[1]);
    sub_1181E0((__int64)v68);
    v89 = *(_QWORD *)(a2 + 24);
    v30 = *(_QWORD *)(a1 + 480) + 232LL;
    v59.m128i_i64[0] = (__int64)v100;
    copy_tinfo_t(v63, v30);
    if ( (_DWORD)v60 == 5 )
    {
      v95[0] = 3;
      v50 = v66;
      if ( (unsigned __int64)v67 < *((_QWORD *)&v67 + 1) )
      {
        if ( v66 )
        {
          if ( (_QWORD)v67 )
          {
            v59.m128i_i64[0] = (__int64)v100;
            v50 = qrealloc(v66, v67);
            if ( !v50 )
              v50 = v66;
          }
        }
      }
      v97 = v50;
      v67 = 0;
      v96 = v88;
      v51 = *(_QWORD *)(a2 + 24);
      v66 = 0;
      v98 = v51;
      v52 = *(_QWORD *)(a1 + 480) + 232LL;
      v59.m128i_i64[0] = (__int64)v100;
      copy_tinfo_t(v99, v52);
    }
    else
    {
      v31 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL);
      v59.m128i_i64[0] = (__int64)v100;
      sub_11BE50((__int64)v95, v31, v10, 1, -1, 0);
      *(_QWORD *)v68 = 34;
      copy_tinfo_t(v99, v68);
      clear_tinfo_t(v68);
    }
    v32 = *(_QWORD *)(a1 + 64);
    v33 = v61;
    v59.m128i_i64[0] = (__int64)v100;
    sub_11BE50(
      (__int64)v100,
      *(_QWORD *)(v32 + 1504),
      v61,
      *(unsigned __int8 *)(*(_QWORD *)(v32 + 1496) + 130LL),
      -1,
      0);
    *(_QWORD *)v68 = 39;
    copy_tinfo_t(v101, v68);
    clear_tinfo_t(v68);
    sub_181560(a1, a2, (__int64)&src, 3, v87, v60);
    v34 = *(_QWORD *)(a2 + 8);
    v35 = (__int64)v62;
    *(_QWORD *)(*(_QWORD *)(v34 + 56) + 16LL) = v33;
    do
    {
      v35 -= 80;
      cleanup_argloc(v35 + 56);
      v36 = *(_QWORD *)(v35 + 32);
      if ( v36 )
      {
        *(_QWORD *)(v35 + 40) = 0;
        qfree(v36);
      }
      clear_tinfo_t(v35 + 24);
      sub_1181E0(v35);
    }
    while ( (_BYTE *)v35 != v87 );
    clear_tinfo_t((char *)v85 + 8);
    v37 = v82;
    if ( v82 )
    {
      v38 = v83;
      if ( (_QWORD)v83 )
      {
        v39 = 0;
        do
        {
          v40 = (__int64 *)(v37 + 40 * v39);
          v41 = *v40;
          if ( *v40 )
          {
            v40[1] = 0;
            qfree(v41);
            v37 = v82;
          }
          ++v39;
        }
        while ( v38 != v39 );
      }
      *(_QWORD *)&v83 = 0;
      qfree(v37);
    }
    if ( *((_QWORD *)&v80 + 1) )
    {
      *(_QWORD *)&v81 = 0;
      qfree(*((_QWORD *)&v80 + 1));
    }
    sub_1181E0((__int64)&v79);
    sub_1181E0((__int64)&src);
    if ( v66 )
    {
      *(_QWORD *)&v67 = 0;
      qfree(v66);
    }
    result = 1;
  }
  if ( v64 )
  {
    nc = result;
    *(_QWORD *)&v65 = 0;
    qfree(v64);
    return nc;
  }
  return result;
}
