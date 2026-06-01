/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F864
// Address: 0x0003F864

//----- (0003F864) --------------------------------------------------------
int __fastcall sub_3F864(int a1)
{
  int v1; // r4
  pthread_mutex_t *v2; // r6
  int v3; // r7
  const char **v4; // r0

  v1 = a1;
  if ( a1 )
  {
    v2 = (pthread_mutex_t *)dword_D4AB0;
    sub_7A268((pthread_mutex_t *)dword_D4AB0);
    v3 = sub_3E4E0();
    v4 = sub_3DF88((char *)v1);
    if ( v4 && *(_DWORD *)(v3 + 24) <= (unsigned int)(-1431655765 * (((char *)v4 - (char *)off_D3CEC) >> 3)) )
    {
      v1 = 1;
      v4[1] = nullptr;
    }
    else
    {
      v1 = 0;
    }
    sub_7A290(v2);
  }
  return v1;
}
// D3CEC: using guessed type _UNKNOWN **off_D3CEC;
// D4AB0: using guessed type int dword_D4AB0;
