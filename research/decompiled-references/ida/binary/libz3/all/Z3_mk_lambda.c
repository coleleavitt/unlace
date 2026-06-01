__int64 __fastcall Z3_mk_lambda(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4, __int64 a5)
{
  char **exception; // r13
  __int64 *v6; // r13
  char v7; // r12
  __int64 v8; // rax
  __int64 v9; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 *v12; // r15
  __int64 v13; // rsi
  _DWORD *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  bool v18; // zf
  unsigned int v20; // r10d
  unsigned int v21; // eax
  unsigned int *v22; // rax
  __int64 v23; // rax
  int v24; // esi
  __int64 v27; // [rsp+18h] [rbp-70h]
  __int64 v28[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = a4;
  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v7 )
    sub_2994D0(a1, a2, a3, a4, a5);
  v8 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  v27 = v8;
  if ( !a2 )
  {
    sub_24EA30(a1, 0xAu, nullptr);
    if ( !v7 )
      return 0;
    sub_2BB620(0);
    goto LABEL_24;
  }
  v9 = *v6;
  v10 = (_QWORD *)sub_186B270(0x18u);
  *v10 = 2;
  v11 = v10 + 1;
  v12 = &v6[a2];
  v13 = 1;
  v14 = v11;
  while ( 1 )
  {
    ++v6;
    *v11 = v9;
    *(v14 - 1) = v13;
    if ( v12 == v6 )
      break;
    while ( 1 )
    {
      v9 = *v6;
      if ( *(v14 - 2) == (_DWORD)v13 )
        break;
      v15 = (unsigned int)v13;
      ++v6;
      v13 = (unsigned int)(v13 + 1);
      *(_QWORD *)&v14[2 * v15] = v9;
      *(v14 - 1) = v13;
      if ( v12 == v6 )
        goto LABEL_8;
    }
    v20 = (unsigned int)(3 * v13 + 1) >> 1;
    v21 = 8 * v20 + 8;
    if ( 8 * (int)v13 + 8 >= v21 || (unsigned int)v13 >= v20 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v28, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v28);
      sub_233E40((__int64)v28);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v22 = (unsigned int *)sub_186B300(v14 - 2, v21);
    v14 = v22 + 2;
    *v22 = (unsigned int)(3 * v13 + 1) >> 1;
    v23 = v22[1];
    v24 = v23;
    v11 = &v14[2 * v23];
    v13 = (unsigned int)(v24 + 1);
  }
LABEL_8:
  v16 = sub_15DBD70(*(_QWORD *)(a1 + 232), v13, a3, v14, a5);
  v17 = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  sub_251FD0(a1, v16);
  if ( v7 )
  {
    sub_2BB620(v17);
    sub_186B220(v14 - 2);
    if ( v17 )
    {
      v18 = (*(_DWORD *)(v17 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v27, v17);
      goto LABEL_25;
    }
LABEL_24:
    v17 = 0;
LABEL_25:
    byte_1C7EBA0 = 1;
    return v17;
  }
  sub_186B220(v14 - 2);
  if ( !v17 )
    return 0;
  v18 = (*(_DWORD *)(v17 + 8))-- == 1;
  if ( v18 )
    sub_15D7BC0(v27, v17);
  return v17;
}

