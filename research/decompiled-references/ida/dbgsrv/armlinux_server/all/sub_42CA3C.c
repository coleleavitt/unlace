/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42CA3C
// Address: 0x000000000042CA3C

//----- (000000000042CA3C) ----------------------------------------------------
void __fastcall __noreturn sub_42CA3C(
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
