__int64 __fastcall Z3_get_quantifier_bound_name(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // bp
  __int64 result; // rax

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29AFC0();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( *(_WORD *)(a2 + 4) == 2 )
  {
    result = *(_QWORD *)(a2 + 8 * (a3 + (unsigned __int64)*(unsigned int *)(a2 + 20)) + 80);
    if ( !v4 )
      return result;
LABEL_7:
    byte_1C7EBA0 = 1;
    return result;
  }
  sub_24EA30(a1, 1u, nullptr);
  result = 0;
  if ( v4 )
    goto LABEL_7;
  return result;
}

