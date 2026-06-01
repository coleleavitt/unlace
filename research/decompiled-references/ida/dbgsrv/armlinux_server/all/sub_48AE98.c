/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48AE98
// Address: 0x000000000048AE98

//----- (000000000048AE98) ----------------------------------------------------
void __fastcall __noreturn sub_48AE98(
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
        void *ptr,
        __int64 a22)
{
  void *v22; // x19

  if ( v22 )
    j__free(v22);
  if ( ptr )
    j__free(ptr);
  _Unwind_Resume(a1);
}
// 48AE9C: variable 'v22' is possibly undefined
