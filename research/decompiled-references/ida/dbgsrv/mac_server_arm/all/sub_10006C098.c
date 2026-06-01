/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006C098
// Address: 0x000000010006C098

//----- (000000010006C098) ----------------------------------------------------
void __fastcall __noreturn sub_10006C098(
        _Unwind_Exception *a1,
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
        pthread_mutex_t *a12,
        __int64 a13)
{
  sub_100006228(&a13);
  sub_100006228(&a9);
  qmutex_unlock(a12);
  _Unwind_Resume(a1);
}
