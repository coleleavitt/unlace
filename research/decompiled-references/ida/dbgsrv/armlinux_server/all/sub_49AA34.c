/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49AA34
// Address: 0x000000000049AA34

//----- (000000000049AA34) ----------------------------------------------------
void __fastcall __noreturn sub_49AA34(
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
        void *a16,
        __int64 a17,
        int a18,
        void *ptr,
        __int64 a20)
{
  if ( ptr )
    j__free(ptr);
  if ( a16 )
    j__free(a16);
  _Unwind_Resume(a1);
}
