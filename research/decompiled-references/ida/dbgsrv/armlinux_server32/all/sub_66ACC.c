/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66ACC
// Address: 0x00066ACC

//----- (00066ACC) --------------------------------------------------------
bool __fastcall sub_66ACC(int *a1, _DWORD *a2)
{
  unsigned int v3; // r0
  unsigned int v5; // r4
  int v6; // r3
  _BOOL4 result; // r0
  unsigned int v8; // [sp+0h] [bp-Ch] BYREF

  v3 = a2[1];
  v5 = v3;
  if ( v3 )
  {
    v5 = v3 - 1;
    v3 = bswap32(v3 - 1);
  }
  v6 = *a1;
  v8 = v3;
  if ( (*(int (__fastcall **)(int *, unsigned int *, int))(v6 + 32))(a1, &v8, 4) != 4 )
    return 0;
  result = 1;
  if ( v5 )
    return (*(int (__fastcall **)(int *, _DWORD, unsigned int))(*a1 + 32))(a1, *a2, v5) == v5;
  return result;
}
