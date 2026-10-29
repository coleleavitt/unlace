/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006BA9C
// Address: 0x000000014006BA9C

//----- (000000014006BA9C) ----------------------------------------------------
void __fastcall sub_14006BA9C()
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))qword_1400B8950; i < (void (**)(void))qword_1400B8950; ++i )
  {
    if ( *i )
      (*i)();
  }
}
// 1400B8950: using guessed type __int64 qword_1400B8950[2];
