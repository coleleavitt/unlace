/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A8418
// Address: 0x00000000000A8418

//----- (00000000000A8418) ----------------------------------------------------
size_t __fastcall sub_A8418(void *ptr, size_t n)
{
  void **p_pad1; // x8

  p_pad1 = (void **)qword_166CC8;
  if ( !qword_166CC8 )
    p_pad1 = &_sF.__pad1;
  return qfwrite((FILE *)p_pad1, ptr, n);
}
// 166CC8: using guessed type __int64 qword_166CC8;
// 169790: using guessed type FILE _sF;
