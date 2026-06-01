/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: j___cxa_atexit
// Address: 0x00013E98

//----- (00013E98) --------------------------------------------------------
// attributes: thunk
int j___cxa_atexit(void (*lpfunc)(void *), void *obj, void *lpdso_handle)
{
  return _cxa_atexit(lpfunc, obj, lpdso_handle);
}
