/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462A1E
// Address: 0x00462A1E

//----- (00462A1E) --------------------------------------------------------
int __cdecl sub_462A1E(int a1)
{
  int v1; // eax
  int v2; // ecx

  if ( dword_4B7508 == -1 )
    v1 = sub_477270(a1);
  else
    v1 = sub_4772DC((char)&dword_4B7508, a1);
  v2 = 0;
  if ( !v1 )
    return a1;
  return v2;
}
// 4B7508: using guessed type int dword_4B7508;
