/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: aeabi_atexit
// Address: 0x00080BC0

//----- (00080BC0) --------------------------------------------------------
int __fastcall _aeabi_atexit(void *obj, void (*lpfunc)(void *), void *a3)
{
  return j___cxa_atexit(lpfunc, obj, a3);
}
