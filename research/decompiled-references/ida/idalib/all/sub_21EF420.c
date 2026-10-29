__int64 __fastcall sub_21EF420(unsigned __int16 *a1, unsigned int *a2)
{
  unsigned int v2; // r10d
  int v3; // r9d
  __int16 v4; // r8
  unsigned int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // r8d
  unsigned int v9; // esi
  int v10; // edx
  int v11; // r11d
  int v12; // ecx
  int v13; // edx
  __int16 v14; // cx
  char v15; // si
  bool v16; // di
  unsigned __int8 v17; // r8
  unsigned __int16 v18; // dx

  v2 = *a2;
  v3 = *(_DWORD *)a1;
  v4 = (__int16)(8 * *((_WORD *)a2 + 1)) >> 3;
  v5 = *a2;
  v6 = v4;
  v7 = (__int16)(8 * a1[1]) >> 3;
  v8 = v4 + (unsigned __int16)v5 - 1;
  if ( v7 <= v6 )
    LOWORD(v6) = (__int16)(8 * a1[1]) >> 3;
  v9 = HIBYTE(v5);
  v10 = v7 + *a1 - 1;
  v11 = HIBYTE(*(_DWORD *)a1);
  v12 = v8 - ((v9 & 0xA0) != 0);
  v13 = v10 - ((v11 & 0xA0) != 0);
  if ( v12 < v13 )
    LOWORD(v12) = v13;
  v14 = v12 - v6;
  if ( (v11 & 0x20) != 0 || (v9 & 0x20) != 0 )
  {
    if ( (v3 & 0x40000000) != 0 )
    {
      v16 = 1;
      v15 = 1;
    }
    else
    {
      v15 = 1;
      v16 = (v2 & 0x40000000) != 0;
    }
    v17 = 0;
LABEL_10:
    v18 = v14 + 2;
    return (v17 << 31) | (v16 << 30) | ((v15 & 1) << 29) | v18 | ((unsigned __int16)(v6 & 0x1FFF) << 16);
  }
  v18 = v14 + 1;
  v16 = 1;
  if ( (v11 & 0x40) == 0 )
    v16 = (v9 & 0x40) != 0;
  v15 = 0;
  v17 = 0;
  if ( v3 < 0 )
  {
    v15 = v16 | ((unsigned __int8)~HIBYTE(v2) >> 7);
    if ( v15 )
    {
      v15 = 0;
      return (v17 << 31) | (v16 << 30) | ((v15 & 1) << 29) | v18 | ((unsigned __int16)(v6 & 0x1FFF) << 16);
    }
    v16 = 0;
    v17 = 1;
    goto LABEL_10;
  }
  return (v17 << 31) | (v16 << 30) | ((v15 & 1) << 29) | v18 | ((unsigned __int16)(v6 & 0x1FFF) << 16);
}
