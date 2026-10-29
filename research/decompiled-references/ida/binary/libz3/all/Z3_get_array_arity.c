__int64 __fastcall Z3_get_array_arity(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_299890();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( (unsigned int)Z3_get_sort_kind(a1, a2) != 5 )
  {
    sub_24EA30(a1, 3u, "sort should be an array");
    result = 0;
    if ( !v2 )
      return result;
LABEL_10:
    byte_1C7EBA0 = 1;
    return result;
  }
  v3 = *(_QWORD *)(a2 + 24);
  result = 0xFFFFFFFFLL;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 8);
    if ( v5 )
      result = (unsigned int)(*(_DWORD *)(v5 - 4) - 1);
  }
  if ( v2 )
    goto LABEL_10;
  return result;
}

