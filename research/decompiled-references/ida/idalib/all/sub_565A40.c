__int64 __fastcall sub_565A40(char a1, char a2, char a3, char a4)
{
  char v4; // si
  char v5; // r12
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // edx
  char v10; // bl
  unsigned __int8 v11; // r12
  char v12; // al

  v4 = a2 & 0x60;
  if ( v4 == 32 )
    return 4;
  if ( v4 == 64 )
    return 8;
  v5 = a3;
  v7 = a3 & 3;
  if ( v7 )
  {
    if ( (_BYTE)v7 != 2 )
    {
      if ( (_BYTE)v7 != 3 )
      {
LABEL_6:
        if ( (unsigned __int8)getinf(59) > 2u )
          return 8;
        result = 2;
        v9 = 1;
LABEL_8:
        v10 = a1 & 0x30;
        if ( (a1 & 0x30) != 0x10 )
          goto LABEL_9;
        return v9;
      }
      goto LABEL_23;
    }
  }
  else
  {
    v5 = getinf(58);
    v12 = v5 & 3;
    if ( (v5 & 3) != 2 )
    {
      if ( v12 != 3 )
      {
        if ( v12 != 1 )
          sub_378D50();
        goto LABEL_6;
      }
LABEL_23:
      result = 6;
      v9 = 4;
      goto LABEL_8;
    }
  }
  v10 = a1 & 0x30;
  result = 4;
  v9 = 2;
  if ( (a1 & 0x30) == 0x10 )
    return v9;
LABEL_9:
  if ( v10 != 32 )
  {
    v11 = v5 & 0xC;
    if ( v11 == 8 )
    {
      if ( a4 )
        return v9;
    }
    else if ( v11 > 8u )
    {
      if ( v11 == 12 )
      {
        if ( !a4 )
          return v9;
      }
      else
      {
        return 0xFFFFFFFFLL;
      }
    }
    else if ( !v11 )
    {
      return v9;
    }
  }
  return result;
}
