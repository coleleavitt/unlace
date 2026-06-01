__int64 __fastcall Z3_get_decl_symbol_parameter(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // r12
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rax

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29A2C0();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2 || !*(_DWORD *)(a2 + 8) )
  {
    sub_24EA30(a1, 3u, "not a valid ast");
LABEL_6:
    result = 0;
    goto LABEL_7;
  }
  v6 = *(_QWORD *)(a2 + 24);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 8)) == 0 || a3 >= *(_DWORD *)(v7 - 4) )
  {
    sub_24EA30(a1, 2u, nullptr);
    goto LABEL_6;
  }
  v8 = (__int64 *)(16LL * a3 + v7);
  if ( *((_BYTE *)v8 + 8) != 2 )
  {
    sub_24EA30(a1, 3u, nullptr);
    goto LABEL_6;
  }
  result = *v8;
LABEL_7:
  if ( v4 )
    byte_1C7EBA0 = 1;
  return result;
}

