__int64 __fastcall sub_148300(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
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
  unsigned int *v17; // r13
  unsigned __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rbp
  __m128i v21; // xmm5
  int v22; // ecx
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  __m128i v25; // xmm0
  __m128i v26; // xmm2
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rax
  char v35; // si
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rax
  int v38; // ecx
  __m128i v39; // xmm7
  char v40; // si
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // r15
  __int64 *v46; // rbx
  __int64 v47; // rdx
  __int64 *v48; // rax
  __int64 v49; // rcx
  __int64 *v50; // rdi
  __int64 *v51; // rdi
  __int64 v52; // r15
  int *v53; // r11
  int *v54; // r10
  __int64 v55; // r8
  __int64 v56; // rdi
  __int64 v57; // rsi
  _DWORD *v58; // rax
  __int64 v59; // rax
  bool v60; // zf
  __int64 v61; // rax
  int v62; // r15d
  _QWORD *v63; // r10
  int v64; // r15d
  __int64 v65; // rsi
  __int64 v66; // rcx
  _DWORD *v67; // rdx
  _DWORD *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rsi
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdx
  int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 *v81; // rdi
  __int64 *v82; // rdi
  __int64 v83; // rdx
  int v84; // [rsp+0h] [rbp-B8h]
  int v85; // [rsp+0h] [rbp-B8h]
  __int64 v86; // [rsp+0h] [rbp-B8h]
  __int64 v87; // [rsp+0h] [rbp-B8h]
  __int64 *v88; // [rsp+0h] [rbp-B8h]
  __int64 v89; // [rsp+0h] [rbp-B8h]
  __int64 v90; // [rsp+0h] [rbp-B8h]
  int v91; // [rsp+Ch] [rbp-ACh]
  unsigned int *v92; // [rsp+10h] [rbp-A8h]
  _QWORD *v93; // [rsp+10h] [rbp-A8h]
  __int64 *v94; // [rsp+18h] [rbp-A0h]
  __m128i v95; // [rsp+20h] [rbp-98h] BYREF
  __int64 v96; // [rsp+30h] [rbp-88h]
  unsigned __int64 v97; // [rsp+38h] [rbp-80h]
  unsigned __int64 v98; // [rsp+40h] [rbp-78h]
  unsigned __int64 v99; // [rsp+48h] [rbp-70h]
  unsigned int v100; // [rsp+50h] [rbp-68h]
  char v101; // [rsp+56h] [rbp-62h]
  char v102; // [rsp+57h] [rbp-61h]
  _QWORD *v103; // [rsp+58h] [rbp-60h]
  _QWORD v104[11]; // [rsp+60h] [rbp-58h] BYREF

  v101 = a2;
  v104[3] = __readfsqword(0x28u);
  v8 = *(_QWORD **)(a1 + 1336);
  if ( !v8 )
    return 0;
  v9 = *(int *)(a1 + 312);
  if ( v9 >= v8[1] )
    return 0;
  v11 = (__int64 *)(*v8 + 24LL * (unsigned int)v9);
  v94 = v11;
  if ( !v11 )
    return 0;
  v12 = *v11;
  v13 = *v11 + 112 * v11[1];
  if ( v13 == *v11 )
    return 0;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v12 + 104);
    if ( v101 == ((_DWORD)v14 != 0) )
      break;
    v12 += 112;
    if ( v12 == v13 )
      return 0;
  }
  v100 = 0;
  v103 = v104;
  v15 = *(_DWORD *)(a1 + 64);
  v96 = 0;
  if ( v15 <= 0 )
    return 0;
  while ( 2 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v96);
    v17 = *(unsigned int **)(v16 + 48);
    if ( !v17 )
      goto LABEL_83;
    v18 = *((_QWORD *)v17 + 3);
    v92 = *((unsigned int **)v17 + 1);
    v84 = *v17;
    v19 = qalloc();
    v20 = v19;
    v95 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
    if ( !v19 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v21 = _mm_load_si128(&v95);
    v22 = v84;
    *(_OWORD *)(v19 + 16) = 0;
    *(_OWORD *)(v19 + 32) = 0;
    *(__m128i *)(v19 + 8) = v21;
    v97 = v19 & 0xFFFFFFFFFFFFFFFCLL;
    *(_QWORD *)v19 = v19 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v91 = 0;
    v98 = v19 & 0xFFFFFFFFFFFFFFFCLL | 1;
LABEL_12:
    v85 = v22;
    v23 = qalloc();
    v24 = v23;
    v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
    if ( !v23 )
    {
      v5 = __cxa_allocate_exception(8u);
      *v5 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v26 = _mm_load_si128(&v95);
    *(_OWORD *)(v23 + 32) = 0;
    v27 = v97;
    *(_QWORD *)(v23 + 24) = v18;
    *(_DWORD *)(v23 + 32) = v85;
    *(__m128i *)(v23 + 8) = v26;
    v86 = 1;
    *(_QWORD *)v23 = v98;
    v28 = *(_QWORD *)v20;
    *(__m128i *)(v20 + 8) = v25;
    *(_QWORD *)v20 = v24 & 0xFFFFFFFFFFFFFFFCLL | v28 & 3;
    *(_QWORD *)v24 = v27 | *(_QWORD *)v24 & 2LL;
    v29 = (_QWORD *)(v24 + 24);
    while ( 1 )
    {
      v30 = *((unsigned int *)v29 + 4);
      *((_DWORD *)v29 + 4) = v30 + 1;
      v31 = *v17;
      v32 = *v94;
      v33 = *((_QWORD *)v17 + 3);
      v34 = *v94 + 112 * v94[1];
      if ( v34 == *v94 )
      {
LABEL_17:
        v17 = v92;
LABEL_18:
        if ( !v17 )
          break;
        goto LABEL_19;
      }
      while ( __PAIR128__(__PAIR64__(v30, v31), v33) != *(_OWORD *)v32
           || *(_DWORD *)(v16 + 72) != *(_DWORD *)(v32 + 16)
           || v101 != (*(_DWORD *)(v32 + 104) != 0) )
      {
        v32 += 112;
        if ( v34 == v32 )
          goto LABEL_17;
      }
      ++v91;
      if ( v101 )
      {
        v52 = j__qalloc_or_throw(80, v31, v33, v30);
        *(_OWORD *)(v52 + 8) = 0;
        *(_QWORD *)(v52 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v52 + 40) = 0;
        *(_QWORD *)(v52 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v52 + 56) = 0;
        *(_QWORD *)(v52 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v52 + 72) = 0;
        sub_1253A0(v52, v32 + 24);
        *(_QWORD *)(v52 + 24) = *(_QWORD *)v32;
        if ( *(_DWORD *)(v32 + 104) != 2 )
          v17 = *((unsigned int **)v17 + 2);
        v44 = (__int64)sub_A3160(v16, (_QWORD *)v52, (__int64)v17);
      }
      else
      {
        if ( !*((_QWORD *)v17 + 1) && (*(_DWORD *)(v16 + 76) != 3 || (_DWORD)v31 == 55) )
        {
          v53 = *(int **)(v16 + 368);
          v54 = &v53[*(_QWORD *)(v16 + 376)];
          if ( v53 != v54 )
          {
            do
            {
              v55 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * *v53);
              v56 = *(_QWORD *)(v55 + 344);
              v57 = 4LL * *(_QWORD *)(v55 + 352);
              if ( v56 == v56 + v57 )
              {
                v58 = *(_DWORD **)(v55 + 344);
              }
              else
              {
                v58 = *(_DWORD **)(v55 + 344);
                do
                {
                  if ( *(_DWORD *)(v16 + 72) == *v58 )
                    break;
                  ++v58;
                }
                while ( (_DWORD *)(v56 + v57) != v58 );
              }
              *v58 = *(_DWORD *)(v56 + v57 - 4);
              v59 = *(_QWORD *)(v55 + 352);
              if ( v59 )
                *(_QWORD *)(v55 + 352) = v59 - 1;
              ++v53;
            }
            while ( v54 != v53 );
            v54 = *(int **)(v16 + 368);
          }
          v60 = *(_QWORD *)(v16 + 384) == 0;
          v61 = *(_QWORD *)(v16 + 8);
          *(_QWORD *)(v16 + 376) = 0;
          *(_DWORD *)(v16 + 76) = 3;
          v62 = *(_DWORD *)(v61 + 72);
          if ( v60 )
          {
            v73 = qvector_reserve(v16 + 368, (__int64)v54, 1, 4);
            v74 = *(_QWORD *)(v16 + 376);
            *(_QWORD *)(v16 + 368) = v73;
            v54 = (int *)(v73 + 4 * v74);
          }
          *v54 = v62;
          v63 = *(_QWORD **)(v16 + 8);
          ++*(_QWORD *)(v16 + 376);
          v64 = *(_DWORD *)(v16 + 72);
          v65 = v63[43];
          v66 = v63[44];
          v67 = (_DWORD *)(v65 + 4 * v66);
          if ( (_DWORD *)v65 == v67 )
            goto LABEL_75;
          v68 = (_DWORD *)v63[43];
          while ( v64 != *v68 )
          {
            if ( v67 == ++v68 )
              goto LABEL_75;
          }
          if ( v67 == v68 )
          {
LABEL_75:
            if ( v63[45] < (unsigned __int64)(v66 + 1) )
            {
              v93 = v63;
              v77 = qvector_reserve((__int64)(v63 + 43), v65, v66 + 1, 4);
              v63 = v93;
              v78 = v93[44];
              v93[43] = v77;
              v67 = (_DWORD *)(v77 + 4 * v78);
            }
            *v67 = v64;
            ++v63[44];
          }
        }
        v44 = sub_A3480(v16, (__int64)v17);
      }
      v17 = (unsigned int *)v44;
      if ( *(_DWORD *)(v32 + 104) != 1 )
        goto LABEL_18;
      v17 = *(unsigned int **)(v44 + 8);
      if ( !v17 )
        break;
LABEL_19:
      v18 = *((_QWORD *)v17 + 3);
      v22 = *v17;
      v92 = *((unsigned int **)v17 + 1);
      if ( !v86 )
        goto LABEL_12;
      v35 = 1;
      v36 = *(_QWORD *)v20 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v36 & 2) != 0 )
      {
        v36 = v20;
        v35 = 1;
        goto LABEL_22;
      }
      v42 = *(_QWORD *)(v36 + 24);
      v29 = (_QWORD *)(v36 + 24);
      if ( v18 < v42 )
      {
LABEL_38:
        while ( 1 )
        {
          v43 = *(_QWORD *)(v36 + 8);
          v35 = 1;
LABEL_36:
          if ( (*(_BYTE *)v43 & 2) != 0 )
            break;
          v36 = v43;
          v42 = *(_QWORD *)(v43 + 24);
          v29 = (_QWORD *)(v43 + 24);
          if ( v18 >= v42 )
            goto LABEL_32;
        }
LABEL_22:
        v102 = v35;
        LODWORD(v99) = v22;
        v37 = qalloc();
        if ( !v37 )
        {
          v6 = __cxa_allocate_exception(8u);
          *v6 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v6,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v38 = v99;
        *(_QWORD *)(v37 + 24) = v18;
        v39 = _mm_load_si128(&v95);
        *(_OWORD *)(v37 + 32) = 0;
        v40 = v102;
        *(_DWORD *)(v37 + 32) = v38;
        *(__m128i *)(v37 + 8) = v39;
        *(_QWORD *)v37 = v36 & 0xFFFFFFFFFFFFFFFCLL | 1;
        if ( v20 == v36 )
        {
          v80 = *(_QWORD *)v20 & 3LL;
          *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
          *(_QWORD *)v20 = v37 & 0xFFFFFFFFFFFFFFFCLL | v80;
          *(_QWORD *)v37 = *(_QWORD *)v37 & 2LL | v36 & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          if ( v40 )
          {
            *(_QWORD *)(v36 + 8) = v37;
            if ( *(_QWORD *)(v20 + 8) == v36 )
              *(_QWORD *)(v20 + 8) = v37;
          }
          else
          {
            *(_QWORD *)(v36 + 16) = v37;
            if ( *(_QWORD *)(v20 + 16) == v36 )
              *(_QWORD *)(v20 + 16) = v37;
          }
          v99 = v37;
          v104[0] = v20;
          v104[1] = v86;
          sub_147FC0(v103, v37);
          v37 = v99;
        }
        ++v86;
        v29 = (_QWORD *)(v37 + 24);
      }
      else
      {
LABEL_32:
        if ( v42 != v18 )
          goto LABEL_35;
        if ( *((_DWORD *)v29 + 2) > v22 )
          goto LABEL_38;
        if ( *((_DWORD *)v29 + 2) < v22 )
        {
LABEL_35:
          v43 = *(_QWORD *)(v36 + 16);
          v35 = 0;
          goto LABEL_36;
        }
        if ( !v36 )
          goto LABEL_22;
      }
    }
    if ( v91 )
    {
      v75 = *(_DWORD *)(v16 + 24);
      BYTE1(v75) &= ~2u;
      LOBYTE(v75) = v75 | 0x80;
      *(_DWORD *)(v16 + 24) = v75;
      sub_13FCB0((unsigned __int64 **)(v16 + 424));
      *(_BYTE *)(v16 + 440) = 1;
      sub_13FCB0((unsigned __int64 **)(v16 + 456));
      v76 = *(_QWORD *)(v16 + 64);
      *(_BYTE *)(v16 + 472) = 1;
      *(_DWORD *)(v76 + 4) &= ~8u;
    }
    v100 += v91;
    if ( v86 )
    {
      v45 = *(_QWORD *)v20;
      v46 = (__int64 *)(*(_QWORD *)v20 & 0xFFFFFFFFFFFFFFFCLL);
      v47 = *v46;
      if ( (*v46 & 2) == 0 )
      {
        v48 = (__int64 *)v46[1];
        v49 = *v48;
        if ( (*v48 & 2) != 0 )
        {
          v69 = v46[2];
          if ( (*(_BYTE *)v69 & 2) == 0 )
            goto LABEL_101;
          goto LABEL_79;
        }
        v50 = (__int64 *)v48[1];
        if ( (*(_BYTE *)v50 & 2) != 0 )
        {
          v51 = (__int64 *)v48[2];
          if ( (*(_BYTE *)v51 & 2) != 0 )
            goto LABEL_53;
LABEL_96:
          v88 = v48;
          sub_134F50(v51);
          v48 = v88;
        }
        else
        {
          v87 = v46[1];
          sub_134F50(v50);
          v48 = (__int64 *)v87;
          v51 = *(__int64 **)(v87 + 16);
          if ( (*(_BYTE *)v51 & 2) == 0 )
            goto LABEL_96;
        }
        v49 = *v48;
        if ( (*v48 & 2) == 0 )
LABEL_53:
          *v48 = v49 | 2;
        if ( v48 )
          qfree((__int64)v48);
        v69 = v46[2];
        if ( (*(_BYTE *)v69 & 2) == 0 )
        {
LABEL_101:
          v81 = *(__int64 **)(v69 + 8);
          if ( (*(_BYTE *)v81 & 2) == 0 )
          {
            v89 = v69;
            sub_134F50(v81);
            v69 = v89;
            v82 = *(__int64 **)(v89 + 16);
            if ( (*(_BYTE *)v82 & 2) != 0 )
              goto LABEL_103;
            goto LABEL_109;
          }
          v82 = *(__int64 **)(v69 + 16);
          if ( (*(_BYTE *)v82 & 2) != 0 )
          {
            v83 = *(_QWORD *)v69;
          }
          else
          {
LABEL_109:
            v90 = v69;
            sub_134F50(v82);
            v69 = v90;
LABEL_103:
            v83 = *(_QWORD *)v69;
            if ( (*(_QWORD *)v69 & 2) != 0 )
            {
LABEL_104:
              if ( v69 )
                qfree(v69);
              goto LABEL_106;
            }
          }
          *(_QWORD *)v69 = v83 | 2;
          goto LABEL_104;
        }
LABEL_106:
        v47 = *v46;
        if ( (*v46 & 2) == 0 )
LABEL_79:
          *v46 = v47 | 2;
        if ( v45 > 3 )
          qfree((__int64)v46);
      }
    }
    qfree(v20);
LABEL_83:
    v70 = (unsigned int)v96;
    v71 = *(_DWORD *)(a1 + 64);
    v72 = (unsigned int)(v96 + 1);
    if ( v71 > (int)v72 )
    {
      if ( (unsigned int)++v96 >= v71 )
        sub_1346B0(v96, v70, v72, v13, a5, v14);
      continue;
    }
    break;
  }
  if ( !v100 )
    return 0;
  v79 = *(_QWORD *)(a1 + 784);
  if ( v79 )
    *(_DWORD *)(v79 + 48) = 63;
  return v100;
}
