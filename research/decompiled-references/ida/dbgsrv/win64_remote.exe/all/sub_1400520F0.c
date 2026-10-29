/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400520F0
// Address: 0x00000001400520F0

//----- (00000001400520F0) ----------------------------------------------------
__int64 __fastcall sub_1400520F0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = a4[1];
  v6 = v4 + 3;
  if ( v4 + 3 < v4 )
    v6 = 0x7FFFFFFFFFFFFFFFLL;
  sub_140002EF0((__int64)a4, v6);
  v7 = *a4;
  *(_WORD *)(v7 + v4) = -5172;
  *(_BYTE *)(v7 + v4 + 2) = -2;
  return 0;
}
