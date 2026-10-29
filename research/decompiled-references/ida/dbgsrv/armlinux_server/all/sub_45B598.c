/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B598
// Address: 0x000000000045B598

//----- (000000000045B598) ----------------------------------------------------
void __fastcall __noreturn sub_45B598(
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
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        _QWORD **a25)
{
  _QWORD *v25; // x23
  void *v26; // x1
  void *v28; // x0

  v26 = (void *)v25[526];
  if ( v26 )
  {
    v25[527] = 0;
    j__free(v26);
  }
  v28 = (void *)v25[523];
  if ( v28 )
  {
    v25[524] = 0;
    j__free(v28);
  }
  a25 = (_QWORD **)v25[519];
  a24 = a22;
  sub_45B098(a22, &a25, &a24);
  j_j__free_0(v25);
  _Unwind_Resume(a1);
}
// 45B598: variable 'v25' is possibly undefined
