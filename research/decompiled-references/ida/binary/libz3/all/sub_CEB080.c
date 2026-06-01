__int64 __fastcall sub_CEB080(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 *v5; // rdx
  __int64 *v6; // r15
  __int64 v7; // rdx
  char v8; // al
  unsigned __int64 v9; // r9
  __int64 v10; // rsi
  void *v11; // r12
  unsigned int v12; // r10d
  __int64 v13; // rax
  _DWORD *v14; // rdx
  unsigned int v15; // r14d
  __int64 v16; // rax
  int v17; // edx
  __int64 *v18; // rax
  unsigned int v19; // eax
  __int64 *v20; // r12
  char v21; // al
  __int64 v22; // rdi
  char v23; // r15
  __int64 v24; // r13
  __int64 v25; // rax
  int v26; // edx
  __int64 *v27; // r14
  __int64 v28; // rax
  __int64 *v29; // r8
  __m128 *v30; // r12
  __int64 v31; // rax
  __int64 v32; // rsi
  char i; // dl
  __m128 si128; // xmm0
  unsigned int v35; // esi
  int v36; // edx
  __int64 *v37; // rax
  __int64 v38; // rax
  void (***v39)(void); // rdi
  bool v40; // zf
  __int64 v41; // rsi
  __int64 *v42; // r12
  __int64 v43; // rax
  int v44; // eax
  unsigned int v45; // edx
  unsigned int v46; // eax
  __int64 v47; // r13
  __int64 v48; // r14
  __int64 v49; // rax
  _DWORD *v50; // rdi
  __int64 v51; // r13
  __int64 v52; // rax
  _QWORD *v53; // rdi
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  void (**v56)(void); // rdx
  unsigned int v57; // r13d
  _QWORD *v58; // rcx
  __int64 *v59; // rax
  __int64 v60; // r15
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r12
  _QWORD *v64; // rcx
  __int64 *v65; // r14
  __int64 *v66; // r15
  __int64 v67; // rax
  __int64 v68; // r8
  unsigned int v69; // r13d
  __int64 v70; // r13
  __int64 v71; // rax
  _QWORD *v72; // rdi
  __int64 v73; // rax
  _DWORD *v74; // r13
  _QWORD *v75; // rsi
  __int64 v76; // rdi
  __int64 *v77; // rbp
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rbx
  void (__fastcall ***v81)(void *); // r12
  __int64 v83; // rax
  __int64 j; // rax
  __int64 v85; // rdx
  int v86; // ecx
  __int64 *v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rdi
  char k; // al
  int v91; // eax
  int v92; // eax
  __int64 *v93; // rsi
  __int64 v94; // rax
  __m128 v95; // xmm0
  __int64 v96; // rdx
  __int64 v97; // rax
  char **exception; // rbp
  __int64 v99; // rdx
  unsigned int v100; // [rsp+0h] [rbp-A8h]
  _QWORD *v101; // [rsp+0h] [rbp-A8h]
  __int64 v102; // [rsp+0h] [rbp-A8h]
  _QWORD *v103; // [rsp+0h] [rbp-A8h]
  _QWORD *v104; // [rsp+0h] [rbp-A8h]
  void *v105; // [rsp+8h] [rbp-A0h]
  __int64 *v106; // [rsp+8h] [rbp-A0h]
  __int64 *v107; // [rsp+8h] [rbp-A0h]
  __int64 *v108; // [rsp+8h] [rbp-A0h]
  unsigned int v109; // [rsp+10h] [rbp-98h]
  _QWORD *v110; // [rsp+10h] [rbp-98h]
  __int64 v111; // [rsp+18h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v113; // [rsp+30h] [rbp-78h]
  char *v114; // [rsp+38h] [rbp-70h]
  char v115[8]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v116[11]; // [rsp+50h] [rbp-58h] BYREF

  v5 = *a2;
  v114 = v115;
  sub_EE4940(v115, "split-clause", v5);
  v6 = *a2;
  v7 = (*a2)[9];
  if ( !v7 )
    goto LABEL_172;
  v8 = *(_BYTE *)(v7 + 3) >> 6;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
LABEL_4:
      if ( v8 == 2 )
        v9 = (unsigned int)(*(_DWORD *)(v7 + 4) - 1);
      else
        v9 = *(unsigned int *)(v7 + 4);
      goto LABEL_6;
    }
  }
  else
  {
    do
    {
      v7 = *(_QWORD *)(v7 + 16);
      v8 = *(_BYTE *)(v7 + 3) >> 6;
    }
    while ( !v8 );
    if ( v8 != 1 )
      goto LABEL_4;
  }
  v9 = (unsigned int)(*(_DWORD *)(v7 + 4) + 1);
