__int64 __fastcall sub_1C200(__int16 a1, bool *a2)
{
  char v2; // cl
  int v4; // edi
  int v5; // eax
  int v6; // r8d
  unsigned int v7; // esi
  bool v8; // si

  v2 = a1;
  v4 = (unsigned __int8)byte_25E40[32 * byte_26380[HIBYTE(a1)] + ((unsigned __int8)a1 >> 3)];
  v5 = 1 << (v2 & 7);
  v6 = v5;
  LOBYTE(v6) = byte_25DC0[v4 & 0x7F] & v5;
  v7 = v6;
  if ( (_BYTE)v6 )
  {
    if ( a2 )
    {
      v8 = 1;
      if ( (v4 & 0x80u) != 0 )
      {
        v8 = 0;
        if ( (v4 & 0x40) == 0 )
          v8 = ((unsigned __int8)v5 & byte_25DC0[v4 - 68]) != 0;
      }
      *a2 = v8;
    }
    return 1;
  }
  return v7;
}
