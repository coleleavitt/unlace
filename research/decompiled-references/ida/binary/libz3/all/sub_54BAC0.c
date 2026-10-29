__int64 __fastcall sub_54BAC0(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r12
  __int64 v5; // rbx
  _QWORD *v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // rsi
  int v9; // eax
  _QWORD *v10; // rsi
  unsigned int v12; // r14d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  char **exception; // rbx
  __int64 v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v1 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 40LL))(*(_QWORD *)(a1 + 8), a1 + 16);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = v2;
  for ( *(_BYTE *)(v2 + 28) = *(_BYTE *)(a1 + 28); v3; *((_DWORD *)v6 - 1) = v9 )
  {
    if ( v1 >= *(_DWORD *)(v3 - 4) )
      break;
    v5 = *(_QWORD *)(v3 + 8LL * v1);
    if ( v5 )
      ++*(_DWORD *)(v5 + 8);
    v6 = *(_QWORD **)(v4 + 40);
    if ( v6 )
    {
      v7 = *((_DWORD *)v6 - 1);
      if ( v7 == *((_DWORD *)v6 - 2) )
      {
        v12 = (3 * v7 + 1) >> 1;
        v13 = 8 * v12 + 8;
        if ( 8 * v7 + 8 >= (unsigned int)v13 || v7 >= v12 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v18, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v18);
          sub_233E40((__int64)v18);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v14 = (unsigned int *)sub_186B300(v6 - 1, v13);
        v15 = v14[1];
        v6 = v14 + 2;
        *(_QWORD *)(v4 + 40) = v14 + 2;
        *v14 = v12;
        LODWORD(v14) = v15;
        v10 = &v6[v15];
        v3 = *(_QWORD *)(a1 + 40);
        v9 = (_DWORD)v14 + 1;
      }
      else
      {
        v8 = v7;
        v9 = v7 + 1;
        v10 = &v6[v8];
      }
    }
    else
    {
      v16 = (_QWORD *)sub_186B270(0x18u);
      v6 = v16 + 1;
      *v16 = 2;
      v9 = 1;
      *(_QWORD *)(v4 + 40) = v6;
      v10 = v6;
      v3 = *(_QWORD *)(a1 + 40);
    }
    *v10 = v5;
    ++v1;
  }
  return v4;
}

