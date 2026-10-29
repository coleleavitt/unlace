__int64 __fastcall sub_78B630(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  bool v5; // zf
  __int64 v6; // rax
  _QWORD *v7; // rdi
  int v8; // r13d
  __int64 v9; // rax
  unsigned int v10; // r12d
  size_t v11; // rsi
  unsigned int *v12; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // r12d
  _QWORD *v18; // rax
  char **exception; // rbx
  __int64 v20[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 296) )
  {
    while ( 1 )
    {
      sub_1623DD0(*(_QWORD *)(a1 + 200));
      v6 = *(_QWORD *)(a1 + 160);
      if ( v6 )
      {
        v7 = *(_QWORD **)(a1 + 144);
        v8 = *(_DWORD *)(v6 - 4);
        if ( !v7 )
          goto LABEL_14;
      }
      else
      {
        v7 = *(_QWORD **)(a1 + 144);
        v8 = 0;
        if ( !v7 )
        {
LABEL_14:
          v18 = (_QWORD *)sub_186B270(0x10u);
          v7 = v18 + 1;
          *v18 = 2;
          *(_QWORD *)(a1 + 144) = v18 + 1;
          v4 = v18 + 1;
          goto LABEL_4;
        }
      }
      v9 = *((unsigned int *)v7 - 1);
      if ( (_DWORD)v9 == *((_DWORD *)v7 - 2) )
      {
        v10 = (unsigned int)(3 * v9 + 1) >> 1;
        v11 = 4 * v10 + 8;
        if ( 4 * (int)v9 + 8 >= (unsigned int)v11 || (unsigned int)v9 >= v10 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v20, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v20);
          sub_233E40((__int64)v20);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v12 = (unsigned int *)sub_186B300(v7 - 1, v11);
        v13 = v12 + 2;
        *v12 = v10;
        v14 = v12[1];
        *(_QWORD *)(a1 + 144) = v13;
        v13[v14] = v8;
        ++*(v13 - 1);
        v5 = (*(_DWORD *)(a1 + 296))-- == 1;
        if ( v5 )
          break;
      }
      else
      {
        v4 = (_DWORD *)v7 + v9;
LABEL_4:
        *v4 = v8;
        ++*((_DWORD *)v7 - 1);
        v5 = (*(_DWORD *)(a1 + 296))-- == 1;
        if ( v5 )
          break;
      }
    }
  }
  v15 = sub_7E6C80(*(_QWORD *)(a1 + 200));
  v16 = v15;
  if ( v15 == 0x7FFFFFFF )
    return sub_78B300(a1, a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 192) + 32LL))(*(_QWORD *)(a1 + 192), v15);
  return v16;
}

