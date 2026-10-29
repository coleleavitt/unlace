__int64 __fastcall sub_E26200(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned int v15; // r15d
  size_t v16; // rsi
  unsigned int *v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  unsigned int *v20; // rax
  _QWORD *v21; // rax
  char **exception; // rbx
  __int64 v23[11]; // [rsp+10h] [rbp-58h] BYREF

  v8 = 0;
  v9 = *(_QWORD *)(a1 + 112);
  if ( v9 )
  {
    while ( v8 < *(_DWORD *)(v9 - 4) )
    {
      v10 = v9 + 40LL * v8;
      if ( !*(_BYTE *)(v10 + 32) )
      {
        v13 = *(_QWORD *)(a1 + 272);
        *(_BYTE *)(v10 + 32) = 1;
        if ( v13 )
        {
          v14 = *(unsigned int *)(v13 - 4);
          if ( (_DWORD)v14 != *(_DWORD *)(v13 - 8) )
          {
            *(_DWORD *)(v13 + 4 * v14) = v8++;
            ++*(_DWORD *)(v13 - 4);
            continue;
          }
          v15 = (unsigned int)(3 * v14 + 1) >> 1;
          v16 = 4 * v15 + 8;
          if ( 4 * (int)v14 + 8 >= (unsigned int)v16 || (unsigned int)v14 >= v15 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v23, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v23);
            sub_233E40((__int64)v23);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v17 = (unsigned int *)sub_186B300((void *)(v13 - 8), v16);
          v9 = *(_QWORD *)(a1 + 112);
          v18 = v17 + 2;
          *v17 = v15;
          v19 = v17[1];
          *(_QWORD *)(a1 + 272) = v18;
          v20 = (unsigned int *)v18 + v19;
        }
        else
        {
          v21 = (_QWORD *)sub_186B270(0x10u);
          v9 = *(_QWORD *)(a1 + 112);
          v18 = v21 + 1;
          *v21 = 2;
          *(_QWORD *)(a1 + 272) = v21 + 1;
          v20 = (unsigned int *)(v21 + 1);
        }
        *v20 = v8;
        ++*((_DWORD *)v18 - 1);
        if ( !v9 )
          break;
      }
      ++v8;
    }
  }
  sub_E24F50((_QWORD *)a1);
  v11 = *(_QWORD *)(a1 + 272);
  if ( v11 )
    *(_DWORD *)(v11 - 4) = 0;
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 104) + 264LL))(
           *(_QWORD *)(a1 + 104),
           a2,
           a3,
           a4);
}

