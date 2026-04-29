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
  __int64 v28; // rsi
  __m128i *v29; // rbp
  int v30; // edx
  unsigned __int64 v31; // rdx
  signed int v32; // ecx
  char *v33; // rdx
  __int64 v34; // rsi
  int v35; // eax
  __int64 tinfo_property; // rax
  char v37; // bl
  int *v38; // rdx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  size_t v42; // rbp
  __int64 v43; // r9
  unsigned __int64 v44; // rcx
  int v45; // r13d
  __int64 v46; // rdx
  __int64 v47; // rax
  unsigned int v48; // ebp
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // r9
  unsigned int v52; // ebp
  __int64 v53; // rcx
  signed int v54; // eax
  __int64 v55; // rdi
  __int64 v56; // r13
  __int64 v58; // [rsp+8h] [rbp-140h]
  int v59; // [rsp+8h] [rbp-140h]
  int v60; // [rsp+8h] [rbp-140h]
  int v61; // [rsp+8h] [rbp-140h]
  char v62; // [rsp+14h] [rbp-134h]
  signed int v63; // [rsp+14h] [rbp-134h]
  int v64; // [rsp+14h] [rbp-134h]
  __int64 v65; // [rsp+18h] [rbp-130h]
  char *v66; // [rsp+18h] [rbp-130h]
  char *v67; // [rsp+20h] [rbp-128h]
  char *v68; // [rsp+38h] [rbp-110h] BYREF
  __int64 v69; // [rsp+40h] [rbp-108h] BYREF
  __int64 v70; // [rsp+48h] [rbp-100h] BYREF
  __int64 v71; // [rsp+50h] [rbp-F8h] BYREF
  __m128i v72; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v73; // [rsp+68h] [rbp-E0h]
  int v74; // [rsp+70h] [rbp-D8h]
  char v75; // [rsp+74h] [rbp-D4h]
  void *src; // [rsp+80h] [rbp-C8h] BYREF
  size_t n[2]; // [rsp+88h] [rbp-C0h]
  __int64 v78; // [rsp+98h] [rbp-B0h]
  char *v79; // [rsp+A0h] [rbp-A8h]
  __int64 v80; // [rsp+A8h] [rbp-A0h]
  unsigned __int64 v81; // [rsp+B0h] [rbp-98h]
  int v82; // [rsp+B8h] [rbp-90h]
  void *v83; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v84; // [rsp+C8h] [rbp-80h]
  __int64 v85; // [rsp+D8h] [rbp-70h]
  __int64 v86; // [rsp+E0h] [rbp-68h]
  __int64 v87; // [rsp+E8h] [rbp-60h]
  unsigned __int64 v88; // [rsp+F0h] [rbp-58h]
  int v89; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v90; // [rsp+108h] [rbp-40h]

  v90 = __readfsqword(0x28u);
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
  if ( !(unsigned __int8)sub_32F330(a2, &v68) )
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
    v63 = sub_1FBEA0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL), a2, *(_QWORD *)(a1 + 32));
    v11 = round_up_power2();
    if ( *(_DWORD *)(a2 + 4) < v11 )
      v11 = v63;
    if ( v7 == (_QWORD *)v8 )
      goto LABEL_14;
  }
  if ( (**(_DWORD **)(a1 + 8) & 0x40000) != 0 )
    return 0;
