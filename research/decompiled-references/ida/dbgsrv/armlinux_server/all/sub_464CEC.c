/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464CEC
// Address: 0x0000000000464CEC

//----- (0000000000464CEC) ----------------------------------------------------
void __fastcall __noreturn sub_464CEC(
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
        __int64 a16,
        void *ptr,
        __int64 a18)
{
  void **v18; // x21

  if ( ptr )
    j__free(ptr);
  sub_48C0F8(v18);
  _Unwind_Resume(a1);
}
// 464D10: variable 'v18' is possibly undefined
