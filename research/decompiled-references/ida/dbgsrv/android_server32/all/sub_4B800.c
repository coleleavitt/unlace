/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B800
// Address: 0x0004B800

//----- (0004B800) --------------------------------------------------------
void __fastcall sub_4B800(
        int a1,
        int a2,
        int a3,
        _DWORD *a4,
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
        unsigned int a18,
        int a19,
        int a20,
        _DWORD *a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        unsigned int a29,
        int a30,
        int a31,
        unsigned int a32)
{
  int v32; // r7
  int v33; // r0
  unsigned int v34; // r1
  int v35; // r0
  int v36; // r1
  int v37; // r2
  int v38; // r3

  a4[16] = v32;
  v33 = a4[12] + v32;
  if ( v33 < 0 )
    sub_4D0A0();
  v34 = a4[4];
  if ( v33 >= v34 )
    sub_4D0A0();
  v35 = copy_idcv((unsigned __int8 *)(a4[3] + 24 * v33), (unsigned __int8 *)(a4[3] + 24 * v34 - 24));
  sub_4B8F4(
    v35,
    v36,
    v37,
    v38,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23,
    a24,
    a25,
    a26,
    a27,
    a28,
    a29,
    a30,
    a31,
    a32);
}
// 4B800: variable 'v32' is possibly undefined
// 4B82A: variable 'v36' is possibly undefined
// 4B82A: variable 'v37' is possibly undefined
// 4B82A: variable 'v38' is possibly undefined
