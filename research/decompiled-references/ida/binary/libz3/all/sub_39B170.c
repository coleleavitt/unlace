_QWORD *__fastcall sub_39B170(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, char a5)
{
  __int64 v9; // rax
  _QWORD *v10; // rdx
  int v11; // r13d
  __int64 v12; // rax
  _QWORD *result; // rax
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  char **exception; // rbx
  unsigned int v19; // [rsp+Ch] [rbp-5Ch]
  __int64 v20[11]; // [rsp+10h] [rbp-58h] BYREF

  v9 = *(_QWORD *)(a1 + 56);
  if ( v9 )
  {
    v10 = *(_QWORD **)(a1 + 40);
    v11 = *(_DWORD *)(v9 - 4);
    if ( v10 )
      goto LABEL_3;
LABEL_10:
    v17 = (_QWORD *)sub_186B270(0x28u);
    v10 = v17 + 1;
    *v17 = 2;
    *(_QWORD *)(a1 + 40) = v17 + 1;
    result = v17 + 1;
    goto LABEL_5;
  }
  v10 = *(_QWORD **)(a1 + 40);
  v11 = 0;
  if ( !v10 )
    goto LABEL_10;
LABEL_3:
  v12 = *((unsigned int *)v10 - 1);
  if ( (_DWORD)v12 == *((_DWORD *)v10 - 2) )
  {
    v14 = 16 * ((unsigned int)(3 * v12 + 1) >> 1) + 8;
    if ( 16 * (int)v12 + 8 >= (unsigned int)v14 || (unsigned int)v12 >= (unsigned int)(3 * v12 + 1) >> 1 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_399470(v20, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v20);
      sub_233E40((__int64)v20);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v19 = (unsigned int)(3 * v12 + 1) >> 1;
    v15 = (unsigned int *)sub_186B300(v10 - 1, v14);
    v10 = v15 + 2;
    *v15 = v19;
    v16 = v15[1];
    *(_QWORD *)(a1 + 40) = v10;
    result = &v10[2 * v16];
  }
  else
  {
    result = &v10[2 * v12];
  }
LABEL_5:
  *result = a2;
  *((_DWORD *)result + 3) = v11;
  *((_DWORD *)result + 2) = (16 * a5) & 0x30 | a3 | (4 * a4) & 0xC;
  ++*((_DWORD *)v10 - 1);
  return result;
}

