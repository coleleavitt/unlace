/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F6D4
// Address: 0x0003F6D4

//----- (0003F6D4) --------------------------------------------------------
int __fastcall sub_3F6D4(int a1)
{
  int v1; // r4
  pthread_mutex_t *v2; // r6
  int v3; // r7
  const char **v4; // r0

  v1 = a1;
  if ( a1 )
  {
    v2 = (pthread_mutex_t *)dword_D3A90;
    sub_7A100((pthread_mutex_t *)dword_D3A90);
    v3 = sub_3E348();
    v4 = sub_3DDF0((char *)v1);
    if ( v4 && *(_DWORD *)(v3 + 24) <= (unsigned int)(-1431655765 * (((char *)v4 - (char *)off_D2CCC) >> 3)) )
    {
      v1 = 1;
      v4[1] = nullptr;
    }
    else
    {
      v1 = 0;
    }
    sub_7A128(v2);
  }
  return v1;
}
// D2CCC: using guessed type _UNKNOWN **off_D2CCC;
// D3A90: using guessed type int dword_D3A90;
