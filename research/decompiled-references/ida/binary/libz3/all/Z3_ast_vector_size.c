__int64 __fastcall Z3_ast_vector_size(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29E8A0();
    *(_DWORD *)(a1 + 1520) = 0;
    v5 = *(_QWORD *)(a2 + 32);
    if ( v5 )
      result = *(unsigned int *)(v5 - 4);
    else
      result = 0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    v3 = *(_QWORD *)(a2 + 32);
    if ( v3 )
      return *(unsigned int *)(v3 - 4);
    else
      return 0;
  }
  return result;
}

