/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48A390
// Address: 0x000000000048A390

//----- (000000000048A390) ----------------------------------------------------
void __fastcall __noreturn sub_48A390(
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
        __int64 a12,
        int a13,
        __int64 a14,
        int a15,
        int a16,
        __int64 a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        void *ptr,
        __int64 a26)
{
  if ( ptr )
    j__free(ptr);
  _Unwind_Resume(a1);
}
