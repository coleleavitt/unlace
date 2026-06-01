_QWORD *__fastcall sub_D85CC0(__int64 a1, __int64 a2, unsigned __int8 a3, char a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rdx
  int v9; // r12d
  __int64 v10; // rax
  _QWORD *result; // rax
  unsigned int v12; // r15d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  char **exception; // rbx
  __int64 v18[11]; // [rsp+10h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
  {
    v8 = *(_QWORD **)(a1 + 40);
    v9 = *(_DWORD *)(v7 - 4);
    if ( v8 )
      goto LABEL_3;
LABEL_10:
    v16 = (_QWORD *)sub_186B270(0x28u);
    v8 = v16 + 1;
    *v16 = 2;
    *(_QWORD *)(a1 + 40) = v16 + 1;
    result = v16 + 1;
    goto LABEL_5;
  }
  v8 = *(_QWORD **)(a1 + 40);
  v9 = 0;
  if ( !v8 )
    goto LABEL_10;
LABEL_3:
  v10 = *((unsigned int *)v8 - 1);
  if ( (_DWORD)v10 == *((_DWORD *)v8 - 2) )
  {
    v12 = (unsigned int)(3 * v10 + 1) >> 1;
    v13 = 16 * v12 + 8;
    if ( 16 * (int)v10 + 8 >= (unsigned int)v13 || (unsigned int)v10 >= v12 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v18, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v18);
      sub_233E40((__int64)v18);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v14 = (unsigned int *)sub_186B300(v8 - 1, v13);
    v8 = v14 + 2;
    *v14 = v12;
    v15 = v14[1];
    *(_QWORD *)(a1 + 40) = v8;
    result = &v8[2 * v15];
  }
  else
  {
    result = &v8[2 * v10];
  }
LABEL_5:
  *result = a2;
  *((_DWORD *)result + 3) = v9;
  *((_DWORD *)result + 2) = a3 | (16 * a4) & 0x30;
  ++*((_DWORD *)v8 - 1);
  return result;
}

