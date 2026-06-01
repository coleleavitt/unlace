/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424C3C
// Address: 0x0000000000424C3C

//----- (0000000000424C3C) ----------------------------------------------------
void __fastcall __noreturn sub_424C3C(
        struct _Unwind_Exception *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        char a18)
{
  __int64 v18; // x19
  void *v19; // x1
  void *v21; // x0

  v19 = *(void **)(v18 + 24);
  if ( v19 )
  {
    *(_QWORD *)(v18 + 32) = 0;
    j__free(v19);
  }
  v21 = *(void **)v18;
  if ( *(_QWORD *)v18 )
  {
    *(_QWORD *)(v18 + 8) = 0;
    j__free(v21);
  }
  sub_41AAB0((__int64)&a18);
  _Unwind_Resume(a1);
}
// 424C3C: variable 'v18' is possibly undefined
