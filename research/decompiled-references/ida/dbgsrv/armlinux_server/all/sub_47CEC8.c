/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47CEC8
// Address: 0x000000000047CEC8

//----- (000000000047CEC8) ----------------------------------------------------
void __fastcall sub_47CEC8(unsigned int a1)
{
  pthread_mutex_t *v1; // x23
  __int64 v3; // x20
  _QWORD *v4; // x22
  _QWORD *v5; // x20
  _QWORD *v6; // x19

  v1 = (pthread_mutex_t *)qword_5223D0;
  sub_494720((pthread_mutex_t *)qword_5223D0);
  v4 = (_QWORD *)qword_5223D8;
  v3 = qword_5223E0;
  qword_5223D8 = 0;
  qword_5223E0 = 0;
  qword_5223E8 = 0;
  v5 = &v4[v3];
  sub_494760(v1);
  if ( v4 != v5 )
  {
    v6 = v4;
    do
    {
      (**(void (__fastcall ***)(_QWORD, _QWORD))*v6)(*v6, a1);
      ++v6;
    }
    while ( v5 != v6 );
  }
  if ( v4 )
    j__free(v4);
}
// 5223D0: using guessed type __int64 qword_5223D0;
// 5223D8: using guessed type __int64 qword_5223D8;
// 5223E0: using guessed type __int64 qword_5223E0;
// 5223E8: using guessed type __int64 qword_5223E8;
