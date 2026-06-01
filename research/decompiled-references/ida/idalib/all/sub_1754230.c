__int64 __fastcall sub_1754230(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int **v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // r9
  unsigned int v11; // edx
  __int64 *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r13
  bool v15; // zf
  __int64 v16; // r15
  const __m128i *v17; // rax
  const __m128i *v18; // rcx
  const __m128i *v19; // r15
  const __m128i *v20; // rdx
  char v21; // al
  __int64 v22; // r15
  int v23; // eax
  unsigned int v24; // ebx
  __int16 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // esi
  __int64 *v32; // rdi
  unsigned __int16 v33; // bx
  __int64 v34; // r9
  unsigned int v35; // r8d
  unsigned __int16 *v36; // rax
  unsigned __int16 v37; // cx
  int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rdx
  int v41; // eax
  unsigned int v42; // esi
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // ebx
  __int64 *v46; // r11
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rsi
  _QWORD *v50; // r12
  __int64 v51; // r15
  _QWORD *v52; // r15
  __int32 v53; // edx
  void **v54; // rdi
  int v55; // eax
  int v56; // r8d
  __int64 v57; // r9
  unsigned int v58; // edi
  unsigned __int16 v59; // si
  int v60; // eax
  int v61; // r8d
  __int64 v62; // r9
  unsigned int v63; // edi
  int v64; // eax
  int v65; // r8d
  __int64 v66; // r9
  unsigned int v67; // edi
  unsigned __int16 *v68; // r11
  __int64 v69; // r8
  __int64 v70; // r9
  int v71; // eax
  int v72; // r9d
  __int64 v73; // r8
  __int64 v74; // r13
  int v75; // edi
  unsigned __int16 *v76; // r10
  __int64 *v77; // r10
  int v78; // r11d
  int v79; // r11d
  int v80; // r11d
  const __m128i *v81; // [rsp+8h] [rbp-220h]
  __int64 v82; // [rsp+8h] [rbp-220h]
  int v83; // [rsp+14h] [rbp-214h]
  unsigned int v84; // [rsp+18h] [rbp-210h]
  int v85; // [rsp+1Ch] [rbp-20Ch]
  __int64 v86; // [rsp+20h] [rbp-208h] BYREF
  __int64 v87; // [rsp+28h] [rbp-200h] BYREF
  void *v88; // [rsp+30h] [rbp-1F8h] BYREF
  __int64 v89; // [rsp+38h] [rbp-1F0h]
  _DWORD v90[32]; // [rsp+40h] [rbp-1E8h] BYREF
  void *v91[2]; // [rsp+C0h] [rbp-168h] BYREF
  _DWORD v92[32]; // [rsp+D0h] [rbp-158h] BYREF
  __m128i ptr; // [rsp+150h] [rbp-D8h] BYREF
  _DWORD v94[32]; // [rsp+160h] [rbp-C8h] BYREF
  __m128i v95; // [rsp+1E0h] [rbp-48h] BYREF

  v8 = (unsigned int **)(a1 + 24);
  v9 = *(_DWORD *)(a1 + 40);
  if ( !v9 )
    goto LABEL_70;
  a4 = *(_QWORD *)a2;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = (v9 - 1) & (((unsigned int)*(_QWORD *)a2 >> 9) ^ ((unsigned int)*(_QWORD *)a2 >> 4));
  v12 = (__int64 *)(v10 + 656LL * v11);
  v13 = *v12;
  if ( *(_QWORD *)a2 == *v12 )
  {
LABEL_3:
    v14 = (__int64)(v12 + 1);
    goto LABEL_4;
  }
  v45 = 1;
  v46 = nullptr;
  if ( v13 != -4096 )
  {
    while ( 1 )
    {
      if ( v13 == -8192 && !v46 )
        v46 = v12;
      v11 = (v9 - 1) & (v45 + v11);
      v12 = (__int64 *)(v10 + 656LL * v11);
      v13 = *v12;
      if ( a4 == *v12 )
        goto LABEL_3;
      if ( v13 == -4096 )
        break;
      ++v45;
    }
    if ( v46 )
      v12 = v46;
  }
  a5 = 3 * v9;
  a3 = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
  a6 = (unsigned int)(4 * a3);
  if ( (unsigned int)a6 >= (unsigned int)a5 )
  {
LABEL_70:
    sub_1753EE0(v8, 2 * v9, a3, a4, a5, a6);
    v60 = *(_DWORD *)(a1 + 40);
    if ( v60 )
    {
      a4 = *(_QWORD *)a2;
      v61 = v60 - 1;
      v62 = *(_QWORD *)(a1 + 24);
      v63 = (v60 - 1) & (((unsigned int)*(_QWORD *)a2 >> 9) ^ ((unsigned int)*(_QWORD *)a2 >> 4));
      LODWORD(a3) = *(_DWORD *)(a1 + 32) + 1;
      v12 = (__int64 *)(v62 + 656LL * v63);
      v49 = *v12;
      if ( *(_QWORD *)a2 == *v12 )
        goto LABEL_53;
      if ( v49 != -4096 )
      {
        v77 = (__int64 *)(v62 + 656LL
                              * (v61 & (((unsigned int)*(_QWORD *)a2 >> 9) ^ ((unsigned int)*(_QWORD *)a2 >> 4))));
        v80 = 1;
        v12 = nullptr;
        while ( 1 )
        {
          if ( !v12 && v49 == -8192 )
            v12 = v77;
          v63 = v61 & (v80 + v63);
          v77 = (__int64 *)(v62 + 656LL * v63);
          v49 = *v77;
          if ( a4 == *v77 )
            goto LABEL_104;
          if ( v49 == -4096 )
          {
LABEL_128:
            if ( v12 )
              goto LABEL_52;
            v12 = v77;
            break;
          }
          ++v80;
        }
      }
LABEL_73:
      *(_DWORD *)(a1 + 32) = a3;
      goto LABEL_55;
    }
LABEL_140:
    ++*(_DWORD *)(a1 + 32);
    BUG();
  }
  v47 = v9 - *(_DWORD *)(a1 + 36) - (unsigned int)a3;
  v48 = v9 >> 3;
  if ( (unsigned int)v47 > (unsigned int)v48 )
  {
LABEL_52:
    v49 = *v12;
    goto LABEL_53;
  }
  sub_1753EE0(v8, v9, a3, a4, v47, v48);
  v64 = *(_DWORD *)(a1 + 40);
  if ( !v64 )
    goto LABEL_140;
  a4 = *(_QWORD *)a2;
  v65 = v64 - 1;
  v66 = *(_QWORD *)(a1 + 24);
  v67 = (v64 - 1) & (((unsigned int)*(_QWORD *)a2 >> 9) ^ ((unsigned int)*(_QWORD *)a2 >> 4));
  LODWORD(a3) = *(_DWORD *)(a1 + 32) + 1;
  v12 = (__int64 *)(v66 + 656LL * v67);
  v49 = *v12;
  if ( *v12 == *(_QWORD *)a2 )
  {
    v49 = *(_QWORD *)a2;
    goto LABEL_53;
  }
  if ( v49 == -4096 )
    goto LABEL_73;
  v77 = (__int64 *)(v66 + 656LL * (v65 & (((unsigned int)*(_QWORD *)a2 >> 9) ^ ((unsigned int)*(_QWORD *)a2 >> 4))));
  v78 = 1;
  v12 = nullptr;
  while ( 1 )
  {
    if ( v49 == -8192 && !v12 )
      v12 = v77;
    v67 = v65 & (v78 + v67);
    v77 = (__int64 *)(v66 + 656LL * v67);
    v49 = *v77;
    if ( a4 == *v77 )
      break;
    if ( v49 == -4096 )
      goto LABEL_128;
    ++v78;
  }
LABEL_104:
  v12 = v77;
LABEL_53:
  *(_DWORD *)(a1 + 32) = a3;
  if ( v49 != -4096 )
    --*(_DWORD *)(a1 + 36);
LABEL_55:
  *v12 = a4;
  v14 = (__int64)(v12 + 1);
  v12[1] = 1;
  ptr.m128i_i64[0] = (__int64)v94;
  ptr.m128i_i64[1] = 0x2000000001LL;
  v94[0] = -1;
  if ( (v12[1] & 1) != 0 )
  {
    v50 = v12 + 2;
    v51 = 80;
  }
  else
  {
    v50 = (_QWORD *)v12[2];
    v51 = 20LL * *((unsigned int *)v12 + 6);
  }
  v52 = &v50[v51];
  if ( v52 != v50 )
  {
    do
    {
      while ( 1 )
      {
        *((_DWORD *)v50 + 2) = 0;
        *((_DWORD *)v50 + 3) = 32;
        v53 = ptr.m128i_i32[2];
        *v50 = v50 + 2;
        if ( v53 )
          break;
        v50 += 20;
        if ( v52 == v50 )
          goto LABEL_62;
      }
      v54 = (void **)v50;
      v50 += 20;
      sub_A6DB70(v54, (char **)&ptr);
    }
    while ( v52 != v50 );
LABEL_62:
    if ( (_DWORD *)ptr.m128i_i64[0] != v94 )
      free((void *)ptr.m128i_i64[0]);
  }
LABEL_4:
  v15 = *(_BYTE *)(a2 + 32) == 0;
  v88 = v90;
  v89 = 0x2000000000LL;
  if ( v15 )
  {
    v90[0] = 0;
    LODWORD(v89) = 1;
  }
  else
  {
    v16 = *(_QWORD *)(a2 + 24);
    v17 = *(const __m128i **)(a2 + 16);
    v90[0] = 1;
    LODWORD(v89) = 1;
    v18 = &v17[2 * v16];
    v19 = v17;
    v81 = v18;
    while ( v81 != v19 )
    {
      v20 = v19;
      v19 += 2;
      sub_AB6BB0(&ptr, *(_QWORD **)(*(_QWORD *)a1 + 248LL), v20);
      sub_F1D660((__int64)&ptr, (__int64)&v88, *(_QWORD *)(*(_QWORD *)a1 + 248LL));
    }
  }
  v21 = *(_BYTE *)v14;
  if ( (*(_BYTE *)v14 & 1) != 0 )
  {
    v83 = 3;
    v82 = v14 + 8;
  }
  else
  {
    v38 = *(_DWORD *)(v14 + 16);
    v82 = *(_QWORD *)(v14 + 8);
    v83 = v38 - 1;
    if ( !v38 )
      goto LABEL_31;
  }
  v94[0] = -1;
  ptr.m128i_i64[0] = (__int64)v94;
  ptr.m128i_i64[1] = 0x2000000001LL;
  v85 = 1;
  v84 = v83 & sub_985B10(v88, (__int64)v88 + 4 * (unsigned int)v89);
  while ( 1 )
  {
    v22 = v82 + 160LL * v84;
    if ( (unsigned __int8)sub_2222ED0(&v88, v22) )
      break;
    if ( (unsigned __int8)sub_2222ED0(v22, &ptr) )
    {
      if ( (_DWORD *)ptr.m128i_i64[0] != v94 )
        free((void *)ptr.m128i_i64[0]);
      v21 = *(_BYTE *)v14;
      goto LABEL_31;
    }
    v84 = v83 & (v85 + v84);
    ++v85;
  }
  if ( (_DWORD *)ptr.m128i_i64[0] != v94 )
    free((void *)ptr.m128i_i64[0]);
  v21 = *(_BYTE *)v14;
  if ( v22 )
  {
    LOBYTE(v23) = v21 & 1;
    goto LABEL_15;
  }
LABEL_31:
  v23 = v21 & 1;
  if ( v23 )
  {
    v39 = v14 + 8;
    v40 = 640;
  }
  else
  {
    v39 = *(_QWORD *)(v14 + 8);
    v40 = 160LL * *(unsigned int *)(v14 + 16);
  }
  v22 = v39 + v40;
LABEL_15:
  if ( (_BYTE)v23 )
  {
    if ( v22 != v14 + 648 )
      goto LABEL_17;
  }
  else if ( v22 != 160LL * *(unsigned int *)(v14 + 16) + *(_QWORD *)(v14 + 8) )
  {
    goto LABEL_17;
  }
  v26 = *(_WORD *)(a1 + 200);
  *(_WORD *)(a1 + 200) = v26 + 1;
  ptr.m128i_i64[0] = (__int64)v94;
  ptr.m128i_i64[1] = 0x2000000000LL;
  if ( (_DWORD)v89 )
    sub_A6DB70((void **)&ptr, (char **)&v88);
  v95.m128i_i8[10] &= ~1u;
  v95.m128i_i64[0] = a2;
  v95.m128i_i16[4] = v26;
  if ( (unsigned __int8)sub_1745860(v14, (__int64)&ptr, &v86) )
  {
    v22 = v86;
    goto LABEL_25;
  }
  v87 = v86;
  v41 = (*(_DWORD *)v14 >> 1) + 1;
  if ( (*(_BYTE *)v14 & 1) != 0 )
  {
    v43 = 12;
    v42 = 4;
  }
  else
  {
    v42 = *(_DWORD *)(v14 + 16);
    v43 = 3 * v42;
  }
  v44 = (unsigned int)(4 * v41);
  if ( (unsigned int)v44 >= (unsigned int)v43 )
  {
    v42 *= 2;
    goto LABEL_83;
  }
  v44 = v42 - (v41 + *(_DWORD *)(v14 + 4));
  v43 = v42 >> 3;
  if ( (unsigned int)v44 <= (unsigned int)v43 )
  {
LABEL_83:
    sub_17534A0(v14, v42, v43, v44, v29, v30);
    sub_1745860(v14, (__int64)&ptr, &v87);
    v41 = (*(_DWORD *)v14 >> 1) + 1;
  }
  *(_DWORD *)v14 = *(_DWORD *)v14 & 1 | (2 * v41);
  v91[0] = v92;
  v91[1] = (void *)0x2000000001LL;
  v92[0] = -1;
  if ( !(unsigned __int8)sub_2222ED0(v87, v91) )
    --*(_DWORD *)(v14 + 4);
  v22 = v87;
  if ( v91[0] != v92 )
    free(v91[0]);
  sub_1744C20((char ***)v22, (char ***)&ptr);
  *(__m128i *)(v22 + 144) = _mm_load_si128(&v95);
LABEL_25:
  if ( (_DWORD *)ptr.m128i_i64[0] != v94 )
    free((void *)ptr.m128i_i64[0]);
  v31 = *(_DWORD *)(a1 + 88);
  v32 = (__int64 *)(a1 + 72);
  v33 = *(_WORD *)(v22 + 152);
  if ( !v31 )
    goto LABEL_65;
  v34 = *(_QWORD *)(a1 + 72);
  v35 = (v31 - 1) & (37 * v33);
  v36 = (unsigned __int16 *)(v34 + 16LL * v35);
  v37 = *v36;
  if ( v33 != *v36 )
  {
    v27 = 1;
    v68 = nullptr;
    if ( v37 != 0xFFFF )
    {
      while ( 1 )
      {
        if ( !v68 && v37 == 0xFFFE )
          v68 = v36;
        v35 = (v31 - 1) & (v27 + v35);
        v36 = (unsigned __int16 *)(v34 + 16LL * v35);
        v37 = *v36;
        if ( v33 == *v36 )
          goto LABEL_29;
        if ( v37 == 0xFFFF )
          break;
        v27 = (unsigned int)(v27 + 1);
      }
      if ( v68 )
        v36 = v68;
    }
    v29 = 3 * v31;
    v28 = (unsigned int)(*(_DWORD *)(a1 + 80) + 1);
    v30 = (unsigned int)(4 * v28);
    if ( (unsigned int)v30 < (unsigned int)v29 )
    {
      v69 = v31 - *(_DWORD *)(a1 + 84) - (unsigned int)v28;
      v70 = v31 >> 3;
      if ( (unsigned int)v69 > (unsigned int)v70 )
      {
        v59 = *v36;
        goto LABEL_67;
      }
      sub_17494F0(v32, v31, v27, v28, v69, v70);
      v71 = *(_DWORD *)(a1 + 88);
      if ( v71 )
      {
        v72 = v71 - 1;
        v73 = *(_QWORD *)(a1 + 72);
        LODWORD(v74) = (v71 - 1) & (37 * v33);
        LODWORD(v28) = *(_DWORD *)(a1 + 80) + 1;
        v36 = (unsigned __int16 *)(v73 + 16LL * (unsigned int)v74);
        v59 = *v36;
        if ( v33 == *v36 )
        {
LABEL_67:
          *(_DWORD *)(a1 + 80) = v28;
          if ( v59 != 0xFFFF )
            --*(_DWORD *)(a1 + 84);
          goto LABEL_69;
        }
        v75 = 1;
        v76 = nullptr;
        if ( v59 != 0xFFFF )
        {
          while ( 1 )
          {
            if ( v59 == 0xFFFE && !v76 )
              v76 = v36;
            v74 = v72 & (unsigned int)(v74 + v75);
            v36 = (unsigned __int16 *)(v73 + 16 * v74);
            v59 = *v36;
            if ( v33 == *v36 )
              goto LABEL_67;
            if ( v59 == 0xFFFF )
              goto LABEL_120;
            ++v75;
          }
        }
LABEL_87:
        *(_DWORD *)(a1 + 80) = v28;
LABEL_69:
        *v36 = v33;
        *((_QWORD *)v36 + 1) = 0;
        goto LABEL_29;
      }
      goto LABEL_141;
    }
LABEL_65:
    sub_17494F0(v32, 2 * v31, v27, v28, v29, v30);
    v55 = *(_DWORD *)(a1 + 88);
    if ( v55 )
    {
      v56 = v55 - 1;
      v57 = *(_QWORD *)(a1 + 72);
      v58 = (v55 - 1) & (37 * v33);
      LODWORD(v28) = *(_DWORD *)(a1 + 80) + 1;
      v36 = (unsigned __int16 *)(v57 + 16LL * v58);
      v59 = *v36;
      if ( v33 == *v36 )
        goto LABEL_67;
      v79 = 1;
      v76 = nullptr;
      if ( v59 != 0xFFFF )
      {
        while ( 1 )
        {
          if ( v59 == 0xFFFE && !v76 )
            v76 = v36;
          v58 = v56 & (v79 + v58);
          v36 = (unsigned __int16 *)(v57 + 16LL * v58);
          v59 = *v36;
          if ( v33 == *v36 )
            goto LABEL_67;
          if ( v59 == 0xFFFF )
          {
LABEL_120:
            if ( !v76 )
              goto LABEL_87;
            v59 = *v76;
            v36 = v76;
            goto LABEL_67;
          }
          ++v79;
        }
      }
      goto LABEL_87;
    }
LABEL_141:
    ++*(_DWORD *)(a1 + 80);
    BUG();
  }
LABEL_29:
  *((_QWORD *)v36 + 1) = a2;
LABEL_17:
  v24 = *(_DWORD *)(v22 + 152);
  if ( v88 != v90 )
    free(v88);
  return v24;
}
