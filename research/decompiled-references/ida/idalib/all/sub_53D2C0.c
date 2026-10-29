bool __fastcall sub_53D2C0(_BYTE *a1, __int64 a2, char a3)
{
  int v3; // ebp
  int v5; // eax
  char v6; // al
  __int64 v7; // rdx
  char v8; // dl

  if ( (a1[70] & 0x2F) != 0xD )
    return 0;
  v3 = sub_53D190(a1, a2, nullptr, 0, a3);
  if ( v3 <= 0 )
    return 0;
  if ( (unsigned __int8)sub_541EB0(a1, (unsigned int)v3) )
    return 1;
  if ( (getinf(57) & 0xF) != 6 || (v8 = getinf_flag(3, 4), v5 = 16, !v8) )
    v5 = 8;
  if ( v5 < v3 || (v3 & (v3 - 1)) != 0 )
    return 0;
  v6 = getinf(57);
  v7 = -261;
  if ( _bittest64(&v7, v6 & 0xF) )
    return 1;
  return (unsigned __int8)getinf(59) >= v3;
}
