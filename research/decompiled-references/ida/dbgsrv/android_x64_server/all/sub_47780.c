/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47780
// Address: 0x0000000000047780

//----- (0000000000047780) ----------------------------------------------------
__int64 __fastcall sub_47780(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v3; // r10d
  unsigned int v4; // r9d
  int v5; // r11d
  int v6; // ecx
  __int64 v7; // rax
  int v8; // ebx
  int v9; // edx
  char v10; // cc

  v3 = 28 - ((*(unsigned __int16 *)(a1 + 306) >> 9) & 0x7C);
  v4 = 0;
  v5 = 8;
  v6 = 14;
  do
  {
    v2 = *(unsigned __int8 *)(a1 + 308);
    if ( _bittest(&v2, v5 - 1) )
    {
      v7 = v3 & 0x1C;
      v8 = *(_WORD *)(a1 + 4 * v7 + 344) & 0x7FFF;
      if ( v8 == 0x7FFF )
      {
        v9 = 2;
      }
      else if ( (_WORD)v8 )
      {
        v9 = ~(*(_BYTE *)(a1 + 4 * v7 + 343) >> 6) & 2;
      }
      else
      {
        v9 = 2
           - (*(_BYTE *)(a1 + 4 * v7 + 343) >= 0
           && (*(unsigned __int8 *)(a1 + 4 * v7 + 336)
             | *(unsigned __int8 *)(a1 + 4 * v7 + 340)
             | (*(unsigned __int8 *)(a1 + 4 * v7 + 341) << 8)
             | ((*(_BYTE *)(a1 + 4 * v7 + 343) & 0x7F) << 24)
             | (*(unsigned __int8 *)(a1 + 4 * v7 + 342) << 16)
             | (*(unsigned __int8 *)(a1 + 4 * v7 + 337) << 8)
             | (*(unsigned __int8 *)(a1 + 4 * v7 + 339) << 24)
             | (*(unsigned __int8 *)(a1 + 4 * v7 + 338) << 16)) == 0);
      }
    }
    else
    {
      v9 = 3;
    }
    v4 |= (unsigned __int16)(v9 << v6);
    LOBYTE(v3) = v3 - 4;
    v6 -= 2;
    v10 = (v5 - 1 < 0) ^ __OFADD__(-1, v5) | (v5 == 1);
    --v5;
  }
  while ( !v10 );
  *(_QWORD *)(a2 + 8) = v4;
  return v4;
}
