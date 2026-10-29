__int64 __fastcall sub_4C51C0(__int64 a1, __int64 a2, _QWORD *a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 v6; // rbx
  _QWORD *v7; // rdx
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // r12d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = a2;
  v7 = (_QWORD *)*a3;
  if ( v7 )
  {
    *((_DWORD *)v7 - 1) = 0;
    result = *(unsigned int *)(a2 + 32);
    v9 = a2 + 8 * result;
    if ( (_DWORD)result )
    {
      do
      {
        v12 = *(_QWORD *)(v6 + 48);
        v13 = *((_DWORD *)v7 - 1);
        if ( v13 == *((_DWORD *)v7 - 2) )
        {
          v14 = (3 * v13 + 1) >> 1;
          v15 = 8 * v14 + 8;
          if ( 8 * v13 + 8 >= (unsigned int)v15 || v13 >= v14 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_DFB18(v19, "Overflow encountered when expanding vector", v4);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v19);
            sub_233E40((__int64)v19);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v16 = (unsigned int *)sub_186B300(v7 - 1, v15);
          v17 = v16[1];
          v7 = v16 + 2;
          *v16 = v14;
          *a3 = v16 + 2;
          LODWORD(v16) = v17;
          v11 = &v7[v17];
          result = (unsigned int)((_DWORD)v16 + 1);
        }
        else
        {
          v10 = v13;
          result = v13 + 1;
          v11 = &v7[v10];
        }
LABEL_5:
        v6 += 8;
        *v11 = v12;
        *((_DWORD *)v7 - 1) = result;
      }
      while ( v6 != v9 );
    }
  }
  else
  {
    result = *(unsigned int *)(a2 + 32);
    if ( (_DWORD)result )
    {
      v12 = *(_QWORD *)(a2 + 48);
      v9 = a2 + 8 * result;
      v18 = (_QWORD *)sub_186B270(0x18u);
      v7 = v18 + 1;
      *v18 = 2;
      result = 1;
      *a3 = v7;
      v11 = v7;
      goto LABEL_5;
    }
  }
  return result;
}

