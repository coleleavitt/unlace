/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CFC
// Address: 0x00080CFC

//----- (00080CFC) --------------------------------------------------------
int sub_80CFC()
{
  int v0; // r0
  int v1; // r3
  int v3; // r2

  v0 = sub_840B0();
  v1 = *(_DWORD *)(v0 + 8);
  if ( !v1 )
    sub_80A40();
  if ( *(_BYTE *)(v1 + 32) != 71
    || *(_BYTE *)(v1 + 33) != 78
    || *(_BYTE *)(v1 + 34) != 85
    || *(_BYTE *)(v1 + 35) != 67
    || *(_BYTE *)(v1 + 36) != 67
    || *(_BYTE *)(v1 + 37) != 43
    || *(_BYTE *)(v1 + 38) != 43
    || *(unsigned __int8 *)(v1 + 39) > 1u )
  {
    *(_DWORD *)(v0 + 8) = 0;
    return v1 + 32;
  }
  v3 = *(_DWORD *)(v1 + 28) - 1;
  *(_DWORD *)(v1 + 28) = v3;
  if ( v3 )
    return v1 + 32;
  *(_DWORD *)(v0 + 8) = *(_DWORD *)(v1 + 24);
  *(_DWORD *)(v1 + 24) = 0;
  return v1 + 32;
}
