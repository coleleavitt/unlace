/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452748
// Address: 0x0000000000452748

//----- (0000000000452748) ----------------------------------------------------
void __fastcall __noreturn sub_452748(
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
        void *ptr,
        __int64 a26)
{
  void *v26; // x19
  pthread_mutex_t *v27; // x28

  if ( v26 )
    j__free(v26);
  if ( ptr )
    j__free(ptr);
  sub_494760(v27);
  _Unwind_Resume(a1);
}
// 45274C: variable 'v26' is possibly undefined
// 452770: variable 'v27' is possibly undefined
