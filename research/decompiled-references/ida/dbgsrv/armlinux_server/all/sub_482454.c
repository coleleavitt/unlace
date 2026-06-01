/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482454
// Address: 0x0000000000482454

//----- (0000000000482454) ----------------------------------------------------
void __fastcall __noreturn sub_482454(
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
        char *ptr,
        __int64 a25)
{
  char *v26; // x0
  __int64 i; // x20
  char *v28; // x2
  void *v29; // x1

  v26 = ptr;
  if ( ptr )
  {
    for ( i = 0; a25 != i; ++i )
    {
      v28 = &v26[24 * i];
      v29 = *(void **)v28;
      if ( *(_QWORD *)v28 )
      {
        *((_QWORD *)v28 + 1) = 0;
        j__free(v29);
        v26 = ptr;
      }
    }
    j__free(v26);
  }
  _Unwind_Resume(a1);
}
