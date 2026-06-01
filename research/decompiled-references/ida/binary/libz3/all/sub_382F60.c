__int64 __fastcall sub_382F60(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 *v9; // r12
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rbp
  __int64 v15; // r15
  int **v16; // r9
  int *v17; // r12
  unsigned int v18; // eax
  __int64 v19; // rsi
  int v20; // eax
  int **v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  int v24; // esi
  int **v25; // rax
  int *v26; // rsi
  int **v27; // r15
  __int64 v28; // rbp
  __int64 v29; // rcx
  unsigned int v30; // edx
  unsigned int v31; // ebp
  _QWORD *v32; // r15
  int **v33; // rbx
  unsigned __int64 v34; // rbp
  bool v35; // zf
  int **v36; // rbx
  unsigned __int64 v37; // rbp
  __int64 v39; // rbp
  __int64 v40; // rax
  _QWORD *v41; // rdi
  int *v42; // rax
  __int64 v43; // rax
  unsigned int v44; // r10d
  size_t v45; // rsi
  _DWORD *v46; // rax
  __int64 v47; // rsi
  _QWORD *v48; // rax
  unsigned int v49; // edx
  unsigned int v50; // ebp
  _QWORD *v51; // r13
  __int64 v52; // rbp
  __int64 v53; // rax
  _QWORD *v54; // rdi
  __int64 v55; // rax
  __int64 j; // rax
  __int64 i; // rax
  char **exception; // rbp
  __int64 v59; // rdx
  int v60; // [rsp+0h] [rbp-4B8h]
  __int64 *v61; // [rsp+8h] [rbp-4B0h]
  __int64 v62; // [rsp+8h] [rbp-4B0h]
  int *v63; // [rsp+18h] [rbp-4A0h]
  int v64[2]; // [rsp+20h] [rbp-498h]
  int v65[2]; // [rsp+28h] [rbp-490h]
  int v66; // [rsp+30h] [rbp-488h]
  int v67; // [rsp+38h] [rbp-480h] BYREF
  int v68[2]; // [rsp+40h] [rbp-478h] BYREF
  int v69[2]; // [rsp+48h] [rbp-470h]
  int v70[2]; // [rsp+50h] [rbp-468h] BYREF
  int v71[2]; // [rsp+58h] [rbp-460h]
  __int64 v72; // [rsp+60h] [rbp-458h] BYREF
  int v73; // [rsp+68h] [rbp-450h]
  int v74; // [rsp+70h] [rbp-448h]
  int v75; // [rsp+78h] [rbp-440h]
  int v76[18]; // [rsp+80h] [rbp-438h] BYREF
  void *v77; // [rsp+C8h] [rbp-3F0h]

  sub_EE4940(&v67, "ufbv-rewriter", *a2);
  sub_EE5110("ufbv-rewriter");
  v9 = (__int64 *)*a2;
  if ( (*(_BYTE *)(*a2 + 123LL) & 8) != 0 )
  {
    ++*((_DWORD *)v9 + 8);
    v49 = *(_DWORD *)(a3 + 8);
    v50 = *(_DWORD *)(a3 + 12);
    if ( v49 >= v50 )
    {
      v52 = 2 * v50;
      v53 = sub_186B270(8 * v52);
      v49 = *(_DWORD *)(a3 + 8);
      v54 = *(_QWORD **)a3;
      v51 = (_QWORD *)v53;
      if ( v49 )
      {
        if ( v49 - 1 <= 2 || (_QWORD *)v53 == v54 + 1 )
        {
          for ( i = 0; i != v49; ++i )
            v51[i] = v54[i];
        }
        else
        {
          v55 = 0;
          do
          {
            *(__m128i *)&v51[v55] = _mm_loadu_si128((const __m128i *)&v54[v55]);
            v55 += 2;
          }
          while ( v55 != 2LL * (v49 >> 1) );
          if ( (v49 & 1) != 0 )
            v51[v49 & 0xFFFFFFFE] = v54[v49 & 0xFFFFFFFE];
        }
      }
      if ( v54 != (_QWORD *)(a3 + 16) && v54 )
      {
        sub_186B220(v54);
        v49 = *(_DWORD *)(a3 + 8);
      }
      *(_QWORD *)a3 = v51;
      *(_DWORD *)(a3 + 12) = v52;
    }
    else
    {
      v51 = *(_QWORD **)a3;
    }
    v51[v49] = v9;
    *(_DWORD *)(a3 + 8) = v49 + 1;
    return sub_EE4A00(&v67);
  }
  sub_FAB710((unsigned int)v76, *(_QWORD *)(a1 + 16), v5, v6, v7, v8);
  v10 = (__int64 *)*a2;
  v11 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v69 = 0;
  *(_QWORD *)v71 = 0;
  v12 = v10[9];
  *(_QWORD *)v68 = v11;
  *(_QWORD *)v70 = v11;
  if ( !v12 )
    goto LABEL_23;
  v13 = *(_BYTE *)(v12 + 3) >> 6;
  if ( v13 )
  {
    if ( v13 != 1 )
    {
LABEL_5:
      if ( v13 == 2 )
        v14 = (unsigned int)(*(_DWORD *)(v12 + 4) - 1);
      else
        v14 = *(unsigned int *)(v12 + 4);
      goto LABEL_7;
    }
  }
  else
  {
    do
    {
      v12 = *(_QWORD *)(v12 + 16);
      v13 = *(_BYTE *)(v12 + 3) >> 6;
    }
    while ( !v13 );
    if ( v13 != 1 )
      goto LABEL_5;
  }
  v14 = (unsigned int)(*(_DWORD *)(v12 + 4) + 1);
LABEL_7:
  if ( !(_DWORD)v14 )
    goto LABEL_23;
  v15 = 0;
  v16 = nullptr;
  v63 = v70;
  while ( 2 )
  {
    v22 = *v10;
    if ( (*((_BYTE *)v10 + 123) & 0x20) != 0 )
    {
      v17 = *(int **)(v22 + 864);
      goto LABEL_10;
    }
    v23 = v10[9];
    v24 = 17;
    while ( 1 )
    {
      if ( *(char *)(v23 + 3) < 0 )
      {
        if ( *(_BYTE *)(v23 + 3) >> 6 != 2 )
        {
          v25 = (int **)(*(_QWORD *)(v23 + 16) + 8 * v15);
          goto LABEL_22;
        }
        goto LABEL_61;
      }
      if ( *(_DWORD *)(v23 + 4) == (_DWORD)v15 )
        break;
LABEL_61:
      v23 = *(_QWORD *)(v23 + 16);
      if ( !--v24 )
      {
        v61 = v10;
        sub_233F80((__int64 *)(v22 + 616), (_DWORD *)v10 + 18);
        v16 = *(int ***)v69;
        v25 = (int **)(*(_QWORD *)(v61[9] + 16) + 8 * v15);
        goto LABEL_22;
      }
    }
    v25 = (int **)(v23 + 8);
LABEL_22:
    v17 = *v25;
LABEL_10:
    if ( v17 )
      ++v17[2];
    if ( v16 )
    {
      v18 = *((_DWORD *)v16 - 1);
      if ( v18 == *((_DWORD *)v16 - 2) )
      {
        v44 = (3 * v18 + 1) >> 1;
        v45 = 8 * v44 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v45 || v18 >= v44 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_C2E46(&v72, "Overflow encountered when expanding vector", v59);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v72);
          sub_233E40((__int64)&v72);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v61) = (3 * v18 + 1) >> 1;
        v46 = (_DWORD *)sub_186B300(v16 - 1, v45);
        v47 = (unsigned int)v46[1];
        v16 = (int **)(v46 + 2);
        *(_QWORD *)v69 = v46 + 2;
        *v46 = (_DWORD)v61;
        LODWORD(v46) = v47;
        v21 = &v16[v47];
        v20 = (_DWORD)v46 + 1;
      }
      else
      {
        v19 = v18;
        v20 = v18 + 1;
        v21 = &v16[v19];
      }
    }
    else
    {
      v48 = (_QWORD *)sub_186B270(0x18u);
      v16 = (int **)(v48 + 1);
      *v48 = 2;
      v20 = 1;
      *(_QWORD *)v69 = v16;
      v21 = v16;
    }
    ++v15;
    *v21 = v17;
    *((_DWORD *)v16 - 1) = v20;
    if ( v14 != v15 )
    {
      v10 = (__int64 *)*a2;
      continue;
    }
    break;
  }
