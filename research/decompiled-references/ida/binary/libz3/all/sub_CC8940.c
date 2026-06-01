__int64 __fastcall sub_CC8940(__m128i *a1, _QWORD *a2, __int64 a3)
{
  __int64 *v6; // rcx
  _DWORD **v7; // r12
  _DWORD **v8; // r13
  _DWORD *v9; // r15
  bool v10; // zf
  __int64 v11; // r12
  _DWORD *v12; // r14
  int v13; // eax
  __int64 *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // r15d
  char v18; // r12
  __int64 v19; // r14
  _DWORD *v20; // rax
  __int64 v21; // rcx
  char v22; // dl
  unsigned int v23; // edx
  int v24; // edx
  __int64 *v25; // rax
  __m128i *v26; // rsi
  __int64 v27; // r14
  __m128i v28; // xmm0
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r12
  void (__fastcall ***v32)(void *); // r15
  __int64 v33; // r8
  __int64 *v34; // r15
  __int64 *v35; // r14
  __int64 v36; // rsi
  char v37; // al
  __int64 *v38; // rax
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // rsi
  unsigned int v43; // ebp
  __int64 v44; // rsi
  __int64 v45; // rcx
  char v46; // dl
  unsigned int v47; // edx
  int v48; // edx
  __int64 *v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rsi
  __int64 v52; // r8
  __int64 *v53; // rax
  __int64 v54; // rdx
  int v55; // edi
  _DWORD *v56; // rcx
  int v57; // ecx
  __int64 v58; // rdx
  _DWORD *v59; // rdx
  _QWORD *v60; // rax
  _QWORD *v61; // rdx
  _QWORD *v62; // r13
  unsigned int v63; // eax
  int v64; // eax
  _QWORD *v65; // rax
  _QWORD *v66; // r12
  _QWORD *v67; // r13
  __int64 v68; // r12
  unsigned int v69; // edx
  unsigned int v70; // ebx
  __int64 v71; // rbp
  unsigned int v73; // edx
  unsigned int v74; // ebx
  __int64 v75; // rbp
  unsigned __int64 *v76; // rsi
  __int64 v77; // rdi
  unsigned int v78; // edx
  unsigned int v79; // ebx
  __int64 v80; // rbp
  __int64 v81; // rbx
  _QWORD *v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rbx
  _QWORD *v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rbx
  _QWORD *v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int16 v92; // di
  _DWORD *v93; // r10
  unsigned __int64 v94; // r9
  _DWORD *v95; // rdx
  _DWORD *v96; // rdx
  __int64 i; // rax
  __int64 k; // rax
  __int64 j; // rax
  __int64 v100; // rcx
  _DWORD *v101; // rdi
  _QWORD *v102; // rax
  unsigned int v103; // r12d
  size_t v104; // rsi
  unsigned int *v105; // rax
  char **exception; // rbp
  __int64 v107; // rdx
  _Unwind_Exception *v108; // [rsp+0h] [rbp-B8h]
  __int64 v109; // [rsp+8h] [rbp-B0h]
  char *v110; // [rsp+10h] [rbp-A8h]
  __int64 v111; // [rsp+18h] [rbp-A0h]
  __int64 *v112; // [rsp+18h] [rbp-A0h]
  __int64 v113; // [rsp+20h] [rbp-98h]
  char v114[8]; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int64 *v115; // [rsp+30h] [rbp-88h] BYREF
  __int64 v116; // [rsp+38h] [rbp-80h]
  __int64 v117[15]; // [rsp+40h] [rbp-78h] BYREF

  v109 = a3;
  sub_EE4F60("recover-01");
  sub_EE5110("recover-01");
  v6 = (__int64 *)*a2;
  v7 = *(_DWORD ***)a3;
  a1[4].m128i_i8[0] = (*(_BYTE *)(*a2 + 123LL) & 4) != 0;
  v8 = &v7[*(unsigned int *)(a3 + 8)];
  if ( v7 < v8 )
  {
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = v9[8]-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_7;
      }
      ++v7;
      sub_ED44E0(v9);
      sub_186B220(v9);
    }
    while ( v7 < v8 );
