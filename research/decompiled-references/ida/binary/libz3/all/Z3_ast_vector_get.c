__int64 __fastcall Z3_ast_vector_get(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  char v4; // bp
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29E8E0(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  v5 = *(_QWORD *)(a2 + 32);
  if ( !v5 || (unsigned int)v3 >= *(_DWORD *)(v5 - 4) )
  {
    sub_24EA30(a1, 2u, nullptr);
    if ( !v4 )
      return 0;
    sub_2BB620(0);
    result = 0;
LABEL_11:
    byte_1C7EBA0 = 1;
    return result;
  }
  result = *(_QWORD *)(v5 + 8 * v3);
  if ( v4 )
  {
    v7 = result;
    sub_2BB620(result);
    result = v7;
    goto LABEL_11;
  }
  return result;
}

