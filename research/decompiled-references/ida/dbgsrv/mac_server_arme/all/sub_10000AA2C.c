/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000AA2C
// Address: 0x000000010000AA2C

//----- (000000010000AA2C) ----------------------------------------------------
void __fastcall __noreturn sub_10000AA2C(
        _Unwind_Exception *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        void *__p,
        __int64 a10,
        __int64 a11)
{
  void *v11; // x21

  operator delete(v11);
  if ( !__p )
    _Unwind_Resume(a1);
  operator delete(__p);
  _Unwind_Resume(a1);
}
// 10000AA34: variable 'v11' is possibly undefined
