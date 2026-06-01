/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8065D60
// Address: 0x08065D60

//----- (08065D60) --------------------------------------------------------
unsigned int __cdecl sub_8065D60(int a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // esi
  int *v4; // ecx
  char *v5; // edi
  const char *v6; // esi
  const char *v7; // eax
  unsigned int v8; // esi
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // edx
  char *v12; // edx
  int v13; // ebx
  char *v14; // edi
  const char *v15; // eax
  unsigned int v16; // edi
  char v17; // al
  char *v18; // edx
  char *v19; // edx
  size_t v20; // eax
  size_t v21; // ecx
  __m128i v22; // xmm0
  char *v23; // edi
  void *v24; // eax
  void *v25; // eax
  int v26; // esi
  _DWORD *v27; // edi
  void *v28; // edx
  void *v29; // eax
  void *v30; // eax
  char *v31; // ecx
  const char **v32; // edi
  const char *v33; // eax
  int v34; // eax
  unsigned int v35; // edi
  char *v36; // eax
  int v37; // ebx
  int v38; // edx
  int v39; // eax
  int v40; // ebx
  unsigned int v41; // eax
  const char *v42; // edx
  char *v43; // eax
  char *i; // esi
  char *v45; // edi
  void *v46; // eax
  void *v47; // eax
  unsigned int result; // eax
  __m128i v49; // xmm0
  char *v50; // eax
  char *v51; // ecx
  __int16 v52; // dx
  char *v53; // eax
  char *v54; // eax
  __m128i v55; // xmm1
  unsigned int v56; // ebx
  void *v57; // eax
  __int16 v58; // [esp+4h] [ebp-A8h]
  int v59; // [esp+8h] [ebp-A4h]
  int v60; // [esp+10h] [ebp-9Ch]
  size_t n; // [esp+14h] [ebp-98h]
  char *na; // [esp+14h] [ebp-98h]
  size_t nb; // [esp+14h] [ebp-98h]
  size_t nc; // [esp+14h] [ebp-98h]
  char *s2; // [esp+1Ch] [ebp-90h]
  char *s2a; // [esp+1Ch] [ebp-90h]
  char *s2c; // [esp+1Ch] [ebp-90h]
  char *s2b; // [esp+1Ch] [ebp-90h]
  int v69; // [esp+20h] [ebp-8Ch]
  char *v70; // [esp+20h] [ebp-8Ch]
  char *v71; // [esp+24h] [ebp-88h]
  char *v72; // [esp+24h] [ebp-88h]
  char *s1; // [esp+28h] [ebp-84h]
  char *s1c; // [esp+28h] [ebp-84h]
  char *s1a; // [esp+28h] [ebp-84h]
  char *s1b; // [esp+28h] [ebp-84h]
  char *s; // [esp+30h] [ebp-7Ch]
  char *sa; // [esp+30h] [ebp-7Ch]
  char *sb; // [esp+30h] [ebp-7Ch]
  char *si; // [esp+30h] [ebp-7Ch]
  char *sc; // [esp+30h] [ebp-7Ch]
  char *sj; // [esp+30h] [ebp-7Ch]
  char *sd; // [esp+30h] [ebp-7Ch]
  char *sk; // [esp+30h] [ebp-7Ch]
  char *se; // [esp+30h] [ebp-7Ch]
  char *sf; // [esp+30h] [ebp-7Ch]
  char *sg; // [esp+30h] [ebp-7Ch]
  char *sh; // [esp+30h] [ebp-7Ch]
  char *sl; // [esp+30h] [ebp-7Ch]
  void *v90; // [esp+34h] [ebp-78h] BYREF
  char *v91; // [esp+38h] [ebp-74h]
  unsigned int v92; // [esp+3Ch] [ebp-70h]
  void *ptr; // [esp+44h] [ebp-68h] BYREF
  int v94; // [esp+48h] [ebp-64h]
  int v95; // [esp+4Ch] [ebp-60h]
  int (**v96[3])(); // [esp+50h] [ebp-5Ch] BYREF
  unsigned __int64 v97; // [esp+5Ch] [ebp-50h] BYREF
  int v98; // [esp+64h] [ebp-48h]
  char v99; // [esp+68h] [ebp-44h]
  int v100; // [esp+6Ch] [ebp-40h]
  __int64 dest; // [esp+70h] [ebp-3Ch] BYREF
  void *dest_8[4]; // [esp+78h] [ebp-34h]
  unsigned int v103; // [esp+8Ch] [ebp-20h] BYREF
  unsigned int v104; // [esp+90h] [ebp-1Ch]

  v104 = __readgsdword(0x14u);
  v2 = a2[1];
  v90 = nullptr;
  v91 = nullptr;
  v92 = 0;
  v60 = v2;
  if ( !v2 )
  {
    v3 = 0;
    v12 = *(char **)(a1 + 644);
    v70 = (char *)(a1 + 636);
    if ( (char *)(a1 + 636) == v12 )
      goto LABEL_85;
    while ( 1 )
    {
LABEL_22:
      s1 = (char *)&qword_811CFF4 - 258076;
      if ( *((_DWORD *)v12 + 8) )
        s1 = *((char **)v12 + 7);
      na = (char *)v90;
      if ( v3 )
      {
        v13 = (int)v12;
        while ( 1 )
        {
          sa = nullptr;
          v14 = na;
          while ( 1 )
          {
            v15 = (char *)&qword_811CFF4 - 258076;
            if ( *((_DWORD *)v14 + 3) )
              v15 = *((const char **)v14 + 2);
            if ( !strcmp(v15, s1) )
              break;
            ++sa;
            v14 += 40;
            if ( sa == (char *)v3 )
            {
              v12 = (char *)v13;
              goto LABEL_39;
            }
          }
          if ( !v14 )
            break;
          v13 = std::_Rb_tree_increment(v13);
          if ( (char *)v13 == v70 )
            goto LABEL_63;
          s1 = (char *)&qword_811CFF4 - 258076;
          if ( *(_DWORD *)(v13 + 32) )
            s1 = *(char **)(v13 + 28);
        }
        v12 = (char *)v13;
      }
LABEL_39:
      sb = v12;
      v17 = sub_8065BE0((_DWORD *)a1, 8u, s1);
      v18 = sb;
      if ( !v17 )
      {
        dest = 0;
        v97 = 0xFFFFFFFFLL;
        v98 = -1;
        v99 = 0;
        v100 = 0;
        *(_OWORD *)dest_8 = 0;
        sub_80C6150(&v97, 9);
        v19 = sb;
        if ( (v100 & 0xFFFFFFFu) - 9 > 1 && (v100 & 0xFFFFFFF) != 3 )
        {
          if ( v104 == __readgsdword(0x14u) )
            sub_8054DA0();
          goto LABEL_112;
        }
        if ( s1 && (v20 = strlen(s1), v19 = sb, (v21 = v20) != 0) )
        {
          sh = (char *)(v20 + 1);
          v56 = v20 + 1;
          v57 = (void *)dest;
          if ( dest_8[0] < (void *)v56 )
          {
            nc = v21;
            s2b = v19;
            v57 = sub_80CF920((int)&dest, (void *)dest, v56, 1u);
            v21 = nc;
            v19 = s2b;
            LODWORD(dest) = v57;
          }
          s2c = v19;
          HIDWORD(dest) = sh;
          sl = (char *)v21;
          memmove(v57, s1, v21);
          v19 = s2c;
          sl[dest] = 0;
        }
        else
        {
          HIDWORD(dest) = 0;
        }
        si = v19;
        v98 = -1;
        v22 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 724));
        v99 = 1;
        v97 = _mm_unpacklo_epi32(v22, v22).m128i_u64[0];
        sub_8061580(a1, (int)&v97, 0);
        sub_80C6090(&v97);
        v18 = si;
      }
      s1c = v18;
      sc = (char *)std::_Rb_tree_increment(v18);
      v23 = (char *)std::_Rb_tree_rebalance_for_erase(s1c, v70);
      v24 = *((void **)v23 + 22);
      if ( v24 )
      {
        *((_DWORD *)v23 + 23) = 0;
        sub_80CF780(v24);
      }
      v25 = *((void **)v23 + 19);
      if ( v25 )
      {
        *((_DWORD *)v23 + 20) = 0;
        sub_80CF780(v25);
      }
      v26 = *((_DWORD *)v23 + 15);
      if ( v26 )
      {
        s1a = v23;
        do
        {
          v27 = (_DWORD *)v26;
          sub_8057050(*(_DWORD **)(v26 + 12));
          v28 = *(void **)(v26 + 20);
          v26 = *(_DWORD *)(v26 + 8);
          if ( v28 )
          {
            v27[6] = 0;
            sub_80CF780(v28);
          }
          operator delete(v27, 0x20u);
        }
        while ( v26 );
        v23 = s1a;
      }
      v29 = *((void **)v23 + 10);
      if ( v29 )
      {
        *((_DWORD *)v23 + 11) = 0;
        sub_80CF780(v29);
      }
      v30 = *((void **)v23 + 7);
      if ( v30 )
      {
        *((_DWORD *)v23 + 8) = 0;
        sub_80CF780(v30);
      }
      operator delete(v23, 0x68u);
      v3 = (int)v91;
      --*(_DWORD *)(a1 + 652);
      if ( sc == v70 )
        goto LABEL_63;
      v12 = sc;
    }
  }
  v3 = 0;
  v69 = 0;
  do
  {
    s2 = (char *)(*a2 + 40 * v69);
    n = *((_DWORD *)s2 + 3);
    if ( n )
    {
      v4 = *((int **)s2 + 2);
      if ( !v3 )
      {
        v8 = *(_DWORD *)s2;
        v16 = *((_DWORD *)s2 + 1);
LABEL_37:
        v72 = (char *)sub_80CF8B0(n);
        memcpy(v72, *((const void **)s2 + 2), n);
        goto LABEL_98;
      }
    }
    else
    {
      v4 = &dword_80DDFD8;
      if ( !v3 )
      {
        v72 = nullptr;
        v8 = *(_DWORD *)s2;
        v16 = *((_DWORD *)s2 + 1);
        goto LABEL_98;
      }
    }
    v71 = (char *)v3;
    v5 = nullptr;
    v6 = (const char *)v4;
    s = (char *)v90;
    while ( 1 )
    {
      v7 = (const char *)&dword_80DDFD8;
      if ( *((_DWORD *)s + 3) )
        v7 = *((const char **)s + 2);
      if ( !strcmp(v7, v6) )
        break;
      ++v5;
      s += 40;
      if ( v5 == v71 )
      {
        v8 = *(_DWORD *)s2;
        goto LABEL_97;
      }
    }
    v8 = *(_DWORD *)s2;
    if ( s )
    {
      v9 = *(_DWORD *)s;
      if ( v8 < *(_DWORD *)s )
      {
        *(_DWORD *)s = v8;
        v9 = v8;
      }
      v10 = *((_DWORD *)s + 1);
      if ( v10 < v8 )
      {
        *((_DWORD *)s + 1) = v8;
        v10 = v8;
      }
      v11 = *((_DWORD *)s2 + 1);
      if ( v11 < v9 )
        *(_DWORD *)s = v11;
      if ( v10 < v11 )
        *((_DWORD *)s + 1) = v11;
      v3 = (int)v91;
      goto LABEL_20;
    }
LABEL_97:
    v72 = nullptr;
    v16 = *((_DWORD *)s2 + 1);
    if ( n )
      goto LABEL_37;
LABEL_98:
    sg = nullptr;
    v49 = _mm_cvtsi32_si128(*((_DWORD *)s2 + 6));
    if ( _mm_cvtsi128_si32(v49) )
    {
      v59 = _mm_cvtsi128_si32(v49);
      sg = (char *)sub_80CF8B0(v59);
      memcpy(sg, *((const void **)s2 + 5), _mm_cvtsi128_si32(_mm_cvtsi32_si128(v59)));
      v49 = _mm_cvtsi32_si128(v59);
    }
    v50 = s2;
    v51 = (char *)v90;
    s2a = *((char **)s2 + 8);
    v52 = *((_WORD *)v50 + 18);
    v53 = v91;
    if ( v92 < (unsigned int)(v91 + 1) )
    {
      v58 = v52;
      v51 = (char *)sub_80CF920((int)&v90, v90, (unsigned int)(v91 + 1), 0x28u);
      v90 = v51;
      v49 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v49));
      v53 = v91;
      v52 = v58;
    }
    v54 = &v51[40 * (_DWORD)v53];
    *((_DWORD *)v54 + 2) = v72;
    *(_QWORD *)v54 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), _mm_cvtsi32_si128(v16)).m128i_u64[0];
    v55 = _mm_cvtsi32_si128(n);
    *((_WORD *)v54 + 18) = v52;
    *((_QWORD *)v54 + 3) = _mm_unpacklo_epi32(v49, v49).m128i_u64[0];
    *((_DWORD *)v54 + 5) = sg;
    *(_QWORD *)(v54 + 12) = _mm_unpacklo_epi32(v55, v55).m128i_u64[0];
    *((_DWORD *)v54 + 8) = s2a;
    v3 = (int)++v91;