LABEL_7:
    v6 = (__int64 *)*a2;
  }
  *(_DWORD *)(v109 + 8) = 0;
  v110 = v114;
  sub_EE4940(v114, "recover-01", v6);
  v11 = sub_186B270(0x80u);
  sub_ED2CB0(v11, *a2, 1);
  v12 = (_DWORD *)a1[5].m128i_i64[1];
  ++*(_DWORD *)(v11 + 32);
  if ( v12 )
  {
    v10 = v12[8]-- == 1;
    if ( v10 )
    {
      sub_ED44E0(v12);
      sub_186B220(v12);
    }
  }
  v13 = *(_DWORD *)(v11 + 120);
  a1[5].m128i_i64[1] = v11;
  v14 = (__int64 *)*a2;
  *(_DWORD *)(v11 + 120) = (v13 + 1) & 0x3FFFFFF | v13 & 0xFC000000;
  v15 = v14[9];
  if ( !v15 )
  {
LABEL_120:
    ++*((_DWORD *)v14 + 8);
    v78 = *(_DWORD *)(v109 + 8);
    v79 = *(_DWORD *)(v109 + 12);
    if ( v78 >= v79 )
    {
      v81 = 2 * v79;
      v80 = sub_186B270(8 * v81);
      v78 = *(_DWORD *)(v109 + 8);
      v82 = *(_QWORD **)v109;
      if ( v78 )
      {
        if ( v78 - 1 <= 2 || (_QWORD *)v80 == v82 + 1 )
        {
          for ( i = 0; i != v78; ++i )
            *(_QWORD *)(v80 + i * 8) = v82[i];
        }
        else
        {
          v83 = 0;
          do
          {
            *(__m128i *)(v80 + v83 * 8) = _mm_loadu_si128((const __m128i *)&v82[v83]);
            v83 += 2;
          }
          while ( 2LL * (v78 >> 1) != v83 );
          if ( (v78 & 1) != 0 )
            *(_QWORD *)(v80 + 8LL * (v78 & 0xFFFFFFFE)) = v82[v78 & 0xFFFFFFFE];
        }
      }
      if ( v82 != (_QWORD *)(v109 + 16) && v82 )
      {
        sub_186B220(v82);
        v78 = *(_DWORD *)(v109 + 8);
      }
      *(_QWORD *)v109 = v80;
      *(_DWORD *)(v109 + 12) = v81;
    }
    else
    {
      v80 = *(_QWORD *)v109;
    }
    *(_QWORD *)(v80 + 8LL * v78) = v14;
    *(_DWORD *)(v109 + 8) = v78 + 1;
    return sub_EE4A00(v110);
  }
  v16 = *v14;
  v17 = 0;
  v18 = 0;
  while ( 2 )
  {
    v21 = v15;
    v22 = *(_BYTE *)(v15 + 3) >> 6;
    if ( v22 )
    {
      if ( v22 != 1 )
        goto LABEL_21;
    }
    else
    {
      do
      {
        v21 = *(_QWORD *)(v21 + 16);
        v22 = *(_BYTE *)(v21 + 3) >> 6;
      }
      while ( !v22 );
      if ( v22 != 1 )
      {
LABEL_21:
        if ( v22 == 2 )
          v23 = *(_DWORD *)(v21 + 4) - 1;
        else
          v23 = *(_DWORD *)(v21 + 4);
        if ( v17 >= v23 )
          break;
        goto LABEL_24;
      }
    }
    if ( v17 >= *(_DWORD *)(v21 + 4) + 1 )
      break;
LABEL_24:
    if ( (*((_BYTE *)v14 + 123) & 0x20) != 0 )
    {
      v19 = *(_QWORD *)(v16 + 864);
      goto LABEL_14;
    }
    v24 = 17;
    while ( 1 )
    {
      if ( *(char *)(v15 + 3) < 0 )
      {
        if ( *(_BYTE *)(v15 + 3) >> 6 != 2 )
        {
          v25 = (__int64 *)(*(_QWORD *)(v15 + 16) + 8LL * v17);
          goto LABEL_29;
        }
        goto LABEL_72;
      }
      if ( *(_DWORD *)(v15 + 4) == v17 )
        break;
LABEL_72:
      v15 = *(_QWORD *)(v15 + 16);
      if ( !--v24 )
      {
        sub_233F80((__int64 *)(v16 + 616), (_DWORD *)v14 + 18);
        v25 = (__int64 *)(*(_QWORD *)(v14[9] + 16) + 8LL * v17);
        goto LABEL_29;
      }
    }
    v25 = (__int64 *)(v15 + 8);
LABEL_29:
    v19 = *v25;
LABEL_14:
    if ( *(_WORD *)(v19 + 4) )
      goto LABEL_17;
    v20 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
    if ( !v20 )
      goto LABEL_17;
    if ( *v20 )
      goto LABEL_17;
    if ( v20[1] != 6 )
      goto LABEL_17;
    v50 = *(unsigned int *)(v19 + 24);
    if ( (unsigned int)v50 <= 1 || (unsigned int)v50 >= a1[4].m128i_i32[1] )
      goto LABEL_17;
    v51 = 0;
    v52 = v19 + 32 + 8 * v50;
    v53 = (__int64 *)(v19 + 32);
    while ( 2 )
    {
      v54 = *v53;
      if ( *(_WORD *)(*v53 + 4) )
        goto LABEL_17;
      v55 = *(_DWORD *)(v54 + 24);
      v56 = *(_DWORD **)(*(_QWORD *)(v54 + 16) + 24LL);
      if ( v55 )
      {
        if ( !v56 || *v56 )
          goto LABEL_17;
        v57 = v56[1];
        if ( v57 == 8 )
        {
          if ( v55 != 1 )
            goto LABEL_17;
          v58 = *(_QWORD *)(v54 + 32);
          if ( *(_WORD *)(v58 + 4) )
            goto LABEL_17;
          if ( *(_DWORD *)(v58 + 24) )
            goto LABEL_17;
          v59 = *(_DWORD **)(*(_QWORD *)(v58 + 16) + 24LL);
          if ( v59 )
          {
            if ( *v59 != -1 )
              goto LABEL_17;
          }
          goto LABEL_89;
        }
      }
      else
      {
        if ( !v56 || *v56 == -1 )
          goto LABEL_89;
        if ( *v56 )
          goto LABEL_17;
        v57 = v56[1];
        if ( v57 == 8 )
          goto LABEL_17;
      }
      if ( v51 || v57 != 2 || v55 != 2 )
        goto LABEL_17;
      v90 = *(_QWORD *)(v54 + 32);
      v91 = *(_QWORD *)(v54 + 40);
      v92 = *(_WORD *)(v90 + 4);
      if ( v92
        || *(_DWORD *)(v90 + 24)
        || (v51 = *(_QWORD *)(v90 + 16), v93 = *(_DWORD **)(v51 + 24), v94 = v51, v93) && *v93 != -1 )
      {
        if ( *(_WORD *)(v91 + 4) )
          goto LABEL_17;
        if ( *(_DWORD *)(v91 + 24) )
          goto LABEL_17;
        v51 = *(_QWORD *)(v91 + 16);
        v95 = *(_DWORD **)(v51 + 24);
        if ( v95 )
        {
          if ( *v95 != -1 )
            goto LABEL_17;
        }
        if ( v92 )
          goto LABEL_17;
        v94 = *(_QWORD *)(v90 + 16);
      }
      else
      {
        if ( *(_WORD *)(v91 + 4) )
          goto LABEL_17;
        v100 = *(_QWORD *)(v91 + 16);
        v101 = *(_DWORD **)(v100 + 24);
        if ( v101 )
        {
          if ( *v101 == 5 && !v101[1] )
            goto LABEL_89;
          if ( *(_DWORD *)(v91 + 24) )
            goto LABEL_17;
          v51 = *(_QWORD *)(v91 + 16);
          if ( **(_DWORD **)(v100 + 24) != -1 )
            goto LABEL_17;
        }
        else
        {
          if ( *(_DWORD *)(v91 + 24) )
            goto LABEL_17;
          v51 = *(_QWORD *)(v91 + 16);
        }
      }
      v96 = *(_DWORD **)(v94 + 24);
      if ( !v96 || *v96 != 5 || v96[1] )
        goto LABEL_17;
LABEL_89:
      if ( (__int64 *)v52 != ++v53 )
        continue;
      break;
    }
    if ( !v51 )
      goto LABEL_17;
    v115 = nullptr;
    v60 = sub_CC5B20(&a1->m128i_u32[2], v51, &v115);
    v61 = (_QWORD *)*v60;
    v62 = v60;
    if ( !*v60 )
    {
      v102 = (_QWORD *)sub_186B270(0x18u);
      *v102 = 2;
      v61 = v102 + 1;
      *v62 = v102 + 1;
LABEL_95:
      v18 = 1;
      v64 = *((_DWORD *)v61 - 1);
      v61[v64] = v19;
      *((_DWORD *)v61 - 1) = v64 + 1;
      goto LABEL_17;
    }
    v63 = *((_DWORD *)v61 - 1);
    if ( !v63 || *(_DWORD *)(v61[v63 - 1] + 24LL) == *(_DWORD *)(v19 + 24) )
    {
      if ( v63 == *((_DWORD *)v61 - 2) )
      {
        v103 = (3 * v63 + 1) >> 1;
        v104 = 8 * v103 + 8;
        if ( 8 * v63 + 8 >= (unsigned int)v104 || v63 >= v103 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_1639A6(v117, "Overflow encountered when expanding vector", v107);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v117);
          sub_233E40((__int64)v117);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v105 = (unsigned int *)sub_186B300(v61 - 1, v104);
        v61 = v105 + 2;
        *v62 = v105 + 2;
        *v105 = v103;
      }
      goto LABEL_95;
    }
LABEL_17:
    sub_EDBA20(a1[5].m128i_i64[1], v19, 0, v108, v109, (int)v110, v111, v113);
    v14 = (__int64 *)*a2;
    ++v17;
    v15 = *(_QWORD *)(*a2 + 72LL);
    if ( v15 )
    {
      v16 = *v14;
      continue;
    }
    break;
  }
  if ( !v18 )
    goto LABEL_120;
  if ( a1[4].m128i_i8[0] )
  {
    v26 = (__m128i *)sub_186B270(0x50u);
    v26[1].m128i_i8[8] = 1;
    v27 = a1[5].m128i_i64[1];
    v26->m128i_i32[2] = 0;
    v28 = _mm_loadl_epi64(a1);
    v26[1].m128i_i64[0] = 0;
    strcpy(&v26[3].m128i_i8[8], "recover_01");
    a1[4].m128i_i64[1] = (__int64)v26;
    v26->m128i_i64[0] = (__int64)&off_1C60CE8;
    v26[2] = _mm_unpacklo_epi64(v28, (__m128i)(unsigned __int64)&v26[3].m128i_u64[1]);
    v29 = *(_QWORD *)(v27 + 8);
    v26[3].m128i_i64[0] = 10;
    v26[4].m128i_i64[1] = 0;
    v30 = sub_1336AB0(v29, v26);
    v31 = v30;
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    v32 = *(void (__fastcall ****)(void *))(v27 + 8);
    if ( v32 )
    {
      v10 = (*((_DWORD *)v32 + 2))-- == 1;
      if ( v10 )
      {
        (**v32)(v32);
        sub_186B220(v32);
      }
    }
    *(_QWORD *)(v27 + 8) = v31;
  }
  sub_CC60C0(a1->m128i_i64[0], (__int64)a1[6].m128i_i64);
  v112 = v117;
  sub_1694970(v117, a1->m128i_i64[0]);
  v33 = a1[1].m128i_u32[0];
  v34 = (__int64 *)a1->m128i_i64[1];
  a1[5].m128i_i64[0] = (__int64)v117;
  v33 *= 16;
  v35 = (__int64 *)((char *)v34 + v33);
  if ( v34 == (__int64 *)((char *)v34 + v33) )
    goto LABEL_101;
  while ( (unsigned __int64)*v34 <= 1 )
  {
    v34 += 2;
    if ( v35 == v34 )
      goto LABEL_101;
  }
  if ( v35 == v34 )
    goto LABEL_101;
  BYTE3(v108) = 0;
  v36 = *v34;
  HIDWORD(v108) = 0;
  do
  {
    v37 = sub_CC7260(a1->m128i_i8, v36, (__int64 **)v34 + 1);
    if ( v37 )
    {
      ++HIDWORD(v108);
      BYTE3(v108) = v37;
    }
    else
    {
      v65 = (_QWORD *)v34[1];
      if ( v65 )
      {
        v66 = &v65[*((unsigned int *)v65 - 1)];
        if ( v66 != v65 )
        {
          v67 = (_QWORD *)v34[1];
          do
            sub_EDBA20(a1[5].m128i_i64[1], *v67++, 0, v108, v109, (int)v110, (__int64)v112, v113);
          while ( v66 != v67 );
        }
      }
    }
    v38 = v34 + 2;
    if ( v35 == v34 + 2 )
      break;
    while ( 1 )
    {
      v36 = *v38;
      v34 = v38;
      if ( (unsigned __int64)*v38 > 1 )
        break;
      v38 += 2;
      if ( v35 == v38 )
        goto LABEL_54;
    }
  }
  while ( v35 != v38 );
