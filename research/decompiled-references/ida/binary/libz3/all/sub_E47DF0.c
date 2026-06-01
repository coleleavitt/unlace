__int64 __fastcall sub_E47DF0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  _QWORD *v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 result; // rax
  _QWORD *v9; // rdx
  _DWORD *v10; // rbp
  unsigned int v12; // r12d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17[7]; // [rsp+10h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 152) = 0;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v5 = *(_QWORD **)(a1 + 128);
  if ( v5 )
  {
    v6 = *((_DWORD *)v5 - 1);
    if ( v6 == *((_DWORD *)v5 - 2) )
    {
      v12 = (3 * v6 + 1) >> 1;
      v13 = 8 * v12 + 8;
      if ( 8 * v6 + 8 >= (unsigned int)v13 || v6 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v17, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v17);
        sub_233E40((__int64)v17);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v5 - 1, v13);
      v15 = v14[1];
      v5 = v14 + 2;
      *v14 = v12;
      *(_QWORD *)(a1 + 128) = v14 + 2;
      LODWORD(v14) = v15;
      v9 = &v5[v15];
      result = (unsigned int)((_DWORD)v14 + 1);
    }
    else
    {
      v7 = v6;
      result = v6 + 1;
      v9 = &v5[v7];
    }
  }
  else
  {
    v16 = (_QWORD *)sub_186B270(0x18u);
    v5 = v16 + 1;
    *v16 = 2;
    result = 1;
    *(_QWORD *)(a1 + 128) = v5;
    v9 = v5;
  }
  *v9 = a2;
  v10 = *(_DWORD **)(a1 + 168);
  *((_DWORD *)v5 - 1) = result;
  if ( v10 )
  {
    if ( v10[12]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v10)(v10);
      result = sub_186B220(v10);
    }
  }
  *(_QWORD *)(a1 + 168) = 0;
  return result;
}

