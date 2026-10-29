/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E508
// Address: 0x0046E508

//----- (0046E508) --------------------------------------------------------
char __userpurge sub_46E508@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, _DWORD *a4)
{
  _DWORD *v4; // ecx

  *(_DWORD *)(a1 + 108) += 4;
  v4 = *(_DWORD **)(*(_DWORD *)(a1 + 108) - 4);
  if ( v4 )
  {
    *v4 = *a4;
    return 1;
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a2, a3);
    return 0;
  }
}
