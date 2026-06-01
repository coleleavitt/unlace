__int64 __fastcall sub_7C7230(__int64 a1, __int64 a2, _QWORD *a3)
{
  char **exception; // rbx
  _QWORD *v4; // rbx
  __int64 result; // rax
  _QWORD *v6; // r13
  _DWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  _QWORD *v13; // rdx
  int v14; // r14d
  __int64 v15; // rax
  unsigned int v16; // r15d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = (_QWORD *)(a2 + 32);
  result = 8LL * *(unsigned int *)(a2 + 24);
  v6 = (_QWORD *)(a2 + 32 + result);
  if ( result )
  {
    do
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88), *v4);
      v13 = (_QWORD *)*a3;
      v14 = v12;
      if ( *a3 )
      {
        v15 = *((unsigned int *)v13 - 1);
        if ( (_DWORD)v15 == *((_DWORD *)v13 - 2) )
        {
          v16 = (unsigned int)(3 * v15 + 1) >> 1;
          v17 = 4 * v16 + 8;
          if ( 4 * (int)v15 + 8 >= (unsigned int)v17 || (unsigned int)v15 >= v16 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v21, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v21);
            sub_233E40((__int64)v21);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v18 = (unsigned int *)sub_186B300(v13 - 1, v17);
          v13 = v18 + 2;
          *v18 = v16;
          v19 = v18[1];
          *a3 = v13;
          v9 = (_DWORD *)v13 + v19;
        }
        else
        {
          v9 = (_DWORD *)v13 + v15;
        }
      }
      else
      {
        v20 = (_QWORD *)sub_186B270(0x10u);
        v13 = v20 + 1;
        *v20 = 2;
        *a3 = v20 + 1;
        v9 = v20 + 1;
      }
      *v9 = v14;
      v10 = *((unsigned int *)v13 - 1);
      ++v4;
      v11 = *(_QWORD *)(a1 + 24);
      *((_DWORD *)v13 - 1) = v10 + 1;
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 32LL))(v11, *((_DWORD *)v13 + v10) >> 1);
    }
    while ( v6 != v4 );
  }
  return result;
}

