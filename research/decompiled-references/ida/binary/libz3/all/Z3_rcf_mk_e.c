__int64 __fastcall Z3_rcf_mk_e(__int64 a1)
{
  char v1; // bp
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // [rsp+8h] [rbp-30h]
  _QWORD v5[4]; // [rsp+18h] [rbp-20h] BYREF

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
    sub_29F3E0(a1);
  *(_DWORD *)(a1 + 1520) = 0;
  v5[0] = 0;
  v2 = sub_24F090(a1);
  sub_16FD3F0(v2, v5);
  result = v5[0];
  if ( v1 )
  {
    v4 = v5[0];
    sub_2BB620(v5[0]);
    byte_1C7EBA0 = 1;
    return v4;
  }
  return result;
}

