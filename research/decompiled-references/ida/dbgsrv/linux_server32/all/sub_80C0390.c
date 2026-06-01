/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C0390
// Address: 0x080C0390

//----- (080C0390) --------------------------------------------------------
int __cdecl sub_80C0390(int a1, int a2, unsigned __int8 a3)
{
  int result; // eax

  result = sub_80BBFD0(*(_DWORD *)(a1 + 16), a2, a3);
  if ( !(_BYTE)result )
    *(_DWORD *)(a1 + 32) = "irs";
  return result;
}
