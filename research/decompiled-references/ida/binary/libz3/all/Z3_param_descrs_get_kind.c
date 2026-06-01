__int64 __fastcall Z3_param_descrs_get_kind(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  char v5; // bp
  unsigned int v6; // eax
  unsigned int v7; // edx
  _QWORD v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = a2;
  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_294F90();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a2 )
    v4 = a2 + 24;
  v9[0] = a3;
  v6 = sub_18582D0(v4, v9);
  v7 = 5;
  if ( v6 <= 0x13 )
    v7 = *((_DWORD *)qword_18B7900 + v6);
  if ( v5 )
    byte_1C7EBA0 = 1;
  return v7;
}

