bool __fastcall sub_237DA0(__int64 a1, unsigned __int64 a2, __int64 *a3, char a4)
{
  _QWORD *v7; // r15
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  signed int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rdi
  char v14; // al
  char *v15; // r8
  int v16; // r9d
  __int64 v17; // rsi
  __int64 v18; // rdi
  int v19; // r14d
  __int64 v20; // rdx
  char *v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  __m128i v24; // xmm0
  unsigned __int64 v25; // xmm0_8
  __int64 v26; // rax
  __m128i v27; // xmm0
  __m128i *v28; // rbp
  int v29; // edx
  unsigned __int64 v30; // rdx
  signed int v31; // ecx
  char *v32; // rdx
  __int64 v33; // rsi
  int v34; // eax
  __int64 tinfo_property; // rax
  char v36; // bl
  int *v37; // rdx
  int v38; // eax
  size_t v39; // rbp
  __int64 v40; // r9
  unsigned __int64 v41; // rcx
  int v42; // r13d
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned int v45; // ebp
  int v46; // eax
  __int64 v47; // r9
  __int64 v48; // rsi
  int v49; // ebp
  signed int v50; // eax
  __int64 v51; // rdi
  __int64 v52; // r13
  __int64 v54; // [rsp+8h] [rbp-140h]
  int v55; // [rsp+8h] [rbp-140h]
  int v56; // [rsp+8h] [rbp-140h]
  int v57; // [rsp+8h] [rbp-140h]
  char v58; // [rsp+14h] [rbp-134h]
  unsigned int v59; // [rsp+14h] [rbp-134h]
  int v60; // [rsp+14h] [rbp-134h]
  __int64 v61; // [rsp+18h] [rbp-130h]
  char *v62; // [rsp+18h] [rbp-130h]
  char *v63; // [rsp+20h] [rbp-128h]
  char *v64; // [rsp+38h] [rbp-110h] BYREF
  __int64 v65; // [rsp+40h] [rbp-108h] BYREF
  __int64 v66; // [rsp+48h] [rbp-100h] BYREF
  __int64 v67; // [rsp+50h] [rbp-F8h] BYREF
  __m128i v68; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v69; // [rsp+68h] [rbp-E0h]
  int v70; // [rsp+70h] [rbp-D8h]
  char v71; // [rsp+74h] [rbp-D4h]
  void *src; // [rsp+80h] [rbp-C8h] BYREF
  size_t n[2]; // [rsp+88h] [rbp-C0h]
  __int64 v74; // [rsp+98h] [rbp-B0h] BYREF
  char *v75; // [rsp+A0h] [rbp-A8h]
  __int64 v76; // [rsp+A8h] [rbp-A0h]
  unsigned __int64 v77; // [rsp+B0h] [rbp-98h]
  int v78; // [rsp+B8h] [rbp-90h]
  void *v79; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v80; // [rsp+C8h] [rbp-80h]
  __int64 v81; // [rsp+D8h] [rbp-70h] BYREF
  __int64 v82; // [rsp+E0h] [rbp-68h]
  __int64 v83; // [rsp+E8h] [rbp-60h]
  unsigned __int64 v84; // [rsp+F0h] [rbp-58h]
  int v85; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v86; // [rsp+108h] [rbp-40h]

  v86 = __readfsqword(0x28u);
  v7 = **(_QWORD ***)(a1 + 64);
  if ( v7 )
  {
    v8 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v8 )
    {
      while ( (*(_BYTE *)v8 & 2) == 0 )
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(v8 + 24);
          if ( a2 < v9 )
            break;
          if ( v9 >= a2 )
            goto LABEL_8;
          v8 = *(_QWORD *)(v8 + 16);
          if ( (*(_BYTE *)v8 & 2) != 0 )
            goto LABEL_7;
        }
        v8 = *(_QWORD *)(v8 + 8);
      }
LABEL_7:
      v8 = **(_QWORD **)(a1 + 64);
    }
  }
  else
  {
    v8 = 0;
  }
