/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100055438
// Address: 0x0000000100055438

//----- (0000000100055438) ----------------------------------------------------
void __fastcall __noreturn sub_100055438(
        _Unwind_Exception *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9)
{
  char **v9; // x19
  _QWORD *v10; // x22
  _QWORD *v11; // x23

  sub_10000ADD0(v11);
  sub_100006678(v10);
  sub_100006678(a9);
  sub_100011A7C(v9);
  _Unwind_Resume(a1);
}
// 100055440: variable 'v11' is possibly undefined
// 1000554B8: variable 'v10' is possibly undefined
// 1000554C8: variable 'v9' is possibly undefined
