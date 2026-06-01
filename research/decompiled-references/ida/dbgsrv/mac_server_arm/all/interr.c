/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: interr
// Address: 0x000000010006F9DC

//----- (000000010006F9DC) ----------------------------------------------------
void __fastcall interr(int a1)
{
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  _DWORD *exception; // x0
  int v10; // w0

  if ( (unsigned int)sub_10006776C() )
  {
    exception = __cxa_allocate_exception(0x10u);
    *(_QWORD *)exception = &off_10009BFD0;
    exception[2] = a1;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'interr_exc_t,
      (void (__fastcall *)(void *))std::exception::~exception);
  }
  v10 = sub_10002D82C("Oops! internal error %d occurred.", v2, v3, v4, v5, v6, v7, v8, a1);
  qexit(v10);
}
// 10006FA30: variable 'v2' is possibly undefined
// 10006FA30: variable 'v3' is possibly undefined
// 10006FA30: variable 'v4' is possibly undefined
// 10006FA30: variable 'v5' is possibly undefined
// 10006FA30: variable 'v6' is possibly undefined
// 10006FA30: variable 'v7' is possibly undefined
// 10006FA30: variable 'v8' is possibly undefined
// 10009A4F8: using guessed type _UNKNOWN *`typeinfo for'interr_exc_t;
// 10009BFD0: using guessed type void (__fastcall *off_10009BFD0)(std::exception *__hidden this);
