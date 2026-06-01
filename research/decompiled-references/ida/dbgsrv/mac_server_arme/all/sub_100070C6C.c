/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100070C6C
// Address: 0x0000000100070C6C

//----- (0000000100070C6C) ----------------------------------------------------
void __fastcall __noreturn sub_100070C6C(
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
        pthread_mutex_t *a11)
{
  qmutex_unlock(a11);
  _Unwind_Resume(a1);
}
