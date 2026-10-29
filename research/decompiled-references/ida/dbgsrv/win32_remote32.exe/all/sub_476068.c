/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476068
// Address: 0x00476068

//----- (00476068) --------------------------------------------------------
unsigned int __usercall sub_476068@<eax>(int a1@<ebx>, int a2@<edi>, char a3, int a4, int a5, int a6)
{
  int *v7[4]; // [esp+0h] [ebp-1Ch] BYREF
  int v8; // [esp+10h] [ebp-Ch] BYREF
  int v9; // [esp+14h] [ebp-8h] BYREF

  if ( !a4 || !a5 )
    return 0;
  if ( !a6 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return 0;
  }
  v9 = a6;
  v7[0] = &a6;
  v8 = a6;
  v7[1] = (int *)&a3;
  v7[2] = &a4;
  v7[3] = &a5;
  return sub_475E49(a1, &v8, v7, &v9);
}
