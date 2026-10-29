bool __fastcall sub_1AA1670(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 v5; // dx
  bool result; // al
  int v7; // edx
  unsigned __int8 v8; // dl
  __int64 v9; // rax

  v5 = *(_WORD *)a2 & 0x1FF;
  if ( v5 <= 0x75u )
  {
    if ( v5 == 91 )
    {
      result = 0;
      v8 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
      if ( (unsigned int)v8 - 5 <= 1 )
      {
        v9 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
        return sub_1AA1590(a1, *(_QWORD *)(a2 + v9 + 32), *(_QWORD *)(a2 + v9 + 40), v8 == 5, a5);
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    result = 0;
    if ( v5 <= 0x77u )
    {
      v7 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
      if ( (unsigned int)(v7 - 5) <= 1 )
        return sub_1AA1590(a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24), v7 == 5, a5);
    }
  }
  return result;
}
