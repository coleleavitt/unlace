__int64 __fastcall sub_807400(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 *v10; // rdx
  unsigned int v11; // ebp
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rdx
  _DWORD *v15; // rdi
  _QWORD *v16; // rax
  __int64 v17[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = sub_180C100(v3 + 2144, 24);
  v5 = *(__int64 **)(v3 + 2128);
  v6 = v4;
  *(_QWORD *)v4 = off_1C4C4E0;
  *(_QWORD *)(v4 + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(v4 + 16) = *(_DWORD *)(a2 + 16);
  if ( !v5 )
  {
    v16 = (_QWORD *)sub_186B270(0x18u);
    v5 = v16 + 1;
    *v16 = 2;
    result = 1;
    *(_QWORD *)(v3 + 2128) = v5;
    v10 = v5;
    goto LABEL_4;
  }
  v7 = *((_DWORD *)v5 - 1);
  if ( v7 != *((_DWORD *)v5 - 2) )
  {
    v8 = v7;
    result = v7 + 1;
    v10 = &v5[v8];
LABEL_4:
    *v10 = v6;
    *((_DWORD *)v5 - 1) = result;
    return result;
  }
  v11 = (3 * v7 + 1) >> 1;
  v12 = 8 * v11 + 8;
  if ( 8 * v7 + 8 >= (unsigned int)v12 || v7 >= v11 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v17, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v17);
    sub_233E40((__int64)v17);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v13 = (unsigned int *)sub_186B300(v5 - 1, v12);
  v14 = v13[1];
  v15 = v13 + 2;
  *(_QWORD *)(v3 + 2128) = v13 + 2;
  *v13 = v11;
  result = (unsigned int)(v14 + 1);
  *(_QWORD *)&v15[2 * v14] = v6;
  *(v15 - 1) = result;
  return result;
}

