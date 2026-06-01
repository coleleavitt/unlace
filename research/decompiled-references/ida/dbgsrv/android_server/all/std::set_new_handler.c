/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::set_new_handler
// Address: 0x00000000000D6D38

//----- (00000000000D6D38) ----------------------------------------------------
unsigned __int64 __fastcall std::set_new_handler(void (*a1)())
{
  unsigned __int64 v1; // x8

  do
    v1 = __ldaxr((unsigned __int64 *)&_cxa_new_handler);
  while ( __stlxr((unsigned __int64)a1, (unsigned __int64 *)&_cxa_new_handler) );
  return v1;
}
// 169108: using guessed type __int64 _cxa_new_handler;
