/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E4D9
// Address: 0x0046E4D9

//----- (0046E4D9) --------------------------------------------------------
int __cdecl sub_46E4D9(unsigned __int8 **a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // ebx

  do
  {
    v2 = sub_470F7F(a1);
    v3 = v2;
  }
  while ( v2 != -1 && sub_469034(v2, (unsigned __int8)v2, 8, a2) );
  return v3;
}
