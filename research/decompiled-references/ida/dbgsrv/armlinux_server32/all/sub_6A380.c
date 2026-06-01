/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A380
// Address: 0x0006A380

//----- (0006A380) --------------------------------------------------------
void sub_6A380()
{
  int v0; // r5
  char *v1; // r6
  pthread_mutex_t *v2; // r0
  int v3; // r5
  char *v4; // r5
  char *v5; // r4
  void (__fastcall ***v6)(_DWORD, int); // t1

  v0 = dword_D4B74;
  sub_7A268((pthread_mutex_t *)dword_D4B74);
  v1 = (char *)dword_D4B78;
  v2 = (pthread_mutex_t *)v0;
  v3 = dword_D4B7C;
  dword_D4B78 = 0;
  dword_D4B7C = 0;
  dword_D4B80 = 0;
  sub_7A290(v2);
  v4 = &v1[4 * v3];
  if ( v1 != v4 )
  {
    v5 = v1;
    do
    {
      v6 = *(void (__fastcall ****)(_DWORD, int))v5;
      v5 += 4;
      (**v6)(v6, -1);
    }
    while ( v4 != v5 );
  }
  if ( v1 )
    sub_77F70(v1);
}
// D4B74: using guessed type int dword_D4B74;
// D4B78: using guessed type int dword_D4B78;
// D4B7C: using guessed type int dword_D4B7C;
// D4B80: using guessed type int dword_D4B80;
