/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4621B4
// Address: 0x00000000004621B4

//----- (00000000004621B4) ----------------------------------------------------
void __fastcall __noreturn sub_4621B4(
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
        char *ptr,
        __int64 a26)
{
  char *v27; // x0
  __int64 i; // x20
  char *v29; // x2
  void *v30; // x1

  v27 = ptr;
  if ( ptr )
  {
    for ( i = 0; a26 != i; ++i )
    {
      v29 = &v27[32 * i];
      if ( *(int *)v29 >= -1 )
      {
        v30 = *((void **)v29 + 1);
        if ( v30 )
        {
          *((_QWORD *)v29 + 2) = 0;
          j__free(v30);
          v27 = ptr;
        }
      }
    }
    j__free(v27);
  }
  _Unwind_Resume(a1);
}
