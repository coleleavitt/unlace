/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D660
// Address: 0x0045D660

//----- (0045D660) --------------------------------------------------------
int __userpurge sub_45D660@<eax>(int a1@<ebx>, int a2@<edi>, unsigned int *a3)
{
  int v3; // ebp
  int v4; // edx
  int v5; // ebx
  int v6; // esi
  int v7; // edx

  if ( !a3 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(552);
  }
  v3 = sub_45D030(a1, a2, a3);
  v5 = v4;
  sub_45CFE0(v4, a2, (int)a3, 0, 2u);
  v6 = sub_45D030(v5, a2, a3);
  sub_45CFE0(v5, v7, (int)a3, __SPAIR64__(v5, v3), 0);
  return v6;
}
// 45D660: could not find valid save-restore pair for ebx
// 45D67B: variable 'v4' is possibly undefined
// 45D694: variable 'v7' is possibly undefined
// 4B70F0: using guessed type char byte_4B70F0;
