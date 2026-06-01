/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42FEF0
// Address: 0x000000000042FEF0

//----- (000000000042FEF0) ----------------------------------------------------
__int64 __fastcall sub_42FEF0(__int64 a1)
{
  void **v2; // rbp
  _BYTE *v3; // rax
  void *v4; // rsi
  void *v5; // rax

  if ( *(_BYTE *)(a1 + 212) == 0xD3 )
    return 0;
  v2 = *(void ***)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -47;
  v3 = v2[1];
  v4 = *v2;
  if ( v2[2] < v3 + 1 )
  {
    v5 = sub_481540((__int64)v2, v4, (unsigned __int64)(v3 + 1), 1u);
    *v2 = v5;
    v4 = v5;
    v3 = v2[1];
  }
  v3[(_QWORD)v4] = -47;
  v2[1] = (char *)v2[1] + 1;
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