LABEL_8:
  if ( !(unsigned __int8)sub_32F330(a2, &v64) )
  {
    if ( *(_BYTE *)a2 != 15 )
      return v7 == (_QWORD *)v8;
    if ( v7 == (_QWORD *)v8 )
      *(_BYTE *)(a1 + 84) = 1;
    return 1;
  }
  v11 = 0;
  if ( *(_DWORD *)(a2 + 4) == -1 )
  {
    if ( v7 == (_QWORD *)v8 )
      goto LABEL_14;
  }
  else
  {
    v59 = sub_1FBEA0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL), a2, *(_QWORD *)(a1 + 32));
    v11 = round_up_power2(v59);
    if ( *(_DWORD *)(a2 + 4) < v11 )
      v11 = v59;
    if ( v7 == (_QWORD *)v8 )
      goto LABEL_14;
  }
  if ( (**(_DWORD **)(a1 + 8) & 0x40000) != 0 )
    return 0;
LABEL_14:
  if ( !(unsigned __int8)sub_1F0C10(*(_QWORD *)(a1 + 16), (__int64)v64, v11)
    && !sub_1F09D0(*(_QWORD *)(a1 + 8), (char *)a2, -1) )
  {
    return 0;
  }
  v12 = *(_QWORD *)(a1 + 32);
  v13 = *(_QWORD *)(a1 + 8);
  v65 = 0;
  v14 = sub_242770(v13, *(_QWORD *)(v12 + 24), a2, &v65, 0);
  v17 = (__int64)v64;
  v18 = *(_QWORD *)(a1 + 8);
  v58 = v14;
  if ( v14 )
  {
    a3 = &v65;
    v19 = 129;
    if ( *(_BYTE *)a2 == 15 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( !v11
    || (__int64)v64 < *(_QWORD *)(v18 + 144)
    || (v30 = *(_QWORD *)(a1 + 240), *(_DWORD *)(a1 + 260))
    && (unsigned __int64)v64 >= v30
    && *(int *)(a1 + 260) + v30 - 1 >= (unsigned __int64)v64 )
  {
LABEL_17:
    v19 = 1;
    goto LABEL_18;
  }
  src = v64;
  LODWORD(v67) = v11;
  v79 = nullptr;
  if ( a3 )
  {
    copy_tinfo_t(&v79, a3);
    v18 = *(_QWORD *)(a1 + 8);
  }
  sub_228510((int *)&v67, (__int64 *)&src, v18, (__int64 *)&v79);
  clear_tinfo_t(&v79);
  v17 = (__int64)v64;
  v31 = v67;
  v32 = (char *)src;
  v18 = *(_QWORD *)(a1 + 8);
  if ( (__int64)v64 > (__int64)src || (v19 = 1, v15 = (char *)src + (int)v67, (__int64)v15 > (__int64)&v64[v11]) )
  {
    v33 = *(_QWORD *)(v18 + 1504);
    v34 = 16;
    if ( (*(_BYTE *)(v33 + 50) & 8) == 0 )
      v34 = 2 * *(_DWORD *)(v33 + 80);
    if ( (int)v67 < v34 )
    {
      v62 = (char *)src;
      v50 = sub_11CA90(v67);
      v18 = *(_QWORD *)(a1 + 8);
      v32 = v62;
      v31 = v50;
    }
    v64 = v32;
    v17 = (__int64)v32;
    v11 = v31;
    v19 = 257;
  }
LABEL_18:
  if ( (unsigned __int8)sub_229280(v18, v17, a2, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), (int)v15, v16) )
  {
    v20 = *(_QWORD *)(a1 + 8);
    v21 = v64;
    if ( *(_DWORD *)(v20 + 116) && *(char **)(v20 + 136) == v64 )
      v19 |= 0x10000000u;
    v22 = *(_QWORD *)(a1 + 32);
    v23 = *(_QWORD *)(v22 + 24);
    if ( a4 )
      v23 += *(_DWORD *)v20 & 1;
    v24 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL));
    *(_OWORD *)n = 0;
    src = nullptr;
    v25 = _mm_unpacklo_epi32(v24, _mm_cvtsi32_si128(v11)).m128i_u64[0];
    if ( a3 )
    {
      v63 = v64;
      v61 = v23;
      v74 = 0;
      copy_tinfo_t(&v74, a3);
      v22 = *(_QWORD *)(a1 + 32);
      v21 = v63;
      v23 = v61;
    }
    else
    {
      v74 = 0;
    }
    v75 = v21;
    v76 = v23;
    v78 = v19;
    v77 = v25;
    if ( !v58 )
    {
      if ( sub_1226C0(v22, a2) && (get_tinfo_property(v74, 2) & 0xF) != 9 )
      {
        sub_32C080(&v79, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL));
        copy_tinfo_t(&v74, &v79);
        clear_tinfo_t(&v79);
      }
      v22 = *(_QWORD *)(a1 + 32);
    }
    v26 = *(_QWORD *)(a1 + 16);
    v27 = _mm_loadl_epi64((const __m128i *)(a1 + 24));
    v67 = 0;
    LODWORD(v26) = *(_DWORD *)(v26 + 72);
    v69 = a2;
    v70 = v26;
    v68 = _mm_unpacklo_epi64(v27, (__m128i)(unsigned __int64)v22);
    v71 = a4;
    if ( get_tinfo_size(0, v74, 0) <= 0
      || (get_tinfo_property(v74, 2) & 0x3F) == 1
      || (get_tinfo_property(v74, 2) & 0xF) == 0xC )
    {
      clear_tinfo_t(&v74);
    }
    v28 = (__m128i *)(a1 + 88);
    if ( *(_DWORD *)(a2 + 4) != -1 )
    {
LABEL_33:
      sub_2360C0(v28, (__int64)&src, &v67);
      if ( *(_DWORD *)(a2 + 4) == -1 && (_BYTE)v74 )
      {
        v66 = 0;
        tinfo_property = get_tinfo_property(v74, 289);
        v66 = tinfo_property;
        if ( !(_BYTE)tinfo_property
          || (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0
          || (v79 = nullptr,
              v79 = (void *)get_tinfo_property(tinfo_property, 9),
              v36 = get_tinfo_property(v79, 2),
              clear_tinfo_t(&v79),
              (v36 & 0x3F) == 0x30) )
        {
          clear_tinfo_t(&v66);
          v29 = HIDWORD(v77);
          goto LABEL_35;
        }
        clear_tinfo_t(&v66);
        v78 = 2;
        HIDWORD(v77) = get_tinfo_size(0, v74, 0);
        v29 = HIDWORD(v77);
        if ( SHIDWORD(v77) <= 0 )
          goto LABEL_35;
        if ( !sub_226FD0(*(_QWORD *)(a1 + 8), (__int64)v75, SHIDWORD(v77)) )
          sub_2360C0(v28, (__int64)&src, nullptr);
      }
      v29 = HIDWORD(v77);
LABEL_35:
      if ( v29 <= 0 )
        v29 = 1;
      sub_2329E0(*(_QWORD *)(a1 + 8), (signed __int64)v75, v29);
      clear_tinfo_t(&v74);
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      goto LABEL_39;
    }
    v37 = *(int **)(a1 + 32);
    v38 = *v37;
    if ( (unsigned int)(*v37 - 56) > 1 )
    {
      if ( v38 == 4 || v38 == 67 && v37[9] == v37[17] )
        v78 |= 0x800u;
      v28 = (__m128i *)(a1 + 88);
      if ( (_BYTE)v74 && !(unsigned int)verify_tinfo(v74) )
      {
        v39 = n[0];
        v79 = nullptr;
        v80 = 0;
        if ( n[0] )
        {
          v79 = (void *)qalloc_or_throw(n[0]);
          *((_QWORD *)&v80 + 1) = v39;
          memcpy(v79, src, v39);
          *(_QWORD *)&v80 = v39;
        }
        v81 = 0;
        copy_tinfo_t(&v81, &v74);
        v85 = 2;
        v82 = (__int64)v75;
        v83 = v76;
        v84 = v77;
        HIDWORD(v84) = get_tinfo_size(0, v81, 0);
        v28 = (__m128i *)(a1 + 88);
        if ( SHIDWORD(v84) > 0 )
        {
          v28 = (__m128i *)(a1 + 88);
          if ( !sub_226FD0(*(_QWORD *)(a1 + 8), v82, SHIDWORD(v84)) )
            sub_2360C0((__m128i *)(a1 + 88), (__int64)&v79, nullptr);
        }
        clear_tinfo_t(&v81);
        if ( v79 )
        {
          *(_QWORD *)&v80 = 0;
          qfree(v79);
        }
      }
      goto LABEL_33;
    }
    if ( *((_BYTE *)v37 + 64) != 8 )
      goto LABEL_33;
    v40 = *((_QWORD *)v37 + 9);
    v41 = *(_QWORD *)(v40 + 32);
    if ( !v41 )
      goto LABEL_33;
    v42 = 0;
    v43 = 0;
    do
    {
      v44 = *(_QWORD *)(v40 + 24) + 80 * v43;
      if ( *(_BYTE *)v44 == 10 && *(_QWORD *)(v44 + 8) == a2 )
        break;
      v43 = ++v42;
    }
    while ( v42 < v41 );
    v28 = (__m128i *)(a1 + 88);
    if ( v41 == v43 )
      goto LABEL_33;
    v45 = *(_DWORD *)(v40 + 284);
    v54 = v40;
    v46 = sub_32FB00(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL), v45);
    v60 = v46;
    if ( v45 <= 0x26 )
    {
      v47 = v54;
      if ( v45 > 5 )
      {
        if ( ((1LL << v45) & 0x5000000140LL) == 0 )
        {
          if ( ((1LL << v45) & 0x2000000280LL) != 0 )
            goto LABEL_109;
          if ( v45 != 35 )
            goto LABEL_94;
LABEL_121:
          if ( !v42 )
          {
            v56 = v46;
            if ( v46 != -1 )
            {
              if ( (unsigned __int8)sub_11FD80((char *)(*(_QWORD *)(v47 + 24) + 160LL), &v66, 0) )
              {
                v49 = v66;
                if ( get_tinfo_size(0, v74, 0) == v56 )
                  goto LABEL_117;
                goto LABEL_116;
              }
            }
          }
LABEL_109:
          v78 |= 0x800u;
          sub_236920(a1, (__int64)&src, 1);
LABEL_110:
          v28 = (__m128i *)(a1 + 88);
          goto LABEL_33;
        }
        if ( v42 || v46 == -1 )
          goto LABEL_109;
        v51 = *(_QWORD *)(v54 + 24);
        v52 = v46;
        v57 = v46;
        v49 = sub_32F220(v51 + 80, v46);
        if ( v57 != 1 )
        {
          if ( v52 != get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 376LL), 0) )
          {
            if ( !under_debugger )
              sub_383060(52487);
            goto LABEL_135;
          }
          copy_tinfo_t(&v74, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 376LL);
          v49 /= v60;
        }
        if ( v52 == get_tinfo_size(0, v74, 0) )
          goto LABEL_117;
