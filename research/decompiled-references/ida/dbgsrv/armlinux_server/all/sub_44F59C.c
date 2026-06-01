/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44F59C
// Address: 0x000000000044F59C

//----- (000000000044F59C) ----------------------------------------------------
void __fastcall __noreturn sub_44F59C(
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
        __int64 a17,
        int a18,
        int a19,
        int a20,
        void *ptr,
        __int64 a22)
{
  __int64 *v22; // x24

  sub_448310(v22);
  if ( ptr )
    j__free(ptr);
  _Unwind_Resume(a1);
}
// 44F5A4: variable 'v22' is possibly undefined
