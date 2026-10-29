void __fastcall sub_C0DD00(__int64 a1, __int64 a2, int a3, int *a4, int *a5)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r9
  __int64 v10; // r8
  __m128i *v11; // rbx
  unsigned int v12; // r11d
  __int64 v13; // r8
  __m128i *v14; // r15
  int v15; // esi
  __int64 v16; // r11
  __m128i *v17; // rdi
  __m128i *v18; // rax
  __m128i *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rdi
  __int64 v22; // rax
  _DWORD *v23; // rax
  _QWORD *v24; // r14
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rsi
  int v29; // eax
  _QWORD *v30; // r13
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rsi
  int v35; // eax
  __int64 v36; // rax
  __m128i *v37; // rax
  int v38; // edx
  __m128i *v39; // r10
  __int64 v40; // rcx
  __int64 v41; // rsi
  void *v42; // r14
  const __m128i *v43; // rbp
  const __m128i *v44; // r14
  __int64 v45; // rdx
  __m128i *v46; // rsi
  __m128i *v47; // rdx
  __m128i v48; // xmm0
  unsigned int v49; // ebx
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rax
  unsigned int v53; // ebx
  size_t v54; // rdi
  __int64 v55; // rax
  int *v56; // rsi
  _DWORD *v57; // r14
  __int64 v58; // rax
  _QWORD *v59; // rdx
  int *v60; // rdi
  int *j; // rax
  int v62; // ecx
  char v63; // r8
  __int64 v64; // rcx
  unsigned int v65; // ebx
  size_t v66; // rdi
  __int64 v67; // rax
  int *v68; // rsi
  _DWORD *v69; // r15
  __int64 v70; // rax
  _QWORD *v71; // rdx
  int *v72; // rdi
  int *i; // rax
  int v74; // ecx
  char v75; // r8
  __int64 v76; // rcx
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  char **exception; // rbp
  __int32 v81; // [rsp+8h] [rbp-A0h]
  size_t v82; // [rsp+10h] [rbp-98h]
  unsigned int v83; // [rsp+10h] [rbp-98h]
  int v84; // [rsp+18h] [rbp-90h]
  size_t v85; // [rsp+18h] [rbp-90h]
  __int64 v86; // [rsp+20h] [rbp-88h]
  int v87; // [rsp+28h] [rbp-80h]
  __int64 v89[11]; // [rsp+50h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a2 + 8) <= 1u )
    return;
  v5 = *(_QWORD *)(a1 + 96);
  v6 = a1;
  v7 = a2;
  if ( v5 )
    v81 = *(_DWORD *)(v5 - 4);
  else
    v81 = 0;
  v10 = *(unsigned int *)(a1 + 80);
  if ( 3 * (int)v10 < (unsigned int)(4 * (*(_DWORD *)(a1 + 84) + *(_DWORD *)(a1 + 88))) )
  {
    v84 = 2 * v10;
    v82 = 16LL * (unsigned int)(2 * v10);
    v37 = (__m128i *)sub_186B270(v82);
    v38 = v84;
    v13 = v82;
    v7 = a2;
    v11 = v37;
    v39 = &v37[v82 / 0x10];
    if ( v84 )
    {
      do
      {
        v37->m128i_i64[0] = 0;
        ++v37;
        v37[-1].m128i_i32[2] = 0;
      }
      while ( v37 != v39 );
    }
    v40 = *(_QWORD *)(a1 + 72);
    v12 = v84 - 1;
    v14 = v39;
    v41 = 16LL * *(unsigned int *)(a1 + 80);
    v42 = (void *)(v40 + v41);
    if ( v40 != v40 + v41 )
    {
      v43 = (const __m128i *)(v40 + v41);
      v44 = *(const __m128i **)(a1 + 72);
      do
      {
        while ( v44->m128i_i64[0] <= 1uLL )
        {
          if ( v43 == ++v44 )
            goto LABEL_46;
        }
        v45 = 16LL * (*(_DWORD *)(v44->m128i_i64[0] + 12) & v12);
        v46 = &v11[(unsigned __int64)v45 / 0x10];
        if ( v82 == v45 )
        {
LABEL_50:
          if ( v11 == v46 )
          {
LABEL_80:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v47 = v11;
          while ( v47->m128i_i64[0] )
          {
            if ( v46 == ++v47 )
              goto LABEL_80;
          }
        }
        else
        {
          v47 = &v11[(unsigned __int64)v45 / 0x10];
          while ( v47->m128i_i64[0] )
          {
            if ( v39 == ++v47 )
              goto LABEL_50;
          }
        }
        v48 = _mm_loadu_si128(v44++);
        *v47 = v48;
      }
      while ( v43 != v44 );
LABEL_46:
      v6 = a1;
      v42 = *(void **)(a1 + 72);
      v38 = v84;
    }
    if ( v42 )
    {
      v87 = v38;
      v86 = v7;
      v85 = v82;
      v83 = v12;
      sub_186B220(v42);
      v38 = v87;
      v7 = v86;
      v13 = v85;
      v12 = v83;
    }
    *(_QWORD *)(v6 + 72) = v11;
    *(_DWORD *)(v6 + 80) = v38;
    *(_DWORD *)(v6 + 88) = 0;
  }
  else
  {
    v11 = *(__m128i **)(a1 + 72);
    v12 = v10 - 1;
    v13 = 16 * v10;
    v14 = (__m128i *)((char *)v11 + v13);
  }
  v15 = *(_DWORD *)(v7 + 12);
  v16 = 16LL * (v15 & v12);
  v17 = &v11[(unsigned __int64)v16 / 0x10];
  if ( v16 != v13 )
  {
    v18 = &v11[(unsigned __int64)v16 / 0x10];
    v19 = nullptr;
    while ( 1 )
    {
      v20 = v18->m128i_i64[0];
      if ( v18->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v20 + 12) == v15 && v7 == v20 )
        {
          v18->m128i_i64[0] = v7;
          v18->m128i_i32[2] = v81;
          goto LABEL_15;
        }
      }
      else
      {
        if ( !v20 )
        {
          if ( v19 )
            goto LABEL_76;
          v19 = v18;
          goto LABEL_77;
        }
        v19 = v18;
      }
      if ( ++v18 == v14 )
        goto LABEL_31;
    }
  }
  v19 = nullptr;
  while ( 1 )
  {
LABEL_31:
    if ( v17 == v11 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v36 = v11->m128i_i64[0];
    if ( v11->m128i_i64[0] <= 1uLL )
    {
      if ( v36 )
      {
        v19 = v11;
        goto LABEL_30;
      }
      if ( v19 )
LABEL_76:
        --*(_DWORD *)(v6 + 88);
      else
        v19 = v11;
LABEL_77:
      v21 = *(_QWORD **)(v6 + 96);
      v19->m128i_i64[0] = v7;
      v19->m128i_i32[2] = v81;
      ++*(_DWORD *)(v6 + 84);
      ++*(_DWORD *)(v7 + 8);
      if ( !v21 )
        goto LABEL_78;
LABEL_16:
      v22 = *((unsigned int *)v21 - 1);
      if ( (_DWORD)v22 != *((_DWORD *)v21 - 2) )
      {
        v23 = (_DWORD *)v21 + v22;
        goto LABEL_18;
      }
      v49 = (unsigned int)(3 * v22 + 1) >> 1;
      v50 = 4 * v49 + 8;
      if ( 4 * (int)v22 + 8 < (unsigned int)v50 && (unsigned int)v22 < v49 )
      {
        v51 = (unsigned int *)sub_186B300(v21 - 1, v50);
        v21 = v51 + 2;
        *v51 = v49;
        v52 = v51[1];
        *(_QWORD *)(v6 + 96) = v21;
        v23 = (_DWORD *)v21 + v52;
        goto LABEL_18;
      }
LABEL_90:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v89, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v89);
      sub_233E40((__int64)v89);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    if ( *(_DWORD *)(v36 + 12) == v15 && v7 == v36 )
      break;
LABEL_30:
    ++v11;
  }
  v11->m128i_i64[0] = v7;
  v11->m128i_i32[2] = v81;
LABEL_15:
  v21 = *(_QWORD **)(v6 + 96);
  ++*(_DWORD *)(v7 + 8);
  if ( v21 )
    goto LABEL_16;
LABEL_78:
  v78 = (_QWORD *)sub_186B270(0x10u);
  v21 = v78 + 1;
  *v78 = 2;
  *(_QWORD *)(v6 + 96) = v78 + 1;
  v23 = v78 + 1;
LABEL_18:
  v24 = *(_QWORD **)(v6 + 104);
  *v23 = a3;
  ++*((_DWORD *)v21 - 1);
  if ( !v24 )
  {
    v79 = (_QWORD *)sub_186B270(0x28u);
    v24 = v79 + 1;
    *v79 = 2;
    *(_QWORD *)(v6 + 104) = v79 + 1;
    v26 = v79 + 1;
    goto LABEL_21;
  }
  v25 = *((unsigned int *)v24 - 1);
  if ( (_DWORD)v25 != *((_DWORD *)v24 - 2) )
  {
    v26 = &v24[2 * v25];
    goto LABEL_21;
  }
  v65 = (unsigned int)(3 * v25 + 1) >> 1;
  v66 = 16 * v65 + 8;
  if ( 16 * (int)v25 + 8 >= (unsigned int)v66 || (unsigned int)v25 >= v65 )
    goto LABEL_90;
  v67 = sub_186B270(v66);
  v68 = *(int **)(v6 + 104);
  v69 = (_DWORD *)v67;
  v24 = (_QWORD *)(v67 + 8);
  if ( v68 )
  {
    v70 = (unsigned int)*(v68 - 1);
    v71 = v24;
    v69[1] = v70;
    v72 = &v68[4 * v70];
    for ( i = v68; i != v72; *(v71 - 1) = v76 )
    {
      v74 = *i;
      v75 = *((_BYTE *)i + 4);
      i += 4;
      v71 += 2;
      *((_DWORD *)v71 - 4) = v74;
      *((_BYTE *)v71 - 12) = v75 & 3 | *((_BYTE *)v71 - 12) & 0xFC;
      v76 = *((_QWORD *)i - 1);
      *((_QWORD *)i - 1) = 0;
    }
    sub_186B220(v68 - 2);
    v26 = &v24[2 * (unsigned int)v69[1]];
  }
  else
  {
    *(_DWORD *)(v67 + 4) = 0;
    v26 = (_QWORD *)(v67 + 8);
  }
  *(_QWORD *)(v6 + 104) = v24;
  *v69 = v65;
LABEL_21:
  *v26 = 0;
  v26[1] = 0;
  v27 = *((unsigned int *)v24 - 1);
  *((_DWORD *)v24 - 1) = v27 + 1;
  v28 = &v24[2 * v27];
  if ( (a4[1] & 1) != 0 )
  {
    sub_182EA00(*(_QWORD *)(v6 + 112), v28, a4);
    v30 = *(_QWORD **)(v6 + 120);
    if ( !v30 )
      goto LABEL_74;
LABEL_23:
    v31 = *((unsigned int *)v30 - 1);
    if ( (_DWORD)v31 != *((_DWORD *)v30 - 2) )
    {
      v32 = &v30[2 * v31];
      goto LABEL_25;
    }
    v53 = (unsigned int)(3 * v31 + 1) >> 1;
    v54 = 16 * v53 + 8;
    if ( 16 * (int)v31 + 8 < (unsigned int)v54 && (unsigned int)v31 < v53 )
    {
      v55 = sub_186B270(v54);
      v56 = *(int **)(v6 + 120);
      v57 = (_DWORD *)v55;
      v30 = (_QWORD *)(v55 + 8);
      if ( v56 )
      {
        v58 = (unsigned int)*(v56 - 1);
        v59 = v30;
        v57[1] = v58;
        v60 = &v56[4 * v58];
        for ( j = v56; v60 != j; *(v59 - 1) = v64 )
        {
          v62 = *j;
          v63 = *((_BYTE *)j + 4);
          j += 4;
          v59 += 2;
          *((_DWORD *)v59 - 4) = v62;
          *((_BYTE *)v59 - 12) = v63 & 3 | *((_BYTE *)v59 - 12) & 0xFC;
          v64 = *((_QWORD *)j - 1);
          *((_QWORD *)j - 1) = 0;
        }
        sub_186B220(v56 - 2);
        v32 = &v30[2 * (unsigned int)v57[1]];
      }
      else
      {
        *(_DWORD *)(v55 + 4) = 0;
        v32 = (_QWORD *)(v55 + 8);
      }
      *(_QWORD *)(v6 + 120) = v30;
      *v57 = v53;
      goto LABEL_25;
    }
    goto LABEL_90;
  }
  v29 = *a4;
  v30 = *(_QWORD **)(v6 + 120);
  *((_BYTE *)v28 + 4) &= ~1u;
  *(_DWORD *)v28 = v29;
  if ( v30 )
    goto LABEL_23;
LABEL_74:
  v77 = (_QWORD *)sub_186B270(0x28u);
  v30 = v77 + 1;
  *v77 = 2;
  *(_QWORD *)(v6 + 120) = v77 + 1;
  v32 = v77 + 1;
LABEL_25:
  *v32 = 0;
  v32[1] = 0;
  v33 = *((unsigned int *)v30 - 1);
  *((_DWORD *)v30 - 1) = v33 + 1;
  v34 = &v30[2 * v33];
  if ( (a5[1] & 1) != 0 )
  {
    sub_182EA00(*(_QWORD *)(v6 + 128), v34, a5);
  }
  else
  {
    v35 = *a5;
    *((_BYTE *)v34 + 4) &= ~1u;
    *(_DWORD *)v34 = v35;
  }
}

