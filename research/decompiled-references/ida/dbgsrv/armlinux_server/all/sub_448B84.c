/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448B84
// Address: 0x0000000000448B84

//----- (0000000000448B84) ----------------------------------------------------
void __fastcall __noreturn sub_448B84(
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
        void *ptr,
        __int64 a18)
{
  if ( ptr )
    j__free(ptr);
  _Unwind_Resume(a1);
}
