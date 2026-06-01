/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47CA40
// Address: 0x000000000047CA40

//----- (000000000047CA40) ----------------------------------------------------
void sub_47CA40()
{
  pthread_mutex_t *v0; // x22
  __int64 v1; // x20
  _QWORD *v2; // x21
  _QWORD *v3; // x20
  _QWORD *v4; // x19

  v0 = (pthread_mutex_t *)qword_5223D0;
  sub_494720((pthread_mutex_t *)qword_5223D0);
  v2 = (_QWORD *)qword_5223D8;
  v1 = qword_5223E0;
  qword_5223D8 = 0;
  qword_5223E0 = 0;
  qword_5223E8 = 0;
  v3 = &v2[v1];
  sub_494760(v0);
  if ( v2 != v3 )
  {
    v4 = v2;
    do
    {
      (**(void (__fastcall ***)(_QWORD, __int64))*v4)(*v4, 0xFFFFFFFFLL);
      ++v4;
    }
    while ( v3 != v4 );
  }
  if ( v2 )
    j__free(v2);
}
// 5223D0: using guessed type __int64 qword_5223D0;
// 5223D8: using guessed type __int64 qword_5223D8;
// 5223E0: using guessed type __int64 qword_5223E0;
// 5223E8: using guessed type __int64 qword_5223E8;
