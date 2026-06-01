/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4123F0
// Address: 0x00000000004123F0

//----- (00000000004123F0) ----------------------------------------------------
void __fastcall __noreturn sub_4123F0(
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
        void *ptr,
        __int64 a20)
{
  if ( ptr )
    j__free(ptr);
  _Unwind_Resume(a1);
}
