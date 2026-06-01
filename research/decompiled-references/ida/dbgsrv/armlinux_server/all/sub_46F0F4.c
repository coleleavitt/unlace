/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46F0F4
// Address: 0x000000000046F0F4

//----- (000000000046F0F4) ----------------------------------------------------
void __fastcall __noreturn sub_46F0F4(
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
        __int64 a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        void *ptr,
        __int64 a22)
{
  if ( ptr )
    j__free(ptr);
  _Unwind_Resume(a1);
}
