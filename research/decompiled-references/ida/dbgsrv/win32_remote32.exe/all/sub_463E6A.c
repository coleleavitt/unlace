/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463E6A
// Address: 0x00463E6A

//----- (00463E6A) --------------------------------------------------------
int __usercall sub_463E6A@<eax>(int a1@<ebx>, int *a2@<edi>, int a3@<esi>, int a4)
{
  _DWORD *v4; // eax

  v4 = *((_DWORD **)sub_4667C5(a1, a2, a3) + 9);
  if ( !v4 )
    return 1;
  while ( *v4 != a4 )
  {
    v4 = (_DWORD *)v4[1];
    if ( !v4 )
      return 1;
  }
  return 0;
}
