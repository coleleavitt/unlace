/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D1F50
// Address: 0x080D1F50

//----- (080D1F50) --------------------------------------------------------
int __cdecl sub_80D1F50(char *name, char *value)
{
  pthread_mutex_t *v2; // esi
  int v3; // eax
  int v4; // edi

  if ( !value )
    return 0;
  if ( !dword_811F8C4 )
  {
    dword_811F8C4 = sub_80D0B70();
    dword_811F8C8 = (int)sub_80D1320();
  }
  v2 = (pthread_mutex_t *)dword_811F8C8;
  sub_80D15A0((pthread_mutex_t *)dword_811F8C8);
  if ( *value )
    v3 = setenv(name, value, 1);
  else
    v3 = unsetenv(name);
  LOBYTE(v3) = v3 == 0;
  v4 = v3;
  sub_80D1600(v2);
  return v4;
}
// 811F8C4: using guessed type int dword_811F8C4;
// 811F8C8: using guessed type int dword_811F8C8;
