/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C584
// Address: 0x0006C584

//----- (0006C584) --------------------------------------------------------
int __fastcall sub_6C584(int a1)
{
  __int64 v2; // r0
  __int64 v3; // r4
  int v4; // r8
  __int64 v5; // r6
  size_t v6; // r0
  _BYTE v8[4084]; // [sp+Ch] [bp-1008h] BYREF

  sub_74D98(a1, 0, 0);
  v2 = sub_74D78(a1);
  if ( v2 < 1 )
    return 0;
  v3 = v2;
  v4 = 0;
  while ( 1 )
  {
    LODWORD(v5) = v3;
    if ( v3 > 4096 )
      LODWORD(v5) = 4096;
    HIDWORD(v5) = HIDWORD(v3);
    if ( v3 > 4096 )
      HIDWORD(v5) = 0;
    v6 = sub_74B94(a1, v8, v5);
    if ( v6 != (_DWORD)v5 )
      break;
    v4 = sub_6C580(v4, v8, v6);
    v3 -= v5;
    if ( v3 < 1 )
      return v4;
  }
  return -1;
}
// 6C580: using guessed type int __fastcall sub_6C580(_DWORD, _DWORD, _DWORD);
