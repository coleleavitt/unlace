/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A8444
// Address: 0x00000000000A8444

//----- (00000000000A8444) ----------------------------------------------------
__int64 __fastcall sub_A8444(char *a1, _OWORD *a2)
{
  __int128 v2; // q1
  void **p_pad1; // x20
  unsigned int v4; // w19
  _OWORD v6[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v7; // [xsp+28h] [xbp-28h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = a2[1];
  v6[0] = *a2;
  v6[1] = v2;
  if ( qword_166CC8 )
    p_pad1 = (void **)qword_166CC8;
  else
    p_pad1 = &_sF.__pad1;
  v4 = qvfprintf((FILE *)p_pad1, a1, v6);
  fflush((FILE *)p_pad1);
  return v4;
}
// 166CC8: using guessed type __int64 qword_166CC8;
// 169790: using guessed type FILE _sF;
