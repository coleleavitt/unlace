unsigned __int64 __fastcall sub_A56D30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  __int64 v9; // rdx

  v6 = *(_BYTE *)(a2 + 28) & 0x7F;
  v7 = (unsigned int)v6 - 64;
  if ( (unsigned int)v7 <= 2 )
    return sub_A4CD00(a1, a2, 0);
  v9 = (unsigned int)v6 - 58;
  if ( (unsigned int)v9 <= 3 )
    return sub_A56C90(a1, a2, v9, v7, a5, a6);
  if ( v6 == 62 )
    return sub_A56BF0(a1, a2, v9, v7, a5, a6);
  return sub_A4CC60(a1, a2);
}