LABEL_116:
        sub_32C270(&v79, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), (unsigned int)v60);
        copy_tinfo_t(&v74, &v79);
        clear_tinfo_t(&v79);
        goto LABEL_117;
      }
      if ( v45 == 5 )
      {
        if ( v42 > 1 )
          goto LABEL_109;
        v55 = v46;
        if ( v46 == -1 || !(unsigned __int8)sub_11FD80((char *)(*(_QWORD *)(v47 + 24) + 160LL), &v66, 0) )
          goto LABEL_109;
        v49 = v66;
        if ( get_tinfo_size(0, v74, 0) == v55 )
        {
LABEL_117:
          sub_236920(a1, (__int64)&src, v49);
          goto LABEL_110;
        }
        goto LABEL_116;
      }
      if ( v45 > 1 )
        goto LABEL_121;
    }
LABEL_94:
    if ( (unsigned __int8)sub_F8290(*(_QWORD *)(a1 + 32), v42) )
    {
      v48 = v74;
      if ( !(_BYTE)v74 )
      {
        v79 = &word_10 + 1;
        copy_tinfo_t(&v74, &v79);
        clear_tinfo_t(&v79);
        v48 = v74;
      }
      HIDWORD(v77) = get_tinfo_size(0, v48, 0);
      v28 = (__m128i *)(a1 + 88);
      if ( SHIDWORD(v77) > 0 )
        goto LABEL_33;
      if ( !under_debugger )
        sub_383060(52275);
LABEL_135:
      BUG();
    }
    goto LABEL_109;
  }
LABEL_39:
  clear_tinfo_t(&v65);
  return 1;
}
