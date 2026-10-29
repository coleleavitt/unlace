/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100070E20
// Address: 0x0000000100070E20

//----- (0000000100070E20) ----------------------------------------------------
void __fastcall __noreturn sub_100070E20(
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
  sub_100006678(&a13);
  sub_100006678(&a9);
  qmutex_unlock(a12);
  _Unwind_Resume(a1);
}
