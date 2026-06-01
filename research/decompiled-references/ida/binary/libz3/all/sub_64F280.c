__int64 __fastcall sub_64F280(__int64 a1)
{
  char **v1; // rbp
  __int64 v2; // rdx
  char **exception; // rbp
  __int64 v4; // rdx
  char **v5; // rbp
  __int64 v6; // rdx
  char **v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v11; // rax
  _QWORD *v12; // rdi
  int v13; // r13d
  __int64 v14; // rax
  _DWORD *v15; // rax
  __int64 v16; // r13
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // r12
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  int v25; // r15d
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // r12
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 *v32; // rcx
  __int64 v33; // rax
  int v34; // r14d
  __int64 v35; // rax
  _QWORD *v36; // rdi
  __int64 v37; // rbp
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 result; // rax
  __int64 *v41; // rdx
  unsigned int v42; // r12d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rax
  unsigned int v46; // r12d
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rdx
  unsigned int v50; // r14d
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rcx
  unsigned int v54; // r13d
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  __int64 v62[11]; // [rsp+0h] [rbp-58h] BYREF

  v9 = a1 + 2088;
  sub_180C250(a1 + 2088);
  v11 = *(_QWORD *)(a1 + 2072);
  if ( v11 )
  {
    v12 = *(_QWORD **)(a1 + 2080);
    v13 = *(_DWORD *)(v11 - 4);
    if ( v12 )
      goto LABEL_3;
LABEL_33:
    v58 = (_QWORD *)sub_186B270(0x10u);
    v12 = v58 + 1;
    *v58 = 2;
    *(_QWORD *)(a1 + 2080) = v58 + 1;
    v15 = v58 + 1;
    goto LABEL_5;
  }
  v12 = *(_QWORD **)(a1 + 2080);
  v13 = 0;
  if ( !v12 )
    goto LABEL_33;
LABEL_3:
  v14 = *((unsigned int *)v12 - 1);
  if ( (_DWORD)v14 == *((_DWORD *)v12 - 2) )
  {
    v42 = (unsigned int)(3 * v14 + 1) >> 1;
    v43 = 4 * v42 + 8;
    if ( 4 * (int)v14 + 8 >= (unsigned int)v43 || (unsigned int)v14 >= v42 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_104888(v62, "Overflow encountered when expanding vector", v4);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v62);
      sub_233E40((__int64)v62);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v44 = (unsigned int *)sub_186B300(v12 - 1, v43);
    v12 = v44 + 2;
    *v44 = v42;
    v45 = v44[1];
    *(_QWORD *)(a1 + 2080) = v12;
    v15 = (_DWORD *)v12 + v45;
  }
  else
  {
    v15 = (_DWORD *)v12 + v14;
  }
LABEL_5:
  *v15 = v13;
  ++*((_DWORD *)v12 - 1);
  v16 = sub_186B270(0xF8u);
  sub_643420(v16, (const __m128i *)(a1 + 2360));
  v17 = (_QWORD *)sub_180C100(v9, 24);
  v18 = *(_QWORD **)(a1 + 2072);
  v19 = v17;
  *v17 = off_1C52B08;
  v17[1] = a1;
  v17[2] = v16;
  if ( v18 )
  {
    v20 = *((_DWORD *)v18 - 1);
    if ( v20 == *((_DWORD *)v18 - 2) )
    {
      v54 = (3 * v20 + 1) >> 1;
      v55 = 8 * v54 + 8;
      if ( 8 * v20 + 8 >= (unsigned int)v55 || v20 >= v54 )
      {
        v1 = (char **)__cxa_allocate_exception(0x28u);
        sub_104888(v62, "Overflow encountered when expanding vector", v2);
        *v1 = (char *)off_1C63128;
        sub_2333C0(v1 + 1, v62);
        sub_233E40((__int64)v62);
        __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v56 = (unsigned int *)sub_186B300(v18 - 1, v55);
      v57 = v56[1];
      v18 = v56 + 2;
      *v56 = v54;
      *(_QWORD *)(a1 + 2072) = v56 + 2;
      LODWORD(v56) = v57;
      v23 = &v18[v57];
      v22 = (_DWORD)v56 + 1;
    }
    else
    {
      v21 = v20;
      v22 = v20 + 1;
      v23 = &v18[v21];
    }
  }
  else
  {
    v61 = (_QWORD *)sub_186B270(0x18u);
    v18 = v61 + 1;
    *v61 = 2;
    v22 = 1;
    *(_QWORD *)(a1 + 2072) = v18;
    v23 = v18;
  }
  *v23 = v19;
  *((_DWORD *)v18 - 1) = v22;
  v24 = *(_QWORD *)(a1 + 2912);
  if ( v24 )
    v25 = *(_DWORD *)(v24 - 4);
  else
    v25 = 0;
  v26 = sub_180C100(v9, 24);
  v27 = *(_QWORD **)(a1 + 2072);
  *(_QWORD *)v26 = off_1C52B30;
  v28 = v26;
  *(_QWORD *)(v26 + 8) = a1 + 2904;
  *(_DWORD *)(v26 + 16) = v25;
  if ( v27 )
  {
    v29 = *((_DWORD *)v27 - 1);
    if ( v29 == *((_DWORD *)v27 - 2) )
    {
      v50 = (3 * v29 + 1) >> 1;
      v51 = 8 * v50 + 8;
      if ( 8 * v29 + 8 >= (unsigned int)v51 || v29 >= v50 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_104888(v62, "Overflow encountered when expanding vector", v8);
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v62);
        sub_233E40((__int64)v62);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v52 = (unsigned int *)sub_186B300(v27 - 1, v51);
      v53 = v52[1];
      v27 = v52 + 2;
      *v52 = v50;
      *(_QWORD *)(a1 + 2072) = v52 + 2;
      LODWORD(v52) = v53;
      v32 = &v27[v53];
      v31 = (_DWORD)v52 + 1;
    }
    else
    {
      v30 = v29;
      v31 = v29 + 1;
      v32 = &v27[v30];
    }
  }
  else
  {
    v60 = (_QWORD *)sub_186B270(0x18u);
    v27 = v60 + 1;
    *v60 = 2;
    v31 = 1;
    *(_QWORD *)(a1 + 2072) = v27;
    v32 = v27;
  }
  *v32 = v28;
  *((_DWORD *)v27 - 1) = v31;
  v33 = *(_QWORD *)(a1 + 2944);
  if ( v33 )
    v34 = *(_DWORD *)(v33 - 4);
  else
    v34 = 0;
  v35 = sub_180C100(v9, 24);
  v36 = *(_QWORD **)(a1 + 2072);
  *(_QWORD *)v35 = off_1C52B30;
  v37 = v35;
  *(_QWORD *)(v35 + 8) = a1 + 2936;
  *(_DWORD *)(v35 + 16) = v34;
  if ( v36 )
  {
    v38 = *((_DWORD *)v36 - 1);
    if ( v38 == *((_DWORD *)v36 - 2) )
    {
      v46 = (3 * v38 + 1) >> 1;
      v47 = 8 * v46 + 8;
      if ( 8 * v38 + 8 >= (unsigned int)v47 || v38 >= v46 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_104888(v62, "Overflow encountered when expanding vector", v6);
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v62);
        sub_233E40((__int64)v62);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v48 = (unsigned int *)sub_186B300(v36 - 1, v47);
      v49 = v48[1];
      v36 = v48 + 2;
      *v48 = v46;
      *(_QWORD *)(a1 + 2072) = v48 + 2;
      LODWORD(v48) = v49;
      v41 = &v36[v49];
      result = (unsigned int)((_DWORD)v48 + 1);
    }
    else
    {
      v39 = v38;
      result = v38 + 1;
      v41 = &v36[v39];
    }
  }
  else
  {
    v59 = (_QWORD *)sub_186B270(0x18u);
    v36 = v59 + 1;
    *v59 = 2;
    result = 1;
    *(_QWORD *)(a1 + 2072) = v36;
    v41 = v36;
  }
  *v41 = v37;
  *((_DWORD *)v36 - 1) = result;
  return result;
}

