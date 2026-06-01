/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4325A8
// Address: 0x00000000004325A8

//----- (00000000004325A8) ----------------------------------------------------
void __fastcall __noreturn sub_4325A8(
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
        __int64 a11,
        int a12,
        __int64 a13,
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
