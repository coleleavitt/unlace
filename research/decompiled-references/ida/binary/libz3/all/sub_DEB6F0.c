void __fastcall sub_DEB6F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  bool v3; // zf
  _QWORD *v4; // rdx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  _QWORD *v12; // rcx
  unsigned int v13; // r12d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  char **exception; // rbx
  __int64 v19[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = (*(_DWORD *)(v2 + 16))-- == 1;
    v4 = *(_QWORD **)(a2 + 80);
    if ( v3 )
    {
      if ( v4 )
      {
        v9 = *((_DWORD *)v4 - 1);
        if ( v9 == *((_DWORD *)v4 - 2) )
        {
          v13 = (3 * v9 + 1) >> 1;
          v14 = 8 * v13 + 8;
          if ( 8 * v9 + 8 >= (unsigned int)v14 || v9 >= v13 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v19, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v19);
            sub_233E40((__int64)v19);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v15 = (unsigned int *)sub_186B300(v4 - 1, v14);
          v16 = v15[1];
          v4 = v15 + 2;
          *v15 = v13;
          *(_QWORD *)(a2 + 80) = v15 + 2;
          LODWORD(v15) = v16;
          v12 = &v4[v16];
          v11 = (_DWORD)v15 + 1;
        }
        else
        {
          v10 = v9;
          v11 = v9 + 1;
          v12 = &v4[v10];
        }
      }
      else
      {
        v17 = (_QWORD *)sub_186B270(0x18u);
        v4 = v17 + 1;
        *v17 = 2;
        v11 = 1;
        *(_QWORD *)(a2 + 80) = v4;
        v12 = v4;
      }
      *v12 = v2;
      *((_DWORD *)v4 - 1) = v11;
      goto LABEL_4;
    }
    while ( v4 )
    {
LABEL_4:
      v6 = *((_DWORD *)v4 - 1);
      if ( !v6 )
        return;
      v7 = (unsigned int)(v6 - 1);
      v8 = v4[v7];
      *((_DWORD *)v4 - 1) = v7;
      sub_DE31B0(a2, v8);
      v4 = *(_QWORD **)(a2 + 80);
    }
  }
}

