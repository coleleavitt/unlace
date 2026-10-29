/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A7F4
// Address: 0x000000000042A7F4

//----- (000000000042A7F4) ----------------------------------------------------
void __fastcall __noreturn sub_42A7F4(
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
        __int64 a11)
{
  __int64 v11; // x19
  void *v13; // x1

  v13 = *(void **)v11;
  if ( *(_QWORD *)v11 )
  {
    *(_QWORD *)(v11 + 8) = 0;
    j__free(v13);
  }
  _Unwind_Resume(a1);
}
// 42A7FC: variable 'v11' is possibly undefined
