__int64 __fastcall sub_E04890(__int64 a1, char a2)
{
  char **exception; // rbx
  void (__fastcall *v5)(__int64, __int64, __int64); // rax
  void (__fastcall ***v6)(void *); // rbx
  bool v7; // zf
  unsigned int v8; // r10d
  char *v9; // rdi
  int v10; // ecx
  __int64 v11; // rsi
  char *v12; // rax
  char *v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // rbp
  __int64 v16; // rsi
  _QWORD *v17; // rax
  void **v18; // rbx
  void **v19; // rbp
  void (__fastcall ***v20)(_QWORD); // rbx
  __int64 v21; // rbx
  __int64 v22; // rbp
  __int64 v23; // rdi
  void (*v24)(); // rax
  __int64 v25; // rax
  __int64 v26; // rax
  void (__fastcall ***v27)(void *); // rbx
  void **v28; // rbx
  void **v29; // r14
  void (__fastcall ***v30)(void *); // rbp
  int v31; // eax
  __int64 result; // rax
  void (__fastcall ***v33)(void *); // rbx
  void (__fastcall ***v34)(_QWORD); // rbx
  void (__fastcall ***v35)(_QWORD); // rbx
  void *v36; // rdi
  void *v37; // rdi
  void *v38; // rbx
  void *v39; // rbx
  _QWORD *v40; // rbx
  __int64 v41; // rax
  _QWORD *v42; // rax
  unsigned int v43; // esi
  __int64 v44[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 832);
  if ( v5 )
  {
    v5(a1 + 816, a1 + 816, 3);
    *(_OWORD *)(a1 + 832) = 0;
  }
  v6 = *(void (__fastcall ****)(void *))(a1 + 872);
  *(_QWORD *)(a1 + 248) = 0;
  if ( v6 )
  {
    v7 = (*((_DWORD *)v6 + 12))-- == 1;
    if ( v7 )
    {
      (**v6)(v6);
      sub_186B220(v6);
    }
  }
  v8 = *(_DWORD *)(a1 + 548);
  *(_QWORD *)(a1 + 872) = 0;
  *(_BYTE *)(a1 + 272) = 0;
  if ( __PAIR64__(*(_DWORD *)(a1 + 552), v8) )
  {
    v9 = *(char **)(a1 + 536);
    v10 = 0;
    v11 = *(unsigned int *)(a1 + 544);
    v12 = v9;
    v13 = &v9[32 * v11];
    if ( v9 == v13 )
      goto LABEL_19;
    do
    {
      while ( *((_DWORD *)v12 + 1) )
      {
        *((_DWORD *)v12 + 1) = 0;
        v12 += 32;
        if ( v13 == v12 )
          goto LABEL_12;
      }
      v12 += 32;
      ++v10;
    }
    while ( v13 != v12 );
LABEL_12:
    if ( (unsigned int)v11 <= 0x10 || 3 * (int)v11 >= (unsigned int)(4 * v10) )
      goto LABEL_19;
    if ( v9 )
    {
      sub_186B220(v9);
      v14 = *(_DWORD *)(a1 + 544);
      *(_QWORD *)(a1 + 536) = 0;
      v14 >>= 1;
      *(_DWORD *)(a1 + 544) = v14;
      v15 = v14;
      v16 = sub_186B270(32LL * v14);
      if ( !v14 )
      {
LABEL_18:
        *(_QWORD *)(a1 + 536) = v16;
LABEL_19:
        *(_QWORD *)(a1 + 548) = 0;
        goto LABEL_20;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 536) = 0;
      v43 = (unsigned int)v11 >> 1;
      v15 = v43;
      *(_DWORD *)(a1 + 544) = v43;
      v16 = sub_186B270(32LL * v43);
    }
    v17 = (_QWORD *)v16;
    do
    {
      *v17 = 0;
      v17 += 4;
      *(v17 - 3) = 0;
      *(v17 - 2) = 0xFFFFFFFFLL;
      *(v17 - 1) = 0;
    }
    while ( v17 != (_QWORD *)(v16 + 32 * v15) );
    goto LABEL_18;
  }
LABEL_20:
  v18 = *(void ***)(a1 + 560);
  if ( v18 )
  {
    v19 = &v18[*((unsigned int *)v18 - 1)];
    if ( v18 == v19 )
      goto LABEL_26;
    do
    {
      if ( *v18 )
        sub_186B220(*v18);
      ++v18;
    }
    while ( v19 != v18 );
    v19 = *(void ***)(a1 + 560);
    if ( v19 )
LABEL_26:
      *((_DWORD *)v19 - 1) = 0;
  }
  sub_E2D0F0(a1 + 328);
  v20 = *(void (__fastcall ****)(_QWORD))(a1 + 280);
  if ( v20 )
  {
    (**v20)(*(_QWORD *)(a1 + 280));
    sub_186B220(v20);
    *(_QWORD *)(a1 + 280) = 0;
  }
  sub_E02F20(a1);
  v21 = *(_QWORD *)(a1 + 512);
  v22 = v21 + 24LL * *(unsigned int *)(a1 + 520);
  if ( v21 != v22 )
  {
    while ( *(_DWORD *)(v21 + 4) != 2 )
    {
      v21 += 24;
      if ( v22 == v21 )
        goto LABEL_41;
    }
    if ( v22 != v21 )
    {
      do
      {
        v23 = *(_QWORD *)(v21 + 16);
        v24 = *(void (**)())(*(_QWORD *)v23 + 16LL);
        if ( v24 != nullsub_126 )
          ((void (__fastcall *)(__int64, __int64))v24)(v23, a1);
        v25 = v21 + 24;
        if ( v22 == v21 + 24 )
          break;
        while ( 1 )
        {
          v21 = v25;
          if ( *(_DWORD *)(v25 + 4) == 2 )
            break;
          v25 += 24;
          if ( v22 == v25 )
            goto LABEL_41;
        }
      }
      while ( v25 != v22 );
    }
  }
LABEL_41:
  sub_E00530(a1);
  sub_E01160(a1, 0);
  sub_E02050(a1);
  sub_DFD1E0(a1);
  if ( *(_QWORD *)(a1 + 296) )
  {
    v26 = *(_QWORD *)(a1 + 760);
    if ( v26 )
    {
      if ( *(_DWORD *)(v26 - 4) )
        sub_DFD590(a1, 0);
    }
  }
  v27 = *(void (__fastcall ****)(void *))(a1 + 864);
  if ( v27 )
  {
    v7 = (*((_DWORD *)v27 + 12))-- == 1;
    if ( v7 )
    {
      (**v27)(v27);
      sub_186B220(v27);
    }
  }
  v28 = *(void ***)(a1 + 288);
  *(_QWORD *)(a1 + 864) = 0;
  if ( !v28 )
    goto LABEL_84;
  v29 = &v28[*((unsigned int *)v28 - 1)];
  if ( v28 >= v29 )
    goto LABEL_56;
  do
  {
    while ( 1 )
    {
      v30 = (void (__fastcall ***)(void *))*v28;
      if ( *v28 )
      {
        v7 = (*((_DWORD *)v30 + 2))-- == 1;
        if ( v7 )
          break;
      }
      if ( ++v28 >= v29 )
        goto LABEL_55;
    }
    ++v28;
    (**v30)(v30);
    sub_186B220(v30);
  }
  while ( v28 < v29 );
LABEL_55:
  v28 = *(void ***)(a1 + 288);
  if ( v28 )
  {
LABEL_56:
    v31 = *((_DWORD *)v28 - 2);
    *((_DWORD *)v28 - 1) = 0;
    if ( !v31 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_DF63A0(v44, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v44);
      sub_233E40((__int64)v44);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
  }
  else
  {
LABEL_84:
    v42 = (_QWORD *)sub_186B270(0x18u);
    v28 = (void **)(v42 + 1);
    *v42 = 2;
    *(_QWORD *)(a1 + 288) = v42 + 1;
  }
  result = *(_QWORD *)(a1 + 848);
  *v28 = nullptr;
  *((_DWORD *)v28 - 1) = 1;
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  v33 = *(void (__fastcall ****)(void *))(a1 + 880);
  if ( v33 )
  {
    v7 = (*((_DWORD *)v33 + 12))-- == 1;
    if ( v7 )
    {
      (**v33)(v33);
      result = sub_186B220(v33);
    }
  }
  v34 = *(void (__fastcall ****)(_QWORD))(a1 + 920);
  *(_QWORD *)(a1 + 880) = 0;
  if ( v34 )
  {
    (**v34)(v34);
    result = sub_186B220(v34);
    *(_QWORD *)(a1 + 920) = 0;
  }
  v35 = *(void (__fastcall ****)(_QWORD))(a1 + 912);
  if ( v35 )
  {
    (**v35)(*(_QWORD *)(a1 + 912));
    result = sub_186B220(v35);
    *(_QWORD *)(a1 + 912) = 0;
  }
  v36 = *(void **)(a1 + 800);
  if ( v36 )
  {
    result = sub_E0F960(v36);
    *(_QWORD *)(a1 + 800) = 0;
  }
  v37 = *(void **)(a1 + 808);
  if ( v37 )
  {
    result = sub_E0F960(v37);
    *(_QWORD *)(a1 + 808) = 0;
  }
  if ( *(_QWORD *)(a1 + 296) )
  {
    v38 = *(void **)(a1 + 312);
    if ( v38 )
    {
      sub_DE3740(*(_QWORD *)(a1 + 312));
      result = sub_186B220(v38);
    }
    v7 = *(_BYTE *)(a1 + 304) == 0;
    *(_QWORD *)(a1 + 312) = 0;
    if ( v7 )
    {
      if ( a2 )
        *(_BYTE *)(a1 + 305) = 0;
      else
        result = sub_DFBC70((_QWORD *)a1);
    }
    else
    {
      v39 = *(void **)(a1 + 296);
      if ( v39 )
      {
        sub_15D95C0(*(_QWORD *)(a1 + 296));
        result = sub_186B220(v39);
      }
      *(_QWORD *)(a1 + 296) = 0;
      *(_BYTE *)(a1 + 305) = 0;
    }
  }
  v40 = *(_QWORD **)(a1 + 320);
  if ( v40 )
  {
    v41 = v40[65];
    if ( v41 )
      sub_186B220((void *)(v41 - 8));
    sub_17E9B80(v40);
    result = sub_186B220(v40);
    *(_QWORD *)(a1 + 320) = 0;
  }
  return result;
}

