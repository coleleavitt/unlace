__int64 __fastcall sub_B22B0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // r10
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  signed int v14; // esi
  __int32 v15; // eax
  signed int v16; // eax
  __int64 v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // r13
  __int32 v20; // r15d
  __int64 v21; // r12
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  unsigned __int64 v31; // r14
  __int64 *v32; // rbx
  __int64 v33; // rdx
  __int64 *v34; // rdi
  __int64 *v35; // rdi
  __int64 v36; // rax
  __m128i v37; // xmm0
  signed int v39; // eax
  char v40; // al
  char v41; // al
  char v42; // al
  __int64 v43; // rax
  char v44; // al
  unsigned __int64 v45; // r12
  __m128i v46; // xmm0
  _OWORD *v47; // rax
  unsigned __int64 v48; // rsi
  __m128i v49; // xmm0
  __m128i v50; // xmm1
  __int64 v51; // rax
  __int64 v52; // rsi
  char v53; // al
  unsigned __int8 v54; // r15
  unsigned __int64 v55; // rax
  _OWORD *v56; // rax
  __m128i v57; // xmm0
  __m128i v58; // xmm1
  __int64 v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  __int64 v62; // rax
  __m128i v63; // xmm1
  __int64 v64; // rax
  __m128i v65; // xmm1
  __int64 v66; // rax
  __m128i v67; // xmm0
  __int64 *v68; // rax
  __int64 *v69; // rbx
  _QWORD *v70; // r15
  __int64 v71; // rdi
  _QWORD *v72; // rdx
  _QWORD *i; // rax
  int v74; // eax
  __int64 v75; // rsi
  _QWORD *v76; // rax
  _QWORD *v77; // rcx
  __int64 v78; // rdx
  unsigned __int64 v79; // rdi
  unsigned int v80; // [rsp+4h] [rbp-16Ch]
  __int64 v82; // [rsp+18h] [rbp-158h]
  __int64 v83; // [rsp+18h] [rbp-158h]
  __int64 v84; // [rsp+18h] [rbp-158h]
  __int64 v85; // [rsp+18h] [rbp-158h]
  __int64 v86; // [rsp+18h] [rbp-158h]
  __m128i v87; // [rsp+20h] [rbp-150h] BYREF
  __m128i v88; // [rsp+30h] [rbp-140h] BYREF
  char v89; // [rsp+42h] [rbp-12Eh]
  unsigned __int8 v90; // [rsp+43h] [rbp-12Dh]
  unsigned int v91; // [rsp+44h] [rbp-12Ch]
  unsigned int *v92; // [rsp+48h] [rbp-128h]
  __m128i v93; // [rsp+50h] [rbp-120h] BYREF
  __int64 v94; // [rsp+60h] [rbp-110h] BYREF
  __int64 v95; // [rsp+68h] [rbp-108h]
  __int64 v96; // [rsp+70h] [rbp-100h] BYREF
  __int128 v97; // [rsp+78h] [rbp-F8h]
  _QWORD v98[2]; // [rsp+90h] [rbp-E0h] BYREF
  _QWORD v99[4]; // [rsp+A0h] [rbp-D0h] BYREF
  __int64 v100; // [rsp+C0h] [rbp-B0h] BYREF
  __int64 v101; // [rsp+D0h] [rbp-A0h]
  __m128i v102; // [rsp+D8h] [rbp-98h]
  __int64 v103[2]; // [rsp+F0h] [rbp-80h] BYREF
  __int64 v104; // [rsp+100h] [rbp-70h]
  __m128i v105; // [rsp+108h] [rbp-68h] BYREF
  char v106; // [rsp+118h] [rbp-58h]
  __m128i *v107; // [rsp+120h] [rbp-50h]
  unsigned int *v108; // [rsp+128h] [rbp-48h]
  unsigned int v109; // [rsp+130h] [rbp-40h]
  char v110; // [rsp+134h] [rbp-3Ch]
  unsigned __int64 v111; // [rsp+138h] [rbp-38h]

  v111 = __readfsqword(0x28u);
  v92 = *(unsigned int **)(a2 + 16);
  if ( !v92 || *((_BYTE *)v92 + 64) == 1 && v92[18] <= 7 )
    return 0;
  v90 = sub_32F090(*v92);
  if ( !v90 )
    return 0;
  v88.m128i_i32[0] = *v92;
  if ( (unsigned int)(v88.m128i_i32[0] - 10) <= 1 )
    return 0;
  v6 = *((_QWORD *)v92 + 2);
  v87.m128i_i64[0] = v6;
  if ( !v6 )
    return 0;
  v88.m128i_i32[0] = *(_DWORD *)v6;
  if ( (unsigned int)(v88.m128i_i32[0] - 29) > 0xC
    || *(_DWORD *)(v6 + 36) > (signed int)v92[17]
    || (*(_BYTE *)(v6 + 6) & 2) != 0 )
  {
    return 0;
  }
  v94 = 0;
  v87.m128i_i64[1] = (__int64)v98;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  sub_127460(v98, a1, v92, 1);
  v89 = 0;
  v9 = 0;
  v93 = 0u;
  v91 = 0;
