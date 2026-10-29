/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99E88
// Address: 0x00099E88

//----- (00099E88) --------------------------------------------------------
int __fastcall sub_99E88(int a1, int a2, char *a3, size_t a4, _DWORD *a5)
{
  size_t v9[2]; // [sp+4h] [bp-2Ch] BYREF
  const char *v10; // [sp+Ch] [bp-24h]
  int v11; // [sp+10h] [bp-20h]

  v9[0] = a4;
  if ( !dladdr(a2, v9) || !v10 )
    return 0;
  snprintf(a3, a4, "%s", v10);
  *a5 = a2 - v11;
  return 1;
}
// 19694: using guessed type int __fastcall dladdr(_DWORD, _DWORD);
