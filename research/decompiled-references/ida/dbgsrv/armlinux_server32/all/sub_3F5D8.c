/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F5D8
// Address: 0x0003F5D8

//----- (0003F5D8) --------------------------------------------------------
char *__fastcall sub_3F5D8(char *a1, int *a2)
{
  pthread_mutex_t *v4; // r4
  _DWORD *v5; // r0
  _DWORD *v6; // r7
  int v7; // r3
  int v8; // r1
  char *v9; // r5

  v4 = (pthread_mutex_t *)dword_D4AB0;
  sub_7A268((pthread_mutex_t *)dword_D4AB0);
  v5 = (_DWORD *)sub_3E4E0();
  v6 = v5;
  if ( a1 )
  {
    v7 = sub_3F524(v5, a1);
    if ( v7 == 0x7FFFFFFF )
    {
      v9 = nullptr;
      goto LABEL_4;
    }
  }
  else
  {
    v7 = -1;
  }
  v8 = *a2;
  *a2 = v7;
  v9 = sub_3F568(v6, v8);
LABEL_4:
  sub_7A290(v4);
  return v9;
}
// D4AB0: using guessed type int dword_D4AB0;
