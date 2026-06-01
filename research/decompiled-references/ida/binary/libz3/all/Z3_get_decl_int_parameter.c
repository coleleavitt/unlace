__int64 __fastcall Z3_get_decl_int_parameter(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int *v7; // rax
  __int64 result; // rax

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_29A240();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      result = 0;
      goto LABEL_17;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      return 0;
    }
  }
  v5 = *(_QWORD *)(a2 + 24);
  if ( v5 && (v6 = *(_QWORD *)(v5 + 8)) != 0 && a3 < *(_DWORD *)(v6 - 4) )
  {
    v7 = (unsigned int *)(16LL * a3 + v6);
    if ( !*((_BYTE *)v7 + 8) )
    {
      result = *v7;
      goto LABEL_12;
    }
    sub_24EA30(a1, 3u, nullptr);
  }
  else
  {
    sub_24EA30(a1, 2u, nullptr);
  }
  result = 0;
LABEL_12:
  if ( v4 )
LABEL_17:
    byte_1C7EBA0 = 1;
  return result;
}

