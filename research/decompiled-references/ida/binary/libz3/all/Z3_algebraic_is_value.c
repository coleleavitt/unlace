__int64 __fastcall Z3_algebraic_is_value(__int64 a1, __int64 a2)
{
  char v2; // r12
  int v3; // edx
  _DWORD *v4; // rax
  __int64 result; // rax
  int v6; // edx

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29ED20();
    *(_DWORD *)(a1 + 1520) = 0;
    v6 = *(unsigned __int16 *)(a2 + 4);
    if ( (unsigned int)(v6 - 3) <= 1 )
    {
      result = 0;
    }
    else
    {
      if ( !(_WORD)v6 )
        goto LABEL_4;
      result = sub_1666670(a1 + 296, a2);
    }
LABEL_14:
    byte_1C7EBA0 = 1;
    return result;
  }
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = *(unsigned __int16 *)(a2 + 4);
  if ( (unsigned int)(v3 - 3) <= 1 )
    return 0;
  if ( (_WORD)v3 )
    return sub_1666670(a1 + 296, a2);
LABEL_4:
  v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( v4 && *v4 == 5 && !v4[1] )
    result = 1;
  else
    result = sub_1666670(a1 + 296, a2);
  if ( v2 )
    goto LABEL_14;
  return result;
}