LABEL_14:
  if ( !(unsigned __int8)sub_1F0C10(*(_QWORD *)(a1 + 16), (__int64)v68, v11)
    && !sub_1F09D0(*(_QWORD *)(a1 + 8), (char *)a2, -1) )
  {
    return 0;
  }
  v12 = *(_QWORD *)(a1 + 32);
  v13 = *(_QWORD *)(a1 + 8);
  v69 = 0;
  v14 = sub_242770(v13, *(_QWORD *)(v12 + 24), a2, &v69, 0);
  v17 = (__int64)v68;
  v18 = *(_QWORD *)(a1 + 8);
  v62 = v14;
  if ( v14 )
  {
    a3 = &v69;
    v19 = 129;
    if ( *(_BYTE *)a2 == 15 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( !v11
    || (__int64)v68 < *(_QWORD *)(v18 + 144)
    || (v31 = *(_QWORD *)(a1 + 240), *(_DWORD *)(a1 + 260))
    && (unsigned __int64)v68 >= v31
    && *(int *)(a1 + 260) + v31 - 1 >= (unsigned __int64)v68 )
  {
LABEL_17:
    v19 = 1;
    goto LABEL_18;
  }
  src = v68;
  LODWORD(v71) = v11;
  v83 = nullptr;
  if ( a3 )
  {
    copy_tinfo_t();
    v18 = *(_QWORD *)(a1 + 8);
  }
  sub_228510((int *)&v71, (__int64 *)&src, v18, (__int64 *)&v83);
  clear_tinfo_t();
  v17 = (__int64)v68;
  v32 = v71;
  v33 = (char *)src;
  v18 = *(_QWORD *)(a1 + 8);
  if ( (__int64)v68 > (__int64)src || (v19 = 1, v15 = (char *)src + (int)v71, (__int64)v15 > (__int64)&v68[v11]) )
  {
    v34 = *(_QWORD *)(v18 + 1504);
    v35 = 16;
    if ( (*(_BYTE *)(v34 + 50) & 8) == 0 )
      v35 = 2 * *(_DWORD *)(v34 + 80);
    if ( (int)v71 < v35 )
    {
      v66 = (char *)src;
      v54 = sub_11CA90(v71);
      v18 = *(_QWORD *)(a1 + 8);
      v33 = v66;
      v32 = v54;
    }
    v68 = v33;
    v17 = (__int64)v33;
    v11 = v32;
    v19 = 257;
  }
LABEL_18:
  if ( (unsigned __int8)sub_229280(v18, v17, a2, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), (int)v15, v16) )
  {
    v20 = *(_QWORD *)(a1 + 8);
    v21 = v68;
    if ( *(_DWORD *)(v20 + 116) && *(char **)(v20 + 136) == v68 )
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
      v67 = v68;
      v65 = v23;
      v78 = 0;
      copy_tinfo_t();
      v22 = *(_QWORD *)(a1 + 32);
      v21 = v67;
      v23 = v65;
    }
    else
    {
      v78 = 0;
    }
    v79 = v21;
    v80 = v23;
    v82 = v19;
    v81 = v25;
    if ( !v62 )
    {
      if ( sub_1226C0(v22, a2) && (get_tinfo_property() & 0xF) != 9 )
      {
        sub_32C080(&v83, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL));
        copy_tinfo_t();
        clear_tinfo_t();
      }
      v22 = *(_QWORD *)(a1 + 32);
    }
    v26 = *(_QWORD *)(a1 + 16);
    v27 = _mm_loadl_epi64((const __m128i *)(a1 + 24));
    v28 = v78;
    v71 = 0;
    LODWORD(v26) = *(_DWORD *)(v26 + 72);
    v73 = a2;
    v74 = v26;
    v72 = _mm_unpacklo_epi64(v27, (__m128i)(unsigned __int64)v22);
    v75 = a4;
    if ( get_tinfo_size() <= 0
      || (v28 = 2, (get_tinfo_property() & 0x3F) == 1)
      || (v28 = 2, (get_tinfo_property() & 0xF) == 0xC) )
    {
      clear_tinfo_t();
    }
    v29 = (__m128i *)(a1 + 88);
    if ( *(_DWORD *)(a2 + 4) != -1 )
    {
LABEL_33:
      sub_2360C0(v29, (__int64)&src, &v71);
      if ( *(_DWORD *)(a2 + 4) == -1 && (_BYTE)v78 )
      {
        v70 = 0;
        tinfo_property = get_tinfo_property();
        v70 = tinfo_property;
        if ( !(_BYTE)tinfo_property
          || (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0
          || (v83 = nullptr,
              v83 = (void *)get_tinfo_property(),
              v37 = get_tinfo_property(),
              clear_tinfo_t(),
              (v37 & 0x3F) == 0x30) )
        {
          clear_tinfo_t();
          v30 = HIDWORD(v81);
          goto LABEL_35;
        }
        clear_tinfo_t();
        v82 = 2;
        HIDWORD(v81) = get_tinfo_size();
        v30 = HIDWORD(v81);
        if ( SHIDWORD(v81) <= 0 )
          goto LABEL_35;
        if ( !sub_226FD0(*(_QWORD *)(a1 + 8), (__int64)v79, SHIDWORD(v81)) )
          sub_2360C0(v29, (__int64)&src, nullptr);
      }
      v30 = HIDWORD(v81);
LABEL_35:
      if ( v30 <= 0 )
        v30 = 1;
      sub_2329E0(*(_QWORD *)(a1 + 8), (signed __int64)v79, v30);
      clear_tinfo_t();
      if ( src )
      {
        n[0] = 0;
        qfree((__int64)src);
      }
      goto LABEL_39;
    }
    v38 = *(int **)(a1 + 32);
    v39 = *v38;
    if ( (unsigned int)(*v38 - 56) > 1 )
    {
      if ( v39 == 4 || v39 == 67 && v38[9] == v38[17] )
        v82 |= 0x800u;
      v29 = (__m128i *)(a1 + 88);
      if ( (_BYTE)v78 && !(unsigned int)verify_tinfo() )
      {
        v42 = n[0];
        v83 = nullptr;
        v84 = 0;
        if ( n[0] )
        {
          v83 = (void *)qalloc_or_throw(n[0], v28, v40, v41);
          *((_QWORD *)&v84 + 1) = v42;
          memcpy(v83, src, v42);
          *(_QWORD *)&v84 = v42;
        }
        v85 = 0;
        copy_tinfo_t();
        v89 = 2;
        v86 = (__int64)v79;
        v87 = v80;
        v88 = v81;
        HIDWORD(v88) = get_tinfo_size();
        v29 = (__m128i *)(a1 + 88);
        if ( SHIDWORD(v88) > 0 )
        {
          v29 = (__m128i *)(a1 + 88);
          if ( !sub_226FD0(*(_QWORD *)(a1 + 8), v86, SHIDWORD(v88)) )
            sub_2360C0((__m128i *)(a1 + 88), (__int64)&v83, nullptr);
        }
        clear_tinfo_t();
        if ( v83 )
        {
          *(_QWORD *)&v84 = 0;
          qfree((__int64)v83);
        }
      }
      goto LABEL_33;
    }
    if ( *((_BYTE *)v38 + 64) != 8 )
      goto LABEL_33;
    v43 = *((_QWORD *)v38 + 9);
    v44 = *(_QWORD *)(v43 + 32);
    if ( !v44 )
      goto LABEL_33;
    v45 = 0;
    v46 = 0;
    do
    {
      v47 = *(_QWORD *)(v43 + 24) + 80 * v46;
      if ( *(_BYTE *)v47 == 10 && *(_QWORD *)(v47 + 8) == a2 )
        break;
      v46 = ++v45;
    }
    while ( v45 < v44 );
    v29 = (__m128i *)(a1 + 88);
    if ( v44 == v46 )
      goto LABEL_33;
    v48 = *(_DWORD *)(v43 + 284);
    v58 = v43;
    v49 = sub_32FB00(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL), v48);
    v64 = v49;
    if ( v48 <= 0x26 )
    {
      v51 = v58;
      if ( v48 > 5 )
      {
        v50 = v48;
        if ( ((1LL << v48) & 0x5000000140LL) == 0 )
        {
          if ( ((1LL << v48) & 0x2000000280LL) != 0 )
            goto LABEL_109;
          if ( v48 != 35 )
            goto LABEL_94;
LABEL_121:
          if ( !v45 )
          {
            v60 = v49;
            if ( v49 != -1 )
            {
              if ( (unsigned __int8)sub_11FD80((char *)(*(_QWORD *)(v51 + 24) + 160LL), &v70, 0) )
              {
                v52 = v70;
                if ( get_tinfo_size() == v60 )
                  goto LABEL_117;
                goto LABEL_116;
              }
            }
          }
LABEL_109:
          v82 |= 0x800u;
          sub_236920(a1, (__int64)&src, 1, v50);
LABEL_110:
          v29 = (__m128i *)(a1 + 88);
          goto LABEL_33;
        }
        if ( v45 || v49 == -1 )
          goto LABEL_109;
        v55 = *(_QWORD *)(v58 + 24);
        v56 = v49;
        v61 = v49;
        v52 = sub_32F220(v55 + 80, v49);
        if ( v61 != 1 )
        {
          if ( v56 != get_tinfo_size() )
          {
            if ( !under_debugger )
              sub_383060(52487);
            goto LABEL_135;
          }
          copy_tinfo_t();
          v52 = (int)v52 / v64;
        }
        if ( v56 == get_tinfo_size() )
          goto LABEL_117;
LABEL_116:
        sub_32C270(&v83, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), (unsigned int)v64);
        copy_tinfo_t();
        clear_tinfo_t();
        goto LABEL_117;
      }
      if ( v48 == 5 )
      {
        if ( v45 > 1 )
          goto LABEL_109;
        v59 = v49;
        if ( v49 == -1 || !(unsigned __int8)sub_11FD80((char *)(*(_QWORD *)(v51 + 24) + 160LL), &v70, 0) )
          goto LABEL_109;
        v52 = v70;
        if ( get_tinfo_size() == v59 )
        {
LABEL_117:
          sub_236920(a1, (__int64)&src, v52, v53);
          goto LABEL_110;
        }
        goto LABEL_116;
      }
      if ( v48 > 1 )
        goto LABEL_121;
    }
LABEL_94:
    if ( (unsigned __int8)sub_F8290(*(_QWORD *)(a1 + 32), v45) )
    {
      if ( !(_BYTE)v78 )
      {
        v83 = &word_10 + 1;
        copy_tinfo_t();
        clear_tinfo_t();
      }
      HIDWORD(v81) = get_tinfo_size();
      v29 = (__m128i *)(a1 + 88);
      if ( SHIDWORD(v81) > 0 )
        goto LABEL_33;
      if ( !under_debugger )
        sub_383060(52275);
LABEL_135:
      BUG();
    }
    goto LABEL_109;
  }
LABEL_39:
  clear_tinfo_t();
  return 1;
}
