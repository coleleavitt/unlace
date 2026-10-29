void __fastcall sub_1A60F00(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rdx
  unsigned int *v8; // rbp
  unsigned int *v9; // rsi
  size_t v10; // r12
  const void *v11; // rbp
  size_t v12; // r13
  unsigned int v13; // esi
  unsigned int v14; // edi
  unsigned int v15; // r15d
  __int64 v16; // r14
  __int64 v17; // rax
  __m128i *v18; // rax
  __m128i si128; // xmm0
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r13
  _BOOL8 v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 *v28; // rcx
  __int64 v29; // r14
  unsigned int v30; // r13d
  __int64 v31; // rbp
  __int64 v32; // r15
  __int64 v33; // r12
  __int64 v34; // r12
  __int64 v35; // r12
  __int64 v36; // rdi
  __int64 v37; // r9
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rbp
  unsigned __int64 v42; // rdi
  char v43; // bp
  __int64 v44; // r9
  int v45; // esi
  __int64 v46; // r12
  unsigned __int64 v47; // rdi
  unsigned __int8 v48; // r14
  _OWORD *v49; // r12
  size_t v50; // r13
  _OWORD *v51; // r14
  size_t v52; // rdx
  int v53; // eax
  __int64 v54; // r14
  unsigned int v55; // eax
  __int64 v56; // rax
  unsigned int v57; // r8d
  __int64 *v58; // rcx
  _QWORD *v59; // r15
  unsigned int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // r14
  int v64; // eax
  char *v65; // rdi
  __int64 v66; // rbp
  _QWORD *v67; // r13
  _QWORD *v68; // rbx
  unsigned __int64 *v69; // rdi
  unsigned __int64 *v70; // r14
  unsigned __int64 v71; // r15
  unsigned __int64 v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // r12
  _QWORD *v75; // rdi
  void *v76; // rdi
  void **v77; // r12
  void **v78; // rax
  _QWORD *v79; // rdi
  unsigned __int64 v80; // rax
  __int64 v81; // rdx
  unsigned int v82; // r13d
  void *v83; // rdi
  unsigned int v84; // [rsp+0h] [rbp-F8h]
  __int64 v85; // [rsp+0h] [rbp-F8h]
  __int64 v86; // [rsp+8h] [rbp-F0h]
  __int64 *v87; // [rsp+8h] [rbp-F0h]
  __int64 v88; // [rsp+8h] [rbp-F0h]
  unsigned __int64 *v89; // [rsp+10h] [rbp-E8h]
  _QWORD *v90; // [rsp+18h] [rbp-E0h]
  void **v91; // [rsp+18h] [rbp-E0h]
  _QWORD *v93; // [rsp+28h] [rbp-D0h]
  __int64 v94; // [rsp+30h] [rbp-C8h]
  __int64 v95; // [rsp+38h] [rbp-C0h]
  void *v96; // [rsp+40h] [rbp-B8h] BYREF
  size_t v97; // [rsp+48h] [rbp-B0h]
  __m128i v98; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int8 v99; // [rsp+60h] [rbp-98h]
  void *v100; // [rsp+68h] [rbp-90h]
  _OWORD *v101; // [rsp+70h] [rbp-88h]
  __m128i v102; // [rsp+78h] [rbp-80h] BYREF
  __int64 *v103; // [rsp+90h] [rbp-68h] BYREF
  _OWORD *v104; // [rsp+98h] [rbp-60h]
  __int64 v105; // [rsp+A0h] [rbp-58h] BYREF
  _OWORD v106[5]; // [rsp+A8h] [rbp-50h] BYREF

  if ( (*(_QWORD *)a2 & 7) != 0 )
    BUG();
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(unsigned int **)((*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  v9 = *(unsigned int **)(v7 + 16);
  v10 = *v8;
  v11 = v8 + 4;
  v12 = *v9;
  if ( v12 <= 2 )
  {
    if ( v12 != v10 || *v9 && memcmp(v11, v9 + 4, v12) )
      return;
    a4 = *(unsigned int *)(a2 + 40);
    if ( (unsigned int)a4 > 0x2710 )
      return;
    v13 = *(_DWORD *)(a2 + 44);
    if ( v13 > 0x2710 )
      return;
    v14 = *(_DWORD *)(a2 + 48);
    if ( v14 > 0x2710 )
      return;
    v55 = 150 * v14 + 110 * v13 + 100 * a4;
    if ( v55 > 0x2710 )
      return;
    v7 = (v55 + 50) / 0x64;
    if ( v7 > v12 )
      return;
    if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_7:
      if ( v14 <= 0x2710 )
      {
        v15 = 150 * v14 + 110 * v13 + 100 * a4;
        if ( v15 <= 0x2710 )
          goto LABEL_9;
      }
      goto LABEL_90;
    }
  }
  else if ( !*(_DWORD *)(a2 + 24) )
  {
    LODWORD(a4) = *(_DWORD *)(a2 + 40);
    if ( (unsigned int)a4 > 0x2710 )
      goto LABEL_90;
    goto LABEL_5;
  }
  sub_1A462F0(*(_QWORD *)(a1 + 448), a2, v7, a4, a5, a6);
  if ( !*(_QWORD *)a2 || !(unsigned __int8)sub_1A38930(*(_QWORD **)(a1 + 472), a2) )
    return;
  LODWORD(a4) = *(_DWORD *)(a2 + 40);
  if ( (unsigned int)a4 > 0x2710 )
    goto LABEL_90;
LABEL_5:
  v13 = *(_DWORD *)(a2 + 44);
  if ( v13 <= 0x2710 )
  {
    v14 = *(_DWORD *)(a2 + 48);
    goto LABEL_7;
  }
LABEL_90:
  v15 = -1;
LABEL_9:
  v16 = a1 + 24;
  v17 = *(_QWORD *)(a1 + 32);
  v95 = a1 + 24;
  if ( !v17 )
    goto LABEL_16;
  do
  {
    while ( v15 <= *(_DWORD *)(v17 + 32) )
    {
      v16 = v17;
      v17 = *(_QWORD *)(v17 + 16);
      if ( !v17 )
        goto LABEL_14;
    }
    v17 = *(_QWORD *)(v17 + 24);
  }
  while ( v17 );
LABEL_14:
  if ( v95 == v16 || v15 < *(_DWORD *)(v16 + 32) )
  {
LABEL_16:
    v18 = (__m128i *)operator new(0x40u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AAA70);
    v20 = v16;
    v18[2].m128i_i32[0] = v15;
    v16 = (__int64)v18;
    v18[2].m128i_i64[1] = 0;
    v18[3] = si128;
    v21 = sub_1A3E670((_QWORD *)(a1 + 16), v20, (unsigned int *)&v18[2]);
    v23 = v21;
    if ( v22 )
    {
      v24 = v95 == v22 || v21 || *(_DWORD *)(v16 + 32) < *(_DWORD *)(v22 + 32);
      std::_Rb_tree_insert_and_rebalance(v24, v16, v22, v95);
      ++*(_QWORD *)(a1 + 56);
    }
    else
    {
      sub_1A60C60((void **)(v16 + 40));
      v83 = (void *)v16;
      v16 = v23;
      operator delete(v83);
    }
  }
  v25 = sub_2244B30(v11, v10);
  v26 = (unsigned int)sub_2244CB0(v16 + 40, v11, v10, v25);
  v28 = (__int64 *)(*(_QWORD *)(v16 + 40) + 8 * v26);
  if ( *v28 )
  {
    if ( *v28 != -8 )
    {
      sub_1A3B430(&v103, v28, 0);
      v29 = *v103;
      v30 = *(_DWORD *)(*v103 + 16);
      if ( !v30 )
        goto LABEL_24;
LABEL_95:
      v32 = *(_QWORD *)(v29 + 8);
      v33 = 88LL * v30;
      if ( *(_DWORD *)(v32 + v33 - 64) )
      {
        v31 = sub_183AA90(a2);
        if ( !v31 )
          goto LABEL_97;
LABEL_26:
        v86 = v32 + v33;
        v34 = 0x2E8BA2E8BA2E8BA3LL * (v33 >> 3);
        if ( v34 >> 2 )
        {
          v35 = v32 + 352 * (v34 >> 2);
          while ( 1 )
          {
            if ( *(_DWORD *)(v32 + 24) )
            {
              v40 = **(_QWORD **)(v32 + 16);
              if ( v40 )
              {
                if ( sub_16C47B0(v40) == v31 )
                  break;
              }
            }
            if ( *(_DWORD *)(v32 + 112) )
            {
              v36 = **(_QWORD **)(v32 + 104);
              if ( v36 )
              {
                if ( sub_16C47B0(v36) == v31 )
                {
                  v32 += 88;
                  break;
                }
              }
            }
            if ( *(_DWORD *)(v32 + 200) )
            {
              v38 = **(_QWORD **)(v32 + 192);
              if ( v38 )
              {
                if ( sub_16C47B0(v38) == v31 )
                {
                  v32 += 176;
                  break;
                }
              }
            }
            if ( *(_DWORD *)(v32 + 288) )
            {
              v39 = **(_QWORD **)(v32 + 280);
              if ( v39 )
              {
                if ( sub_16C47B0(v39) == v31 )
                {
                  v32 += 264;
                  break;
                }
              }
            }
            v32 += 352;
            if ( v35 == v32 )
            {
              v34 = 0x2E8BA2E8BA2E8BA3LL * ((v86 - v32) >> 3);
              goto LABEL_160;
            }
          }
LABEL_41:
          if ( v86 != v32 )
          {
            if ( *(_DWORD *)(a2 + 24) && (v41 = **(_QWORD **)(a2 + 16)) != 0 )
            {
              while ( (unsigned int)sub_B90D60(v41, nullptr, nullptr, 0, 0, v37) != 2 )
              {
                v42 = *(_QWORD *)(v41 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(v41 + 16) & 4) != 0 )
                  v42 = *(_QWORD *)v42;
                if ( v42 )
                {
                  if ( (*(_BYTE *)(v42 + 8) & 0x7F) == 0x18 )
                  {
                    v41 = v42 - 48;
                    if ( v42 != 48 )
                      continue;
                  }
                }
                goto LABEL_50;
              }
              v43 = 1;
            }
            else
            {
LABEL_50:
              v43 = 0;
            }
            sub_1A39F10(&v103, (__int64 *)a2, *(_QWORD *)(*(_QWORD *)(a1 + 448) + 232LL));
            v99 = v43;
            v100 = &v102;
            if ( v103 == &v105 )
            {
              v102 = _mm_load_si128((const __m128i *)&v105);
            }
            else
            {
              v100 = v103;
              v102.m128i_i64[0] = v105;
            }
            v45 = *(_DWORD *)(v32 + 24);
            v101 = v104;
            if ( v45 && (v46 = **(_QWORD **)(v32 + 16)) != 0 )
            {
              while ( (unsigned int)sub_B90D60(v46, nullptr, nullptr, 0, 0, v44) != 2 )
              {
                v47 = *(_QWORD *)(v46 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(v46 + 16) & 4) != 0 )
                  v47 = *(_QWORD *)v47;
                if ( v47 )
                {
                  if ( (*(_BYTE *)(v47 + 8) & 0x7F) == 0x18 )
                  {
                    v46 = v47 - 48;
                    if ( v47 != 48 )
                      continue;
                  }
                }
                goto LABEL_61;
              }
              v48 = 1;
            }
            else
            {
LABEL_61:
              v48 = 0;
            }
            sub_1A39F10(&v96, (__int64 *)v32, *(_QWORD *)(*(_QWORD *)(a1 + 448) + 232LL));
            v49 = v96;
            LOBYTE(v103) = v48;
            v104 = v106;
            if ( v96 == &v98 )
            {
              v49 = v106;
              v106[0] = _mm_load_si128(&v98);
            }
            else
            {
              v104 = v96;
              *(_QWORD *)&v106[0] = v98.m128i_i64[0];
            }
            v50 = v97;
            v105 = v97;
            if ( v99 < v48 )
              goto LABEL_154;
            if ( v99 == v48 )
            {
              v51 = v101;
              v52 = (size_t)v101;
              if ( v97 <= (unsigned __int64)v101 )
                v52 = v97;
              v53 = sub_9B48C0(v100, v49, v52);
              if ( v53 )
                goto LABEL_72;
              v54 = (__int64)v51 - v50;
              if ( v54 <= 0x7FFFFFFF )
              {
                if ( v54 < (__int64)0xFFFFFFFF80000000LL )
                  goto LABEL_154;
                v53 = v54;
LABEL_72:
                if ( v53 >= 0 )
                  goto LABEL_73;
LABEL_154:
                *(_QWORD *)v32 = *(_QWORD *)a2;
                *(_QWORD *)(v32 + 8) = *(_QWORD *)(a2 + 8);
                sub_1747DA0((void **)(v32 + 16), (char **)(a2 + 16));
                *(_DWORD *)(v32 + 40) = *(_DWORD *)(a2 + 40);
                *(_DWORD *)(v32 + 44) = *(_DWORD *)(a2 + 44);
                *(_DWORD *)(v32 + 48) = *(_DWORD *)(a2 + 48);
                *(_QWORD *)(v32 + 52) = *(_QWORD *)(a2 + 52);
                *(_BYTE *)(v32 + 60) = *(_BYTE *)(a2 + 60);
                *(_BYTE *)(v32 + 61) = *(_BYTE *)(a2 + 61);
                sub_1A3BEA0(v32 + 64, (__int64 **)(a2 + 64));
                v49 = v104;
              }
            }
LABEL_73:
            if ( v49 != v106 )
              operator delete(v49);
            if ( v100 != &v102 )
              operator delete(v100);
            return;
          }
LABEL_150:
          if ( !v30 )
            goto LABEL_98;
LABEL_97:
          if ( !*(_DWORD *)(a2 + 24) )
            goto LABEL_99;
          goto LABEL_98;
        }
LABEL_160:
        if ( v34 != 2 )
        {
          if ( v34 != 3 )
          {
            if ( v34 != 1 )
              goto LABEL_150;
            goto LABEL_149;
          }
          if ( sub_183AA90(v32) == v31 )
            goto LABEL_41;
          v32 += 88;
        }
        if ( sub_183AA90(v32) == v31 )
          goto LABEL_41;
        v32 += 88;
LABEL_149:
        if ( sub_183AA90(v32) != v31 )
          goto LABEL_150;
        goto LABEL_41;
      }
      v82 = v30 - 1;
      *(_DWORD *)(v29 + 16) = v82;
      sub_17A1D90((_QWORD *)(v32 + 88LL * v82));
      v30 = *(_DWORD *)(v29 + 16);
      v31 = sub_183AA90(a2);
      if ( !v31 )
        goto LABEL_150;
LABEL_25:
      v32 = *(_QWORD *)(v29 + 8);
      v33 = 88LL * v30;
      goto LABEL_26;
    }
    --*(_DWORD *)(v16 + 56);
  }
  v87 = v28;
  v84 = v26;
  v56 = sub_22300B0(v10 + 113, 8, v26, v28, v26, v27);
  v57 = v84;
  v58 = v87;
  v59 = (_QWORD *)v56;
  if ( v10 )
  {
    memcpy((void *)(v56 + 112), v11, v10);
    v58 = v87;
    v57 = v84;
  }
  *((_BYTE *)v59 + v10 + 112) = 0;
  v59[1] = v59 + 3;
  *v59 = v10;
  v59[2] = 0x100000000LL;
  *v58 = (__int64)v59;
  ++*(_DWORD *)(v16 + 52);
  v60 = sub_22450D0(v16 + 40, v57);
  sub_1A3B430(&v103, (__int64 *)(*(_QWORD *)(v16 + 40) + 8LL * v60), 0);
  v29 = *v103;
  v30 = *(_DWORD *)(*v103 + 16);
  if ( v30 )
    goto LABEL_95;
