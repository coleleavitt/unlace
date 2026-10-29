__int64 __fastcall sub_222F290(__int64 a1, __int64 a2)
{
  bool v4; // zf
  int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // r14
  void *v8; // rdi
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // rsi
  size_t v14; // rdx
  __int64 v15; // rax
  size_t *v16; // r13
  size_t *v17; // rax
  size_t v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  size_t v21; // rax
  void *v22; // rdx
  int v23; // r14d
  void *v24; // rdx
  size_t v25; // r14
  char *v26; // r8
  int v27; // edx
  unsigned int v28; // eax
  bool v29; // cf
  size_t v30; // rax
  __int64 v31; // r8
  _QWORD *v32; // rdx
  __int64 v33; // rdi
  _BYTE *v34; // rax
  __pid_t v35; // eax
  void *v36; // rax
  size_t v37; // rax
  unsigned int v38; // eax
  size_t v39; // rdx
  __int64 v40; // rax
  size_t v41; // rdx
  size_t v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  size_t v46; // rdx
  size_t *v47; // rdi
  size_t v48; // rdx
  size_t v49; // rcx
  __int64 v50; // rcx
  size_t v51; // rax
  std::_V2 *v52; // rdi
  __int64 v53; // rax
  void *v54; // rax
  void *v55; // rax
  size_t v56; // rdx
  __int64 v57; // rax
  size_t v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  _BYTE *v62; // r13
  size_t *v63; // rax
  size_t v64; // rax
  _BYTE *v65; // rdi
  size_t v66; // rdx
  size_t v67; // rax
  void *v68; // [rsp+0h] [rbp-398h] BYREF
  size_t v69; // [rsp+8h] [rbp-390h] BYREF
  __int64 v70; // [rsp+10h] [rbp-388h]
  unsigned int v71; // [rsp+1Ch] [rbp-37Ch]
  unsigned int v72; // [rsp+24h] [rbp-374h] BYREF
  _QWORD v73[5]; // [rsp+28h] [rbp-370h] BYREF
  std::_V2 *v74[2]; // [rsp+50h] [rbp-348h] BYREF
  _BYTE v75[16]; // [rsp+60h] [rbp-338h] BYREF
  _QWORD v76[2]; // [rsp+70h] [rbp-328h] BYREF
  __int64 v77; // [rsp+80h] [rbp-318h]
  size_t v78; // [rsp+88h] [rbp-310h]
  __int16 v79; // [rsp+90h] [rbp-308h]
  void *ptr; // [rsp+A0h] [rbp-2F8h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-2F0h]
  _BYTE v82[136]; // [rsp+B8h] [rbp-2E0h] BYREF
  char name[8]; // [rsp+140h] [rbp-258h] BYREF
  __int64 v84; // [rsp+148h] [rbp-250h]
  _QWORD v85[2]; // [rsp+150h] [rbp-248h] BYREF
  __int16 v86; // [rsp+160h] [rbp-238h]
  unsigned int v87; // [rsp+188h] [rbp-210h]
  __int64 v88; // [rsp+190h] [rbp-208h]
  char v89; // [rsp+23Fh] [rbp-159h]
  void *src; // [rsp+240h] [rbp-158h] BYREF
  size_t n[2]; // [rsp+248h] [rbp-150h] BYREF
  __int64 v92; // [rsp+258h] [rbp-140h] BYREF
  int v93; // [rsp+260h] [rbp-138h]
  char v94; // [rsp+268h] [rbp-130h]

  v4 = *(_QWORD *)(a2 + 16) == 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v82;
  if ( !v4 )
    sub_9C3DB0(&ptr, (const void **)(a2 + 8));
  v5 = sub_228EC80(&ptr);
  v7 = v6;
  if ( v5 )
  {
    src = "failed to obtain absolute path for ";
    LOWORD(v93) = 1283;
    n[1] = (size_t)ptr;
    v92 = si128.m128i_i64[0];
    sub_2253560(name, &src);
    sub_22205D0(v76, (__int64)name, v5, v7);
    v8 = *(void **)name;
    if ( *(_QWORD **)name == v85 )
    {
LABEL_6:
      v9 = v76[0];
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v9;
      goto LABEL_7;
    }
LABEL_5:
    operator delete(v8);
    goto LABEL_6;
  }
  sub_9C3DB0((void **)(a2 + 160), (const void **)&ptr);
  v11 = *(_QWORD *)(a2 + 168);
  if ( (unsigned __int64)(v11 + 5) > *(_QWORD *)(a2 + 176) )
  {
    sub_2236E10(a2 + 160, a2 + 184, v11 + 5, 1);
    v11 = *(_QWORD *)(a2 + 168);
  }
  v12 = *(_QWORD *)(a2 + 160) + v11;
  *(_DWORD *)v12 = 1668246574;
  *(_BYTE *)(v12 + 4) = 107;
  v13 = *(void **)(a2 + 160);
  v14 = *(_QWORD *)(a2 + 168) + 5LL;
  *(_QWORD *)(a2 + 168) = v14;
  sub_222F080((__m128i *)&src, v13, v14);
  if ( v94 )
  {
    v15 = *(unsigned __int8 *)(a2 + 504);
    v16 = (size_t *)(a2 + 480);
    if ( (_BYTE)v15 == 0xFF )
    {
LABEL_16:
      v17 = (size_t *)src;
      *(_QWORD *)(a2 + 464) = v16;
      if ( v17 == &n[1] )
      {
        *(__m128i *)(a2 + 480) = _mm_load_si128((const __m128i *)&n[1]);
      }
      else
      {
        *(_QWORD *)(a2 + 464) = v17;
        *(_QWORD *)(a2 + 480) = n[1];
      }
      v18 = n[0];
      LOBYTE(n[1]) = 0;
      n[0] = 0;
      *(_QWORD *)(a2 + 472) = v18;
      src = &n[1];
      LODWORD(v18) = v93;
      *(_BYTE *)(a2 + 504) = 2;
      *(_DWORD *)(a2 + 496) = v18;
LABEL_19:
      *(_BYTE *)(a1 + 8) &= ~1u;
      v4 = v94 == 0;
      *(_BYTE *)a1 = 0;
      if ( !v4 && src != &n[1] )
        operator delete(src);
      goto LABEL_7;
    }
    if ( (_BYTE)v15 != 2 )
    {
      funcs_222E9D9[v15]();
      goto LABEL_16;
    }
    v47 = *(size_t **)(a2 + 464);
    v48 = n[0];
    if ( src == &n[1] )
    {
      if ( n[0] )
      {
        if ( n[0] == 1 )
          *(_BYTE *)v47 = n[1];
        else
          memcpy(v47, src, n[0]);
        v48 = n[0];
        v47 = *(size_t **)(a2 + 464);
      }
      *(_QWORD *)(a2 + 472) = v48;
      *((_BYTE *)v47 + v48) = 0;
      v47 = (size_t *)src;
      goto LABEL_56;
    }
    if ( v16 == v47 )
    {
      v68 = (void *)n[1];
      *(_QWORD *)(a2 + 464) = src;
      *(__m128 *)(a2 + 472) = _mm_loadh_ps((const double *)&v68);
    }
    else
    {
      v68 = (void *)n[1];
      v49 = *(_QWORD *)(a2 + 480);
      *(_QWORD *)(a2 + 464) = src;
      *(__m128 *)(a2 + 472) = _mm_loadh_ps((const double *)&v68);
      if ( v47 )
      {
        src = v47;
        n[1] = v49;
LABEL_56:
        n[0] = 0;
        *(_BYTE *)v47 = 0;
        *(_DWORD *)(a2 + 496) = v93;
        goto LABEL_19;
      }
    }
    v47 = &n[1];
    src = &n[1];
    goto LABEL_56;
  }
  sub_9C3DB0((void **)(a2 + 312), (const void **)(a2 + 160));
  v19 = *(_QWORD *)(a2 + 320);
  if ( (unsigned __int64)(v19 + 9) > *(_QWORD *)(a2 + 328) )
  {
    sub_2236E10(a2 + 312, a2 + 336, v19 + 9, 1);
    v19 = *(_QWORD *)(a2 + 320);
  }
  v20 = *(_QWORD *)(a2 + 312) + v19;
  *(_BYTE *)(v20 + 8) = 37;
  *(_QWORD *)v20 = 0x252525252525252DLL;
  v21 = *(_QWORD *)(a2 + 320);
  v22 = *(void **)(a2 + 312);
  LOWORD(v93) = 261;
  v21 += 9LL;
  *(_QWORD *)(a2 + 320) = v21;
  src = v22;
  n[0] = v21;
  v23 = sub_228FBC0(&src, &v72, a2 + 312, 0, 438);
  v68 = v24;
  if ( v23 )
  {
    v45 = *(_QWORD *)(a2 + 320);
    v46 = *(_QWORD *)(a2 + 312);
    LOWORD(v93) = 1283;
    src = "failed to create unique file ";
    n[1] = v46;
    v92 = v45;
    sub_2253560(name, &src);
    sub_22205D0(v76, (__int64)name, v23, (__int64)v68);
    v8 = *(void **)name;
    if ( *(_QWORD **)name == v85 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v25 = *(_QWORD *)(a2 + 320);
  v68 = *(void **)(a2 + 312);
  v73[1] = v68;
  v73[2] = v25;
  sub_2296DB0(v68, v25, 0);
  src = &v92;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v89 = 0;
  name[0] = 0;
  gethostname(name, 0xFFu);
  v26 = name;
  do
  {
    v27 = *(_DWORD *)v26;
    v26 += 4;
    v28 = ~v27 & (v27 - 16843009) & 0x80808080;
  }
  while ( !v28 );
  if ( (~v27 & (v27 - 16843009) & 0x8080) == 0 )
  {
    LOBYTE(v28) = (~v27 & (v27 - 16843009) & 0x80808080) >> 16;
    v26 += 2;
  }
  v29 = __CFADD__((_BYTE)v28, (_BYTE)v28);
  v30 = n[0];
  v31 = &v26[-v29 - 3] - name;
  if ( n[0] + v31 > n[1] )
  {
    v69 = v31;
    sub_2236E10(&src, &v92, n[0] + v31, 1);
    v30 = n[0];
    v31 = v69;
  }
  if ( v31 )
  {
    v32 = (char *)src + v30;
    if ( (unsigned int)v31 >= 8 )
    {
      *v32 = *(_QWORD *)name;
      *(_QWORD *)((char *)v32 + (unsigned int)v31 - 8) = *(_QWORD *)&v82[(unsigned int)v31 + 128];
      qmemcpy(
        (void *)((unsigned __int64)(v32 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(name - ((char *)v32 - ((unsigned __int64)(v32 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * (((unsigned int)v31 + (_DWORD)v32 - (((_DWORD)v32 + 8) & 0xFFFFFFF8)) >> 3));
      v30 = n[0];
    }
    else if ( (v31 & 4) != 0 )
    {
      *(_DWORD *)v32 = *(_DWORD *)name;
      *(_DWORD *)((char *)v32 + (unsigned int)v31 - 4) = *(_DWORD *)&v82[(unsigned int)v31 + 132];
      v30 = n[0];
    }
    else if ( (_DWORD)v31 )
    {
      *(_BYTE *)v32 = name[0];
      v30 = n[0];
      if ( (v31 & 2) != 0 )
      {
        *(_WORD *)((char *)v32 + (unsigned int)v31 - 2) = *(_WORD *)&v82[(unsigned int)v31 + 134];
        v30 = n[0];
      }
    }
  }
  n[0] = v30 + v31;
  sub_227D340(name, v72, 1, 0, 0);
  v33 = sub_227BF10(name, src, n[0]);
  v34 = *(_BYTE **)(v33 + 32);
  if ( (unsigned __int64)v34 >= *(_QWORD *)(v33 + 24) )
  {
    v33 = sub_227BA10(v33, 32);
  }
  else
  {
    *(_QWORD *)(v33 + 32) = v34 + 1;
    *v34 = 32;
  }
  v69 = v33;
  v35 = j__getpid();
  sub_227B930(v33, v35);
  sub_227D4F0(name);
  if ( v87 )
  {
    v50 = *(_QWORD *)(a2 + 312);
    v51 = *(_QWORD *)(a2 + 320);
    v79 = 1283;
    v77 = v50;
    v76[0] = "failed to write to ";
    v78 = v51;
    v70 = v88;
    v69 = v87;
    sub_2253560(v74, v76);
    sub_22205D0(v73, (__int64)v74, v69, v70);
    v52 = v74[0];
    if ( (_BYTE *)v74[0] != v75 )
      operator delete(v74[0]);
    v87 = 0;
    v53 = std::_V2::system_category(v52);
    *(_BYTE *)(a1 + 8) |= 1u;
    v88 = v53;
    *(_QWORD *)a1 = v73[0];
    sub_227B600(name);
    if ( src != &v92 )
      free(src);
    goto LABEL_48;
  }
  sub_227B600(name);
  if ( src != &v92 )
    free(src);
  while ( 1 )
  {
    v36 = *(void **)(a2 + 160);
    LOWORD(v93) = 261;
    src = v36;
    v37 = *(_QWORD *)(a2 + 168);
    v86 = 261;
    n[0] = v37;
    *(_QWORD *)name = *(_QWORD *)(a2 + 312);
    v84 = *(_QWORD *)(a2 + 320);
    v38 = sub_228BEA0(name, &src);
    v69 = v39;
    v70 = v38;
    if ( !v38 )
    {
      v60 = *(unsigned __int8 *)(a2 + 504);
      if ( (_BYTE)v60 != 0xFF )
      {
        if ( (_BYTE)v60 == 1 )
        {
LABEL_82:
          *(_BYTE *)(a1 + 8) &= ~1u;
          *(_BYTE *)a1 = 1;
          goto LABEL_7;
        }
        funcs_222E9D9[v60]();
      }
      *(_BYTE *)(a2 + 504) = 1;
      goto LABEL_82;
    }
    v71 = v38;
    v40 = std::_V2::generic_category((std::_V2 *)name);
    v41 = *(_QWORD *)(a2 + 168);
    if ( v71 != 17 || v40 != v69 )
    {
      v42 = *(_QWORD *)(a2 + 312);
      v43 = *(_QWORD *)(a2 + 320);
      v77 = *(_QWORD *)(a2 + 160);
      v79 = 1283;
      src = name;
      v76[0] = "failed to create link ";
      v78 = v41;
      v85[0] = " to ";
      *(_QWORD *)name = v76;
      v86 = 770;
      n[1] = v42;
      v92 = v43;
      LOWORD(v93) = 1282;
      sub_2253560(v74, &src);
      sub_22205D0(v73, (__int64)v74, v70, v69);
      if ( (_BYTE *)v74[0] != v75 )
        operator delete(v74[0]);
      v44 = v73[0];
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v44;
      goto LABEL_48;
    }
    sub_222F080((__m128i *)&src, *(void **)(a2 + 160), v41);
    if ( v94 )
      break;
    v54 = *(void **)(a2 + 160);
    LOWORD(v93) = 261;
    src = v54;
    n[0] = *(_QWORD *)(a2 + 168);
    if ( !(unsigned int)sub_228C1E0(&src, 0) )
    {
      v55 = *(void **)(a2 + 160);
      LOWORD(v93) = 261;
      src = v55;
      n[0] = *(_QWORD *)(a2 + 168);
      v70 = sub_228BF70(&src, 1);
      if ( (_DWORD)v70 )
      {
        v57 = *(_QWORD *)(a2 + 320);
        v69 = v56;
        v58 = *(_QWORD *)(a2 + 312);
        LOWORD(v93) = 1283;
        src = "failed to remove lockfile ";
        n[1] = v58;
        v92 = v57;
        sub_2253560(name, &src);
        sub_22205D0(v76, (__int64)name, v70, v69);
        if ( *(_QWORD **)name != v85 )
          operator delete(*(void **)name);
        v59 = v76[0];
        *(_BYTE *)(a1 + 8) |= 1u;
        *(_QWORD *)a1 = v59;
        goto LABEL_48;
      }
    }
  }
  v61 = *(unsigned __int8 *)(a2 + 504);
  v62 = (_BYTE *)(a2 + 480);
  if ( (_BYTE)v61 == 0xFF )
    goto LABEL_86;
  if ( (_BYTE)v61 == 2 )
  {
    v65 = *(_BYTE **)(a2 + 464);
    v66 = n[0];
    if ( src == &n[1] )
    {
      if ( n[0] )
      {
        if ( n[0] == 1 )
          *v65 = n[1];
        else
          memcpy(v65, src, n[0]);
        v65 = *(_BYTE **)(a2 + 464);
        v66 = n[0];
      }
      *(_QWORD *)(a2 + 472) = v66;
      v65[v66] = 0;
      goto LABEL_96;
    }
    v69 = n[1];
    if ( v62 == v65 )
    {
      v70 = n[0];
      *(_QWORD *)(a2 + 464) = src;
      *(__m128 *)(a2 + 472) = _mm_loadh_ps((const double *)&v69);
    }
    else
    {
      v70 = n[0];
      v67 = *(_QWORD *)(a2 + 480);
      *(_QWORD *)(a2 + 464) = src;
      *(__m128 *)(a2 + 472) = _mm_loadh_ps((const double *)&v69);
      if ( v65 )
      {
        src = v65;
        n[1] = v67;
LABEL_96:
        n[0] = 0;
        *(_BYTE *)src = 0;
        *(_DWORD *)(a2 + 496) = v93;
        goto LABEL_89;
      }
    }
    src = &n[1];
    goto LABEL_96;
  }
  funcs_222E9D9[v61]();
LABEL_86:
  v63 = (size_t *)src;
  *(_QWORD *)(a2 + 464) = v62;
  if ( v63 == &n[1] )
  {
    *(__m128i *)(a2 + 480) = _mm_load_si128((const __m128i *)&n[1]);
  }
  else
  {
    *(_QWORD *)(a2 + 464) = v63;
    *(_QWORD *)(a2 + 480) = n[1];
  }
  v64 = n[0];
  LOBYTE(n[1]) = 0;
  n[0] = 0;
  *(_QWORD *)(a2 + 472) = v64;
  src = &n[1];
  LODWORD(v64) = v93;
  *(_BYTE *)(a2 + 504) = 2;
  *(_DWORD *)(a2 + 496) = v64;
LABEL_89:
  *(_BYTE *)(a1 + 8) &= ~1u;
  v4 = v94 == 0;
  *(_BYTE *)a1 = 0;
  if ( !v4 && src != &n[1] )
    operator delete(src);
LABEL_48:
  LOWORD(v93) = 261;
  src = v68;
  n[0] = v25;
  sub_228BF70(&src, 1);
  sub_2296EA0(v68, v25);
LABEL_7:
  if ( ptr != v82 )
    free(ptr);
  return a1;
}