LABEL_20:
    ++v69;
  }
  while ( v60 != v69 );
  v12 = *(char **)(a1 + 644);
  v70 = (char *)(a1 + 636);
  if ( v12 != (char *)(a1 + 636) )
    goto LABEL_22;
LABEL_63:
  v31 = nullptr;
  if ( v3 > 0 )
  {
    do
    {
      v32 = (const char **)((char *)v90 + 40 * (_DWORD)v31);
      s1b = (char *)(40 * (_DWORD)v31);
      if ( (unsigned int)v32[3] > 1 )
      {
        if ( *(_BYTE *)(a1 + 453) )
          goto LABEL_69;
        v33 = (char *)&qword_811CFF4 - 258076;
        if ( *(_DWORD *)(a1 + 304) )
          v33 = *(const char **)(a1 + 300);
        sj = v31;
        v34 = strcmp(v32[2], v33);
        v31 = sj;
        if ( v34 )
        {
LABEL_69:
          v35 = (unsigned int)*v32;
          v36 = *(char **)(a1 + 640);
          if ( !v36 )
            goto LABEL_76;
          sd = v70;
          do
          {
            while ( 1 )
            {
              v37 = *((_DWORD *)v36 + 2);
              v38 = *((_DWORD *)v36 + 3);
              if ( *((_DWORD *)v36 + 4) < v35 )
                break;
              sd = v36;
              v36 = *((char **)v36 + 2);
              if ( !v37 )
                goto LABEL_74;
            }
            v36 = *((char **)v36 + 3);
          }
          while ( v38 );
LABEL_74:
          if ( sd == v70 || v35 < *((_DWORD *)sd + 4) )
          {
LABEL_76:
            sk = v31;
            v39 = sub_80623D0(a1, -1, v35, &v103, 4, 0);
            v31 = sk;
            if ( v39 == 4 && v103 == 1179403647 )
            {
              v95 = 0;
              ptr = nullptr;
              v40 = *(_DWORD *)&s1b[(_DWORD)v90 + 12];
              v94 = 0;
              se = (char *)&qword_811CFF4 - 258076;
              if ( v40 )
                se = *(char **)&s1b[(_DWORD)v90 + 8];
              nb = (size_t)v31;
              v96[1] = (int (**)())4;
              v96[0] = off_811B850;
              v96[2] = (int (**)())&ptr;
              sub_8072650((int)se, v96, 0);
              v41 = sub_805D340(a1, &v90, (unsigned int *)&s1b[(_DWORD)v90]);
              v42 = (const char *)&dword_80DDFD8;
              if ( v94 )
                v42 = (const char *)ptr;
              sub_80609C0(a1, v35, v41, se, v42);
              v31 = (char *)nb;
              if ( ptr )
              {
                v94 = 0;
                sub_80CF780(ptr);
                v31 = (char *)nb;
              }
            }
          }
        }
      }
      ++v31;
    }
    while ( (char *)v3 != v31 );
  }
LABEL_85:
  sub_8062B90(a1);
  v43 = (char *)v90;
  if ( v90 )
  {
    if ( v91 )
    {
      sf = v91;
      for ( i = nullptr; i != sf; ++i )
      {
        v45 = &v43[40 * (_DWORD)i];
        v46 = *((void **)v45 + 5);
        if ( v46 )
        {
          *((_DWORD *)v45 + 6) = 0;
          sub_80CF780(v46);
        }
        v47 = *((void **)v45 + 2);
        if ( v47 )
        {
          *((_DWORD *)v45 + 3) = 0;
          sub_80CF780(v47);
        }
        v43 = (char *)v90;
      }
    }
    v91 = nullptr;
    sub_80CF780(v43);
  }
  result = v104 - __readgsdword(0x14u);
  if ( result )
LABEL_112:
    sub_80D7AB0();
  return result;
}
// 804B400: using guessed type int __cdecl std::_Rb_tree_rebalance_for_erase(_DWORD, _DWORD);
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811B850: using guessed type int (*off_811B850[3])();
// 811CFF4: using guessed type __int64 qword_811CFF4;
