__int64 __fastcall Z3_get_pattern_num_terms(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29AC40();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( (unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 232), a2) )
  {
    result = *(unsigned int *)(a2 + 24);
    if ( !v2 )
      return result;
LABEL_7:
    byte_1C7EBA0 = 1;
    return result;
  }
  sub_24EA30(a1, 1u, nullptr);
  result = 0;
  if ( v2 )
    goto LABEL_7;
  return result;
}

