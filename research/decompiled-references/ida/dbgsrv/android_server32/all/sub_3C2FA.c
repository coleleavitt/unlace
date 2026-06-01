/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C2FA
// Address: 0x0003C2FA

//----- (0003C2FA) --------------------------------------------------------
int __fastcall sub_3C2FA(_DWORD *a1)
{
  int v1; // r1
  int *v2; // r5
  int v3; // r6
  void **v4; // r4
  void *v5; // r0

  v1 = a1[37];
  v2 = a1 + 37;
  v3 = a1[29];
  v4 = (void **)(a1 + 36);
  if ( a1[38] >= (unsigned int)(v1 + 1) )
  {
    v5 = *v4;
  }
  else
  {
    v5 = qvector_reserve((int)v4, *v4, v1 + 1, 4u);
    *v4 = v5;
    v1 = *v2;
  }
  *((_DWORD *)v5 + v1) = v3;
  ++*v2;
  return 0;
}
