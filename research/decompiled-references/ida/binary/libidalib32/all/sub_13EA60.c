char __fastcall sub_13EA60(__int64 a1)
{
  int v1; // edx
  char result; // al

  v1 = *(_DWORD *)(a1 + 84);
  if ( v1 >= 0 )
    return v1 != 0;
  *(_DWORD *)(a1 + 84) = reg_int_op() != 0;
  result = qgetenv();
  if ( !result )
    return *(_DWORD *)(a1 + 84) > 0;
  *(_DWORD *)(a1 + 84) = 1;
  return result;
}

