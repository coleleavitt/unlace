/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442B38
// Address: 0x0000000000442B38

//----- (0000000000442B38) ----------------------------------------------------
void __fastcall __noreturn sub_442B38(
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
        void *ptr,
        __int64 a20)
{
  pthread_mutex_t *v20; // x23

  if ( ptr )
    j__free(ptr);
  sub_494760(v20);
  _Unwind_Resume(a1);
}
// 442B54: variable 'v20' is possibly undefined
