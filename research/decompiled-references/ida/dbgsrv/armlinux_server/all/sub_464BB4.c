/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464BB4
// Address: 0x0000000000464BB4

//----- (0000000000464BB4) ----------------------------------------------------
void __fastcall __noreturn sub_464BB4(
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
// 464BBC: variable 'v11' is possibly undefined
