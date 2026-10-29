__int64 __fastcall sub_21FA750(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 a5,
        char a6,
        _BYTE *a7)
{
  unsigned __int64 *v9; // r13
  int v10; // ebx
  unsigned int v11; // ebp
  unsigned int v13; // r8d
  char v14; // al
  int v15; // r9d
  __int64 v16; // rax
  unsigned int v17; // ebx
  char v18; // [rsp+10h] [rbp-40h]
  unsigned int v19; // [rsp+14h] [rbp-3Ch]

  v9 = a2;
  v10 = a5;
  v11 = sub_21FA4F0(a1, a2, a3, a4, a5, a6, a7);
  if ( v11 != 1 )
    return v11;
  v13 = (a4 + 63) >> 6;
  v14 = *(_BYTE *)(a1 + 20);
  if ( a4 + 63 <= 0x7F )
    v13 = 1;
  if ( (v14 & 7) == 1 )
    goto LABEL_16;
  v15 = v10;
  if ( (v14 & 8) != 0 || (v15 = a4 - v10, a4 - v10 <= 0x40) )
  {
    if ( v15 )
    {
      v16 = 1;
      goto LABEL_9;
    }
LABEL_16:
    v16 = 0;
    goto LABEL_10;
  }
  v18 = a4 - v10;
  v17 = (a4 - v10 - 65) >> 6;
  v19 = v13;
  memset(a2, 255, 8LL * v17 + 8);
  a2 += v17 + 1;
  v13 = v19;
  LOBYTE(v15) = v18 - ((_BYTE)v17 << 6) - 64;
  v16 = v17 + 2;
LABEL_9:
  *a2 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v15);
  if ( v13 > (unsigned int)v16 )
LABEL_10:
    memset(&v9[v16], 0, 8LL * (v13 - 1 - (unsigned int)v16) + 8);
  if ( (*(_BYTE *)(a1 + 20) & 8) != 0 && a5 )
    sub_220A060(v9);
  return v11;
}
