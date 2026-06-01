/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47CDD8
// Address: 0x000000000047CDD8

//----- (000000000047CDD8) ----------------------------------------------------
void __fastcall sub_47CDD8(_QWORD *a1)
{
  pthread_mutex_t *v2; // x21
  _QWORD *v3; // x0
  __int64 v4; // x1

  *a1 = &off_51E3A8;
  v2 = (pthread_mutex_t *)qword_5223D0;
  sub_494720((pthread_mutex_t *)qword_5223D0);
  v3 = (_QWORD *)qword_5223D8;
  v4 = qword_5223D8 + 8 * qword_5223E0;
  if ( qword_5223D8 != v4 )
  {
    while ( a1 != (_QWORD *)*v3 )
    {
      if ( (_QWORD *)v4 == ++v3 )
        goto LABEL_6;
    }
    memmove(v3, v3 + 1, ((v4 - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8LL) - 8);
    --qword_5223E0;
  }
LABEL_6:
  sub_494760(v2);
  j_j__free_0(a1);
}
// 51E3A8: using guessed type void (__fastcall __noreturn *off_51E3A8)();
// 5223D0: using guessed type __int64 qword_5223D0;
// 5223D8: using guessed type __int64 qword_5223D8;
// 5223E0: using guessed type __int64 qword_5223E0;
