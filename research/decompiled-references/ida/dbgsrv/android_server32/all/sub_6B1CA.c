/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B1CA
// Address: 0x0006B1CA

//----- (0006B1CA) --------------------------------------------------------
int __fastcall sub_6B1CA(int a1, char *s1, _DWORD *a3)
{
  unsigned int v4; // r4
  int v5; // r5
  int v6; // r7

  v4 = *(_DWORD *)(a1 + 284);
  v5 = -1;
  if ( v4 )
  {
    v6 = *(_DWORD *)(a1 + 280);
    v5 = 0;
    while ( strcasecmp(s1, *(const char **)v6) )
    {
      v6 += 20;
      if ( ++v5 >= v4 )
        return -1;
    }
    if ( a3 )
      *a3 = *(unsigned __int8 *)(v6 + 8);
  }
  return v5;
}
