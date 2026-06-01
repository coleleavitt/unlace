/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C46C
// Address: 0x000000000042C46C

//----- (000000000042C46C) ----------------------------------------------------
void __fastcall __noreturn sub_42C46C(
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
        void *ptr,
        __int64 a17)
{
  if ( ptr )
    j__free(ptr);
  _Unwind_Resume(a1);
}