LABEL_54:
  if ( !BYTE3(v108) )
  {
LABEL_101:
    v68 = *a2;
    if ( *a2 )
      ++*(_DWORD *)(v68 + 32);
    v69 = *(_DWORD *)(v109 + 8);
    v70 = *(_DWORD *)(v109 + 12);
    if ( v69 >= v70 )
    {
      v84 = 2 * v70;
      v71 = sub_186B270(8 * v84);
      v69 = *(_DWORD *)(v109 + 8);
      v85 = *(_QWORD **)v109;
      if ( v69 )
      {
        if ( v69 - 1 <= 2 || (_QWORD *)v71 == v85 + 1 )
        {
          for ( j = 0; j != v69; ++j )
            *(_QWORD *)(v71 + j * 8) = v85[j];
        }
        else
        {
          v86 = 0;
          do
          {
            *(__m128i *)(v71 + v86 * 8) = _mm_loadu_si128((const __m128i *)&v85[v86]);
            v86 += 2;
          }
          while ( 2LL * (v69 >> 1) != v86 );
          if ( (v69 & 1) != 0 )
            *(_QWORD *)(v71 + 8LL * (v69 & 0xFFFFFFFE)) = v85[v69 & 0xFFFFFFFE];
        }
      }
      if ( v85 != (_QWORD *)(v109 + 16) )
      {
        if ( v85 )
        {
          sub_186B220(v85);
          v69 = *(_DWORD *)(v109 + 8);
        }
      }
      *(_QWORD *)v109 = v71;
      *(_DWORD *)(v109 + 12) = v84;
    }
    else
    {
      v71 = *(_QWORD *)v109;
    }
    *(_QWORD *)(v71 + 8LL * v69) = v68;
    *(_DWORD *)(v109 + 8) = v69 + 1;
    sub_1695230(v112);
    return sub_EE4A00(v110);
  }
  sub_EE4A20(":recovered-01-vars");
  sub_14B64E0(&a1[3], a1[5].m128i_i64[0]);
  v39 = a1->m128i_i64[0];
  v40 = a1[5].m128i_i64[1];
  v115 = nullptr;
  v116 = v39;
  v41 = *(_QWORD *)(v40 + 72);
  if ( !v41 )
    goto LABEL_114;
  v42 = *(_QWORD *)v40;
  v43 = 0;
  while ( 2 )
  {
    v45 = v41;
    v46 = *(_BYTE *)(v41 + 3) >> 6;
    if ( v46 )
    {
      if ( v46 != 1 )
        goto LABEL_62;
LABEL_109:
      v47 = *(_DWORD *)(v45 + 4) + 1;
    }
    else
    {
      do
      {
        v45 = *(_QWORD *)(v45 + 16);
        v46 = *(_BYTE *)(v45 + 3) >> 6;
      }
      while ( !v46 );
      if ( v46 == 1 )
        goto LABEL_109;
LABEL_62:
      if ( v46 == 2 )
        v47 = *(_DWORD *)(v45 + 4) - 1;
      else
        v47 = *(_DWORD *)(v45 + 4);
    }
    if ( v43 >= v47 )
      break;
    if ( (*(_BYTE *)(v40 + 123) & 0x20) != 0 )
    {
      v44 = *(_QWORD *)(v42 + 864);
      goto LABEL_58;
    }
    v48 = 17;
    while ( 2 )
    {
      if ( *(char *)(v41 + 3) < 0 )
      {
        if ( *(_BYTE *)(v41 + 3) >> 6 != 2 )
        {
          v49 = (__int64 *)(*(_QWORD *)(v41 + 16) + 8LL * v43);
          goto LABEL_70;
        }
LABEL_111:
        v41 = *(_QWORD *)(v41 + 16);
        if ( !--v48 )
        {
          sub_233F80((__int64 *)(v42 + 616), (_DWORD *)(v40 + 72));
          v49 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v40 + 72) + 16LL) + 8LL * v43);
          goto LABEL_70;
        }
        continue;
      }
      break;
    }
    if ( v43 != *(_DWORD *)(v41 + 4) )
      goto LABEL_111;
    v49 = (__int64 *)(v41 + 8);
