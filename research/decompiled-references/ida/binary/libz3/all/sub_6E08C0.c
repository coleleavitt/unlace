__int64 __fastcall sub_6E08C0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v4; // r13d
  _QWORD *v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rsi
  unsigned int v13; // ecx
  size_t v14; // rsi
  unsigned int *v15; // rax
  _DWORD *v16; // rdx
  __int64 v17; // rdi
  __int64 *v18; // rbx
  _QWORD *v19; // rax
  char **exception; // rbp
  unsigned int v21; // [rsp+0h] [rbp-7Ch]
  __int64 v22[11]; // [rsp+24h] [rbp-58h] BYREF

  result = a2[1];
  if ( result )
  {
    v4 = 0;
    do
    {
      if ( v4 >= *(_DWORD *)(result - 4) )
        return result;
      sub_150B150(a1 + 1040);
      v6 = *(_QWORD **)(a1 + 1144);
      if ( v6 )
      {
        v7 = *((_DWORD *)v6 - 1);
        if ( v7 == *((_DWORD *)v6 - 2) )
        {
          v13 = (3 * v7 + 1) >> 1;
          v14 = 8 * v13 + 8;
          if ( 8 * v7 + 8 >= (unsigned int)v14 || v7 >= v13 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v22, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v22);
            sub_233E40((__int64)v22);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v21 = (3 * v7 + 1) >> 1;
          v15 = (unsigned int *)sub_186B300(v6 - 1, v14);
          v16 = v15 + 2;
          *(_QWORD *)(a1 + 1144) = v15 + 2;
          *v15 = v21;
          LODWORD(v15) = v15[1];
          *(_QWORD *)&v16[2 * (unsigned int)v15] = 0;
          *(v16 - 1) = (_DWORD)v15 + 1;
          goto LABEL_16;
        }
        v8 = v7;
        v9 = v7 + 1;
        v10 = &v6[v8];
      }
      else
      {
        v19 = (_QWORD *)sub_186B270(0x18u);
        v6 = v19 + 1;
        *v19 = 2;
        v9 = 1;
        *(_QWORD *)(a1 + 1144) = v6;
        v10 = v6;
      }
      *v10 = 0;
      *((_DWORD *)v6 - 1) = v9;
LABEL_16:
      result = a2[1];
      v17 = *a2;
      v18 = (__int64 *)(result + 8LL * v4);
      v11 = *v18;
      if ( *v18 )
      {
        if ( (*(_DWORD *)(v11 + 8))-- == 1 )
        {
          sub_15D7BC0(v17, v11);
          result = a2[1];
        }
      }
      *v18 = 0;
      ++v4;
    }
    while ( result );
  }
  return result;
}

