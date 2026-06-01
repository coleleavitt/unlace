__int64 __fastcall Z3_param_descrs_get_name(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  char v5; // bp
  __int64 result; // rax

  v4 = a2;
  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_295010(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a2 )
    v4 = a2 + 24;
  if ( a3 >= (unsigned int)sub_1858490(v4) )
  {
    sub_24EA30(a1, 2u, nullptr);
    result = 0;
    if ( !v5 )
      return result;
LABEL_9:
    byte_1C7EBA0 = 1;
    return result;
  }
  result = sub_18584B0(v4, a3);
  if ( v5 )
    goto LABEL_9;
  return result;
}

