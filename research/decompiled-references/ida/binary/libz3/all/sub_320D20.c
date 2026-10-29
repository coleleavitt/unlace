__int64 __fastcall sub_320D20(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rax
  _QWORD *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 *v11; // rdx
  _DWORD *v12; // rax
  unsigned int v13; // r12d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  char **exception; // rbx
  __int64 v19[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 856);
  result = *(_QWORD *)(v3 + 864);
  if ( v4 != a2 )
  {
    if ( a2 != result )
    {
      if ( !*(_WORD *)(a2 + 4)
        && (v12 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr
        && !*v12
        && v12[1] == 8
        && *(_DWORD *)(a2 + 24) == 1 )
      {
        return *(_QWORD *)(a2 + 32);
      }
      else
      {
        v6 = sub_15E1A70(v3);
        v4 = v6;
        if ( v6 )
          ++*(_DWORD *)(v6 + 8);
        v7 = *(_QWORD **)(a1 + 200);
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
              sub_24ABB0(v19, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v19);
              sub_233E40((__int64)v19);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v15 = (unsigned int *)sub_186B300(v7 - 1, v14);
            v16 = v15[1];
            v7 = v15 + 2;
            *v15 = v13;
            *(_QWORD *)(a1 + 200) = v15 + 2;
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
          *(_QWORD *)(a1 + 200) = v7;
          v11 = v7;
        }
        *v11 = v4;
        *((_DWORD *)v7 - 1) = v10;
      }
    }
    return v4;
  }
  return result;
}

