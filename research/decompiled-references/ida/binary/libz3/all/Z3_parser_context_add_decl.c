char __fastcall Z3_parser_context_add_decl(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // bp
  __int64 v6; // rax
  __int64 v7; // rdi
  char result; // al
  _QWORD v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_29C220();
  v6 = *(_QWORD *)(a3 + 16);
  v7 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 1520) = 0;
  v9[0] = v6;
  result = sub_E06850(v7, v9, a3);
  if ( v5 )
  {
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  return result;
}

