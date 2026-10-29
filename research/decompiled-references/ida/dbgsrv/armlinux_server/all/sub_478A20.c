/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478A20
// Address: 0x0000000000478A20

//----- (0000000000478A20) ----------------------------------------------------
void __fastcall __noreturn sub_478A20(
        struct _Unwind_Exception *a1,
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
        void *a24,
        __int64 a25,
        int a26,
        void *ptr,
        __int64 a28)
{
  if ( ptr )
    j__free(ptr);
  if ( a24 )
    j__free(a24);
  _Unwind_Resume(a1);
}
