/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32D84
// Address: 0x00032D84

//----- (00032D84) --------------------------------------------------------
unsigned __int64 __fastcall sub_32D84(int a1, int a2)
{
  unsigned __int64 v2; // r2
  int v3; // r4
  unsigned __int64 v4; // kr00_8
  unsigned int v5; // r4
  unsigned int v6; // r7
  unsigned int v7; // r3
  int v8; // r2
  int v10; // [sp+Ch] [bp-8h]

  if ( !*(_BYTE *)(a1 + 36) )
  {
    if ( !under_debugger )
      interr(20100);
    __debugbreak();
  }
  HIDWORD(v2) = *(_DWORD *)a2;
  LODWORD(v2) = 0;
  if ( *(_DWORD *)a2 > 6u )
  {
    HIDWORD(v2) = 0;
  }
  else
  {
    v3 = 1 << SBYTE4(v2);
    HIDWORD(v2) = 0;
    if ( (v3 & 0x5A) != 0 )
    {
      v4 = *(_QWORD *)(*(_DWORD *)(a1 + 32) + 376) - *(_QWORD *)(*(_DWORD *)(a1 + 32) + 368);
      v5 = *(_DWORD *)(a2 + 8);
      v6 = *(_DWORD *)(a2 + 12);
      v2 = 0;
      if ( *(_QWORD *)(a2 + 8) < v4 )
      {
        v10 = *(_DWORD *)(a1 + 16);
        if ( a2 - v10 >= -55 )
        {
          v7 = -1227133513 * ((a2 - v10) >> 3) + 1;
          if ( v7 < *(_DWORD *)(a1 + 20) )
          {
            v8 = v10 + 56 * v7;
            if ( *(_QWORD *)(v8 + 8) >= __PAIR64__(v6, v5) )
              v4 = __PAIR64__(*(_DWORD *)(v8 + 12), 0);
          }
        }
        v2 = *(_QWORD *)(a2 + 32);
        if ( v2 >= v4 - __PAIR64__(v6, v5) )
          return v4 - __PAIR64__(v6, v5);
      }
    }
  }
  return v2;
}
// 32E1E: conditional instruction was optimized away because r2.4==1
// 32E3A: conditional instruction was optimized away because %var_4.4==1
// 32E3E: conditional instruction was optimized away because r4.4==1
// 32E4C: conditional instruction was optimized away because r4.4==0
// 32E60: conditional instruction was optimized away because %var_10.4==0
// 32E66: conditional instruction was optimized away because r2.4==0
// E0550: using guessed type char under_debugger;
