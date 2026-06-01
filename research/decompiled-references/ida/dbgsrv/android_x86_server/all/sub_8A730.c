/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A730
// Address: 0x0008A730

//----- (0008A730) --------------------------------------------------------
int __usercall sub_8A730@<eax>(int result@<eax>, int *a2@<edi>, int a3@<esi>, int a4, int a5)
{
  int *v5; // [esp+4h] [ebp-Ch]

  do
  {
    v5 = a2;
    a2 += 8;
    sub_8A760(result, v5);
    result = a5;
    --a3;
  }
  while ( a3 );
  return result;
}
// 8A730: could not find valid save-restore pair for ebx
// 8A730: could not find valid save-restore pair for ebp
// 8A730: could not find valid save-restore pair for edi
