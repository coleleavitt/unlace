/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: destr_function
// Address: 0x00000000000CF9C0

//----- (00000000000CF9C0) ----------------------------------------------------
void __fastcall destr_function(__int64 a1)
{
  sub_D0D20(a1);
  if ( pthread_setspecific(key, nullptr) )
    sub_D27E0("cannot zero out thread value for __cxa_get_globals()");
}
