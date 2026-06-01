void __fastcall sub_13C2980(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  bool v6; // al
  _BYTE *v7; // rbp
  char v8; // di
  char v9; // al
  char v10; // si
  __int64 v11; // r14

  if ( !a4 )
  {
    if ( (a3 & 4) != 0 )
      return;
    v11 = sub_13C2430(a1, a2);
    if ( v11 )
    {
      if ( (unsigned __int8)sub_13F3060(a3) )
      {
        v6 = (*(_WORD *)v11 & 0x180) != 128;
      }
      else
      {
        if ( *(char *)v11 < 0 || (a3 & 2) == 0 )
          return;
        v6 = (*(_BYTE *)(v11 + 1) & 1) == 0;
      }
      if ( !v6 )
        return;
    }
  }
  v7 = (_BYTE *)sub_13C2790(a1, a2);
  v8 = sub_13F3060(a3) | (*v7 >> 7);
  v9 = 0;
  v10 = (v8 << 7) | *v7 & 0x7F;
  *v7 = v10;
  if ( v10 >= 0 )
    v9 = v7[1] & 1 | ((a3 & 2) != 0);
  v7[1] = (2 * (a4 & 1 | ((v9 & 2 | v7[1] & 2) != 0))) | v9 & 0xFD | v7[1] & 0xFC;
}
