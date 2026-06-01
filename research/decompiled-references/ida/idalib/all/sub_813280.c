__int64 __fastcall sub_813280(_DWORD *a1, unsigned __int64 a2)
{
  int v3; // eax
  int v4; // edx
  _DWORD *v5; // rsi
  unsigned __int16 v6; // cx
  unsigned int v7; // r12d
  unsigned __int16 v8; // ax
  unsigned int v9; // r11d
  unsigned __int16 v10; // bx
  unsigned __int64 v11; // r10
  _DWORD *v12; // r8
  int v13; // ecx

  v3 = -1;
  if ( ((unsigned __int8)a1 & 3) != 0 )
  {
    while ( a2 )
    {
      a1 = (_DWORD *)((char *)a1 + 1);
      HIWORD(v4) = HIWORD(v3);
      --a2;
      LOWORD(v4) = word_23BA660[(unsigned __int8)(*((_BYTE *)a1 - 1) ^ v3)] ^ BYTE1(v3);
      v3 = v4;
      if ( ((unsigned __int8)a1 & 3) == 0 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    if ( a2 > 0xF )
    {
      v5 = a1;
      do
      {
        v6 = word_23BA660[(((unsigned __int16)(*v5 ^ v3) >> 8) + 512) & 0x7FF]
           ^ word_23BA660[(unsigned __int8)(*v5 ^ v3) + 768]
           ^ v5[1]
           ^ word_23BA660[HIBYTE(*v5)]
           ^ word_23BA660[(unsigned __int8)BYTE2(*v5) + 256];
        v7 = v5[2];
        v8 = word_23BA660[(HIBYTE(v6) + 512) & 0x7FF]
           ^ word_23BA660[(unsigned __int8)v6 + 768]
           ^ v7
           ^ word_23BA660[HIBYTE(v5[1])]
           ^ word_23BA660[(unsigned __int8)BYTE2(v5[1]) + 256];
        v9 = v5[3];
        v10 = word_23BA660[(HIBYTE(v8) + 512) & 0x7FF]
            ^ word_23BA660[(unsigned __int8)v8 + 768]
            ^ v9
            ^ word_23BA660[HIBYTE(v7)]
            ^ word_23BA660[BYTE2(v7) + 256];
        v3 = word_23BA660[BYTE2(v9) + 256];
        v5 += 4;
        LOWORD(v3) = word_23BA660[(HIBYTE(v10) + 512) & 0x7FF]
                   ^ word_23BA660[(unsigned __int8)v10 + 768]
                   ^ word_23BA660[HIBYTE(v9)]
                   ^ v3;
      }
      while ( v5 != (_DWORD *)((char *)a1 + ((a2 - 16) & 0xFFFFFFFFFFFFFFF0LL) + 16) );
      v11 = (a2 - 16) & 0xFFFFFFFFFFFFFFF0LL;
      a2 &= 0xFu;
      a1 = (_DWORD *)((char *)a1 + v11 + 16);
    }
    if ( a2 )
    {
      v12 = (_DWORD *)((char *)a1 + a2);
      do
      {
        a1 = (_DWORD *)((char *)a1 + 1);
        HIWORD(v13) = HIWORD(v3);
        LOWORD(v13) = word_23BA660[(unsigned __int8)(*((_BYTE *)a1 - 1) ^ v3)] ^ BYTE1(v3);
        v3 = v13;
      }
      while ( a1 != v12 );
    }
  }
  LOWORD(v3) = __ROL2__(v3, 8);
  return (unsigned int)~v3;
}
