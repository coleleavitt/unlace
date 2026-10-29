__int64 __fastcall Z3_get_numeral_int(__int64 a1, __int64 a2, _DWORD *a3)
{
  char v4; // r12
  __int64 result; // rax
  _QWORD v6[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_29AA40(a1, a2);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      result = 0;
      goto LABEL_13;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      return 0;
    }
  }
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 <= 1 )
  {
    sub_24EA30(a1, 3u, "ast is not an expression");
LABEL_6:
    result = 0;
    goto LABEL_7;
  }
  if ( !a3 )
  {
    sub_24EA30(a1, 3u, nullptr);
    goto LABEL_6;
  }
  result = Z3_get_numeral_int64(a1, a2, v6);
  if ( !(_BYTE)result || (unsigned __int64)(v6[0] + 0x80000000LL) >> 32 )
    goto LABEL_6;
  *a3 = v6[0];
LABEL_7:
  if ( v4 )
LABEL_13:
    byte_1C7EBA0 = 1;
  return result;
}

