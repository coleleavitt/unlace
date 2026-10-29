/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43B5CC
// Address: 0x000000000043B5CC

//----- (000000000043B5CC) ----------------------------------------------------
void __fastcall __noreturn sub_43B5CC(
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
        void *ptr,
        __int64 a12)
{
  if ( ptr )
    j__free(ptr);
  _Unwind_Resume(a1);
}