LABEL_24:
  v31 = sub_183AA90(a2);
  if ( v31 )
    goto LABEL_25;
LABEL_98:
  sub_1A3BC70(v29 + 8, a2);
LABEL_99:
  if ( *(_QWORD *)(a1 + 56) > 5u )
  {
    do
    {
      v61 = std::_Rb_tree_decrement(v95);
      v62 = std::_Rb_tree_rebalance_for_erase(v61, v95);
      v63 = (_QWORD *)v62;
      if ( *(_DWORD *)(v62 + 52) )
      {
        v64 = *(_DWORD *)(v62 + 48);
        v65 = (char *)v63[5];
        if ( v64 )
        {
          v85 = 0;
          v93 = v63;
          v94 = 8LL * (unsigned int)(v64 - 1) + 8;
          do
          {
            v66 = *(_QWORD *)&v65[v85];
            if ( v66 && v66 != -8 )
            {
              v67 = *(_QWORD **)(v66 + 8);
              v88 = *(_QWORD *)v66 + 113LL;
              v68 = &v67[11 * *(unsigned int *)(v66 + 16)];
              if ( v67 != v68 )
              {
                do
                {
                  while ( 1 )
                  {
                    v68 -= 11;
                    v69 = (unsigned __int64 *)v68[8];
                    v89 = (unsigned __int64 *)v68[9];
                    v70 = v69;
                    if ( v89 != v69 )
                    {
                      do
                      {
                        v71 = *v70;
                        if ( *v70 )
                        {
                          v72 = v70[1];
                          if ( v72 )
                          {
                            if ( v71 < v72 || v71 > v72 + 14848 )
                            {
                              v73 = *(_QWORD **)(v71 + 528);
                              v74 = &v73[8 * (unsigned __int64)*(unsigned int *)(v71 + 536)];
                              if ( v73 != v74 )
                              {
                                do
                                {
                                  while ( 1 )
                                  {
                                    v74 -= 8;
                                    v75 = (_QWORD *)v74[3];
                                    if ( v75 == v74 + 5 )
                                      break;
                                    v90 = v73;
                                    operator delete(v75);
                                    v73 = v90;
                                    if ( v90 == v74 )
                                      goto LABEL_113;
                                  }
                                }
                                while ( v73 != v74 );
LABEL_113:
                                v74 = *(_QWORD **)(v71 + 528);
                              }
                              if ( v74 != (_QWORD *)(v71 + 544) )
                                free(v74);
                              v76 = *(void **)(v71 + 416);
                              v77 = (void **)(v71 + 416);
                              if ( v76 != (void *)(v71 + 432) )
                                free(v76);
                              v78 = (void **)(v71 + 96);
                              do
                              {
                                while ( 1 )
                                {
                                  v77 -= 4;
                                  if ( *v77 == v77 + 2 )
                                    break;
                                  v91 = v78;
                                  operator delete(*v77);
                                  v78 = v91;
                                  if ( v77 == v91 )
                                    goto LABEL_121;
                                }
                              }
                              while ( v77 != v78 );
LABEL_121:
                              operator delete((void *)v71, 0x3A0u);
                            }
                            else
                            {
                              v81 = *(unsigned int *)(v72 + 14976);
                              *(_DWORD *)(v72 + 14976) = v81 + 1;
                              *(_QWORD *)(v72 + 8 * v81 + 14848) = v71;
                            }
                          }
                        }
                        v70 += 3;
                      }
                      while ( v89 != v70 );
                      v69 = (unsigned __int64 *)v68[8];
                    }
                    if ( v69 )
                      operator delete(v69);
                    v79 = (_QWORD *)v68[2];
                    if ( v79 == v68 + 4 )
                      break;
                    free(v79);
                    if ( v67 == v68 )
                      goto LABEL_128;
                  }
                }
                while ( v67 != v68 );
LABEL_128:
                v68 = *(_QWORD **)(v66 + 8);
              }
              if ( v68 != (_QWORD *)(v66 + 24) )
                free(v68);
              operator delete(v66, v88, 8);
              v65 = (char *)v93[5];
            }
            v85 += 8;
          }
          while ( v94 != v85 );
          v63 = v93;
        }
      }
      else
      {
        v65 = *(char **)(v62 + 40);
      }
      free(v65);
      operator delete(v63);
      v80 = *(_QWORD *)(a1 + 56) - 1LL;
      *(_QWORD *)(a1 + 56) = v80;
    }
    while ( v80 > 5 );
  }
}
