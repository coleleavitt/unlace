/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B5F4
// Address: 0x000000000045B5F4

//----- (000000000045B5F4) ----------------------------------------------------
void __fastcall __noreturn sub_45B5F4(
        __int64 a1,
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
  __int64 v25; // x20
  _QWORD *v26; // x23
  void *v27; // x1
  void *v28; // x0

  v27 = (void *)v26[526];
  if ( v27 )
  {
    v26[527] = 0;
    j__free(v27);
  }
  v28 = (void *)v26[523];
  if ( v28 )
  {
    v26[524] = 0;
    j__free(v28);
  }
  a25 = (_QWORD **)v26[519];
  sub_45B098(v25, &a25, &a24);
  JUMPOUT(0x45B5E0);
}
// 45B638: control flows out of bounds to 45B5E0
// 45B5F4: variable 'v26' is possibly undefined
// 45B634: variable 'v25' is possibly undefined
