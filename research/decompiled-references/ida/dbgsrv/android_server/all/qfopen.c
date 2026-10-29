/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfopen
// Address: 0x00000000000BACFC

//----- (00000000000BACFC) ----------------------------------------------------
FILE *__fastcall qfopen(const char *a1, char *a2)
{
  FILE *v3; // x19
  pthread_mutex_t modes; // [xsp+4h] [xbp-3Ch] BYREF

  *(__int64 *)((char *)&modes.__align + 20) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  qstrncpy(&modes, a2, 20);
  qstrncat(&modes, "e", 20);
  v3 = sub_BAD80(a1, (char *)&modes, 8);
  if ( !v3 )
    set_qerrno(1u);
  return v3;
}
