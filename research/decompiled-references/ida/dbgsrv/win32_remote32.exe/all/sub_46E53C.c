/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E53C
// Address: 0x0046E53C

//----- (0046E53C) --------------------------------------------------------
char __userpurge sub_46E53C@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, _DWORD *a4)
{
  _DWORD *v4; // edx

  *(_DWORD *)(a1 + 108) += 4;
  v4 = *(_DWORD **)(*(_DWORD *)(a1 + 108) - 4);
  if ( v4 )
  {
    *v4 = *a4;
    v4[1] = a4[1];
    return 1;
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a2, a3);
    return 0;
  }
}
