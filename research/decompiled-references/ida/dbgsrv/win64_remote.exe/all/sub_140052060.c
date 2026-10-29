/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140052060
// Address: 0x0000000140052060

//----- (0000000140052060) ----------------------------------------------------
char __fastcall sub_140052060(__int64 *a1, __int64 a2, int a3)
{
  int v3; // r11d
  _DWORD *v4; // r9
  __int64 v5; // r10
  _QWORD *i; // rax
  __int64 v8; // rax

  v3 = 0;
  v4 = a1 + 91;
  v5 = 0;
  for ( i = a1 + 87; *i != a2 || *v4 != a3; ++i )
  {
    ++v3;
    ++v5;
    ++v4;
    if ( v5 >= 4 )
      return 0;
  }
  a1[v3 + 87] = -1;
  v8 = *a1;
  *((_DWORD *)a1 + 187) &= ~(3 << (2 * v3)) & ~(15 << (4 * v3 + 16));
  return (*(__int64 (__fastcall **)(__int64 *))(v8 + 608))(a1);
}
