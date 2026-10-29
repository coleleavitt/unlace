/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46A224
// Address: 0x000000000046A224

//----- (000000000046A224) ----------------------------------------------------
void __fastcall __noreturn sub_46A224(
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
        int a27,
        int a28,
        int a29,
        int a30,
        void *ptr,
        __int64 a32)
{
  char *v33; // x0
  __int64 i; // x20
  char *v35; // x2
  void *v36; // x1

  if ( ptr )
    j__free(ptr);
  v33 = a24;
  if ( a24 )
  {
    for ( i = 0; a25 != i; ++i )
    {
      v35 = &v33[56 * i];
      v36 = *((void **)v35 + 1);
      if ( v36 )
      {
        *((_QWORD *)v35 + 2) = 0;
        j__free(v36);
        v33 = a24;
      }
    }
    j__free(v33);
  }
  _Unwind_Resume(a1);
}
