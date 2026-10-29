__int64 __fastcall sub_2263D00(
        __int64 a1,
        const char **a2,
        __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        void (__fastcall *a9)(void **, __int64, __m128i *),
        __int64 a10)
{
  _BYTE *v12; // r8
  unsigned int v13; // r13d
  const __m128i *v15; // rbp
  unsigned int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  void *v19; // r12
  const __m128i *v20; // r15
  size_t v21; // rbx
  const __m128i *v22; // r14
  const void *v23; // r13
  size_t v24; // r12
  __int64 v25; // rbx
  size_t v26; // rbp
  size_t v27; // rdx
  int v28; // eax
  size_t v29; // r15
  size_t v30; // rdx
  int v31; // eax
  __int64 v32; // rdi
  unsigned __int64 v33; // rbp
  __int64 v34; // rax
  __m128i v35; // xmm1
  __int64 v36; // rax
  __m128i v37; // rdi
  __int64 v38; // rbp
  _BYTE *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __m128i v42; // xmm2
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  const __m128i *v46; // r15
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // edx
  const void *v50; // rsi
  __int64 v51; // rax
  const void *v52; // rdi
  size_t v53; // rdx
  int v54; // eax
  __m128i v55; // xmm5
  __int64 v56; // rdx
  unsigned __int64 v57; // rax
  const __m128i *v58; // [rsp+0h] [rbp-288h]
  _BYTE *v59; // [rsp+0h] [rbp-288h]
  __int64 *v60; // [rsp+8h] [rbp-280h]
  unsigned __int64 v61; // [rsp+34h] [rbp-254h]
  int v62; // [rsp+3Ch] [rbp-24Ch]
  __int64 v65; // [rsp+78h] [rbp-210h]
  __int64 v66; // [rsp+88h] [rbp-200h] BYREF
  _BYTE v67[16]; // [rsp+90h] [rbp-1F8h] BYREF
  void *s2; // [rsp+A0h] [rbp-1E8h]
  size_t n; // [rsp+A8h] [rbp-1E0h]
  _BYTE v70[48]; // [rsp+C0h] [rbp-1C8h] BYREF
  void *v71; // [rsp+F0h] [rbp-198h] BYREF
  __int64 v72; // [rsp+F8h] [rbp-190h]
  __m128i v73; // [rsp+100h] [rbp-188h] BYREF
  __m128i v74; // [rsp+110h] [rbp-178h] BYREF
  __int64 v75; // [rsp+120h] [rbp-168h]
  unsigned __int64 v76; // [rsp+128h] [rbp-160h]
  __int64 v77; // [rsp+130h] [rbp-158h]
  int v78; // [rsp+138h] [rbp-150h]
  int v79; // [rsp+13Ch] [rbp-14Ch]
  char v80; // [rsp+140h] [rbp-148h]
  __m128i v81; // [rsp+150h] [rbp-138h] BYREF
  __m128i v82; // [rsp+160h] [rbp-128h] BYREF
  __m128i v83; // [rsp+170h] [rbp-118h] BYREF
  __int64 v84; // [rsp+180h] [rbp-108h]
  unsigned __int64 v85; // [rsp+188h] [rbp-100h]
  unsigned __int64 v86; // [rsp+190h] [rbp-F8h]
  __int64 v87; // [rsp+198h] [rbp-F0h]
  char v88; // [rsp+1A0h] [rbp-E8h]
  void *ptr; // [rsp+1B0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+1B8h] [rbp-D0h]
  _BYTE v91[192]; // [rsp+1C8h] [rbp-C0h] BYREF

  ptr = v91;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  sub_22538C0(a2, (__int64)&ptr);
  (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 112LL))(a1, &ptr);
  if ( *(_BYTE *)(a1 + 56) )
    sub_228F0B0(&ptr, 1, 0);
  v12 = ptr;
  v13 = 0;
  if ( !si128.m128i_i64[0] )
    goto LABEL_4;
  v15 = *(const __m128i **)(a1 + 16);
  sub_22892D0(v67, ptr, si128.m128i_i64[0], 0);
  sub_2289320(v70, ptr, si128.m128i_i64[0]);
  v16 = 0;
  v17 = a5;
  if ( !BYTE4(a5) )
    v17 = 0;
  if ( BYTE4(a6) )
    v16 = a6;
  v61 = __PAIR64__(v16, v17);
  v18 = 2;
  if ( BYTE4(a7) )
    v18 = a7;
  LODWORD(v65) = v18;
  if ( BYTE4(a8) )
  {
    HIDWORD(v65) = a8;
    v62 = (unsigned __int16)a8 | 0x1C0;
  }
  else
  {
    v62 = 511;
    HIDWORD(v65) = 511;
  }
