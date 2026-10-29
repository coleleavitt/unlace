/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CCE8
// Address: 0x000000000008CCE8

//----- (000000000008CCE8) ----------------------------------------------------
__int64 __fastcall sub_8CCE8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // w19
  unsigned int v5; // w8

  v4 = *(unsigned __int8 *)(a4 + 289);
  if ( *(_BYTE *)(a4 + 289) && (unsigned int)sub_8EDD0(a4, 0x28u) )
    v5 = 2;
  else
    v5 = 1;
  if ( v4 )
    return v5;
  else
    return 0;
}
