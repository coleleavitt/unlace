/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7CD04
// Address: 0x0007CD04

//----- (0007CD04) --------------------------------------------------------
int __fastcall sub_7CD04(_DWORD *a1, int a2, int a3)
{
  int v3; // r6
  const char *v5; // r4
  char *v6; // r0
  char *v7; // r1

  v3 = a2;
  v5 = (const char *)(a1 + 1030);
  qustrncpy((unsigned int)(a1 + 1030), a2, 4096);
  v6 = strrchr(v5, 47);
  if ( v6 )
  {
    *v6 = 0;
    v7 = v6 + 1;
  }
  else
  {
    qustrncpy((unsigned int)v5, (int)".", 4096);
    v7 = nullptr;
  }
  a1[1028] = 0;
  a1[1027] = 0;
  if ( v7 )
    v3 = (int)v7;
  qustrncpy((unsigned int)(a1 + 2054), v3, 4096);
  a1[3078] = a3;
  return 12312;
}
