__int64 __fastcall Z3_get_sort_name(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // r12
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v3 = v2;
  if ( v2 )
    sub_2996D0();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2 || *(_WORD *)(a2 + 4) != 3 )
  {
    sub_24EA30(a1, 3u, "ast is not a sort");
    goto LABEL_6;
  }
  if ( !*(_DWORD *)(a2 + 8) )
  {
    sub_24EA30(a1, 3u, "not a valid ast");
LABEL_6:
    result = 0;
    if ( !v3 )
      return result;
LABEL_10:
    byte_1C7EBA0 = 1;
    return result;
  }
  result = *(_QWORD *)(a2 + 16);
  if ( v3 )
    goto LABEL_10;
  return result;
}