LABEL_15:
  v19 = s2;
  v20 = v15 + 9;
  v21 = n;
  sub_2289340(v67);
  v13 = sub_22895C0(v67, v70);
  v60 = &v15[8].m128i_i64[1];
  if ( !(_BYTE)v13 )
  {
    if ( !v15[9].m128i_i64[1] )
      goto LABEL_34;
    v22 = v15 + 9;
    v23 = v19;
    v24 = v21;
    v58 = v15;
    v25 = v15[9].m128i_i64[1];
    while ( 1 )
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)(v25 + 40);
        v27 = v26;
        if ( v24 <= v26 )
          v27 = v24;
        if ( !v27 )
          break;
        v28 = memcmp(*(const void **)(v25 + 32), v23, v27);
        if ( !v28 )
          break;
        if ( v28 >= 0 )
        {
          v22 = (const __m128i *)v25;
          v25 = *(_QWORD *)(v25 + 16);
          goto LABEL_26;
        }
LABEL_18:
        v25 = *(_QWORD *)(v25 + 24);
        if ( !v25 )
          goto LABEL_27;
      }
      if ( v24 != v26 && v24 > v26 )
        goto LABEL_18;
      v22 = (const __m128i *)v25;
      v25 = *(_QWORD *)(v25 + 16);
LABEL_26:
      if ( !v25 )
      {
LABEL_27:
        v21 = v24;
        v15 = v58;
        v19 = (void *)v23;
        v13 = 0;
        if ( v22 == v20 )
          goto LABEL_34;
        v29 = v22[2].m128i_u64[1];
        v30 = v29;
        if ( v21 <= v29 )
          v30 = v21;
        if ( v30 )
        {
          v31 = memcmp(v19, (const void *)v22[2].m128i_i64[0], v30);
          if ( v31 )
          {
            if ( v31 >= 0 )
              goto LABEL_46;
LABEL_34:
            v32 = v15[5].m128i_i64[1];
            v81.m128i_i64[0] = (__int64)v19;
            v81.m128i_i64[1] = v21;
            v33 = sub_22621E0(v32, (__int64)&v81);
            v83.m128i_i16[0] = 261;
            v81.m128i_i64[0] = (__int64)ptr;
            v81.m128i_i64[1] = (_BYTE *)v19 + v21 - (_BYTE *)ptr;
            sub_2253560(&v71, &v81);
            v74.m128i_i64[0] = -1;
            v74.m128i_i64[1] = v33;
            v75 = 1000000000 * a3;
            v77 = 0;
            v76 = v61;
            v78 = 3;
            v80 = 0;
            v79 = v62;
            v81.m128i_i64[0] = (__int64)&v82;
            if ( v71 == &v73 )
            {
              v82 = _mm_load_si128(&v73);
            }
            else
            {
              v81.m128i_i64[0] = (__int64)v71;
              v82.m128i_i64[0] = v73.m128i_i64[0];
            }
            v34 = v72;
            v35 = _mm_load_si128(&v74);
            v72 = 0;
            v73.m128i_i8[0] = 0;
            v81.m128i_i64[1] = v34;
            v83 = v35;
            v71 = &v73;
            v86 = 0;
            v84 = v75;
            LODWORD(v87) = 3;
            v85 = v61;
            v88 = 0;
            HIDWORD(v87) = v62;
            v36 = operator new(0xB8u);
            v37 = v81;
            v38 = v36;
            *(_DWORD *)(v36 + 8) = 1;
            *(_QWORD *)v36 = &unk_2C76008;
            v39 = (_BYTE *)sub_228AA60(v37.m128i_i64[0], v37.m128i_i64[1], 0);
            *(_QWORD *)(v38 + 16) = v38 + 32;
            sub_2259A00((_QWORD *)(v38 + 16), v39, (__int64)&v39[v40]);
            *(_QWORD *)v38 = &off_2BEB998;
            *(_QWORD *)(v38 + 48) = v38 + 64;
            if ( (__m128i *)v81.m128i_i64[0] == &v82 )
            {
              *(__m128i *)(v38 + 64) = _mm_load_si128(&v82);
            }
            else
            {
              *(_QWORD *)(v38 + 48) = v81.m128i_i64[0];
              *(_QWORD *)(v38 + 64) = v82.m128i_i64[0];
            }
            v41 = v81.m128i_i64[1];
            *(_DWORD *)(v38 + 144) = 0;
            v42 = _mm_load_si128(&v83);
            v66 = v38;
            *(_QWORD *)(v38 + 56) = v41;
            v43 = v84;
            *(_QWORD *)(v38 + 152) = 0;
            *(_QWORD *)(v38 + 96) = v43;
            v44 = v85;
            *(_QWORD *)(v38 + 176) = 0;
            *(_QWORD *)(v38 + 104) = v44;
            v45 = v86;
            *(__m128i *)(v38 + 80) = v42;
            *(_QWORD *)(v38 + 112) = v45;
            v81.m128i_i64[0] = (__int64)v19;
            *(_QWORD *)(v38 + 120) = v87;
            v81.m128i_i64[1] = v21;
            *(_BYTE *)(v38 + 128) = v88;
            *(_QWORD *)(v38 + 160) = v38 + 144;
            *(_QWORD *)(v38 + 168) = v38 + 144;
            v46 = (const __m128i *)sub_225F580(v60, (__int64)&v81, &v66)[8];
            if ( v66 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 8LL))(v66);
            if ( v71 != &v73 )
              operator delete(v71);
            goto LABEL_42;
          }
        }
        if ( v21 != v29 && v21 < v29 )
          goto LABEL_34;
