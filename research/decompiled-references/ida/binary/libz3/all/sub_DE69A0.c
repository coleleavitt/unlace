__int64 __fastcall sub_DE69A0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 result; // rax
  __int64 v4; // rbp
  _QWORD *v6; // rdi
  unsigned int v8; // eax
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  unsigned int v11; // r12d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16[7]; // [rsp+2h] [rbp-38h] BYREF

  result = *(unsigned int *)(a1 + 32);
  if ( !(_DWORD)result )
  {
    v4 = *(_QWORD *)(a1 + 40);
    if ( (*(_DWORD *)(v4 + 16))-- == 1 )
    {
      v6 = *(_QWORD **)(a2 + 80);
      if ( v6 )
      {
        v8 = *((_DWORD *)v6 - 1);
        if ( v8 == *((_DWORD *)v6 - 2) )
        {
          v11 = (3 * v8 + 1) >> 1;
          v12 = 8 * v11 + 8;
          if ( 8 * v8 + 8 >= (unsigned int)v12 || v8 >= v11 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v16, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v16);
            sub_233E40((__int64)v16);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v13 = (unsigned int *)sub_186B300(v6 - 1, v12);
          v14 = v13[1];
          v6 = v13 + 2;
          *v13 = v11;
          *(_QWORD *)(a2 + 80) = v13 + 2;
          LODWORD(v13) = v14;
          v10 = &v6[v14];
          result = (unsigned int)((_DWORD)v13 + 1);
        }
        else
        {
          v9 = v8;
          result = v8 + 1;
          v10 = &v6[v9];
        }
      }
      else
      {
        v15 = (_QWORD *)sub_186B270(0x18u);
        v6 = v15 + 1;
        *v15 = 2;
        result = 1;
        *(_QWORD *)(a2 + 80) = v6;
        v10 = v6;
      }
      *v10 = v4;
      *((_DWORD *)v6 - 1) = result;
    }
  }
  return result;
}

