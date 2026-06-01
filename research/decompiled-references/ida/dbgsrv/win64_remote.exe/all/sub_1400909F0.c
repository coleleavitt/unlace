/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400909F0
// Address: 0x00000001400909F0

//----- (00000001400909F0) ----------------------------------------------------
void sub_1400909F0()
{
  char *v0; // rsi
  __int64 v1; // rdi
  __int64 v2; // rbx
  void *v3; // rcx

  v0 = (char *)qword_1400CB858;
  if ( qword_1400CB858 )
  {
    v1 = qword_1400CB860;
    if ( qword_1400CB860 )
    {
      v2 = 0;
      do
      {
        v3 = *(void **)&v0[v2];
        if ( v3 )
        {
          *(_QWORD *)&v0[v2 + 8] = 0;
          j_free(v3);
          *(_QWORD *)&v0[v2] = 0;
          *(_QWORD *)&v0[v2 + 16] = 0;
          v0 = (char *)qword_1400CB858;
        }
        v2 += 24;
        --v1;
      }
      while ( v1 );
    }
    qword_1400CB860 = 0;
    j_free(v0);
    qword_1400CB858 = nullptr;
    qword_1400CB868 = 0;
  }
}
// 1400CB860: using guessed type __int64 qword_1400CB860;
// 1400CB868: using guessed type __int64 qword_1400CB868;
