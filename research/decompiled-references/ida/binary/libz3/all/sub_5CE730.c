__int64 __fastcall sub_5CE730(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  _DWORD *v5; // rax
  bool v6; // zf
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r13
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // edx
  unsigned int v20; // r14d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  char **exception; // r13
  __int64 v26[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v5 || *v5 )
    goto LABEL_5;
  v8 = v5[1];
  if ( v8 == 8 )
    BUG();
  if ( (unsigned int)(v8 - 5) > 1 )
  {
LABEL_5:
    ++*(_DWORD *)(a2 + 8);
    v26[0] = a2;
    sub_5C94A0((_QWORD *)(a1 + 56), v26);
    goto LABEL_6;
  }
  v9 = **(_QWORD **)(a1 + 144);
  if ( v8 == 5 )
  {
    v10 = *(_QWORD *)(v9 + 856);
    if ( v10 )
      goto LABEL_13;
LABEL_28:
    sub_5C8340(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    *(_QWORD *)(a1 + 480) = 0;
    v10 = 0;
    goto LABEL_14;
  }
  v10 = *(_QWORD *)(v9 + 864);
  if ( !v10 )
    goto LABEL_28;
LABEL_13:
  ++*(_DWORD *)(v10 + 8);
  sub_5C8340(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  *(_QWORD *)(a1 + 480) = v10;
  ++*(_DWORD *)(v10 + 8);
LABEL_14:
  v11 = *(_QWORD **)(a1 + 56);
  if ( v11 )
  {
    v12 = *((_DWORD *)v11 - 1);
    if ( v12 == *((_DWORD *)v11 - 2) )
    {
      v20 = (3 * v12 + 1) >> 1;
      v21 = 8 * v20 + 8;
      if ( 8 * v12 + 8 >= (unsigned int)v21 || v12 >= v20 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v26, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v26);
        sub_233E40((__int64)v26);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v22 = (unsigned int *)sub_186B300(v11 - 1, v21);
      v23 = v22[1];
      v11 = v22 + 2;
      *v22 = v20;
      *(_QWORD *)(a1 + 56) = v22 + 2;
      LODWORD(v22) = v23;
      v15 = &v11[v23];
      v14 = (_DWORD)v22 + 1;
    }
    else
    {
      v13 = v12;
      v14 = v12 + 1;
      v15 = &v11[v13];
    }
  }
  else
  {
    v24 = (_QWORD *)sub_186B270(0x18u);
    v11 = v24 + 1;
    *v24 = 2;
    v14 = 1;
    *(_QWORD *)(a1 + 56) = v11;
    v15 = v11;
  }
  *v15 = v10;
  v16 = *(_QWORD *)(a1 + 480);
  *((_DWORD *)v11 - 1) = v14;
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 488);
    v6 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v17, v16);
  }
  *(_QWORD *)(a1 + 480) = 0;
  v18 = *(_QWORD *)(a1 + 40);
  if ( v18 )
  {
    v19 = *(_DWORD *)(v18 - 4);
    if ( v19 )
      *(_BYTE *)(v18 + 16LL * (unsigned int)(v19 - 1) + 8) |= 2u;
  }
LABEL_6:
  v6 = (*(_DWORD *)(a2 + 8))-- == 1;
  if ( v6 )
    sub_15D7BC0(v4, a2);
  return 1;
}