LABEL_70:
    v44 = *v49;
LABEL_58:
    sub_14B9BF0(&a1[3], v44, &v115);
    sub_EDBFA0(a1[5].m128i_i64[1]);
    v40 = a1[5].m128i_i64[1];
    ++v43;
    v41 = *(_QWORD *)(v40 + 72);
    if ( v41 )
    {
      v42 = *(_QWORD *)v40;
      continue;
    }
    break;
  }
LABEL_114:
  ++*(_DWORD *)(v40 + 32);
  v73 = *(_DWORD *)(v109 + 8);
  v74 = *(_DWORD *)(v109 + 12);
  if ( v73 >= v74 )
  {
    v87 = 2 * v74;
    v75 = sub_186B270(8 * v87);
    v73 = *(_DWORD *)(v109 + 8);
    v88 = *(_QWORD **)v109;
    if ( v73 )
    {
      if ( v73 - 1 <= 2 || (_QWORD *)v75 == v88 + 1 )
      {
        for ( k = 0; k != v73; ++k )
          *(_QWORD *)(v75 + k * 8) = v88[k];
      }
      else
      {
        v89 = 0;
        do
        {
          *(__m128i *)(v75 + v89 * 8) = _mm_loadu_si128((const __m128i *)&v88[v89]);
          v89 += 2;
        }
        while ( v89 != 2LL * (v73 >> 1) );
        if ( (v73 & 1) != 0 )
          *(_QWORD *)(v75 + 8LL * (v73 & 0xFFFFFFFE)) = v88[v73 & 0xFFFFFFFE];
      }
    }
    if ( v88 != (_QWORD *)(v109 + 16) && v88 )
    {
      sub_186B220(v88);
      v73 = *(_DWORD *)(v109 + 8);
    }
    *(_QWORD *)v109 = v75;
    *(_DWORD *)(v109 + 12) = v87;
  }
  else
  {
    v75 = *(_QWORD *)v109;
  }
  v76 = v115;
  *(_QWORD *)(v75 + 8LL * v73) = v40;
  *(_DWORD *)(v109 + 8) = v73 + 1;
  if ( v76 )
  {
    v77 = v116;
    v10 = (*((_DWORD *)v76 + 2))-- == 1;
    if ( v10 )
      sub_15D7BC0(v77, v76);
  }
  sub_1695230(v112);
  return sub_EE4A00(v110);
}

