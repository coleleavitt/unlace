/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D4D8
// Address: 0x000000000044D4D8

//----- (000000000044D4D8) ----------------------------------------------------
void __fastcall __noreturn sub_44D4D8(
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
  __int64 *v22; // x19

  if ( ptr )
    j__free(ptr);
  sub_448310(v22);
  _Unwind_Resume(a1);
}
// 44D4F4: variable 'v22' is possibly undefined
