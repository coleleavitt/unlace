/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E24A
// Address: 0x0005E24A

//----- (0005E24A) --------------------------------------------------------
void __fastcall sub_5E24A(
        int a1,
        int a2,
        int a3,
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
        int a23,
        int a24,
        int a25)
{
  _BYTE *v25; // r5

  if ( !a25 )
  {
    if ( *v25 )
      JUMPOUT(0x5EA46);
  }
  JUMPOUT(0x5EA40);
}
// 5E250: control flows out of bounds to 5EA40
// 5E258: control flows out of bounds to 5EA46
// 5E252: variable 'v25' is possibly undefined