LABEL_46:
        v46 = (const __m128i *)v22[4].m128i_i64[0];
        if ( !v46 )
          goto LABEL_34;
        if ( v46->m128i_i32[2] != 1 )
          goto LABEL_48;
LABEL_42:
        v15 = v46;
        goto LABEL_15;
      }
    }
  }
  v81.m128i_i64[0] = (__int64)v19;
  v81.m128i_i64[1] = v21;
  v47 = sub_225F490((__int64)&v15[8].m128i_i64[1], (__int64)&v81);
  v12 = ptr;
  if ( (const __m128i *)v47 == v20 || (v48 = *(_QWORD *)(v47 + 64), v12 = ptr, !v48) )
  {
    v55 = _mm_loadu_si128(v15 + 5);
    v82.m128i_i64[0] = (__int64)v12;
    v56 = si128.m128i_i64[0];
    v83.m128i_i64[0] = (__int64)v19;
    v57 = *a4;
    v81 = v55;
    *a4 = 0;
    v85 = v57;
    v82.m128i_i64[1] = v56;
    v86 = v61;
    v83.m128i_i64[1] = v21;
    v84 = a3;
    v87 = v65;
    a9(&v71, a10, &v81);
    if ( v85 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v85 + 8LL))(v85);
    v81.m128i_i64[0] = (__int64)v19;
    v81.m128i_i64[1] = v21;
    sub_225F580(v60, (__int64)&v81, (__int64 *)&v71);
    if ( v71 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v71 + 8LL))(v71);
LABEL_48:
    v12 = ptr;
  }
  else
  {
    v49 = *(_DWORD *)(v48 + 8);
    if ( v49 == 1 )
    {
      LOBYTE(v13) = (_DWORD)v65 == 3;
    }
    else
    {
      v50 = *(const void **)(*a4 + 8);
      if ( v49 == 2 )
        v48 = *(_QWORD *)(v48 + 48);
      v51 = *(_QWORD *)(v48 + 136);
      v52 = *(const void **)(v51 + 8);
      v53 = *(_QWORD *)(v51 + 16) - (_QWORD)v52;
      if ( v53 == *(_QWORD *)(*a4 + 16) - (_QWORD)v50 )
      {
        if ( v53 )
        {
          v59 = ptr;
          v54 = memcmp(v52, v50, v53);
          v12 = v59;
          LOBYTE(v13) = v54 == 0;
        }
      }
      else
      {
        v13 = 0;
      }
    }
  }
LABEL_4:
  if ( v12 != v91 )
    free(v12);
  return v13;
}
