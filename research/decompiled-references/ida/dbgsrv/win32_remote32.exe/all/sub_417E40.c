/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417E40
// Address: 0x00417E40

//----- (00417E40) --------------------------------------------------------
int __userpurge sub_417E40@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, int a3, int a4, int a5)
{
  int result; // eax
  _DWORD v7[4]; // [esp+18h] [ebp-14h] BYREF

  v7[0] = a3;
  v7[2] = a4;
  v7[3] = a5;
  if ( !dword_4B69F8 )
    return sub_414390(a1, a2, (int)v7, 1u);
  result = dword_4B69F8(17, v7, 16, 0, 0, 0);
  if ( result < 0 )
    return sub_414390(a1, a2, (int)v7, 1u);
  return result;
}
// 4B69F8: using guessed type int (__stdcall *dword_4B69F8)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
