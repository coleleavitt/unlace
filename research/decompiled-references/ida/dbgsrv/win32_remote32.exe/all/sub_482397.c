/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482397
// Address: 0x00482397

//----- (00482397) --------------------------------------------------------
double __usercall sub_482397@<st0>(
        int a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        double a4@<st0>,
        __int16 a5,
        int a6,
        int a7,
        int a8)
{
  _DWORD v9[6]; // [esp+0h] [ebp-20h] BYREF
  double v10; // [esp+18h] [ebp-8h]
  int savedregs; // [esp+20h] [ebp+0h] BYREF

  v9[0] = a1;
  v10 = a4;
  v9[1] = a3;
  v9[2] = a7;
  v9[3] = a8;
  sub_482566((int)&savedregs, a2, (int)v9, &a5);
  return v10;
}
