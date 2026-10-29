void __fastcall sub_13C6060(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  unsigned int v3; // r15d
  _BYTE *v4; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v7; // r13d
  unsigned __int64 v8; // rax
  int v9; // edx
  void *v10; // r14
  size_t v11; // r12
  unsigned int v12; // eax
  __int64 v13; // r8
  unsigned int v14; // r10d
  __int64 *v15; // r9
  __int64 v16; // rax
  __m128i *v17; // rcx
  int v18; // edx
  void *v19; // rax
  __m128i v20; // xmm2
  __m128 v21; // xmm0
  void *v22; // rax
  __m128i v23; // xmm3
  __m128i v24; // xmm4
  int v25; // edx
  __m128i v26; // xmm6
  __m128i v27; // xmm7
  __m128i v28; // xmm5
  int v29; // eax
  __m128i v30; // xmm2
  __m128i v31; // xmm3
  unsigned int v32; // eax
  unsigned __int64 v33; // rcx
  _BYTE *v34; // r11
  unsigned int v35; // eax
  _BYTE *v36; // rax
  char *v37; // r14
  unsigned int v38; // ecx
  char *v39; // rbp
  __int64 v40; // rdi
  __m128i *v41; // rbp
  __m128i *v42; // r13
  __int64 v43; // rsi
  __int64 v44; // rdi
  char *v45; // r12
  unsigned int v46; // ecx
  char *v47; // rbx
  __int64 v48; // rdi
  __m128i *v49; // rbx
  __m128i *v50; // rbp
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rax
  void *v54; // rdi
  int v55; // eax
  void *v56; // rdx
  __m128i *v57; // [rsp+10h] [rbp-208h] BYREF
  __int64 v58; // [rsp+18h] [rbp-200h]
  __m128i *v59; // [rsp+20h] [rbp-1F8h]
  void **p_src; // [rsp+28h] [rbp-1F0h]
  size_t *v61; // [rsp+30h] [rbp-1E8h]
  unsigned int v62; // [rsp+3Ch] [rbp-1DCh]
  __int64 *v63; // [rsp+40h] [rbp-1D8h]
  unsigned __int64 v64; // [rsp+48h] [rbp-1D0h]
  _DWORD v65[6]; // [rsp+58h] [rbp-1C0h] BYREF
  __m128i v66; // [rsp+70h] [rbp-1A8h] BYREF
  __m128i v67; // [rsp+80h] [rbp-198h] BYREF
  void *v68; // [rsp+90h] [rbp-188h] BYREF
  __int64 v69; // [rsp+98h] [rbp-180h]
  _BYTE v70[32]; // [rsp+A0h] [rbp-178h] BYREF
  void *v71; // [rsp+C0h] [rbp-158h] BYREF
  __int64 v72; // [rsp+C8h] [rbp-150h]
  __m128i v73; // [rsp+D0h] [rbp-148h] BYREF
  void *v74; // [rsp+E0h] [rbp-138h] BYREF
  __m128i v75; // [rsp+E8h] [rbp-130h] BYREF
  __int128 v76; // [rsp+F8h] [rbp-120h] BYREF
  void *v77; // [rsp+108h] [rbp-110h] BYREF
  __int64 v78; // [rsp+110h] [rbp-108h]
  _BYTE v79[32]; // [rsp+118h] [rbp-100h] BYREF
  __m128i *v80; // [rsp+138h] [rbp-E0h] BYREF
  __int64 v81; // [rsp+140h] [rbp-D8h]
  __m128i si128; // [rsp+148h] [rbp-D0h] BYREF
  void *src; // [rsp+160h] [rbp-B8h] BYREF
  size_t n[2]; // [rsp+168h] [rbp-B0h] BYREF
  __m128i v85; // [rsp+178h] [rbp-A0h] BYREF
  void *v86; // [rsp+188h] [rbp-90h] BYREF
  __int64 v87; // [rsp+190h] [rbp-88h]
  _BYTE v88[32]; // [rsp+198h] [rbp-80h] BYREF
  void *ptr; // [rsp+1B8h] [rbp-60h] BYREF
  unsigned __int64 v90; // [rsp+1C0h] [rbp-58h]
  __m128i v91[5]; // [rsp+1C8h] [rbp-50h] BYREF

  v1 = a1;
  sub_2244B40(&v74, (__int64)(*(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 48)) >> 4, 16);
  v81 = 0;
  v76 = 0;
  v77 = v79;
  v78 = 0x400000000LL;
  v80 = &si128;
  v2 = *(_QWORD *)(a1 + 48);
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  if ( v2 == *(_QWORD *)(a1 + 56) )
    goto LABEL_66;
  if ( ((*(_BYTE *)(v2 + 8) >> 3) & 3) != 2 )
  {
    v18 = 0;
    v17 = nullptr;
    v3 = 0;
LABEL_18:
    v19 = v74;
    v57 = v17;
    v20 = _mm_loadu_si128(&v75);
    v74 = nullptr;
    src = v19;
    v21 = _mm_loadh_ps((const double *)&v57);
    v86 = v88;
    *(__m128i *)n = v20;
    v75.m128i_i64[0] = 0;
    v75.m128i_i32[2] = 0;
    v85 = (__m128i)v21;
    v87 = 0x400000000LL;
    if ( v18 )
      sub_13C5DE0((char ***)&v86, (char ***)&v77);
    v90 = 0;
    ptr = v91;
    if ( (_DWORD)v81 )
      sub_13C5F00((__int64)&ptr, (__int64)&v80);
    v22 = *(void **)(v1 + 120);
    v76 = 0;
    v23 = _mm_loadu_si128(&si128);
    v24 = _mm_loadu_si128((const __m128i *)(v1 + 144));
    *(_QWORD *)(v1 + 120) = src;
    src = v22;
    LODWORD(v22) = *(_DWORD *)(v1 + 128);
    *(_DWORD *)(v1 + 128) = n[0];
    LODWORD(n[0]) = (_DWORD)v22;
    LODWORD(v22) = *(_DWORD *)(v1 + 132);
    *(_DWORD *)(v1 + 132) = HIDWORD(n[0]);
    HIDWORD(n[0]) = (_DWORD)v22;
    LODWORD(v22) = *(_DWORD *)(v1 + 136);
    *(_DWORD *)(v1 + 136) = n[1];
    v25 = *(_DWORD *)(v1 + 168);
    LODWORD(n[1]) = (_DWORD)v22;
    v68 = v70;
    v91[0] = v23;
    si128.m128i_i64[0] = 0;
    LODWORD(v78) = 0;
    LODWORD(v81) = 0;
    v67 = v24;
    v69 = 0x400000000LL;
    if ( v25 )
      sub_13C5DE0((char ***)&v68, (char ***)(v1 + 160));
    v72 = 0;
    v71 = &v73;
    if ( *(_DWORD *)(v1 + 216) )
      sub_13C5F00((__int64)&v71, v1 + 208);
    v26 = _mm_loadu_si128(&v85);
    v27 = _mm_loadu_si128(v91);
    *(_DWORD *)(v1 + 168) = 0;
    *(_DWORD *)(v1 + 216) = 0;
    v28 = _mm_loadu_si128((const __m128i *)(v1 + 224));
    *(__m128i *)(v1 + 144) = v26;
    *(__m128i *)(v1 + 224) = v27;
    v73 = v28;
    sub_13C5DE0((char ***)(v1 + 160), (char ***)&v86);
    v29 = v90;
    if ( (_DWORD)v90 )
    {
      v54 = *(void **)(v1 + 208);
      if ( v54 != (void *)(v1 + 224) )
      {
        free(v54);
        v29 = v90;
      }
      *(_DWORD *)(v1 + 216) = v29;
      v55 = HIDWORD(v90);
      v56 = ptr;
      HIDWORD(v90) = 0;
      *(_DWORD *)(v1 + 220) = v55;
      *(_QWORD *)(v1 + 208) = v56;
      ptr = v91;
    }
    else
    {
      *(_DWORD *)(v1 + 216) = 0;
    }
    v30 = _mm_load_si128(&v67);
    v31 = _mm_load_si128(&v73);
    LODWORD(v87) = 0;
    LODWORD(v90) = 0;
    v85 = v30;
    v91[0] = v31;
    sub_13C5DE0((char ***)&v86, (char ***)&v68);
    v32 = v72;
    if ( (_DWORD)v72 )
    {
      if ( ptr != v91 )
      {
        free(ptr);
        v32 = v72;
      }
      v90 = __PAIR64__(HIDWORD(v72), v32);
      v67 = 0;
      ptr = v71;
      v73.m128i_i64[0] = 0;
      LODWORD(v69) = 0;
    }
    else
    {
      LODWORD(v90) = 0;
      v67 = 0;
      v73.m128i_i64[0] = 0;
      LODWORD(v69) = 0;
      if ( v71 != &v73 )
        free(v71);
    }
    if ( v68 != v70 )
      free(v68);
    v37 = (char *)v86;
    LOBYTE(v38) = 0;
    v39 = (char *)v86 + 8 * (unsigned int)v87;
    if ( v86 != v39 )
    {
      while ( 1 )
      {
        v40 = *(_QWORD *)v37;
        v37 += 8;
        operator delete(v40, 4096LL << v38, 16);
        if ( v39 == v37 )
          break;
        v38 = (unsigned int)((v37 - (_BYTE *)v86) >> 3) >> 7;
        if ( v38 >= 0x1E )
          LOBYTE(v38) = 30;
      }
    }
    v41 = (__m128i *)ptr;
    v42 = (__m128i *)((char *)ptr + 16 * (unsigned int)v90);
    if ( ptr != v42 )
    {
      do
      {
        v43 = v41->m128i_i64[1];
        v44 = v41->m128i_i64[0];
        ++v41;
        operator delete(v44, v43, 16);
      }
      while ( v42 != v41 );
      v42 = (__m128i *)ptr;
    }
    if ( v42 != v91 )
      free(v42);
    if ( v86 != v88 )
      free(v86);
    free(src);
    *(_DWORD *)(v1 + 240) = v3;
    goto LABEL_56;
  }
  v3 = 0;
  v59 = &v67;
  p_src = &src;
  v61 = &n[1];
  while ( 2 )
  {
    v4 = *(_BYTE **)v2;
    v5 = 0;
    v6 = sub_13BE990(*(_QWORD *)v2);
    v7 = sub_13BE980((__int64)v4, *(_DWORD *)(v6 + 16));
    v57 = &v66;
    if ( !v7 )
      goto LABEL_15;
    v58 = v1;
    do
    {
      while ( 1 )
      {
        v8 = sub_13BE9A0(v4, v5);
        v65[5] = v9;
        *(_QWORD *)&v65[3] = v8;
        if ( !(_DWORD)v8 )
          goto LABEL_6;
        sub_13BE9E0((__int64)v59, v4, v8);
        if ( !(_BYTE)v68 )
          goto LABEL_6;
        v66 = _mm_load_si128(&v67);
        sub_2246450(p_src, v57);
        v10 = src;
        v11 = n[0];
        v12 = sub_2244B30(src, n[0]);
        v14 = sub_2244CB0(&v74, v10, v11, v12);
        v15 = (__int64 *)((char *)v74 + 8 * v14);
        if ( *v15 )
        {
          if ( *v15 != -8 )
          {
            sub_E37610((__int64 **)v65, v15, 0);
            goto LABEL_12;
          }
          --v75.m128i_i32[2];
        }
        si128.m128i_i64[0] += v11 + 17;
        v33 = (v76 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *((_QWORD *)&v76 + 1) >= v11 + 17 + v33 && (_QWORD)v76 )
        {
          *(_QWORD *)&v76 = v11 + 17 + v33;
        }
        else
        {
          v63 = (__int64 *)((char *)v74 + 8 * v14);
          v62 = v14;
          v53 = sub_986170((__int64)&v76, v11 + 17, v11 + 17, 3, v13, (__int64)v15);
          v15 = v63;
          v14 = v62;
          v33 = v53;
        }
        v34 = (_BYTE *)(v33 + 16);
        if ( v11 )
        {
          v64 = v33;
          v63 = v15;
          v62 = v14;
          v36 = memcpy((void *)(v33 + 16), v10, v11);
          v33 = v64;
          v15 = v63;
          v14 = v62;
          v34 = v36;
        }
        v34[v11] = 0;
        *(_QWORD *)v33 = v11;
        *(_DWORD *)(v33 + 8) = v3;
        *v15 = v33;
        ++v75.m128i_i32[1];
        v35 = sub_22450D0(&v74, v14);
        sub_E37610((__int64 **)v65, (__int64 *)v74 + v35, 0);
LABEL_12:
        if ( src != v61 )
          break;
LABEL_6:
        if ( v7 == ++v5 )
          goto LABEL_14;
      }
      operator delete(src);
      ++v5;
    }
    while ( v7 != v5 );
LABEL_14:
    v1 = v58;
LABEL_15:
    v16 = *(_QWORD *)(v1 + 48);
    if ( ++v3 != (*(_QWORD *)(v1 + 56) - v16) >> 4 )
    {
      v2 = 16LL * v3 + v16;
      if ( ((*(_BYTE *)(v2 + 8) >> 3) & 3) != 2 )
      {
        v17 = *((__m128i **)&v76 + 1);
        v18 = v78;
        goto LABEL_18;
      }
      continue;
    }
    break;
  }
LABEL_56:
  v45 = (char *)v77;
  LOBYTE(v46) = 0;
  v47 = (char *)v77 + 8 * (unsigned int)v78;
  if ( v77 != v47 )
  {
    while ( 1 )
    {
      v48 = *(_QWORD *)v45;
      v45 += 8;
      operator delete(v48, 4096LL << v46, 16);
      if ( v47 == v45 )
        break;
      v46 = (unsigned int)((v45 - (_BYTE *)v77) >> 3) >> 7;
      if ( v46 >= 0x1E )
        LOBYTE(v46) = 30;
    }
  }
  v49 = v80;
  v50 = &v80[(unsigned int)v81];
  if ( v80 != v50 )
  {
    do
    {
      v51 = v49->m128i_i64[1];
      v52 = v49->m128i_i64[0];
      ++v49;
      operator delete(v52, v51, 16);
    }
    while ( v50 != v49 );
    v50 = v80;
  }
  if ( v50 != &si128 )
    free(v50);
LABEL_66:
  if ( v77 != v79 )
    free(v77);
  free(v74);
}
