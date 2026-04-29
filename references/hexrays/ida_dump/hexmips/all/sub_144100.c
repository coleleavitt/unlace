__int64 __fastcall sub_144100(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *exception; // rdi
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // r12
  __int64 v17; // r13
  unsigned __int64 v18; // r15
  __int64 v19; // rax
  unsigned __int64 v20; // rbp
  __m128i v21; // xmm5
  int v22; // ecx
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  __m128i v25; // xmm0
  __m128i v26; // xmm2
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rax
  _QWORD *v29; // rax
  int v30; // ecx
  int v31; // esi
  __int64 v32; // rbx
  __int64 v33; // rax
  char v34; // si
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rax
  int v37; // ecx
  __m128i v38; // xmm7
  char v39; // si
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // r15
  __int64 *v45; // rbx
  __int64 v46; // rdx
  __int64 *v47; // rax
  __int64 v48; // rcx
  __int64 *v49; // rdi
  __int64 *v50; // rdi
  __int64 v51; // r15
  int *v52; // r11
  int *v53; // r10
  __int64 v54; // r8
  __int64 v55; // rdi
  __int64 v56; // rsi
  _DWORD *v57; // rax
  __int64 v58; // rax
  bool v59; // zf
  __int64 v60; // rax
  int v61; // r15d
  _QWORD *v62; // r10
  int v63; // r15d
  _DWORD *v64; // rsi
  __int64 v65; // rcx
  _DWORD *v66; // rdx
  _DWORD *v67; // rax
  __int64 *v68; // rax
  __int64 v69; // rsi
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 *v80; // rdi
  __int64 *v81; // rdi
  __int64 v82; // rdx
  int v83; // [rsp+0h] [rbp-B8h]
  int v84; // [rsp+0h] [rbp-B8h]
  __int64 v85; // [rsp+0h] [rbp-B8h]
  __int64 v86; // [rsp+0h] [rbp-B8h]
  __int64 *v87; // [rsp+0h] [rbp-B8h]
  __int64 *v88; // [rsp+0h] [rbp-B8h]
  __int64 *v89; // [rsp+0h] [rbp-B8h]
  int v90; // [rsp+Ch] [rbp-ACh]
  __int64 v91; // [rsp+10h] [rbp-A8h]
  _QWORD *v92; // [rsp+10h] [rbp-A8h]
  __int64 *v93; // [rsp+18h] [rbp-A0h]
  __m128i v94; // [rsp+20h] [rbp-98h] BYREF
  __int64 v95; // [rsp+30h] [rbp-88h]
  unsigned __int64 v96; // [rsp+38h] [rbp-80h]
  unsigned __int64 v97; // [rsp+40h] [rbp-78h]
  unsigned __int64 v98; // [rsp+48h] [rbp-70h]
  unsigned int v99; // [rsp+50h] [rbp-68h]
  char v100; // [rsp+56h] [rbp-62h]
  char v101; // [rsp+57h] [rbp-61h]
  _QWORD *v102; // [rsp+58h] [rbp-60h]
  _QWORD v103[11]; // [rsp+60h] [rbp-58h] BYREF

  v100 = a2;
  v103[3] = __readfsqword(0x28u);
  v8 = *(_QWORD **)(a1 + 1336);
  if ( !v8 )
    return 0;
  v9 = *(int *)(a1 + 312);
  if ( v9 >= v8[1] )
    return 0;
  v11 = (__int64 *)(*v8 + 24LL * (unsigned int)v9);
  v93 = v11;
  if ( !v11 )
    return 0;
  v12 = *v11;
  v13 = *v11 + 112 * v11[1];
  if ( v13 == *v11 )
    return 0;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v12 + 104);
    if ( v100 == ((_DWORD)v14 != 0) )
      break;
    v12 += 112;
    if ( v12 == v13 )
      return 0;
  }
  v99 = 0;
  v102 = v103;
  v15 = *(_DWORD *)(a1 + 64);
  v95 = 0;
  if ( v15 <= 0 )
    return 0;
  while ( 2 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v95);
    v17 = *(_QWORD *)(v16 + 48);
    if ( !v17 )
      goto LABEL_85;
    v18 = *(_QWORD *)(v17 + 24);
    v91 = *(_QWORD *)(v17 + 8);
    v83 = *(_DWORD *)v17;
    v19 = qalloc(48);
    v20 = v19;
    v94 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
    if ( !v19 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v21 = _mm_load_si128(&v94);
    v22 = v83;
    *(_OWORD *)(v19 + 16) = 0;
    *(_OWORD *)(v19 + 32) = 0;
    *(__m128i *)(v19 + 8) = v21;
    v96 = v19 & 0xFFFFFFFFFFFFFFFCLL;
    *(_QWORD *)v19 = v19 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v90 = 0;
    v97 = v19 & 0xFFFFFFFFFFFFFFFCLL | 1;
LABEL_12:
    v84 = v22;
    v23 = qalloc(48);
    v24 = v23;
    v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
    if ( !v23 )
    {
      v5 = __cxa_allocate_exception(8u);
      *v5 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v26 = _mm_load_si128(&v94);
    *(_OWORD *)(v23 + 32) = 0;
    v27 = v96;
    *(_QWORD *)(v23 + 24) = v18;
    *(_DWORD *)(v23 + 32) = v84;
    *(__m128i *)(v23 + 8) = v26;
    v85 = 1;
    *(_QWORD *)v23 = v97;
    v28 = *(_QWORD *)v20;
    *(__m128i *)(v20 + 8) = v25;
    *(_QWORD *)v20 = v24 & 0xFFFFFFFFFFFFFFFCLL | v28 & 3;
    *(_QWORD *)v24 = v27 | *(_QWORD *)v24 & 2LL;
    v29 = (_QWORD *)(v24 + 24);
    while ( 1 )
    {
      v30 = *((_DWORD *)v29 + 4);
      *((_DWORD *)v29 + 4) = v30 + 1;
      v31 = *(_DWORD *)v17;
      v32 = *v93;
      v33 = *v93 + 112 * v93[1];
      if ( v33 == *v93 )
      {
LABEL_17:
        v17 = v91;
LABEL_18:
        if ( !v17 )
          break;
        goto LABEL_19;
      }
      while ( *(_QWORD *)(v17 + 24) != *(_QWORD *)v32
           || v31 != *(_DWORD *)(v32 + 8)
           || v30 != *(_DWORD *)(v32 + 12)
           || *(_DWORD *)(v16 + 72) != *(_DWORD *)(v32 + 16)
           || v100 != (*(_DWORD *)(v32 + 104) != 0) )
      {
        v32 += 112;
        if ( v33 == v32 )
          goto LABEL_17;
      }
      ++v90;
      if ( v100 )
      {
        v51 = j__qalloc_or_throw(80);
        *(_OWORD *)(v51 + 8) = 0;
        *(_QWORD *)(v51 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v51 + 40) = 0;
        *(_QWORD *)(v51 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v51 + 56) = 0;
        *(_QWORD *)(v51 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v51 + 72) = 0;
        sub_1211A0(v51, v32 + 24);
        *(_QWORD *)(v51 + 24) = *(_QWORD *)v32;
        if ( *(_DWORD *)(v32 + 104) != 2 )
          v17 = *(_QWORD *)(v17 + 16);
        v43 = (__int64)sub_9EF60(v16, (_QWORD *)v51, v17);
      }
      else
      {
        if ( !*(_QWORD *)(v17 + 8) && (*(_DWORD *)(v16 + 76) != 3 || v31 == 55) )
        {
          v52 = *(int **)(v16 + 368);
          v53 = &v52[*(_QWORD *)(v16 + 376)];
          if ( v52 != v53 )
          {
            do
            {
              v54 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * *v52);
              v55 = *(_QWORD *)(v54 + 344);
              v56 = 4LL * *(_QWORD *)(v54 + 352);
              if ( v55 == v55 + v56 )
              {
                v57 = *(_DWORD **)(v54 + 344);
              }
              else
              {
                v57 = *(_DWORD **)(v54 + 344);
                do
                {
                  if ( *(_DWORD *)(v16 + 72) == *v57 )
                    break;
                  ++v57;
                }
                while ( (_DWORD *)(v55 + v56) != v57 );
              }
              *v57 = *(_DWORD *)(v55 + v56 - 4);
              v58 = *(_QWORD *)(v54 + 352);
              if ( v58 )
                *(_QWORD *)(v54 + 352) = v58 - 1;
              ++v52;
            }
            while ( v53 != v52 );
            v53 = *(int **)(v16 + 368);
          }
          v59 = *(_QWORD *)(v16 + 384) == 0;
          v60 = *(_QWORD *)(v16 + 8);
          *(_QWORD *)(v16 + 376) = 0;
          *(_DWORD *)(v16 + 76) = 3;
          v61 = *(_DWORD *)(v60 + 72);
          if ( v59 )
          {
            v72 = qvector_reserve(v16 + 368, v53, 1, 4);
            v73 = *(_QWORD *)(v16 + 376);
            *(_QWORD *)(v16 + 368) = v72;
            v53 = (int *)(v72 + 4 * v73);
          }
          *v53 = v61;
          v62 = *(_QWORD **)(v16 + 8);
          ++*(_QWORD *)(v16 + 376);
          v63 = *(_DWORD *)(v16 + 72);
          v64 = (_DWORD *)v62[43];
          v65 = v62[44];
          v66 = &v64[v65];
          if ( v64 == v66 )
            goto LABEL_77;
          v67 = (_DWORD *)v62[43];
          while ( v63 != *v67 )
          {
            if ( v66 == ++v67 )
              goto LABEL_77;
          }
          if ( v66 == v67 )
          {
LABEL_77:
            if ( v62[45] < (unsigned __int64)(v65 + 1) )
            {
              v92 = v62;
              v76 = qvector_reserve(v62 + 43, v64, v65 + 1, 4);
              v62 = v92;
              v77 = v92[44];
              v92[43] = v76;
              v66 = (_DWORD *)(v76 + 4 * v77);
            }
            *v66 = v63;
            ++v62[44];
          }
        }
        v43 = sub_9F280(v16, v17);
      }
      v17 = v43;
      if ( *(_DWORD *)(v32 + 104) != 1 )
        goto LABEL_18;
      v17 = *(_QWORD *)(v43 + 8);
      if ( !v17 )
        break;
LABEL_19:
      v18 = *(_QWORD *)(v17 + 24);
      v22 = *(_DWORD *)v17;
      v91 = *(_QWORD *)(v17 + 8);
      if ( !v85 )
        goto LABEL_12;
      v34 = 1;
      v35 = *(_QWORD *)v20 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v35 & 2) != 0 )
      {
        v35 = v20;
        v34 = 1;
        goto LABEL_22;
      }
      v41 = *(_QWORD *)(v35 + 24);
      v29 = (_QWORD *)(v35 + 24);
      if ( v18 < v41 )
      {
LABEL_38:
        while ( 1 )
        {
          v42 = *(_QWORD *)(v35 + 8);
          v34 = 1;
LABEL_36:
          if ( (*(_BYTE *)v42 & 2) != 0 )
            break;
          v35 = v42;
          v41 = *(_QWORD *)(v42 + 24);
          v29 = (_QWORD *)(v42 + 24);
          if ( v18 >= v41 )
            goto LABEL_32;
        }
LABEL_22:
        v101 = v34;
        LODWORD(v98) = v22;
        v36 = qalloc(48);
        if ( !v36 )
        {
          v6 = __cxa_allocate_exception(8u);
          *v6 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v6,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v37 = v98;
        *(_QWORD *)(v36 + 24) = v18;
        v38 = _mm_load_si128(&v94);
        *(_OWORD *)(v36 + 32) = 0;
        v39 = v101;
        *(_DWORD *)(v36 + 32) = v37;
        *(__m128i *)(v36 + 8) = v38;
        *(_QWORD *)v36 = v35 & 0xFFFFFFFFFFFFFFFCLL | 1;
        if ( v20 == v35 )
        {
          v79 = *(_QWORD *)v20 & 3LL;
          *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64((__m128i)v36, (__m128i)v36);
          *(_QWORD *)v20 = v36 & 0xFFFFFFFFFFFFFFFCLL | v79;
          *(_QWORD *)v36 = *(_QWORD *)v36 & 2LL | v35 & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          if ( v39 )
          {
            *(_QWORD *)(v35 + 8) = v36;
            if ( *(_QWORD *)(v20 + 8) == v35 )
              *(_QWORD *)(v20 + 8) = v36;
          }
          else
          {
            *(_QWORD *)(v35 + 16) = v36;
            if ( *(_QWORD *)(v20 + 16) == v35 )
              *(_QWORD *)(v20 + 16) = v36;
          }
          v98 = v36;
          v103[0] = v20;
          v103[1] = v85;
          sub_143DC0(v102, v36);
          v36 = v98;
        }
        ++v85;
        v29 = (_QWORD *)(v36 + 24);
      }
      else
      {
LABEL_32:
        if ( v41 != v18 )
          goto LABEL_35;
        if ( *((_DWORD *)v29 + 2) > v22 )
          goto LABEL_38;
        if ( *((_DWORD *)v29 + 2) < v22 )
        {
LABEL_35:
          v42 = *(_QWORD *)(v35 + 16);
          v34 = 0;
          goto LABEL_36;
        }
        if ( !v35 )
          goto LABEL_22;
      }
    }
    if ( v90 )
    {
      v74 = *(_DWORD *)(v16 + 24);
      BYTE1(v74) &= ~2u;
      LOBYTE(v74) = v74 | 0x80;
      *(_DWORD *)(v16 + 24) = v74;
      sub_13BAB0((unsigned __int64 **)(v16 + 424));
      *(_BYTE *)(v16 + 440) = 1;
      sub_13BAB0((unsigned __int64 **)(v16 + 456));
      v75 = *(_QWORD *)(v16 + 64);
      *(_BYTE *)(v16 + 472) = 1;
      *(_DWORD *)(v75 + 4) &= ~8u;
    }
    v99 += v90;
    if ( v85 )
    {
      v44 = *(_QWORD *)v20;
      v45 = (__int64 *)(*(_QWORD *)v20 & 0xFFFFFFFFFFFFFFFCLL);
      v46 = *v45;
      if ( (*v45 & 2) == 0 )
      {
        v47 = (__int64 *)v45[1];
        v48 = *v47;
        if ( (*v47 & 2) != 0 )
        {
          v68 = (__int64 *)v45[2];
          if ( (*(_BYTE *)v68 & 2) == 0 )
            goto LABEL_103;
          goto LABEL_81;
        }
        v49 = (__int64 *)v47[1];
        if ( (*(_BYTE *)v49 & 2) != 0 )
        {
          v50 = (__int64 *)v47[2];
          if ( (*(_BYTE *)v50 & 2) != 0 )
            goto LABEL_55;
LABEL_98:
          v87 = v47;
          sub_130D50(v50);
          v47 = v87;
        }
        else
        {
          v86 = v45[1];
          sub_130D50(v49);
          v47 = (__int64 *)v86;
          v50 = *(__int64 **)(v86 + 16);
          if ( (*(_BYTE *)v50 & 2) == 0 )
            goto LABEL_98;
        }
        v48 = *v47;
        if ( (*v47 & 2) == 0 )
LABEL_55:
          *v47 = v48 | 2;
        if ( v47 )
          qfree(v47);
        v68 = (__int64 *)v45[2];
        if ( (*(_BYTE *)v68 & 2) == 0 )
        {
LABEL_103:
          v80 = (__int64 *)v68[1];
          if ( (*(_BYTE *)v80 & 2) == 0 )
          {
            v88 = v68;
            sub_130D50(v80);
            v68 = v88;
            v81 = (__int64 *)v88[2];
            if ( (*(_BYTE *)v81 & 2) != 0 )
              goto LABEL_105;
            goto LABEL_111;
          }
          v81 = (__int64 *)v68[2];
          if ( (*(_BYTE *)v81 & 2) != 0 )
          {
            v82 = *v68;
          }
          else
          {
LABEL_111:
            v89 = v68;
            sub_130D50(v81);
            v68 = v89;
LABEL_105:
            v82 = *v68;
            if ( (*v68 & 2) != 0 )
            {
LABEL_106:
              if ( v68 )
                qfree(v68);
              goto LABEL_108;
            }
          }
          *v68 = v82 | 2;
          goto LABEL_106;
        }
LABEL_108:
        v46 = *v45;
        if ( (*v45 & 2) == 0 )
LABEL_81:
          *v45 = v46 | 2;
        if ( v44 > 3 )
          qfree(v45);
      }
    }
    qfree(v20);
LABEL_85:
    v69 = (unsigned int)v95;
    v70 = *(_DWORD *)(a1 + 64);
    v71 = (unsigned int)(v95 + 1);
    if ( v70 > (int)v71 )
    {
      if ( (unsigned int)++v95 >= v70 )
        sub_1304B0(v95, v69, v71, v13, a5, v14);
      continue;
    }
    break;
  }
  if ( !v99 )
    return 0;
  v78 = *(_QWORD *)(a1 + 784);
  if ( v78 )
    *(_DWORD *)(v78 + 48) = 63;
  return v99;
}
