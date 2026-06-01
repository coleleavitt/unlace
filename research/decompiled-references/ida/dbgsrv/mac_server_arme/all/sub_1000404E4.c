/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000404E4
// Address: 0x00000001000404E4

//----- (00000001000404E4) ----------------------------------------------------
void __fastcall __noreturn sub_1000404E4(
        _Unwind_Exception *exception_object,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        void *__p,
        __int64 a10,
        int a11,
        __int16 a12,
        char a13,
        char a14)
{
  if ( a14 < 0 )
  {
    operator delete(__p);
    _Unwind_Resume(exception_object);
  }
  _Unwind_Resume(exception_object);
}
