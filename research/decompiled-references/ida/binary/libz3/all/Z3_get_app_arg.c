__int64 __fastcall Z3_get_app_arg(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  char v4; // r12
  __int64 result; // rax
  __int64 v6; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29A4C0(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( *(_WORD *)(a2 + 4) )
  {
    sub_24EA30(a1, 3u, nullptr);
  }
  else
  {
    if ( (unsigned int)v3 < *(_DWORD *)(a2 + 24) )
    {
      result = *(_QWORD *)(a2 + 8 * v3 + 32);
      if ( !v4 )
        return result;
      v6 = *(_QWORD *)(a2 + 8 * v3 + 32);
      sub_2BB620(v6);
      result = v6;
LABEL_10:
      byte_1C7EBA0 = 1;
      return result;
    }
    sub_24EA30(a1, 2u, nullptr);
  }
  result = 0;
  if ( v4 )
  {
    sub_2BB620(0);
    result = 0;
    goto LABEL_10;
  }
  return result;
}