LABEL_6:
  if ( !(_DWORD)v9 )
    goto LABEL_172;
  v10 = *v6;
  v100 = -1;
  v11 = nullptr;
  v12 = 0;
  v111 = *v6;
  while ( 2 )
  {
    v15 = (unsigned int)v11;
    if ( (*((_BYTE *)v6 + 123) & 0x20) != 0 )
    {
      v13 = *(_QWORD *)(v10 + 864);
      goto LABEL_9;
    }
    v16 = v6[9];
    v17 = 17;
    while ( 1 )
    {
      if ( *(char *)(v16 + 3) < 0 )
      {
        if ( *(_BYTE *)(v16 + 3) >> 6 != 2 )
        {
          v18 = (__int64 *)(*(_QWORD *)(v16 + 16) + 8LL * (_QWORD)v11);
          goto LABEL_19;
        }
        goto LABEL_21;
      }
      if ( (_DWORD)v11 == *(_DWORD *)(v16 + 4) )
        break;
LABEL_21:
      v16 = *(_QWORD *)(v16 + 16);
      if ( !--v17 )
      {
        v109 = v12;
        v105 = (void *)v9;
        sub_233F80((__int64 *)(v10 + 616), (_DWORD *)v6 + 18);
        v9 = (unsigned __int64)v105;
        v12 = v109;
        v18 = (__int64 *)(*(_QWORD *)(v6[9] + 16) + 8LL * (_QWORD)v11);
        goto LABEL_19;
      }
    }
    v18 = (__int64 *)(v16 + 8);
LABEL_19:
    v13 = *v18;
LABEL_9:
    if ( *(_WORD *)(v13 + 4) )
      goto LABEL_12;
    v14 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL);
    if ( !v14 )
      goto LABEL_12;
    if ( *v14 )
      goto LABEL_12;
    if ( v14[1] != 6 )
      goto LABEL_12;
    v19 = *(_DWORD *)(v13 + 24);
    if ( v19 <= 1 )
      goto LABEL_12;
    if ( !*(_BYTE *)(a1 + 12) )
    {
      v100 = (unsigned int)v11;
      goto LABEL_29;
    }
    if ( v12 >= v19 )
    {
LABEL_12:
      v11 = (char *)v11 + 1;
      if ( v11 != (void *)v9 )
        goto LABEL_13;
      break;
    }
    v11 = (char *)v11 + 1;
    v100 = v15;
    v12 = v19;
    if ( v11 != (void *)v9 )
    {
LABEL_13:
      v6 = *a2;
      v10 = **a2;
      continue;
    }
    break;
  }
  if ( v100 == -1 )
  {
LABEL_172:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_164FB2(v116, "split-clause tactic failed, goal does not contain any clause", v99);
    *exception = (char *)off_1C63670;
    sub_2333C0(exception + 1, v116);
    sub_233E40((__int64)v116);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
LABEL_29:
  v20 = *a2;
  v21 = *((_BYTE *)*a2 + 123);
  v22 = **a2;
  v23 = v21 & 8;
  if ( (v21 & 0x20) != 0 )
  {
    v24 = *(_QWORD *)(v22 + 864);
  }
  else
  {
    v85 = v20[9];
    v86 = 18;
    while ( --v86 )
    {
      if ( *(char *)(v85 + 3) >= 0 )
      {
        if ( *(_DWORD *)(v85 + 4) == v100 )
        {
          v87 = (__int64 *)(v85 + 8);
          goto LABEL_129;
        }
      }
      else if ( *(_BYTE *)(v85 + 3) >> 6 != 2 )
      {
        v87 = (__int64 *)(*(_QWORD *)(v85 + 16) + 8LL * v100);
        goto LABEL_129;
      }
      v85 = *(_QWORD *)(v85 + 16);
    }
    sub_233F80((__int64 *)(v22 + 616), (_DWORD *)v20 + 18);
    v96 = v20[9];
    v20 = *a2;
    v87 = (__int64 *)(*(_QWORD *)(v96 + 16) + 8LL * v100);
    v21 = *((_BYTE *)*a2 + 123);
LABEL_129:
    v24 = *v87;
  }
  if ( (v21 & 0x10) != 0 )
  {
    v25 = v20[13];
    v26 = 18;
    while ( --v26 )
    {
      if ( *(char *)(v25 + 3) >= 0 )
      {
        if ( *(_DWORD *)(v25 + 4) == v100 )
          goto LABEL_36;
      }
      else if ( *(_BYTE *)(v25 + 3) >> 6 != 2 )
      {
        goto LABEL_36;
      }
      v25 = *(_QWORD *)(v25 + 16);
    }
    sub_236900((_QWORD *)(*v20 + 672), v20 + 13);
  }
LABEL_36:
  if ( !v23 )
    goto LABEL_55;
  v27 = *a2;
  v28 = sub_186B270(0x30u);
  v29 = *a2;
  v30 = (__m128 *)v28;
  v31 = (*a2)[11];
  if ( !v31 )
  {
    v95 = _mm_loadh_ps((const double *)&v111);
    v30->m128_u64[0] = (unsigned __int64)&off_1C59AA8;
    v30[1] = v95;
    if ( v24 )
    {
      ++*(_DWORD *)(v24 + 8);
      v30[2] = _mm_loadh_ps((const double *)&v111);
      goto LABEL_51;
    }
LABEL_158:
    v30[2].m128_u64[0] = 0;
    v30[2].m128_u64[1] = v111;
    goto LABEL_51;
  }
  v32 = (*a2)[11];
  for ( i = *(_BYTE *)(v31 + 3) >> 6; !i; i = *(_BYTE *)(v32 + 3) >> 6 )
    v32 = *(_QWORD *)(v32 + 16);
  si128 = _mm_loadh_ps((const double *)&v111);
  if ( i == 1 )
  {
    v35 = *(_DWORD *)(v32 + 4) + 1;
  }
  else if ( i == 2 )
  {
    v35 = *(_DWORD *)(v32 + 4) - 1;
  }
  else
  {
    v35 = *(_DWORD *)(v32 + 4);
  }
  v36 = 18;
  if ( v100 >= v35 )
  {
    v30[1] = si128;
    v30->m128_u64[0] = (unsigned __int64)&off_1C59AA8;
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    goto LABEL_158;
  }
  while ( --v36 )
  {
    if ( *(char *)(v31 + 3) >= 0 )
    {
      if ( v100 == *(_DWORD *)(v31 + 4) )
      {
        v37 = (__int64 *)(v31 + 8);
        goto LABEL_47;
      }
    }
    else if ( *(_BYTE *)(v31 + 3) >> 6 != 2 )
    {
      v37 = (__int64 *)(*(_QWORD *)(v31 + 16) + 8LL * v100);
      goto LABEL_47;
    }
    v31 = *(_QWORD *)(v31 + 16);
  }
  v97 = *v29;
  v108 = *a2;
  *(__m128 *)ptr = si128;
  sub_233F80((__int64 *)(v97 + 616), (_DWORD *)v29 + 22);
  si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
  v37 = (__int64 *)(*(_QWORD *)(v108[11] + 16) + 8LL * v100);
LABEL_47:
  v38 = *v37;
  v30[1] = si128;
  v30->m128_u64[0] = (unsigned __int64)&off_1C59AA8;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  v30[2] = _mm_loadh_ps((const double *)&v111);
  if ( v38 )
    ++*(_DWORD *)(v38 + 8);
LABEL_51:
  v30->m128_i32[2] = 1;
  v39 = (void (***)(void))v27[2];
  if ( v39 )
  {
    v40 = (*((_DWORD *)v39 + 2))-- == 1;
    if ( v40 )
    {
      (**v39)();
      sub_186B220(v39);
    }
  }
  v27[2] = (__int64)v30;
LABEL_55:
  v41 = *(unsigned int *)(v24 + 24);
  sub_EE4A20(":num-new-branches");
  v42 = (__int64 *)(v24 + 32);
  v43 = 8LL * *(unsigned int *)(v24 + 24);
  v106 = (__int64 *)(v24 + 32 + v43);
  if ( v43 )
  {
    do
    {
      v47 = *v42;
      v48 = sub_186B270(0x80u);
      sub_ED5720(v48, *a2);
      v49 = (*a2)[1];
      if ( v49 )
        ++*(_DWORD *)(v49 + 8);
      v50 = *(_DWORD **)(v48 + 8);
      if ( v50 )
      {
        v40 = v50[2]-- == 1;
        if ( v40 )
        {
          v56 = *(void (***)(void))v50;
          ptr[0] = v50;
          v113 = v49;
          (*v56)();
          sub_186B220(ptr[0]);
          v49 = v113;
        }
      }
      *(_QWORD *)(v48 + 8) = v49;
      if ( v23 )
        sub_15DFBC0(v111, v47);
      v41 = v100;
      sub_EDBFA0(v48);
      v44 = *(_DWORD *)(v48 + 120);
      ++*(_DWORD *)(v48 + 32);
      v45 = *(_DWORD *)(a3 + 8);
      *(_DWORD *)(v48 + 120) = (v44 + 1) & 0x3FFFFFF | v44 & 0xFC000000;
      v46 = *(_DWORD *)(a3 + 12);
      if ( v45 >= v46 )
      {
        v51 = 2 * v46;
        v52 = sub_186B270(8 * v51);
        v45 = *(_DWORD *)(a3 + 8);
        v53 = *(_QWORD **)a3;
        v58 = (_QWORD *)v52;
        if ( v45 )
        {
          if ( v45 - 1 <= 2 || (_QWORD *)v52 == v53 + 1 )
          {
            for ( j = 0; j != v45; ++j )
            {
              v41 = v53[j];
              v58[j] = v41;
            }
          }
          else
          {
            v54 = 0;
            v41 = 16LL * (v45 >> 1);
            do
            {
              *(__m128i *)&v58[v54 / 8] = _mm_loadu_si128((const __m128i *)&v53[v54 / 8]);
              v54 += 16LL;
            }
            while ( v54 != v41 );
            if ( (v45 & 1) != 0 )
            {
              v55 = v45 & 0xFFFFFFFE;
              v41 = v53[v55];
              v58[v55] = v41;
            }
          }
        }
        if ( v53 != (_QWORD *)(a3 + 16) && v53 )
        {
          ptr[0] = v58;
          sub_186B220(v53);
          v45 = *(_DWORD *)(a3 + 8);
          v58 = ptr[0];
        }
        *(_QWORD *)a3 = v58;
        *(_DWORD *)(a3 + 12) = v51;
      }
      else
      {
        v58 = *(_QWORD **)a3;
      }
      v57 = v45 + 1;
      ++v42;
      v58[v45] = v48;
      *(_DWORD *)(a3 + 8) = v45 + 1;
    }
    while ( v106 != v42 );
  }
  else
  {
    v57 = *(_DWORD *)(a3 + 8);
    v58 = *(_QWORD **)a3;
  }
  v59 = *a2;
  v107 = *a2;
  if ( (*((_BYTE *)*a2 + 123) & 0x20) != 0 )
  {
    v41 = v59[11];
    v88 = *v59;
    if ( v41 )
    {
      v89 = v59[11];
      for ( k = *(_BYTE *)(v41 + 3) >> 6; !k; k = *(_BYTE *)(v89 + 3) >> 6 )
        v89 = *(_QWORD *)(v89 + 16);
      if ( k == 1 )
      {
        v91 = *(_DWORD *)(v89 + 4) + 1;
      }
      else if ( k == 2 )
      {
        v91 = *(_DWORD *)(v89 + 4) - 1;
      }
      else
      {
        v91 = *(_DWORD *)(v89 + 4);
      }
      if ( v91 )
      {
        v92 = 18;
        while ( --v92 )
        {
          if ( *(char *)(v41 + 3) >= 0 )
          {
            if ( !*(_DWORD *)(v41 + 4) )
            {
              v93 = (__int64 *)(v41 + 8);
              goto LABEL_143;
            }
          }
          else if ( *(_BYTE *)(v41 + 3) >> 6 != 2 )
          {
            v93 = *(__int64 **)(v41 + 16);
            goto LABEL_143;
          }
          v41 = *(_QWORD *)(v41 + 16);
        }
        v104 = v58;
        sub_233F80((__int64 *)(v88 + 616), (_DWORD *)v107 + 22);
        v88 = *v107;
        v58 = v104;
        v93 = *(__int64 **)(v107[11] + 16);
LABEL_143:
        v41 = *v93;
      }
      else
      {
        v41 = 0;
      }
    }
    v103 = v58;
    v94 = sub_132F960(v88, v41);
    v58 = v103;
    v60 = v94;
  }
  else
  {
    v60 = v59[2];
  }
  v101 = v58;
  v61 = sub_186B270(0xA8u);
  *(_DWORD *)(v61 + 8) = 0;
  v63 = v61;
  v64 = v101;
  *(_QWORD *)(v61 + 16) = v60;
  *(_QWORD *)v61 = &off_1C59A68;
  if ( v60 )
    ++*(_DWORD *)(v60 + 8);
  v110 = (_QWORD *)(v61 + 40);
  *(_QWORD *)(v61 + 24) = v61 + 40;
  *(_QWORD *)(v61 + 32) = 0x1000000000LL;
  if ( v57 )
  {
    v65 = v101;
    v66 = &v101[v57];
    LODWORD(v62) = 0;
    do
    {
      v68 = *v65;
      if ( *v65 )
      {
        ++*(_DWORD *)(v68 + 32);
        LODWORD(v62) = *(_DWORD *)(v63 + 32);
      }
      v69 = *(_DWORD *)(v63 + 36);
      if ( (unsigned int)v62 < v69 )
      {
        v41 = *(_QWORD *)(v63 + 24);
      }
      else
      {
        v102 = v68;
        v70 = 2 * v69;
        v71 = sub_186B270(8 * v70);
        LODWORD(v62) = *(_DWORD *)(v63 + 32);
        v72 = *(_QWORD **)(v63 + 24);
        v41 = v71;
        v68 = v102;
        if ( (_DWORD)v62 )
        {
          if ( (unsigned int)(v62 - 1) <= 2 || (_QWORD *)v71 == v72 + 1 )
          {
            v83 = 0;
            do
            {
              v64 = (_QWORD *)v72[v83];
              *(_QWORD *)(v41 + v83 * 8) = v64;
              ++v83;
            }
            while ( (unsigned int)v62 != v83 );
          }
          else
          {
            v73 = 0;
            do
            {
              *(__m128i *)(v41 + v73 * 8) = _mm_loadu_si128((const __m128i *)&v72[v73]);
              v73 += 2;
            }
            while ( 2LL * ((unsigned int)v62 >> 1) != v73 );
            if ( (v62 & 1) != 0 )
              *(_QWORD *)(v41 + 8LL * ((unsigned int)v62 & 0xFFFFFFFE)) = v72[(unsigned int)v62 & 0xFFFFFFFE];
          }
        }
        if ( v110 != v72 && v72 )
        {
          v111 = v41;
          sub_186B220(v72);
          LODWORD(v62) = *(_DWORD *)(v63 + 32);
          v41 = v111;
          v68 = v102;
        }
        *(_QWORD *)(v63 + 24) = v41;
        *(_DWORD *)(v63 + 36) = v70;
      }
      v67 = (unsigned int)v62;
      ++v65;
      v62 = (unsigned int)(v62 + 1);
      *(_QWORD *)(v41 + 8 * v67) = v68;
      *(_DWORD *)(v63 + 32) = v62;
    }
    while ( v65 != v66 );
  }
  ++*(_DWORD *)(v63 + 8);
  v74 = (_DWORD *)v107[2];
  if ( v74 )
  {
    v40 = v74[2]-- == 1;
    if ( v40 )
    {
      (**(void (__fastcall ***)(void *, __int64, __int64, _QWORD *))v74)(v74, v41, v62, v64);
      sub_186B220(v74);
    }
  }
  v75 = *(_QWORD **)a3;
  v76 = *(unsigned int *)(a3 + 8);
  v77 = *a2;
  v107[2] = v63;
  v78 = sub_EE1E30(v76, v75, v62, v64);
  v79 = sub_EE1D80(v77[3], v78);
  v80 = v79;
  if ( v79 )
    ++*(_DWORD *)(v79 + 8);
  v81 = (void (__fastcall ***)(void *))v77[3];
  if ( v81 )
  {
    v40 = (*((_DWORD *)v81 + 2))-- == 1;
    if ( v40 )
    {
      (**v81)(v81);
      sub_186B220(v81);
    }
  }
  v77[3] = v80;
  return sub_EE4A00(v114);
}

