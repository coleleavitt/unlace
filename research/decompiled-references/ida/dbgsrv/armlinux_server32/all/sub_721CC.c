/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_721CC
// Address: 0x000721CC

//----- (000721CC) --------------------------------------------------------
__int16 *__fastcall sub_721CC(__int64 a1, int a2)
{
  int v4; // [sp+4h] [bp-20h] BYREF
  int v5; // [sp+8h] [bp-1Ch]
  int v6; // [sp+Ch] [bp-18h]
  int v7; // [sp+10h] [bp-14h]
  int v8; // [sp+14h] [bp-10h]
  __int16 v9; // [sp+18h] [bp-Ch]

  v5 = 0;
  v4 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( a1 )
  {
    HIWORD(v6) = a1;
    HIWORD(v5) = WORD2(a1);
    LOWORD(v5) = HIWORD(a1);
    LOWORD(v6) = WORD1(a1);
    HIWORD(v4) = 16430 - sub_714A0((unsigned __int16 *)&v4);
  }
  return sub_71668(&v4, a2);
}
