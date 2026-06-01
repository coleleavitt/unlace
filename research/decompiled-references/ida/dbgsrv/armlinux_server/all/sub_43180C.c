/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43180C
// Address: 0x000000000043180C

//----- (000000000043180C) ----------------------------------------------------
void __fastcall __noreturn sub_43180C(
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
        __int64 a15,
        int a16,
        int a17,
        void *ptr,
        __int64 a19)
{
  if ( ptr )
    j__free(ptr);
  _Unwind_Resume(a1);
}