LABEL_23:
  v26 = v68;
  sub_FAFD60(
    (int)v76,
    v60,
    (int)v61,
    (int)v68,
    (int)v63,
    (int)v76,
    (int)&v67,
    v66,
    v67,
    v68[0],
    v69[0],
    v70[0],
    v71[0],
    v72,
    v73,
    v74,
    v75,
    v76[0],
    v76[2],
    v76[4],
    v76[6],
    v76[8],
    v76[10],
    v76[12],
    v76[14],
    v76[16],
    v77);
  sub_ED2DA0(*a2);
  v27 = *(int ***)v71;
  if ( *(_QWORD *)v71 )
  {
    v28 = *(_QWORD *)v71 + 8LL * *(unsigned int *)(*(_QWORD *)v71 - 4LL);
    if ( v28 != *(_QWORD *)v71 )
    {
      do
      {
        v26 = *v27;
        sub_EDB570(*a2, *v27++, 0, 0);
      }
      while ( (int **)v28 != v27 );
    }
  }
  *(_DWORD *)(*a2 + 120LL) = (*(_DWORD *)(*a2 + 120LL) + 1) & 0x3FFFFFF | *(_DWORD *)(*a2 + 120LL) & 0xFC000000;
  v29 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v29 + 32);
  v30 = *(_DWORD *)(a3 + 8);
  v31 = *(_DWORD *)(a3 + 12);
  if ( v30 >= v31 )
  {
    v62 = v29;
    v39 = 2 * v31;
    v40 = sub_186B270(8 * v39);
    v30 = *(_DWORD *)(a3 + 8);
    v41 = *(_QWORD **)a3;
    v32 = (_QWORD *)v40;
    v29 = v62;
    if ( v30 )
    {
      if ( v30 - 1 <= 2 || (_QWORD *)v40 == v41 + 1 )
      {
        for ( j = 0; j != v30; ++j )
        {
          v26 = (int *)v41[j];
          v32[j] = v26;
        }
      }
      else
      {
        v42 = nullptr;
        v26 = (int *)(16LL * (v30 >> 1));
        do
        {
          *(__m128i *)((char *)v42 + (_QWORD)v32) = _mm_loadu_si128((const __m128i *)((char *)v42 + (_QWORD)v41));
          v42 += 4;
        }
        while ( v42 != v26 );
        if ( (v30 & 1) != 0 )
        {
          v43 = v30 & 0xFFFFFFFE;
          v26 = (int *)v41[v43];
          v32[v43] = v26;
        }
      }
    }
    if ( v41 != (_QWORD *)(a3 + 16) && v41 )
    {
      sub_186B220(v41);
      v30 = *(_DWORD *)(a3 + 8);
      v29 = v62;
    }
    *(_QWORD *)a3 = v32;
    *(_DWORD *)(a3 + 12) = v39;
  }
  else
  {
    v32 = *(_QWORD **)a3;
  }
  v32[v30] = v29;
  *(_DWORD *)(a3 + 8) = v30 + 1;
  v33 = *(int ***)v71;
  if ( *(_QWORD *)v71 )
  {
    v34 = *(_QWORD *)v71 + 8LL * *(unsigned int *)(*(_QWORD *)v71 - 4LL);
    if ( *(_QWORD *)v71 >= v34 )
      goto LABEL_38;
    do
    {
      while ( 1 )
      {
        v26 = *v33;
        if ( *v33 )
        {
          v35 = v26[2]-- == 1;
          if ( v35 )
            break;
        }
        if ( (unsigned __int64)++v33 >= v34 )
          goto LABEL_37;
      }
      sub_15D7BC0(*(_QWORD *)v70, v26);
      ++v33;
    }
    while ( (unsigned __int64)v33 < v34 );
LABEL_37:
    v33 = *(int ***)v71;
    if ( *(_QWORD *)v71 )
LABEL_38:
      sub_186B220(v33 - 1);
  }
  v36 = *(int ***)v69;
  if ( *(_QWORD *)v69 )
  {
    v37 = *(_QWORD *)v69 + 8LL * *(unsigned int *)(*(_QWORD *)v69 - 4LL);
    if ( *(_QWORD *)v69 >= v37 )
      goto LABEL_47;
    do
    {
      while ( 1 )
      {
        v26 = *v36;
        if ( *v36 )
        {
          v35 = v26[2]-- == 1;
          if ( v35 )
            break;
        }
        if ( (unsigned __int64)++v36 >= v37 )
          goto LABEL_46;
      }
      sub_15D7BC0(*(_QWORD *)v68, v26);
      ++v36;
    }
    while ( (unsigned __int64)v36 < v37 );
LABEL_46:
    v36 = *(int ***)v69;
    if ( *(_QWORD *)v69 )
LABEL_47:
      sub_186B220(v36 - 1);
  }
  sub_FA8C60(*(_QWORD *)v64, v26);
  return sub_EE4A00(*(_QWORD *)v65);
}

