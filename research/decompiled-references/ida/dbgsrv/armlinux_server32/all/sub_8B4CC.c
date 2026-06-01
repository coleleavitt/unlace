/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B4CC
// Address: 0x0008B4CC

//----- (0008B4CC) --------------------------------------------------------
int __fastcall sub_8B4CC(_DWORD *a1, int a2)
{
  int v4; // r4
  int v5; // r5
  _DWORD *v6; // r0
  _DWORD *v7; // r4
  int result; // r0

  v4 = a2;
  v5 = 1;
  while ( ITM_RU1(v4) )
  {
    ++v4;
    ++v5;
  }
  v6 = (_DWORD *)`transaction-clone for`operator new[](v5 + 12);
  v6[2] = 0;
  v6[1] = v5 - 1;
  *v6 = v5 - 1;
  v7 = v6 + 3;
  result = ITM_memcpyRtWn(v6 + 3, a2, v5);
  if ( a1 )
    *a1 = v7;
  return result;
}
// 13DE4: using guessed type int __fastcall ITM_memcpyRtWn(_DWORD, _DWORD, _DWORD);
// 13F18: using guessed type int __fastcall `transaction-clone for`operator new[](_DWORD);
// 14008: using guessed type int __fastcall ITM_RU1(_DWORD);
