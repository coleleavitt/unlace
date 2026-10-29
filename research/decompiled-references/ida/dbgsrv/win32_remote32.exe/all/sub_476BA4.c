/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476BA4
// Address: 0x00476BA4

//----- (00476BA4) --------------------------------------------------------
int sub_476BA4()
{
  const unsigned __int16 *v1; // eax
  unsigned __int16 *v2; // esi
  int v3; // edi
  void **v4; // eax

  if ( dword_4B7A04 )
    return 0;
  v1 = (const unsigned __int16 *)sub_47DE01();
  v2 = (unsigned __int16 *)v1;
  if ( v1 )
  {
    v4 = sub_476CC2(v1);
    if ( v4 )
    {
      dword_4B7A08 = (int)v4;
      v3 = 0;
      dword_4B7A04 = v4;
    }
    else
    {
      v3 = -1;
    }
    sub_479216(nullptr);
  }
  else
  {
    v3 = -1;
  }
  sub_479216(v2);
  return v3;
}
// 4B7A08: using guessed type int dword_4B7A08;
