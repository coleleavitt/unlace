/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B544
// Address: 0x0046B544

//----- (0046B544) --------------------------------------------------------
int __usercall sub_46B544@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        __m128i a3@<xmm0>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int *v10[5]; // [esp+0h] [ebp-38h] BYREF
  _DWORD v11[2]; // [esp+14h] [ebp-24h] BYREF
  int v12; // [esp+1Ch] [ebp-1Ch] BYREF
  int v13; // [esp+20h] [ebp-18h] BYREF
  int v14; // [esp+24h] [ebp-14h] BYREF
  int v15; // [esp+28h] [ebp-10h] BYREF
  int v16; // [esp+2Ch] [ebp-Ch] BYREF
  int v17; // [esp+30h] [ebp-8h] BYREF

  v14 = a9;
  v16 = a8;
  v11[0] = a4;
  v15 = a7;
  v17 = a6;
  v11[1] = a5;
  if ( a6 && a7 )
  {
    v13 = a6;
    v10[0] = &v17;
    v10[1] = &v16;
    v10[2] = v11;
    v10[3] = &v15;
    v10[4] = &v14;
    v12 = a6;
    return sub_4695BE(a1, a3, &v12, v10, &v13);
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return -1;
  }
}
