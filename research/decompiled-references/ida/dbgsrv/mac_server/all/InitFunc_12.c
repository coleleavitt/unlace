/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: InitFunc_12
// Address: 0x00000001000804C0

//----- (00000001000804C0) ----------------------------------------------------
void InitFunc_12()
{
  if ( !qword_1000AED00 )
  {
    qword_1000AED00 = pthread_self();
    qword_1000AED08 = qmutex_create();
  }
}
