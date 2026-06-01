__int64 __fastcall sub_E26050(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // r14d
  size_t v14; // rsi
  unsigned int *v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  unsigned int *v18; // rax
  _QWORD *v19; // rax
  char **exception; // rbx
  __int64 v21[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = 0;
  v7 = *(_QWORD *)(a1 + 112);
  if ( v7 )
  {
    while ( v6 < *(_DWORD *)(v7 - 4) )
    {
      v8 = v7 + 40LL * v6;
      if ( !*(_BYTE *)(v8 + 32) )
      {
        v11 = *(_QWORD *)(a1 + 272);
        *(_BYTE *)(v8 + 32) = 1;
        if ( v11 )
        {
          v12 = *(unsigned int *)(v11 - 4);
          if ( (_DWORD)v12 != *(_DWORD *)(v11 - 8) )
          {
            *(_DWORD *)(v11 + 4 * v12) = v6++;
            ++*(_DWORD *)(v11 - 4);
            continue;
          }
          v13 = (unsigned int)(3 * v12 + 1) >> 1;
          v14 = 4 * v13 + 8;
          if ( 4 * (int)v12 + 8 >= (unsigned int)v14 || (unsigned int)v12 >= v13 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v21, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v21);
            sub_233E40((__int64)v21);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v15 = (unsigned int *)sub_186B300((void *)(v11 - 8), v14);
          v7 = *(_QWORD *)(a1 + 112);
          v16 = v15 + 2;
          *v15 = v13;
          v17 = v15[1];
          *(_QWORD *)(a1 + 272) = v16;
          v18 = (unsigned int *)v16 + v17;
        }
        else
        {
          v19 = (_QWORD *)sub_186B270(0x10u);
          v7 = *(_QWORD *)(a1 + 112);
          v16 = v19 + 1;
          *v19 = 2;
          *(_QWORD *)(a1 + 272) = v19 + 1;
          v18 = (unsigned int *)(v19 + 1);
        }
        *v18 = v6;
        ++*((_DWORD *)v16 - 1);
        if ( !v7 )
          break;
      }
      ++v6;
    }
  }
  sub_E24F50((_QWORD *)a1);
  v9 = *(_QWORD *)(a1 + 272);
  if ( v9 )
    *(_DWORD *)(v9 - 4) = 0;
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 104) + 216LL))(
           *(_QWORD *)(a1 + 104),
           a2,
           a3);
}

