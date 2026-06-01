/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140003D40
// Address: 0x0000000140003D40

//----- (0000000140003D40) ----------------------------------------------------
__int64 __fastcall sub_140003D40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  char v9; // al
  unsigned int v10; // ecx

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 24) + 8LL))(
          *(_QWORD *)(a1 + 24),
          a2,
          a5,
          a3,
          a4) )
    return 2147500037LL;
  if ( !a2 || *(_QWORD *)(a1 + 40) != a2 )
    return 0;
  v9 = sub_140004D10(a1 - 16, a5, a3);
  v10 = -2147467259;
  if ( v9 )
    return 0;
  return v10;
}
