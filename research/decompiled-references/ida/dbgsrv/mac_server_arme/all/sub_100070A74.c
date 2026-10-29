/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100070A74
// Address: 0x0000000100070A74

//----- (0000000100070A74) ----------------------------------------------------
void __fastcall __noreturn sub_100070A74(
        _Unwind_Exception *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        pthread_mutex_t *a9)
{
  qmutex_unlock(a9);
  _Unwind_Resume(a1);
}
