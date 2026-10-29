/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C880
// Address: 0x000000000045C880

//----- (000000000045C880) ----------------------------------------------------
void __fastcall __noreturn sub_45C880(
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
        int a24,
        void *a25,
        __int64 a26,
        int a27,
        void *ptr,
        __int64 a29)
{
  if ( ptr )
    j__free(ptr);
  if ( a25 )
    j__free(a25);
  _Unwind_Resume(a1);
}
