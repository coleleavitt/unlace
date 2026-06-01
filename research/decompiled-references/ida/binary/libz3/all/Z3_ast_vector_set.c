void __fastcall Z3_ast_vector_set(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rbx
  char v7; // bp
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi

  v6 = a3;
  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v7 )
    sub_29E920(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  v8 = *(_QWORD *)(a2 + 32);
  if ( !v8 || (unsigned int)v6 >= *(_DWORD *)(v8 - 4) )
  {
    sub_24EA30(a1, 2u, nullptr);
    if ( !v7 )
      return;
LABEL_13:
    byte_1C7EBA0 = 1;
    return;
  }
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  v9 = 8 * v6;
  v10 = (__int64 *)(v9 + v8);
  v11 = *v10;
  if ( *v10 )
  {
    v12 = *(_QWORD *)(a2 + 24);
    if ( (*(_DWORD *)(v11 + 8))-- == 1 )
    {
      sub_15D7BC0(v12, v11);
      v10 = (__int64 *)(v9 + *(_QWORD *)(a2 + 32));
    }
  }
  *v10 = a4;
  if ( v7 )
    goto LABEL_13;
}

