__int64 __fastcall sub_828160(_DWORD *a1, _QWORD *a2)
{
  char **exception; // rbx
  __int64 v3; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r13
  int *v8; // rbx
  int v9; // r12d
  int *v10; // r13
  __int64 v11; // rax
  _DWORD *v12; // rcx
  unsigned int v13; // r14d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19[9]; // [rsp+2h] [rbp-48h] BYREF

  v3 = (unsigned int)(a1[15] + 1);
  if ( (_DWORD)v3 != a1[8] || a1[4] != -2 )
    return 0;
  v6 = (_QWORD *)*a2;
  if ( *a2 )
  {
    *((_DWORD *)v6 - 1) = 0;
    v7 = (unsigned int)a1[8];
    if ( v7 * 4 )
    {
      v8 = a1 + 16;
      v9 = a1[16];
      v10 = &a1[v7 + 16];
      while ( 1 )
      {
        v11 = *((unsigned int *)v6 - 1);
        v12 = (_DWORD *)v6 + v11;
        if ( (_DWORD)v11 == *((_DWORD *)v6 - 2) )
        {
          v13 = (unsigned int)(3 * v11 + 1) >> 1;
          v14 = 4 * v13 + 8;
          if ( 4 * (int)v11 + 8 >= (unsigned int)v14 || (unsigned int)v11 >= v13 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v19, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v19);
            sub_233E40((__int64)v19);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          ++v8;
          v15 = (unsigned int *)sub_186B300(v6 - 1, v14);
          v6 = v15 + 2;
          *v15 = v13;
          v16 = v15[1];
          *a2 = v6;
          *((_DWORD *)v6 + v16) = v9;
          ++*((_DWORD *)v6 - 1);
          if ( v10 == v8 )
            return 1;
        }
        else
        {
LABEL_7:
          ++v8;
          *v12 = v9;
          ++*((_DWORD *)v6 - 1);
          if ( v10 == v8 )
            return 1;
        }
        v9 = *v8;
      }
    }
  }
  else
  {
    v8 = a1 + 16;
    v17 = v3;
    v10 = &a1[v17 + 16];
    if ( v17 * 4 )
    {
      v9 = a1[16];
      v18 = (_QWORD *)sub_186B270(0x10u);
      v6 = v18 + 1;
      *v18 = 2;
      *a2 = v18 + 1;
      v12 = v18 + 1;
      goto LABEL_7;
    }
  }
  return 1;
}

