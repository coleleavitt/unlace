__int64 __fastcall sub_8077A0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  int *v4; // rax
  int v5; // eax
  _QWORD *v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rax
  unsigned int v10; // r12d
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( !*(_WORD *)(a2 + 4)
    && ((v4 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr ? (v5 = -1) : (v5 = *v4), *(_DWORD *)(a1 - 36) == v5) )
  {
    v7 = *(_QWORD **)(a1 + 16);
    if ( v7 )
    {
      v8 = *((unsigned int *)v7 - 1);
      if ( (_DWORD)v8 == *((_DWORD *)v7 - 2) )
      {
        v10 = (unsigned int)(3 * v8 + 1) >> 1;
        v11 = 16 * v10 + 8;
        if ( 16 * (int)v8 + 8 >= (unsigned int)v11 || (unsigned int)v8 >= v10 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v15, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v15);
          sub_233E40((__int64)v15);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v12 = (unsigned int *)sub_186B300(v7 - 1, v11);
        v7 = v12 + 2;
        *v12 = v10;
        v13 = v12[1];
        *(_QWORD *)(a1 + 16) = v7;
        v9 = &v7[2 * v13];
      }
      else
      {
        v9 = &v7[2 * v8];
      }
    }
    else
    {
      v14 = (_QWORD *)sub_186B270(0x28u);
      v7 = v14 + 1;
      *v14 = 2;
      *(_QWORD *)(a1 + 16) = v14 + 1;
      v9 = v14 + 1;
    }
    *v9 = a2;
    *((_DWORD *)v9 + 2) = 0;
    ++*((_DWORD *)v7 - 1);
    return 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 480LL))(*(_QWORD *)(a1 + 64), a2);
    return 1;
  }
}

