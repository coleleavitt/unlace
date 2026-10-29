/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000A220
// Address: 0x000000010000A220

//----- (000000010000A220) ----------------------------------------------------
void __fastcall __noreturn sub_10000A220(
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
// 10000A228: variable 'v11' is possibly undefined
