__int64 __fastcall sub_C11150(__int64 a1, double a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **exception; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // r13d
  __int64 v10; // r14
  unsigned int v11; // edx
  __int64 v12; // rbp
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rdi
  int v17; // r12d
  __int64 v18; // rax
  _DWORD *v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  int v24; // ecx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  int v27; // edx
  __int64 v28; // rax
  _QWORD *v29; // rdi
  int v30; // r12d
  __int64 v31; // rax
  _DWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdx
  unsigned int v36; // r13d
  __int64 result; // rax
  unsigned int v38; // edx
  __int64 v39; // rbp
  unsigned __int64 v40; // r12
  __int64 v41; // rax
  char v42; // al
  char v43; // dl
  __int64 v44; // rax
  unsigned int v45; // ebp
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rax
  unsigned int v49; // ebp
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rax
  unsigned int v53; // ebp
  size_t v54; // rsi
  unsigned int *v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  __int64 v60[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 2200) )
  {
LABEL_2:
    v6 = *(_QWORD *)(a1 + 936);
    LODWORD(v7) = *(_DWORD *)(a1 + 944);
    goto LABEL_3;
  }
  v42 = sub_18290A0(*(_QWORD *)a1);
  v7 = *(unsigned int *)(a1 + 944);
  v43 = v42;
  v6 = *(_QWORD *)(a1 + 936);
  if ( !v43 )
  {
LABEL_3:
    v8 = v6 + 24LL * (unsigned int)v7;
    if ( v6 )
      goto LABEL_4;
LABEL_51:
    v10 = a1 + 952;
    v9 = 0;
    sub_1383B90(a1 + 952, (unsigned int)-(int)v7, v8);
    goto LABEL_7;
  }
  if ( !v6 )
  {
    if ( !(_DWORD)v7 )
    {
      v8 = 0;
      goto LABEL_51;
    }
LABEL_28:
    if ( *(_BYTE *)(a1 + 2201) || *(_BYTE *)(*(_QWORD *)(a1 + 8) + 725LL) )
    {
      v44 = *(_QWORD *)(a1 + 1376);
      if ( v44 && *(_DWORD *)(v44 - 4) )
      {
        v7 = a1 + 7072;
        sub_C0F7F0(a1, (char *)(a1 + 7072), a2);
      }
      sub_C0FAB0(a1, v7, a2);
      goto LABEL_2;
    }
    goto LABEL_3;
  }
  if ( *(_DWORD *)(v6 - 4) != (_DWORD)v7 )
    goto LABEL_28;
  v8 = v6 + 24LL * (unsigned int)v7;
LABEL_4:
  v9 = *(_DWORD *)(v6 - 4);
  v10 = a1 + 952;
  sub_1383B90(a1 + 952, v9 - (unsigned int)v7, v8);
  v11 = *(_DWORD *)(a1 + 944);
  if ( v11 < v9 )
  {
    v12 = 24LL * v11;
    v13 = 24 * (v11 + (unsigned __int64)(v9 - v11 - 1) + 1);
    do
    {
      v14 = v12 + *(_QWORD *)(a1 + 936);
      v12 += 24;
      sub_C10940((__int64 *)a1, *(_QWORD *)(v14 + 8), *(_QWORD *)(v14 + 16));
    }
    while ( v13 != v12 );
  }
LABEL_7:
  v15 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 944) = v9;
  if ( v15 )
  {
    v16 = *(_QWORD **)(a1 + 120);
    v17 = *(_DWORD *)(v15 - 4);
    if ( v16 )
      goto LABEL_9;
LABEL_47:
    v58 = (_QWORD *)sub_186B270(0x10u);
    v16 = v58 + 1;
    *v58 = 2;
    *(_QWORD *)(a1 + 120) = v58 + 1;
    v19 = v58 + 1;
    goto LABEL_11;
  }
  v16 = *(_QWORD **)(a1 + 120);
  v17 = 0;
  if ( !v16 )
    goto LABEL_47;
