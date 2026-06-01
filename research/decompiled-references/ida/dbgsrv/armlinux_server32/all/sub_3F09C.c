/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F09C
// Address: 0x0003F09C

//----- (0003F09C) --------------------------------------------------------
int __fastcall sub_3F09C(int a1, const char *a2)
{
  pthread_mutex_t *v4; // r8
  __int64 v5; // r4
  int v6; // r4

  if ( !a2 )
    return 0;
  v4 = (pthread_mutex_t *)dword_D4AB0;
  sub_7A268((pthread_mutex_t *)dword_D4AB0);
  v5 = *(_QWORD *)(a1 + 52);
  for ( HIDWORD(v5) = v5 + 40 * HIDWORD(v5); (_DWORD)v5 != HIDWORD(v5); LODWORD(v5) = v5 + 40 )
  {
    if ( *(_DWORD *)(v5 + 4) )
    {
      if ( !strcmp(*(const char **)v5, a2) )
        goto LABEL_8;
    }
    else if ( !strcmp((const char *)&dword_8DB98, a2) )
    {
LABEL_8:
      v6 = v5 + 16;
      goto LABEL_10;
    }
  }
  v6 = 0;
LABEL_10:
  sub_7A290(v4);
  return v6;
}
// 8DB98: using guessed type int dword_8DB98;
// D4AB0: using guessed type int dword_D4AB0;
