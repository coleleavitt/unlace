__int64 __fastcall sub_426440(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // r12
  __int64 result; // rax
  _QWORD *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  _QWORD *v11; // rdx
  bool v12; // zf
  unsigned int v13; // r12d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18[7]; // [rsp+10h] [rbp-38h] BYREF

  *(_QWORD *)a1 = a3;
  if ( a3 )
    ++*(_DWORD *)a3;
  result = *(unsigned __int16 *)(a3 + 72);
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = (unsigned int)result;
  *(_BYTE *)(a1 + 48) = 0;
  if ( a2 )
  {
    v7 = *(_QWORD **)(a2 + 16);
    if ( v7 )
    {
      v8 = *((_DWORD *)v7 - 1);
      if ( v8 == *((_DWORD *)v7 - 2) )
      {
        v13 = (3 * v8 + 1) >> 1;
        v14 = 8 * v13 + 8;
        if ( 8 * v8 + 8 >= (unsigned int)v14 || v8 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v18, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v18);
          sub_233E40((__int64)v18);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = (unsigned int *)sub_186B300(v7 - 1, v14);
        v16 = v15[1];
        v7 = v15 + 2;
        *v15 = v13;
        *(_QWORD *)(a2 + 16) = v15 + 2;
        LODWORD(v15) = v16;
        v11 = &v7[v16];
        v10 = (_DWORD)v15 + 1;
      }
      else
      {
        v9 = v8;
        v10 = v8 + 1;
        v11 = &v7[v9];
      }
    }
    else
    {
      v17 = (_QWORD *)sub_186B270(0x18u);
      v7 = v17 + 1;
      *v17 = 2;
      v10 = 1;
      *(_QWORD *)(a2 + 16) = v7;
      v11 = v7;
    }
    *v11 = a1;
    *((_DWORD *)v7 - 1) = v10;
    result = (unsigned int)(*(_DWORD *)(a2 + 44) + 1);
    v12 = *(_BYTE *)(a2 + 48) == 0;
    *(_DWORD *)(a1 + 44) = result;
    if ( !v12 )
    {
      result = *(_QWORD *)(a2 + 8);
      for ( *(_BYTE *)(a2 + 48) = 0; result; result = *(_QWORD *)(result + 8) )
      {
        if ( !*(_BYTE *)(result + 48) )
          break;
        *(_BYTE *)(result + 48) = 0;
      }
    }
  }
  return result;
}

