__int64 __fastcall sub_7DC960(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  _QWORD *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  _QWORD *v10; // rdx
  __int64 v11; // r12
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 result; // rax
  _QWORD *v18; // rdx
  unsigned int v19; // r12d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // ebx
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rdx
  _DWORD *v27; // rdi
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30[7]; // [rsp+10h] [rbp-38h] BYREF

  v6 = *(_QWORD **)(a1 + 256);
  if ( v6 )
  {
    v7 = *((_DWORD *)v6 - 1);
    if ( v7 == *((_DWORD *)v6 - 2) )
    {
      v19 = (3 * v7 + 1) >> 1;
      v20 = 8 * v19 + 8;
      if ( 8 * v7 + 8 >= (unsigned int)v20 || v7 >= v19 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v30, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v30);
        sub_233E40((__int64)v30);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v21 = (unsigned int *)sub_186B300(v6 - 1, v20);
      v22 = v21[1];
      v6 = v21 + 2;
      *v21 = v19;
      *(_QWORD *)(a1 + 256) = v21 + 2;
      LODWORD(v21) = v22;
      v10 = &v6[v22];
      v9 = (_DWORD)v21 + 1;
    }
    else
    {
      v8 = v7;
      v9 = v7 + 1;
      v10 = &v6[v8];
    }
  }
  else
  {
    v28 = (_QWORD *)sub_186B270(0x18u);
    v6 = v28 + 1;
    *v28 = 2;
    v9 = 1;
    *(_QWORD *)(a1 + 256) = v6;
    v10 = v6;
  }
  v11 = *(_QWORD *)(a1 + 80);
  *v10 = a2;
  *((_DWORD *)v6 - 1) = v9;
  v12 = (_QWORD *)sub_180C100(v11 + 2144, 16);
  v13 = *(_QWORD **)(v11 + 2128);
  v14 = v12;
  *v12 = off_1C54A60;
  v12[1] = a1 + 256;
  if ( !v13 )
  {
    v29 = (_QWORD *)sub_186B270(0x18u);
    v13 = v29 + 1;
    *v29 = 2;
    result = 1;
    *(_QWORD *)(v11 + 2128) = v13;
    v18 = v13;
    goto LABEL_7;
  }
  v15 = *((_DWORD *)v13 - 1);
  if ( v15 != *((_DWORD *)v13 - 2) )
  {
    v16 = v15;
    result = v15 + 1;
    v18 = &v13[v16];
LABEL_7:
    *v18 = v14;
    *((_DWORD *)v13 - 1) = result;
    return result;
  }
  v23 = (3 * v15 + 1) >> 1;
  v24 = 8 * v23 + 8;
  if ( 8 * v15 + 8 >= (unsigned int)v24 || v15 >= v23 )
  {
    v2 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v30, "Overflow encountered when expanding vector");
    *v2 = (char *)off_1C63128;
    sub_2333C0(v2 + 1, v30);
    sub_233E40((__int64)v30);
    __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v25 = (unsigned int *)sub_186B300(v13 - 1, v24);
  v26 = v25[1];
  v27 = v25 + 2;
  *(_QWORD *)(v11 + 2128) = v25 + 2;
  *v25 = v23;
  result = (unsigned int)(v26 + 1);
  *(_QWORD *)&v27[2 * v26] = v14;
  *(v27 - 1) = result;
  return result;
}

