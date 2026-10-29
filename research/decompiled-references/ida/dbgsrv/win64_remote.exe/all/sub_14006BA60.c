/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006BA60
// Address: 0x000000014006BA60

//----- (000000014006BA60) ----------------------------------------------------
void sub_14006BA60()
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))qword_1400B8940; i < (void (**)(void))qword_1400B8940; ++i )
  {
    if ( *i )
      (*i)();
  }
}
// 1400B8940: using guessed type __int64 qword_1400B8940[2];
