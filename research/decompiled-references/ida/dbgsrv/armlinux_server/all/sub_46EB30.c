/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46EB30
// Address: 0x000000000046EB30

//----- (000000000046EB30) ----------------------------------------------------
void __fastcall sub_46EB30(
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
        int a38,
        int a39,
        int a40,
        int a41,
        void *ptr,
        __int64 a43)
{
  char **v43; // x26

  sub_40CB60(v43);
  if ( ptr )
    j__free(ptr);
  JUMPOUT(0x46DAF4);
}
// 46EB50: control flows out of bounds to 46DAF4
// 46EB3C: variable 'v43' is possibly undefined
