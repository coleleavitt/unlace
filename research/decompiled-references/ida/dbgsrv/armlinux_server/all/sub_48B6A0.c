/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48B6A0
// Address: 0x000000000048B6A0

//----- (000000000048B6A0) ----------------------------------------------------
void __fastcall __noreturn sub_48B6A0(
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
        void *a18,
        __int64 a19,
        int a20,
        void *ptr,
        __int64 a22)
{
  if ( ptr )
    j__free(ptr);
  if ( a18 )
    j__free(a18);
  _Unwind_Resume(a1);
}