LABEL_9:
  v18 = *((unsigned int *)v16 - 1);
  if ( (_DWORD)v18 == *((_DWORD *)v16 - 2) )
  {
    v53 = (unsigned int)(3 * v18 + 1) >> 1;
    v54 = 4 * v53 + 8;
    if ( 4 * (int)v18 + 8 >= (unsigned int)v54 || (unsigned int)v18 >= v53 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_C0E620(v60, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v60);
      sub_233E40((__int64)v60);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v55 = (unsigned int *)sub_186B300(v16 - 1, v54);
    v16 = v55 + 2;
    *v55 = v53;
    v56 = v55[1];
    *(_QWORD *)(a1 + 120) = v16;
    v19 = (_DWORD *)v16 + v56;
  }
  else
  {
    v19 = (_DWORD *)v16 + v18;
  }
LABEL_11:
  v20 = *(_QWORD **)(a1 + 2208);
  *v19 = v17;
  ++*((_DWORD *)v16 - 1);
  if ( v20 )
  {
    v21 = *((unsigned int *)v20 - 1);
    if ( (_DWORD)v21 == *((_DWORD *)v20 - 2) )
    {
      v49 = (unsigned int)(3 * v21 + 1) >> 1;
      v50 = 8 * v49 + 8;
      if ( 8 * (int)v21 + 8 >= (unsigned int)v50 || (unsigned int)v21 >= v49 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_C0E620(v60, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v60);
        sub_233E40((__int64)v60);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v51 = (unsigned int *)sub_186B300(v20 - 1, v50);
      v20 = v51 + 2;
      *v51 = v49;
      v52 = v51[1];
      *(_QWORD *)(a1 + 2208) = v20;
      v22 = &v20[v52];
    }
    else
    {
      v22 = &v20[v21];
    }
  }
  else
  {
    v59 = (_QWORD *)sub_186B270(0x18u);
    v20 = v59 + 1;
    *v59 = 2;
    *(_QWORD *)(a1 + 2208) = v59 + 1;
    v22 = v59 + 1;
  }
  *(_DWORD *)v22 = 0;
  *((_BYTE *)v22 + 4) = 0;
  v23 = *((unsigned int *)v20 - 1);
  v24 = v23 + 1;
  v25 = &v20[v23];
  *((_DWORD *)v20 - 1) = v24;
  v26 = *(_QWORD *)(a1 + 936);
  if ( v26 )
    v27 = *(_DWORD *)(v26 - 4);
  else
    v27 = 0;
  *(_DWORD *)v25 = v27;
  *((_BYTE *)v25 + 4) = *(_BYTE *)(a1 + 2200);
  sub_13A33F0(a1 + 128);
  v28 = *(_QWORD *)(a1 + 4128);
  if ( v28 )
  {
    v29 = *(_QWORD **)(a1 + 4136);
    v30 = *(_DWORD *)(v28 - 4);
    if ( v29 )
      goto LABEL_18;
LABEL_45:
    v57 = (_QWORD *)sub_186B270(0x10u);
    v29 = v57 + 1;
    *v57 = 2;
    *(_QWORD *)(a1 + 4136) = v57 + 1;
    v32 = v57 + 1;
    goto LABEL_20;
  }
  v29 = *(_QWORD **)(a1 + 4136);
  v30 = 0;
  if ( !v29 )
    goto LABEL_45;
LABEL_18:
  v31 = *((unsigned int *)v29 - 1);
  if ( (_DWORD)v31 == *((_DWORD *)v29 - 2) )
  {
    v45 = (unsigned int)(3 * v31 + 1) >> 1;
    v46 = 4 * v45 + 8;
    if ( 4 * (int)v31 + 8 >= (unsigned int)v46 || (unsigned int)v31 >= v45 )
    {
      v2 = (char **)__cxa_allocate_exception(0x28u);
      sub_C0E620(v60, "Overflow encountered when expanding vector");
      *v2 = (char *)off_1C63128;
      sub_2333C0(v2 + 1, v60);
      sub_233E40((__int64)v60);
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v47 = (unsigned int *)sub_186B300(v29 - 1, v46);
    v29 = v47 + 2;
    *v47 = v45;
    v48 = v47[1];
    *(_QWORD *)(a1 + 4136) = v29;
    v32 = (_DWORD *)v29 + v48;
  }
  else
  {
    v32 = (_DWORD *)v29 + v31;
  }
LABEL_20:
  *v32 = v30;
  ++*((_DWORD *)v29 - 1);
  sub_15361F0(a1 + 2064);
  sub_13808A0(v10);
  sub_14EA000(a1 + 5752);
  v33 = *(_QWORD *)(a1 + 936);
  v34 = *(unsigned int *)(a1 + 944);
  v35 = v33 + 24 * v34;
  if ( v33 )
  {
    v36 = *(_DWORD *)(v33 - 4);
    result = sub_1383B90(v10, v36 - (unsigned int)v34, v35);
    v38 = *(_DWORD *)(a1 + 944);
    if ( v38 < v36 )
    {
      v39 = 24LL * v38;
      v40 = 24 * (v38 + (unsigned __int64)(v36 - v38 - 1) + 1);
      do
      {
        v41 = v39 + *(_QWORD *)(a1 + 936);
        v39 += 24;
        result = sub_C10940((__int64 *)a1, *(_QWORD *)(v41 + 8), *(_QWORD *)(v41 + 16));
      }
      while ( v39 != v40 );
    }
  }
  else
  {
    v36 = 0;
    result = sub_1383B90(v10, (unsigned int)-(int)v34, v35);
  }
  *(_DWORD *)(a1 + 944) = v36;
  return result;
}

