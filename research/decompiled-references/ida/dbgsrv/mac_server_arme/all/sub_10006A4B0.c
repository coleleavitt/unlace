/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006A4B0
// Address: 0x000000010006A4B0

//----- (000000010006A4B0) ----------------------------------------------------
void __fastcall __noreturn sub_10006A4B0(
        _Unwind_Exception *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        __int64 a14)
{
  _Unwind_Exception *v14; // x19

  if ( a13 )
  {
    v14 = a1;
    qfree(a13);
    a1 = v14;
  }
  _Unwind_Resume(a1);
}
