char *__fastcall Z3_simplifier_get_descr(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 v3; // rax
  char *result; // rax
  _BYTE v5[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29CF30();
  *(_DWORD *)(a1 + 1520) = 0;
  sub_180C5A0(v5, a2);
  v3 = sub_DEC500(a1, v5);
  if ( v3 )
  {
    result = *(char **)(v3 + 8);
  }
  else
  {
    sub_24EA30(a1, 3, 0);
    result = "";
  }
  if ( v2 )
    byte_1C7EBA0 = 1;
  return result;
}

