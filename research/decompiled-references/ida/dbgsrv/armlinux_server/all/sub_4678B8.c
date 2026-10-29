/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4678B8
// Address: 0x00000000004678B8

//----- (00000000004678B8) ----------------------------------------------------
void __fastcall __noreturn sub_4678B8(
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
        __int64 a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        __int64 a24,
        void *a25,
        __int64 a26)
{
  void **v26; // x22

  if ( ptr )
    j__free(ptr);
  if ( a25 )
    j__free(a25);
  sub_48C0F8(v26);
  _Unwind_Resume(a1);
}
// 4678EC: variable 'v26' is possibly undefined