LABEL_10:
  v10 = v87.m128i_i64[0];
  v11 = 0;
  while ( 1 )
  {
    v12 = *(_QWORD *)(a1 + 480);
    v13 = 2 * (unsigned int)(v11 == 0);
    if ( (unsigned int)(*(_DWORD *)v10 - 29) > 0xC )
      break;
    v14 = *(_DWORD *)(v10 + 36);
    v15 = *v92;
    if ( *v92 == 2 )
      goto LABEL_54;
LABEL_13:
    if ( (unsigned int)(v15 - 8) > 3 )
      v16 = v92[9];
    else
      v16 = v92[17];
    if ( v14 >= v16 )
      goto LABEL_16;
LABEL_56:
    if ( (signed int)v92[17] > *(_DWORD *)(v10 + 68) )
    {
      if ( v9 )
      {
        v7 = v91;
        if ( !v91 )
          goto LABEL_59;
      }
      if ( v91 == 11 )
        goto LABEL_66;
      v83 = v11;
      v88.m128i_i64[0] = (__int64)&v94;
      v80 = 2 * (v11 == 0);
      v41 = sub_A0940(v12, v10, (__int64)v92, v13, 0);
      v11 = v83;
      if ( v41 )
      {
        v91 = 10;
        goto LABEL_68;
      }
      v13 = v80;
      if ( v91 != 10 )
      {
LABEL_66:
        v84 = v11;
        v88.m128i_i64[0] = (__int64)&v94;
        v42 = sub_A0940(v12, v10, (__int64)v92, v13, 1u);
        v11 = v84;
        if ( !v42 )
          goto LABEL_17;
        v91 = 11;
LABEL_68:
        if ( !v11 )
          goto LABEL_87;
LABEL_69:
        v43 = *(_QWORD *)(a1 + 480);
        v85 = v11;
        v88.m128i_i64[0] = (__int64)&v94;
        v44 = sub_11FFE0(v87.m128i_i64[0], *(_QWORD *)(v43 + 112), 0);
        v89 |= v44;
        v11 = v85;
LABEL_70:
        v45 = v93.m128i_i64[0];
        v46 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v87), (__m128i)(unsigned __int64)v11);
        if ( v93.m128i_i64[0] )
        {
          if ( !v93.m128i_i64[1] )
            goto LABEL_72;
          v54 = v90;
          v55 = *(_QWORD *)v93.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
          if ( (*(_BYTE *)v55 & 2) == 0 )
          {
            v45 = *(_QWORD *)v93.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
            v9 = v87.m128i_i64[0];
            v60 = *(_QWORD *)(v55 + 24);
            if ( v87.m128i_i64[0] < v60 )
            {
LABEL_99:
              v61 = *(_QWORD *)(v45 + 8);
              v54 = v90;
              goto LABEL_100;
            }
            while ( v60 < v87.m128i_i64[0] )
            {
              v61 = *(_QWORD *)(v45 + 16);
              v54 = 0;
LABEL_100:
              if ( (*(_BYTE *)v61 & 2) != 0 )
                goto LABEL_92;
              v45 = v61;
              v60 = *(_QWORD *)(v61 + 24);
              if ( v87.m128i_i64[0] < v60 )
                goto LABEL_99;
            }
            if ( v45 )
              goto LABEL_78;
          }
LABEL_92:
          v88 = v46;
          v56 = (_OWORD *)qalloc(40);
          v48 = (unsigned __int64)v56;
          if ( !v56 )
          {
            exception = __cxa_allocate_exception(8u);
            *exception = (char *)&`vtable for'std::bad_alloc + 16;
            v88.m128i_i64[0] = (__int64)&v94;
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          v57 = _mm_load_si128(&v88);
          *v56 = 0;
          *(__m128i *)((char *)v56 + 24) = v57;
          *(_QWORD *)v56 = v45 & 0xFFFFFFFFFFFFFFFCLL;
          v58 = _mm_loadl_epi64(&v93);
          *(_QWORD *)v56 = v45 & 0xFFFFFFFFFFFFFFFCLL | 1;
          v59 = v93.m128i_i64[0];
          *(__m128i *)(v48 + 8) = _mm_unpacklo_epi64(v58, v58);
          if ( v45 != v59 )
          {
            if ( v54 )
            {
              *(_QWORD *)(v45 + 8) = v48;
              if ( v45 == *(_QWORD *)(v59 + 8) )
                *(_QWORD *)(v59 + 8) = v48;
            }
            else
            {
              *(_QWORD *)(v45 + 16) = v48;
              if ( v45 == *(_QWORD *)(v59 + 16) )
                *(_QWORD *)(v59 + 16) = v48;
            }
LABEL_76:
            sub_B1ED0(&v93, (__int64 *)v48);
LABEL_77:
            ++v93.m128i_i64[1];
LABEL_78:
            v13 = *(_QWORD *)(v87.m128i_i64[0] + 16);
            v87.m128i_i64[0] = v13;
            if ( !v13 )
              goto LABEL_19;
            v88.m128i_i32[0] = *(_DWORD *)v13;
            if ( (unsigned int)(v88.m128i_i32[0] - 29) > 0xC || (*(_BYTE *)(v13 + 6) & 2) != 0 )
              goto LABEL_19;
            v95 = 0;
            if ( v96 )
            {
              *(_QWORD *)&v97 = 0;
              v88.m128i_i64[0] = (__int64)&v94;
              qfree(v96);
              v96 = 0;
              *((_QWORD *)&v97 + 1) = 0;
            }
            v9 = v93.m128i_i64[1];
            goto LABEL_10;
          }
        }
        else
        {
          v88 = v46;
          v62 = qalloc(40);
          v63 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v62, (__m128i)(unsigned __int64)v62);
          if ( !v62 )
          {
            v2 = __cxa_allocate_exception(8u);
            *v2 = (char *)&`vtable for'std::bad_alloc + 16;
            v88.m128i_i64[0] = (__int64)&v94;
            __cxa_throw(
              v2,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_QWORD *)(v62 + 32) = 0;
          v46 = _mm_load_si128(&v88);
          *(_OWORD *)(v62 + 16) = 0;
          *(__m128i *)(v62 + 8) = v63;
          *(_QWORD *)v62 = v62 & 0xFFFFFFFFFFFFFFFCLL | 2;
          v93.m128i_i64[0] = v62;
          *(_QWORD *)v62 = v62 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v62 & 3LL;
          v64 = v93.m128i_i64[0];
          v65 = (__m128i)v93.m128i_u64[0];
          *(_QWORD *)v93.m128i_i64[0] &= ~1uLL;
          *(__m128i *)(v64 + 8) = _mm_unpacklo_epi64(v65, v65);
          *(_QWORD *)v93.m128i_i64[0] |= 2uLL;
          v45 = v93.m128i_i64[0];
LABEL_72:
          v88 = v46;
          v47 = (_OWORD *)qalloc(40);
          v48 = (unsigned __int64)v47;
          if ( !v47 )
          {
            v4 = __cxa_allocate_exception(8u);
            *v4 = (char *)&`vtable for'std::bad_alloc + 16;
            v88.m128i_i64[0] = (__int64)&v94;
            __cxa_throw(
              v4,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          v49 = _mm_load_si128(&v88);
          *v47 = 0;
          *(__m128i *)((char *)v47 + 24) = v49;
          *(_QWORD *)v47 = v45 & 0xFFFFFFFFFFFFFFFCLL;
          v50 = _mm_loadl_epi64(&v93);
          *(_QWORD *)v47 = v45 & 0xFFFFFFFFFFFFFFFCLL | 1;
          v51 = v93.m128i_i64[0];
          *(__m128i *)(v48 + 8) = _mm_unpacklo_epi64(v50, v50);
          if ( v45 != v51 )
          {
            *(_QWORD *)(v45 + 8) = v48;
            if ( v45 == *(_QWORD *)(v51 + 8) )
              *(_QWORD *)(v51 + 8) = v48;
            goto LABEL_76;
          }
        }
        *(_QWORD *)v45 = v48 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v45 & 3LL;
        *(__m128i *)(v93.m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v48, (__m128i)v48);
        v9 = *(_QWORD *)v48 & 2LL;
        *(_QWORD *)v48 &= ~1uLL;
        *(_QWORD *)v48 = v9 | v93.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_77;
      }
    }
LABEL_17:
    if ( *(_BYTE *)(v10 + 32) != 4 )
      goto LABEL_19;
    v88.m128i_i64[0] = (__int64)&v94;
    sub_1238E0(a1, &v94, v10 + 48, 1, 4294901760LL);
    if ( (unsigned __int8)sub_64180(&v94, (_QWORD *)v87.m128i_i64[1]) )
      goto LABEL_19;
    if ( (unsigned __int8)sub_318830(&v96, v99) )
      goto LABEL_19;
    v40 = sub_11DD00(v10, 0, 0, 0);
    v9 = v93.m128i_i64[1];
    if ( v40 )
      goto LABEL_19;
    v11 = v10 + 32;
    v10 = *(_QWORD *)(v10 + 40);
  }
  v14 = *(_DWORD *)(v10 + 68);
  v15 = *v92;
  if ( *v92 != 2 )
    goto LABEL_13;
LABEL_54:
  v39 = v92[17];
  if ( v39 < v14 )
    goto LABEL_17;
  if ( v14 < v39 )
    goto LABEL_56;
LABEL_16:
  v8 = v91;
  if ( v91 )
    goto LABEL_17;
  v52 = *(_QWORD *)(v12 + 112);
  v86 = v11;
  v88.m128i_i64[0] = (__int64)&v94;
  v53 = sub_1255D0(v10, v52, v92, v13);
  v11 = v86;
  if ( !v53 )
  {
LABEL_59:
    v91 = 0;
    goto LABEL_17;
  }
  if ( v86 )
    goto LABEL_69;
LABEL_87:
  if ( ((*(_DWORD *)v10 - 29) & 0xFFFFFFFB) == 0 && *v92 == 13 )
    goto LABEL_70;
LABEL_19:
  if ( !v93.m128i_i64[1] )
  {
    v30 = v93.m128i_i64[0];
    v90 = 0;
    if ( v93.m128i_i64[0] )
      goto LABEL_111;
    goto LABEL_114;
  }
  if ( !v89 )
  {
LABEL_37:
    v103[0] = (__int64)&off_4D6548;
    v103[1] = 0;
    v108 = v92;
    v105 = 0u;
    v109 = v91;
    v106 = 0;
    v107 = &v93;
    v110 = 0;
    v104 = a1;
    v88.m128i_i64[0] = (__int64)&v94;
    if ( (unsigned int)sub_11E340(a2, v103, v9, v13, v7, v8) )
    {
      v90 = 0;
    }
    else
    {
      v110 = 1;
      v88.m128i_i64[0] = (__int64)&v94;
      if ( (unsigned int)sub_11E340(a2, v103, v26, v27, v28, v29) )
      {
        if ( !under_debugger )
        {
          v88.m128i_i64[0] = (__int64)&v94;
          sub_3835A0(50020);
        }
        BUG();
      }
      if ( v89 )
      {
        if ( v93.m128i_i64[0] )
        {
          if ( v93.m128i_i64[1] )
          {
            v70 = *(_QWORD **)(v93.m128i_i64[0] + 8);
            while ( (_QWORD *)v93.m128i_i64[0] != v70 )
            {
              v71 = v70[3];
              v88.m128i_i64[0] = (__int64)&v94;
              sub_11CFE0(v71);
              if ( (*v70 & 2) == 0 )
              {
                v72 = (_QWORD *)v70[2];
                if ( (*(_BYTE *)v72 & 2) != 0 )
                {
                  v76 = (_QWORD *)(*v70 & 0xFFFFFFFFFFFFFFFCLL);
                  v77 = v70;
                  v78 = *v76;
                  if ( (*v76 & 2) == 0 )
                  {
                    while ( (_QWORD *)v76[2] == v77 )
                    {
                      v77 = v76;
                      v79 = v78 & 0xFFFFFFFFFFFFFFFCLL;
                      v78 = *(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v78 & 2) != 0 )
                      {
                        v70 = (_QWORD *)v79;
                        goto LABEL_143;
                      }
                      v76 = (_QWORD *)v79;
                    }
                  }
                  v70 = v76;
                }
                else
                {
                  for ( i = (_QWORD *)v72[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
                    v72 = i;
                  v70 = v72;
                }
              }
LABEL_143:
              ;
            }
          }
        }
        v74 = *(_DWORD *)(a1 + 24);
        BYTE1(v74) &= ~2u;
        LOBYTE(v74) = v74 | 0x80;
        *(_DWORD *)(a1 + 24) = v74;
      }
      v75 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      v88.m128i_i64[0] = (__int64)&v94;
      sub_15B6B0(a2, v75, 0, 0, 0, 0, 0);
    }
    goto LABEL_39;
  }
  v17 = v93.m128i_i64[0];
  v82 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL);
  if ( !v82 )
  {
    v90 = 0;
    if ( !v93.m128i_i64[0] )
      goto LABEL_114;
LABEL_41:
    v31 = *(_QWORD *)v17;
    v32 = (__int64 *)(*(_QWORD *)v17 & 0xFFFFFFFFFFFFFFFCLL);
    v33 = *v32;
    if ( (*v32 & 2) != 0 )
    {
LABEL_49:
      *(_QWORD *)v17 = v17 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v17 & 3LL;
      v36 = v93.m128i_i64[0];
      v37 = (__m128i)v93.m128i_u64[0];
      *(_QWORD *)v93.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v36 + 8) = _mm_unpacklo_epi64(v37, v37);
      *(_QWORD *)v93.m128i_i64[0] |= 2uLL;
      v93.m128i_i64[1] = 0;
      goto LABEL_112;
    }
    v34 = (__int64 *)v32[1];
    if ( (*(_BYTE *)v34 & 2) != 0 )
    {
      v35 = (__int64 *)v32[2];
      if ( (*(_BYTE *)v35 & 2) != 0 )
        goto LABEL_155;
    }
    else
    {
      sub_A0A70(v34);
      v35 = (__int64 *)v32[2];
      if ( (*(_BYTE *)v35 & 2) != 0 )
        goto LABEL_45;
    }
    sub_A0A70(v35);
LABEL_45:
    v33 = *v32;
    if ( (*v32 & 2) != 0 )
    {
LABEL_46:
      if ( v31 > 3 )
        qfree(v32);
      v17 = v93.m128i_i64[0];
      goto LABEL_49;
    }
LABEL_155:
    *v32 = v33 | 2;
    goto LABEL_46;
  }
  if ( !v93.m128i_i64[0] )
    goto LABEL_37;
  v18 = *(_QWORD **)(v93.m128i_i64[0] + 8);
  if ( v18 == (_QWORD *)v93.m128i_i64[0] )
    goto LABEL_37;
  v87.m128i_i64[0] = (__int64)&v100;
  while ( 1 )
  {
    v19 = v18[3];
    v20 = v87.m128i_i32[0];
    v88.m128i_i64[0] = (__int64)&v94;
    sub_127460(v87.m128i_i64[0], a1, v19, 0);
    if ( (unsigned __int8)sub_17BF20(v82, v20, *(_DWORD *)(a1 + 72), -1, 0, 0, 2, 1)
      || sub_A97D0(a1, (__int64 *)v87.m128i_i64[0], *(_QWORD *)(v19 + 8), a2, 1u) )
    {
      break;
    }
    sub_1240C0(v103, a1, v19, 1);
    sub_642D0((__int64 *)v87.m128i_i64[0], v103);
    v21 = v104;
    v104 = 0;
    v22 = _mm_loadu_si128(&v105);
    v105 = 0;
    if ( v101 )
    {
      v88 = v22;
      v102.m128i_i64[0] = 0;
      qfree(v101);
      v23 = _mm_load_si128(&v88);
      v101 = v21;
      v102 = v23;
      if ( v104 )
      {
        v105.m128i_i64[0] = 0;
        qfree(v104);
      }
    }
    else
    {
      v101 = v21;
      v102 = v22;
    }
    qfree(v103[0]);
    v24 = sub_A94E0(a1, v87.m128i_i64[0], *(_QWORD *)(v19 + 8), a2, 1u);
    v25 = v101;
    if ( v24 )
      goto LABEL_130;
    if ( v101 )
    {
      v102.m128i_i64[0] = 0;
      qfree(v101);
    }
    qfree(v100);
    if ( (*v18 & 2) == 0 )
    {
      v9 = v18[2];
      if ( (*(_BYTE *)v9 & 2) != 0 )
      {
        v68 = (__int64 *)(*v18 & 0xFFFFFFFFFFFFFFFCLL);
        v9 = *v68;
        if ( (*v68 & 2) != 0 || (_QWORD *)v68[2] != v18 )
        {
LABEL_124:
          v18 = v68;
        }
        else
        {
          while ( 1 )
          {
            v69 = v68;
            v13 = v9 & 0xFFFFFFFFFFFFFFFCLL;
            v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v9 & 2) != 0 )
              break;
            v68 = (__int64 *)v13;
            if ( *(__int64 **)(v13 + 16) != v69 )
              goto LABEL_124;
          }
          v18 = (_QWORD *)v13;
        }
      }
      else
      {
        do
        {
          v18 = (_QWORD *)v9;
          v9 = *(_QWORD *)(v9 + 8);
        }
        while ( (*(_BYTE *)v9 & 2) == 0 );
      }
    }
    if ( (_QWORD *)v93.m128i_i64[0] == v18 )
      goto LABEL_37;
  }
  v25 = v101;
LABEL_130:
  if ( v25 )
  {
    v102.m128i_i64[0] = 0;
    qfree(v25);
  }
  qfree(v100);
  v90 = 0;
LABEL_39:
  v17 = v93.m128i_i64[0];
  v30 = v93.m128i_i64[0];
  if ( v93.m128i_i64[0] )
  {
    if ( v93.m128i_i64[1] )
      goto LABEL_41;
LABEL_111:
    *(_QWORD *)v30 = v30 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v30 & 3LL;
    v66 = v93.m128i_i64[0];
    v67 = (__m128i)v93.m128i_u64[0];
    *(_QWORD *)v93.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v66 + 8) = _mm_unpacklo_epi64(v67, v67);
    *(_QWORD *)v93.m128i_i64[0] |= 2uLL;
LABEL_112:
    if ( v93.m128i_i64[0] )
      qfree(v93.m128i_i64[0]);
  }
LABEL_114:
  if ( v99[0] )
  {
    v99[1] = 0;
    qfree(v99[0]);
  }
  qfree(v98[0]);
  if ( v96 )
  {
    *(_QWORD *)&v97 = 0;
    qfree(v96);
  }
  qfree(v94);
  return v90;
}
