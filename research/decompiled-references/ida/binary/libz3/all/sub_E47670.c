_DWORD *__fastcall sub_E47670(__int64 a1)
{
  char **exception; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rdi
  int v5; // r12d
  __int64 v6; // rax
  _DWORD *result; // rax
  _DWORD *v8; // rbp
  unsigned int v10; // ebp
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)(a1 + 152) = 0;
  if ( v3 )
  {
    v4 = *(_QWORD **)(a1 + 160);
    v5 = *(_DWORD *)(v3 - 4);
    if ( v4 )
      goto LABEL_3;
LABEL_13:
    v14 = (_QWORD *)sub_186B270(0x10u);
    v4 = v14 + 1;
    *v14 = 2;
    *(_QWORD *)(a1 + 160) = v14 + 1;
    result = v14 + 1;
    goto LABEL_5;
  }
  v4 = *(_QWORD **)(a1 + 160);
  v5 = 0;
  if ( !v4 )
    goto LABEL_13;
LABEL_3:
  v6 = *((unsigned int *)v4 - 1);
  if ( (_DWORD)v6 == *((_DWORD *)v4 - 2) )
  {
    v10 = (unsigned int)(3 * v6 + 1) >> 1;
    v11 = 4 * v10 + 8;
    if ( 4 * (int)v6 + 8 >= (unsigned int)v11 || (unsigned int)v6 >= v10 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v15, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v15);
      sub_233E40((__int64)v15);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v12 = (unsigned int *)sub_186B300(v4 - 1, v11);
    v4 = v12 + 2;
    *v12 = v10;
    v13 = v12[1];
    *(_QWORD *)(a1 + 160) = v4;
    result = (_DWORD *)v4 + v13;
  }
  else
  {
    result = (_DWORD *)v4 + v6;
  }
LABEL_5:
  v8 = *(_DWORD **)(a1 + 168);
  *result = v5;
  ++*((_DWORD *)v4 - 1);
  if ( v8 )
  {
    if ( v8[12]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v8)(v8);
      result = (_DWORD *)sub_186B220(v8);
    }
  }
  *(_QWORD *)(a1 + 168) = 0;
  return result;
}

