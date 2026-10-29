/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: interr
// Address: 0x00000000000BE848

//----- (00000000000BE848) ----------------------------------------------------
pthread_mutex_t *__fastcall interr(int a1)
{
  _DWORD *exception; // x0
  __int64 v3; // x0

  if ( (sub_B2AA4() & 1) != 0 )
  {
    exception = _cxa_allocate_exception(0x10u);
    *(_QWORD *)exception = &off_160448;
    exception[2] = a1;
    _cxa_throw(exception, (struct type_info *)&`typeinfo for'interr_exc_t, (void (*)(void *))std::bad_alloc::~bad_alloc);
  }
  sub_3B1DC("Oops! internal error %d occurred.", a1);
  return del_qatexit(v3);
}
// BE891: variable 'v3' is possibly undefined
// 15D790: using guessed type __int64 `typeinfo for'interr_exc_t;
// 160448: using guessed type void (__fastcall *off_160448)(std::bad_alloc *__hidden this);
