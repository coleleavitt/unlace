/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A63C
// Address: 0x0006A63C

//----- (0006A63C) --------------------------------------------------------
void __fastcall sub_6A63C(int a1)
{
  int v2; // r5
  char *v3; // r7
  pthread_mutex_t *v4; // r0
  int v5; // r5
  char *v6; // r5
  char *v7; // r4
  void (__fastcall ***v8)(_DWORD, int); // t1

  v2 = dword_D4B74;
  sub_7A268((pthread_mutex_t *)dword_D4B74);
  v3 = (char *)dword_D4B78;
  v4 = (pthread_mutex_t *)v2;
  v5 = dword_D4B7C;
  dword_D4B78 = 0;
  dword_D4B7C = 0;
  dword_D4B80 = 0;
  sub_7A290(v4);
  v6 = &v3[4 * v5];
  if ( v3 != v6 )
  {
    v7 = v3;
    do
    {
      v8 = *(void (__fastcall ****)(_DWORD, int))v7;
      v7 += 4;
      (**v8)(v8, a1);
    }
    while ( v6 != v7 );
  }
  if ( v3 )
    sub_77F70(v3);
}
// D4B74: using guessed type int dword_D4B74;
// D4B78: using guessed type int dword_D4B78;
// D4B7C: using guessed type int dword_D4B7C;
// D4B80: using guessed type int dword_D4B80;
