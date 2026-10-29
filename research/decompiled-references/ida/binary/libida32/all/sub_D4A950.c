bool __fastcall sub_D4A950(int a1, int a2, _BYTE *a3)
{
  int v3; // ecx
  int v4; // r8d
  char v5; // al
  bool v6; // si
  int v8; // r8d

  LOBYTE(v3) = a1;
  if ( (a1 & 0x80u) != 0 )
  {
    v3 = -a1;
    LOBYTE(v8) = a2;
    if ( (a2 & 0x80u) != 0 )
    {
      v4 = -a2;
      v5 = a1 * a2;
      v6 = (_BYTE)a1 == 0;
LABEL_4:
      *a3 = v5;
      if ( !v6 )
        return (unsigned __int8)v3 > (unsigned __int8)(0x7Fu / (unsigned __int8)v4);
      return 0;
    }
    *a3 = -(char)(a2 * v3);
    if ( (_BYTE)a2 )
      return (unsigned __int8)v3 > 128 / (unsigned __int8)v8;
  }
  else
  {
    LOBYTE(v4) = a2;
    if ( (a2 & 0x80u) == 0 )
    {
      v5 = a1 * a2;
      v6 = (_BYTE)a1 == 0 || (_BYTE)a2 == 0;
      goto LABEL_4;
    }
    v8 = -a2;
    *a3 = -(char)(a1 * -(char)a2);
    if ( (_BYTE)a1 )
      return (unsigned __int8)v3 > 128 / (unsigned __int8)v8;
  }
  return 0;
}

