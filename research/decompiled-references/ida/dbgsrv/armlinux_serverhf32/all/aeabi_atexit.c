/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: aeabi_atexit
// Address: 0x0008064C

//----- (0008064C) --------------------------------------------------------
int __fastcall _aeabi_atexit(void *obj, void (*lpfunc)(void *), void *a3)
{
  return j___cxa_atexit(lpfunc, obj, a3);
}
