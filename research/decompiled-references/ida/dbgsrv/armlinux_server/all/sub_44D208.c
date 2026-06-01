/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D208
// Address: 0x000000000044D208

//----- (000000000044D208) ----------------------------------------------------
void __fastcall __noreturn sub_44D208(
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
        __int64 a15,
        int a16,
        int a17,
        void *ptr,
        __int64 a19)
{
  __int64 v19; // x21

  sub_44A7D8(v19);
  if ( ptr )
    j__free(ptr);
  _Unwind_Resume(a1);
}
// 44D210: variable 'v19' is possibly undefined
