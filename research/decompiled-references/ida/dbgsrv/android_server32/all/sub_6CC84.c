/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6CC84
// Address: 0x0006CC84

//----- (0006CC84) --------------------------------------------------------
bool __fastcall sub_6CC84(int a1, _DWORD *a2)
{
  int v4; // r0
  unsigned int v5; // r5
  int v6; // r1
  _BOOL4 result; // r0
  int v8; // [sp+8h] [bp-8h] BYREF

  v4 = a2[1];
  v5 = v4 - 1;
  if ( !v4 )
    v5 = 0;
  v8 = (v5 << 24) + ((v5 << 8) & 0xFF0000) + ((v5 >> 8) & 0xFF00) + HIBYTE(v5);
  v6 = (*(int (__fastcall **)(int, int *, int))(*(_DWORD *)a1 + 32))(a1, &v8, 4);
  result = 0;
  if ( v6 == 4 )
  {
    result = 1;
    if ( v5 )
      return (*(int (__fastcall **)(int, _DWORD, unsigned int))(*(_DWORD *)a1 + 32))(a1, *a2, v5) == v5;
  }
  return result;
}
