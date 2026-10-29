__int64 __fastcall sub_9671F0(__int64 a1)
{
  char **exception; // r13
  __int64 result; // rax
  char v4; // r12
  bool v5; // zf
  _DWORD *(__fastcall *v6)(__int64); // rax
  __int64 v7; // rax
  _QWORD *v8; // rdi
  int v9; // r13d
  __int64 v10; // rax
  unsigned int v11; // r14d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16[9]; // [rsp+10h] [rbp-48h] BYREF

  result = *(unsigned int *)(a1 + 48);
  v4 = *(_BYTE *)(a1 + 52);
  *(_BYTE *)(a1 + 52) = 0;
  if ( (_DWORD)result )
  {
    do
    {
      while ( 1 )
      {
        v6 = *(_DWORD *(__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL);
        if ( v6 == sub_966D90 )
          break;
        result = (__int64)v6(a1);
        v5 = (*(_DWORD *)(a1 + 48))-- == 1;
        if ( v5 )
          goto LABEL_13;
      }
      v7 = *(_QWORD *)(a1 + 32);
      if ( v7 )
      {
        v8 = *(_QWORD **)(a1 + 40);
        v9 = *(_DWORD *)(v7 - 4);
        if ( v8 )
          goto LABEL_8;
      }
      else
      {
        v8 = *(_QWORD **)(a1 + 40);
        v9 = 0;
        if ( v8 )
        {
LABEL_8:
          v10 = *((unsigned int *)v8 - 1);
          if ( (_DWORD)v10 == *((_DWORD *)v8 - 2) )
          {
            v11 = (unsigned int)(3 * v10 + 1) >> 1;
            v12 = 4 * v11 + 8;
            if ( 4 * (int)v10 + 8 >= (unsigned int)v12 || (unsigned int)v10 >= v11 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v16, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v16);
              sub_233E40((__int64)v16);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v13 = (unsigned int *)sub_186B300(v8 - 1, v12);
            v8 = v13 + 2;
            *v13 = v11;
            v14 = v13[1];
            *(_QWORD *)(a1 + 40) = v8;
            result = (__int64)v8 + 4 * v14;
          }
          else
          {
            result = (__int64)v8 + 4 * v10;
          }
          goto LABEL_4;
        }
      }
      v15 = (_QWORD *)sub_186B270(0x10u);
      v8 = v15 + 1;
      *v15 = 2;
      *(_QWORD *)(a1 + 40) = v15 + 1;
      result = (__int64)(v15 + 1);
LABEL_4:
      *(_DWORD *)result = v9;
      ++*((_DWORD *)v8 - 1);
      v5 = (*(_DWORD *)(a1 + 48))-- == 1;
    }
    while ( !v5 );
  }
LABEL_13:
  *(_BYTE *)(a1 + 52) = v4;
  return result;
}

