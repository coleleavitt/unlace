__int64 __fastcall sub_3C44B0(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // edx
  __int64 v7; // r9
  int v9; // edx
  char v10; // cl
  __int64 v11; // rax

  v3 = a3 & 0xF;
  if ( v3 == 15 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = 4 * (v9 + (v9 > 1) + 5);
      v11 = a2 & (15LL << v10);
      if ( v11 == 2LL << v10 || v11 == 7LL << v10 || v11 == 6LL << v10 || v11 == 1LL << v10 )
        break;
      if ( ++v9 == 8 )
        return 0;
    }
    return 1;
  }
  else
  {
    v4 = 0;
    if ( (a3 & 8) == 0 )
    {
      v5 = v3 + 5;
      v6 = a3 & 0xE;
      if ( (a2 & (15LL << (4 * ((unsigned __int8)v5 + (v6 != 0))))) == 2LL << (4 * ((unsigned __int8)v5 + (v6 != 0))) )
        return 1;
      v4 = 4 * (v5 - ((v6 == 0) - 1));
      v7 = a2 & (15LL << v4);
      if ( v7 == 7LL << (4 * (v5 - ((v6 == 0) - 1))) || v7 == 6LL << v4 )
        return 1;
      else
        LOBYTE(v4) = 1LL << v4 == v7;
    }
    return v4;
  }
}
