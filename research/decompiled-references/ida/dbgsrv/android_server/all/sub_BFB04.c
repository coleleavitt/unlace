/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BFB04
// Address: 0x00000000000BFB04

//----- (00000000000BFB04) ----------------------------------------------------
__int64 __fastcall sub_BFB04(__int64 a1)
{
  _QWORD *v1; // x20
  _QWORD *v3; // x0
  __int64 v4; // x8
  void (__fastcall *v5)(pthread_mutex_t *); // x20
  pthread_mutex_t *v6; // x0

  v1 = (_QWORD *)qword_168DF8;
  if ( qword_168DF8 )
  {
    while ( 1 )
    {
      v3 = (_QWORD *)*v1;
      v4 = v1[1];
      if ( !v4 )
        break;
      v5 = (void (__fastcall *)(pthread_mutex_t *))v3[v4 - 1];
      v6 = del_qatexit((__int64)v5);
      v5(v6);
      v1 = (_QWORD *)qword_168DF8;
      if ( !qword_168DF8 )
        goto LABEL_8;
    }
    if ( v3 )
    {
      v1[1] = 0;
      qfree(v3);
      *v1 = 0;
      v1[2] = 0;
    }
    qfree(v1);
  }
LABEL_8:
  qword_168DF8 = 0;
  if ( *(_BYTE *)(a1 + 28) )
    exit(*(_DWORD *)(a1 + 24));
  return 0;
}
// 167DD0: using guessed type __int64[512];
// 168DF8: using guessed type __int64 qword_168DF8;
