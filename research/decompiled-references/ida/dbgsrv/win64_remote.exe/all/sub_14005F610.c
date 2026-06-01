/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005F610
// Address: 0x000000014005F610

//----- (000000014005F610) ----------------------------------------------------
__int64 __fastcall sub_14005F610(__int64 a1, _BYTE *a2, int a3)
{
  int v3; // r9d
  int v5; // ecx
  unsigned int v6; // ebx
  int v7; // eax

  v3 = *(_DWORD *)(a1 + 40);
  if ( !v3 )
    return 0;
  v5 = dword_1400C9F08;
  v6 = 0;
  v7 = (_BYTE)v3 != 0;
  if ( BYTE1(v3) )
    v7 += dword_1400C9F08;
  if ( a3 >= v7 )
  {
    if ( (_BYTE)v3 )
    {
      *a2 = 15;
      v6 = 1;
      v5 = dword_1400C9F08;
    }
    if ( *(_BYTE *)(a1 + 41) )
    {
      memcpy(&a2[v6], off_1400C9F00, v5);
      v6 += dword_1400C9F08;
    }
    return v6;
  }
  else
  {
    *errno() = 7;
    return 0xFFFFFFFFLL;
  }
}
// 1400C9F08: using guessed type int dword_1400C9F08;
