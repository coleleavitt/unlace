__int64 __fastcall sub_BE15D0(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rbp
  __int64 result; // rax
  __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // r12
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 *v9; // rcx
  unsigned int v10; // r13d
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  result = *(_QWORD *)(v2 + 112);
  if ( !*(_BYTE *)(result + 420) && !*(_BYTE *)(a1 + 53) )
  {
    v4 = sub_180C100(v2 + 8400, 24);
    v5 = *(_QWORD **)(v2 + 9456);
    v6 = v4;
    *(_QWORD *)v4 = off_1C54EE8;
    *(_QWORD *)(v4 + 8) = a1 + 53;
    *(_BYTE *)(v4 + 16) = 0;
    if ( v5 )
    {
      v7 = *((_DWORD *)v5 - 1);
      if ( v7 == *((_DWORD *)v5 - 2) )
      {
        v10 = (3 * v7 + 1) >> 1;
        v11 = 8 * v10 + 8;
        if ( 8 * v7 + 8 >= (unsigned int)v11 || v7 >= v10 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v15, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v15);
          sub_233E40((__int64)v15);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v12 = (unsigned int *)sub_186B300(v5 - 1, v11);
        v13 = v12[1];
        v5 = v12 + 2;
        *(_QWORD *)(v2 + 9456) = v12 + 2;
        *v12 = v10;
        LODWORD(v12) = v13;
        v9 = &v5[v13];
        result = (unsigned int)((_DWORD)v12 + 1);
      }
      else
      {
        v8 = v7;
        result = v7 + 1;
        v9 = &v5[v8];
      }
    }
    else
    {
      v14 = (_QWORD *)sub_186B270(0x18u);
      v5 = v14 + 1;
      *v14 = 2;
      result = 1;
      *(_QWORD *)(v2 + 9456) = v5;
      v9 = v5;
    }
    *v9 = v6;
    *((_DWORD *)v5 - 1) = result;
    *(_BYTE *)(a1 + 53) = 1;
  }
  return result;
}

