/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E386
// Address: 0x0005E386

//----- (0005E386) --------------------------------------------------------
void __fastcall sub_5E386(
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
        char a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        char a38)
{
  char v38; // zf
  unsigned int v39; // r7

  if ( !v38 )
  {
    a38 = a22;
    sub_370F6((void **)&STACK[0x1090], v39, &a38);
  }
  JUMPOUT(0x5E8E0);
}
// 5E388: control flows out of bounds to 5E8E0
// 5E386: variable 'v38' is possibly undefined
// 5E396: variable 'v39' is possibly undefined
