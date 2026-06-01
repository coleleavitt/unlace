/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BA78
// Address: 0x0009BA78

//----- (0009BA78) --------------------------------------------------------
int sub_9BA78()
{
  if ( sub_9B948() )
    return pthread_once(&dword_E07D8, (void (*)(void))sub_9BA5C);
  else
    return -1;
}
// 9BA5C: using guessed type int sub_9BA5C();
// E07D8: using guessed type int dword_E07D8;
