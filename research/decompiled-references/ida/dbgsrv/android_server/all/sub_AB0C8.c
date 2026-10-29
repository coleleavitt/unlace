/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB0C8
// Address: 0x00000000000AB0C8

//----- (00000000000AB0C8) ----------------------------------------------------
__int64 sub_AB0C8()
{
  if ( !qsem_post(qword_166D50) )
    abort();
  return qsem_free(qword_166D50);
}
// 166D50: using guessed type __int64 qword_166D50;
