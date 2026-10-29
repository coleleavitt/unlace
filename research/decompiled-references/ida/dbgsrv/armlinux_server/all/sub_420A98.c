/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420A98
// Address: 0x0000000000420A98

//----- (0000000000420A98) ----------------------------------------------------
__int64 __fastcall sub_420A98(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x4
  __int64 v4; // x3
  unsigned __int64 v5; // x6
  unsigned int v7; // w0
  unsigned __int64 v8; // x0

  v3 = a2 + 504;
  v4 = *(_QWORD *)(a1 + 80);
  if ( *(_BYTE *)(a2 + 248) && (v5 = *(_QWORD *)(a2 + 120), v3 = a2 + 504, v5) && *(_WORD *)(a2 + 520) == 1 )
  {
    v7 = *(_DWORD *)(a1 + 88);
  }
  else
  {
    if ( *(_WORD *)(v3 + 18) != 8 || *(unsigned __int16 *)(v3 + 16) != 65440 )
    {
      v4 += a3;
      return v4;
    }
    v7 = *(_DWORD *)(a1 + 88);
    if ( !*(_BYTE *)(a2 + 248) )
      sub_4068C0();
    v5 = *(_QWORD *)(a2 + 120);
  }
  if ( v7 < v5 )
  {
    v8 = *(_QWORD *)(a2 + 112) + ((unsigned __int64)v7 << 6);
    if ( v8 )
      v4 += *(_QWORD *)(v8 + 16);
  }
  return v4;
}
