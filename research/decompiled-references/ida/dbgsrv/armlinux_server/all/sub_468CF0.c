/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468CF0
// Address: 0x0000000000468CF0

//----- (0000000000468CF0) ----------------------------------------------------
void __fastcall __noreturn sub_468CF0(
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
        char *a24,
        __int64 a25,
        int a26,
        void *ptr,
        __int64 a28)
{
  __int64 i; // x21
  char *v30; // x19
  void *v31; // x0
  void *v32; // x0

  if ( ptr )
    j__free(ptr);
  if ( a24 )
  {
    for ( i = 0; a25 != i; ++i )
    {
      v30 = &a24[432 * i];
      v31 = *((void **)v30 + 5);
      if ( v31 )
      {
        *((_QWORD *)v30 + 6) = 0;
        j__free(v31);
      }
      v32 = *((void **)v30 + 1);
      if ( v32 )
      {
        *((_QWORD *)v30 + 2) = 0;
        j__free(v32);
      }
    }
    j__free(a24);
  }
  _Unwind_Resume(a1);
}
