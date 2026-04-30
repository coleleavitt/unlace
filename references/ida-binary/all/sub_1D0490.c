char __fastcall sub_1D0490(__int64 a1, const char *a2, __int64 *a3)
{
  char *v4; // rbp
  void *v6; // rdi
  unsigned __int64 v7; // r15
  size_t v8; // r12
  char v9; // r13
  char v10; // r14
  size_t v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r15

  v4 = (char *)a2;
  if ( !strcmp("<Database>", a2) )
  {
    v7 = 8;
    v8 = 7;
    v9 = 1;
    v10 = 1;
    v4 = "Default";
    goto LABEL_7;
  }
  if ( strcmp("<Database debugger>", a2) )
  {
    if ( !strcmp("<Current Database>", a2) )
    {
      v7 = 5;
      v8 = 4;
      v9 = 1;
      v10 = 1;
      v4 = "Live";
    }
    else if ( !strcmp("<Current Database debugger>", a2) )
    {
      v7 = 5;
      v8 = 4;
      v9 = 2;
      v10 = 1;
      v4 = "Live";
    }
    else if ( !strcmp("<Default>", a2) )
    {
      v7 = 8;
      v8 = 7;
      v9 = 1;
      v10 = 0;
      v4 = "Default";
    }
    else if ( !strcmp("<Default debugger>", a2) || (LODWORD(v11) = strcmp("<Debugger>", a2), !(_DWORD)v11) )
    {
      v7 = 8;
      v8 = 7;
      v9 = 2;
      v10 = 0;
      v4 = "Default";
    }
    else
    {
      v9 = 1;
      if ( a3 )
      {
        v13 = a3[1];
        if ( (int)v13 <= 0 )
        {
          LOBYTE(v11) = 0;
        }
        else
        {
          v14 = *a3;
          v15 = v14 + 24LL * (unsigned int)(v13 - 1) + 24;
          do
          {
            LOBYTE(v11) = sub_1D0460(v14, "Stack view");
            if ( (_BYTE)v11 )
              break;
            LOBYTE(v11) = sub_1D0460(v14, "General registers");
            if ( (_BYTE)v11 )
              break;
            LOBYTE(v11) = sub_1D0460(v14, "Threads");
            if ( (_BYTE)v11 )
              break;
            LOBYTE(v11) = sub_1D0460(v14, "Modules");
            if ( (_BYTE)v11 )
              break;
            LOBYTE(v11) = sub_1D0460(v14, "IDA View-EIP");
            if ( (_BYTE)v11 )
              break;
            LOBYTE(v11) = sub_1D0460(v14, "IDA View-RIP");
            if ( (_BYTE)v11 )
              break;
            v14 += 24;
          }
          while ( v15 != v14 );
        }
        v9 = v11 + 1;
      }
      if ( !a2 || (v11 = strlen(a2), (v8 = v11) == 0) )
      {
        *(_QWORD *)(a1 + 8) = 0;
        v10 = 0;
        goto LABEL_5;
      }
      v7 = v11 + 1;
      v10 = 0;
    }
LABEL_7:
    v6 = *(void **)a1;
    if ( *(_QWORD *)(a1 + 16) >= v7 )
      goto LABEL_4;
LABEL_8:
    v12 = qvector_reserve(a1, v6, v7, 1);
    *(_QWORD *)a1 = v12;
    v6 = (void *)v12;
    goto LABEL_4;
  }
  v6 = *(void **)a1;
  v7 = 8;
  v8 = 7;
  v9 = 2;
  v4 = "Default";
  v10 = 1;
  if ( *(_QWORD *)(a1 + 16) < 8u )
    goto LABEL_8;
LABEL_4:
  *(_QWORD *)(a1 + 8) = v7;
  memmove(v6, v4, v8);
  v11 = *(_QWORD *)a1;
  *(_BYTE *)(*(_QWORD *)a1 + v8) = 0;
LABEL_5:
  *(_BYTE *)(a1 + 24) = v10;
  *(_BYTE *)(a1 + 25) = v9;
  return v11;
}
