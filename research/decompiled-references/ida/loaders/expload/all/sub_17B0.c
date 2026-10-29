__int64 __fastcall sub_17B0(__int64 a1)
{
  __int16 v1; // ax
  int v2; // ebx
  unsigned __int16 v4; // bx
  __int16 v5; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int16 v6; // [rsp+2h] [rbp-A6h]
  unsigned __int16 v7; // [rsp+4h] [rbp-A4h]
  unsigned __int64 v8; // [rsp+88h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  qlseek(a1, 0, 0);
  if ( qlread(a1, &v5, 2) == 2 )
  {
    v1 = v5;
    if ( v5 == 19802 || (v2 = 0, v5 == 23117) )
    {
      qlseek(a1, 0, 0);
      if ( qlread(a1, &v5, 28) != 28 )
        return 0xFFFFFFFFLL;
      v4 = v7;
      if ( v6 )
        v4 = --v7;
      v2 = v6 + (v4 << 9);
      qlseek(a1, v2, 0);
      if ( qlread(a1, &v5, 2) != 2 )
        return 0xFFFFFFFFLL;
      v1 = v5;
    }
    HIBYTE(v1) &= ~1u;
    if ( v1 == 12880 )
      return (unsigned int)v2;
  }
  return 0xFFFFFFFFLL;
}

