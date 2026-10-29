__int64 __fastcall sub_732750(__int64 a1, __int64 a2)
{
  int v3; // eax
  _DWORD *v4; // rbp
  _DWORD *v5; // r12
  _BYTE *v6; // rax
  __int64 v7; // rdi
  const char *v8; // rsi
  __int64 v9; // rdi
  _BYTE *v10; // rax
  const char *v11; // rsi
  _DWORD *v12; // rbp
  _DWORD *v13; // r12
  _BYTE *v14; // rax
  __int64 v15; // rdi
  const char *v16; // rsi
  __int64 v17; // rdi
  _BYTE *v18; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v3 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v3 = sub_C4A760(a1);
  if ( v3 )
  {
    sub_5FF0F0(a2, "[[clang::callable_when");
    sub_5FF0F0(a2, &byte_3B9466E);
    v12 = *(_DWORD **)(a1 + 40);
    v13 = &v12[*(unsigned int *)(a1 + 36)];
    if ( v12 != v13 )
    {
      sub_5FF0F0(a2, "(");
      while ( 1 )
      {
        v14 = *(_BYTE **)(a2 + 32);
        if ( *(_BYTE **)(a2 + 24) == v14 )
        {
          v15 = sub_26240F0(a2, "\"", 1);
        }
        else
        {
          *v14 = 34;
          v15 = a2;
          ++*(_QWORD *)(a2 + 32);
        }
        v16 = "consumed";
        if ( *v12 != 1 )
        {
          v16 = "unconsumed";
          if ( *v12 != 2 )
            v16 = "unknown";
        }
        v17 = sub_5FF0F0(v15, v16);
        v18 = *(_BYTE **)(v17 + 32);
        if ( *(_BYTE **)(v17 + 24) == v18 )
        {
          ++v12;
          sub_26240F0(v17, "\"", 1);
          if ( v13 == v12 )
          {
LABEL_28:
            sub_5FF0F0(a2, &byte_3B9466E);
            sub_5FF0F0(a2, ")");
            goto LABEL_29;
          }
        }
        else
        {
          ++v12;
          *v18 = 34;
          ++*(_QWORD *)(v17 + 32);
          if ( v13 == v12 )
            goto LABEL_28;
        }
        sub_5FF0F0(a2, ", ");
      }
    }
    sub_5FF0F0(a2, &byte_3B9466E);
LABEL_29:
    v11 = "]]";
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((callable_when");
    sub_5FF0F0(a2, &byte_3B9466E);
    v4 = *(_DWORD **)(a1 + 40);
    v5 = &v4[*(unsigned int *)(a1 + 36)];
    if ( v4 != v5 )
    {
      sub_5FF0F0(a2, "(");
      while ( 1 )
      {
        v6 = *(_BYTE **)(a2 + 32);
        if ( *(_BYTE **)(a2 + 24) == v6 )
        {
          v7 = sub_26240F0(a2, "\"", 1);
        }
        else
        {
          *v6 = 34;
          v7 = a2;
          ++*(_QWORD *)(a2 + 32);
        }
        v8 = "consumed";
        if ( *v4 != 1 )
        {
          v8 = "unconsumed";
          if ( *v4 != 2 )
            v8 = "unknown";
        }
        v9 = sub_5FF0F0(v7, v8);
        v10 = *(_BYTE **)(v9 + 32);
        if ( *(_BYTE **)(v9 + 24) == v10 )
        {
          ++v4;
          sub_26240F0(v9, "\"", 1);
          if ( v5 == v4 )
          {
LABEL_15:
            sub_5FF0F0(a2, &byte_3B9466E);
            sub_5FF0F0(a2, ")");
            goto LABEL_16;
          }
        }
        else
        {
          ++v4;
          *v10 = 34;
          ++*(_QWORD *)(v9 + 32);
          if ( v5 == v4 )
            goto LABEL_15;
        }
        sub_5FF0F0(a2, ", ");
      }
    }
    sub_5FF0F0(a2, &byte_3B9466E);
LABEL_16:
    v11 = "))";
  }
  return sub_5FF0F0(a2, v11);
}

