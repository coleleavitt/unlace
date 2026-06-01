__int64 __fastcall sub_7F64B0(_QWORD *a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  _QWORD *v5; // rdx
  unsigned int v6; // ebp
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  _QWORD *v9; // rax
  _DWORD *v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // r14d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rdx
  unsigned __int8 v17; // al
  _DWORD *v18; // rcx
  int v19; // ebx
  __int64 v20; // rax
  unsigned int v21; // ebp
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rax
  int *v25; // rax
  __int64 v26; // rsi
  _QWORD *v28; // rax
  __int64 v29[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = (_QWORD *)a1[625];
  if ( v5 )
    v6 = *((_DWORD *)v5 - 1);
  else
    v6 = 0;
  v7 = a1[619];
  if ( v7 && v6 < *(_DWORD *)(v7 - 4) )
  {
    v8 = (_DWORD *)(v7 + 16LL * v6);
    if ( v5 )
      goto LABEL_10;
    v9 = (_QWORD *)sub_186B270(0x10u);
    v7 = a1[619];
    v5 = v9 + 1;
    *v9 = 2;
    a1[625] = v9 + 1;
    v10 = v9 + 1;
LABEL_7:
    ++v6;
    *v10 = *v8;
    ++*((_DWORD *)v5 - 1);
    if ( v7 )
    {
      while ( v6 < *(_DWORD *)(v7 - 4) )
      {
        v8 = (_DWORD *)(v7 + 16LL * v6);
LABEL_10:
        v11 = *((unsigned int *)v5 - 1);
        v10 = (_DWORD *)v5 + v11;
        if ( (_DWORD)v11 != *((_DWORD *)v5 - 2) )
          goto LABEL_7;
        v12 = (unsigned int)(3 * v11 + 1) >> 1;
        v13 = 4 * v12 + 8;
        if ( 4 * (int)v11 + 8 >= (unsigned int)v13 || (unsigned int)v11 >= v12 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v29, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v29);
          sub_233E40((__int64)v29);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ++v6;
        v14 = (unsigned int *)sub_186B300(v5 - 1, v13);
        v7 = a1[619];
        *v14 = v12;
        v5 = v14 + 2;
        v15 = v14[1];
        a1[625] = v5;
        *((_DWORD *)v5 + v15) = *v8;
        ++*((_DWORD *)v5 - 1);
        if ( !v7 )
          break;
      }
    }
  }
  v16 = (_QWORD *)a1[626];
  if ( v16 )
  {
    *((_DWORD *)v16 - 1) = 0;
    if ( *(_WORD *)(a2 + 4) )
    {
      v19 = 2 * *(_DWORD *)a2;
      if ( !*((_DWORD *)v16 - 2) )
        goto LABEL_37;
      v20 = 0;
LABEL_27:
      v25 = (int *)v16 + v20;
      goto LABEL_24;
    }
  }
  else if ( *(_WORD *)(a2 + 4) )
  {
    v19 = 2 * *(_DWORD *)a2;
    goto LABEL_35;
  }
  v17 = 0;
  do
  {
    v18 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v18 || *v18 || v18[1] != 8 || *(_DWORD *)(a2 + 24) != 1 )
    {
      v19 = v17 + 2 * *(_DWORD *)a2;
      if ( !v16 )
        goto LABEL_35;
      goto LABEL_20;
    }
    a2 = *(_QWORD *)(a2 + 32);
    v17 ^= 1u;
  }
  while ( !*(_WORD *)(a2 + 4) );
  v19 = v17 + 2 * *(_DWORD *)a2;
  if ( !v16 )
  {
LABEL_35:
    v28 = (_QWORD *)sub_186B270(0x10u);
    v16 = v28 + 1;
    *v28 = 2;
    a1[626] = v28 + 1;
    v25 = (int *)(v28 + 1);
    goto LABEL_24;
  }
LABEL_20:
  v20 = *((unsigned int *)v16 - 1);
  if ( *((_DWORD *)v16 - 2) != (_DWORD)v20 )
    goto LABEL_27;
  v21 = (unsigned int)(3 * v20 + 1) >> 1;
  v22 = 4 * v21 + 8;
  if ( 4 * (int)v20 + 8 >= (unsigned int)v22 || (unsigned int)v20 >= v21 )
  {
LABEL_37:
    v2 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v29, "Overflow encountered when expanding vector");
    *v2 = (char *)off_1C63128;
    sub_2333C0(v2 + 1, v29);
    sub_233E40((__int64)v29);
    __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v23 = (unsigned int *)sub_186B300(v16 - 1, v22);
  v16 = v23 + 2;
  *v23 = v21;
  v24 = v23[1];
  a1[626] = v16;
  v25 = (int *)v16 + v24;
LABEL_24:
  *v25 = v19;
  v26 = (unsigned int)(*((_DWORD *)v16 - 1) + 1);
  *((_DWORD *)v16 - 1) = v26;
  return sub_11EFFE0(a1 + 542, v26, v16, a1 + 625);
}

