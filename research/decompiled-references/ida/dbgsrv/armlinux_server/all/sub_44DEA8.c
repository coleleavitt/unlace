/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44DEA8
// Address: 0x000000000044DEA8

//----- (000000000044DEA8) ----------------------------------------------------
void __fastcall __noreturn sub_44DEA8(
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
        void *ptr,
        __int64 a23)
{
  __int64 v23; // x21

  sub_44A7D8(v23);
  if ( ptr )
    j__free(ptr);
  JUMPOUT(0x44DEA0);
}
// 44DEC4: control flows out of bounds to 44DEA0
// 44DEB0: variable 'v23' is possibly undefined
