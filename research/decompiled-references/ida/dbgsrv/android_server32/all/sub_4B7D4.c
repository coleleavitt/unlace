/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B7D4
// Address: 0x0004B7D4

//----- (0004B7D4) --------------------------------------------------------
void __fastcall sub_4B7D4(
        int a1,
        int a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        unsigned __int8 a23)
{
  int v23; // r7
  int v24; // r0

  a3[16] = v23;
  v24 = a3[12] + v23;
  if ( v24 < 0 )
    sub_4D0CA();
  if ( (unsigned int)v24 >= a3[4] )
    sub_4D0CA();
  copy_idcv(&a23, (unsigned __int8 *)(a3[3] + 24 * v24));
  JUMPOUT(0x4B85E);
}
// 4B7FA: control flows out of bounds to 4B85E
// 4B7D4: variable 'v23' is possibly undefined
