char __fastcall sub_947A0(signed __int8 *a1, unsigned __int8 *a2)
{
  signed __int8 v4; // si
  signed __int8 *v5; // r9
  char result; // al
  unsigned __int8 v7; // dl
  int v8; // eax
  unsigned __int8 *v9; // rdx
  char v10; // r11
  int v11; // r8d
  unsigned __int8 *v12; // r10
  int v13; // ecx
  signed __int8 v14; // di
  unsigned int v15; // eax

  while ( 1 )
  {
    v4 = *a1;
    if ( !*a1 )
      break;
    v5 = a1 + 1;
    while ( 1 )
    {
      v7 = *a2;
      if ( !*a2 )
        return v4 == (signed __int8)v7;
      if ( v4 == 47 )
        goto LABEL_22;
      if ( v7 == 47 )
        return v4 == (signed __int8)v7;
      if ( v7 != 91 )
        break;
      v8 = a2[1];
      if ( (_BYTE)v8 == 33 )
      {
        v8 = a2[2];
        v9 = a2 + 2;
        v10 = 1;
      }
      else
      {
        v9 = a2 + 1;
        v10 = 0;
      }
      v11 = 0;
      v12 = v9 + 1;
LABEL_17:
      a2 = v9 + 1;
      if ( (_BYTE)v8 != 93 )
      {
        if ( (_BYTE)v8 )
          goto LABEL_14;
        return 0;
      }
      if ( a2 == v12 )
      {
        while ( 1 )
        {
LABEL_14:
          v13 = v9[1];
          if ( (_BYTE)v13 != 45 )
          {
            v14 = v8;
LABEL_16:
            LOBYTE(v8) = v4 >= (signed __int8)v8;
            LOBYTE(v9) = v4 <= v14;
            v15 = (unsigned int)v9 & v8;
            v9 = a2;
            v11 |= v15;
            v8 = v13;
            goto LABEL_17;
          }
          v14 = v9[2];
          if ( v14 != 93 )
            break;
          v9 = a2;
          LOBYTE(v8) = v4 == (signed __int8)v8;
          ++a2;
          v11 |= v8;
          v8 = 45;
        }
        a2 = v9 + 3;
        if ( v14 )
        {
          v13 = v9[3];
          goto LABEL_16;
        }
        return 0;
      }
      if ( v10 == (_BYTE)v11 )
        return 0;
LABEL_5:
      v4 = *v5++;
      if ( !v4 )
        goto LABEL_21;
    }
    result = v7 == 63 || v7 == (unsigned __int8)v4;
    if ( result )
    {
      ++a2;
      goto LABEL_5;
    }
    if ( v7 != 42 )
      return result;
    a1 = v5 - 1;
    result = sub_947A0(v5, a2);
    if ( result )
      return result;
    ++a2;
  }
  do
  {
LABEL_21:
    v7 = *a2;
LABEL_22:
    ++a2;
  }
  while ( v7 == 42 );
  return v4 == (signed __int8)v7;
}

