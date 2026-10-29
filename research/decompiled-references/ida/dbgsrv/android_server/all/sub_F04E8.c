/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_F04E8
// Address: 0x00000000000F04E8

//----- (00000000000F04E8) ----------------------------------------------------
__int64 __fastcall sub_F04E8(__int64 a1, char *a2)
{
  char *v4; // x26
  int v5; // w25
  __int64 v6; // x22
  __int64 v7; // x1
  signed int v8; // w0
  __int64 v9; // x21
  int v10; // w0
  unsigned __int8 v12; // w27
  unsigned __int64 v13; // x1
  unsigned int v14; // w0
  __int64 v15; // x1
  unsigned __int64 v16; // [xsp+68h] [xbp+68h] BYREF

  v4 = nullptr;
  LOBYTE(v5) = 0;
  v6 = 0;
  v7 = 0;
  while ( *(_DWORD *)a2 )
  {
    v8 = *((_DWORD *)a2 + 1);
    if ( v8 )
    {
      v9 = (__int64)&a2[-v8 + 4];
      if ( v9 == v7 )
      {
        v9 = v7;
      }
      else
      {
        v10 = sub_EFDC4((__int64)&a2[-v8 + 4]);
        v5 = v10;
        if ( v10 == 255 )
          return -1;
        v12 = v10;
        v4 = (char *)sub_EFB84(v10, a1);
        v13 = *(unsigned __int16 *)(a1 + 32);
        if ( (v13 & 0x7F8) == 0x7F8 )
        {
          *(_WORD *)(a1 + 32) = v13 & 0xF807 | (8 * v12);
        }
        else if ( (unsigned __int8)(v13 >> 3) != v5 )
        {
          *(_BYTE *)(a1 + 32) |= 4u;
        }
      }
      sub_EFC44(v5, v4, a2 + 8, &v16);
      v14 = sub_EFB24(v5);
      v15 = -1;
      if ( v14 <= 7uLL )
        v15 = (1LL << (8 * (unsigned __int8)v14)) - 1;
      if ( (v15 & v16) != 0 )
      {
        ++v6;
        if ( v16 < *(_QWORD *)a1 )
          *(_QWORD *)a1 = v16;
      }
    }
    else
    {
      v9 = v7;
    }
    v7 = v9;
    a2 += *(unsigned int *)a2 + 4;
  }
  return v6;
}
