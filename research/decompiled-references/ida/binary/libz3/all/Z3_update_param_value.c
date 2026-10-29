char __fastcall Z3_update_param_value(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r12
  char result; // al
  char v6; // [rsp+0h] [rbp-38h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_294C00();
  *(_DWORD *)(a1 + 1520) = 0;
  sub_15B10B0(a1 + 96);
  if ( (unsigned __int8)sub_15B14C0(a1 + 96, a2) )
  {
    result = sub_1875640("parameter %s can only be set for the shell, not binary API", v6);
    if ( !v4 )
      return result;
LABEL_7:
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
    return result;
  }
  sub_15B10B0(a1 + 96);
  result = sub_15B1D60(a1 + 96, a2, a3);
  if ( v4 )
    goto LABEL_7;
  return result;
}

