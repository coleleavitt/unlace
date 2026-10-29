/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76584
// Address: 0x00076584

//----- (00076584) --------------------------------------------------------
int __fastcall sub_76584(int a1, unsigned __int8 *a2, int a3)
{
  char *v3; // r5
  char *v7; // r0
  unsigned __int8 *v8; // r1
  int result; // r0

  v3 = (char *)(a1 + 4120);
  sub_70558((unsigned __int8 *)(a1 + 4120), a2, 4096);
  v7 = strrchr(v3, 47);
  if ( v7 )
  {
    v8 = (unsigned __int8 *)(v7 + 1);
    if ( v7 == (char *)-1 )
      v8 = a2;
    *v7 = 0;
    *(_DWORD *)(a1 + 4108) = 0;
    *(_DWORD *)(a1 + 4112) = 0;
  }
  else
  {
    sub_70558((unsigned __int8 *)v3, (unsigned __int8 *)".", 4096);
    *(_DWORD *)(a1 + 4108) = 0;
    v8 = a2;
    *(_DWORD *)(a1 + 4112) = 0;
  }
  result = sub_70558((unsigned __int8 *)(a1 + 8216), v8, 4096);
  *(_DWORD *)(a1 + 12312) = a3;
  return result;
}
