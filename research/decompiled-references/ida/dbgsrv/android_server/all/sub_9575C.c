/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9575C
// Address: 0x000000000009575C

//----- (000000000009575C) ----------------------------------------------------
__int64 __fastcall sub_9575C(__int64 result, unsigned int a2, char a3, __int64 a4, _QWORD *a5)
{
  unsigned __int64 v5; // x8
  __int64 v6; // x9
  unsigned int v7; // w9
  unsigned int v8; // w10

  v5 = result + 12LL * a2;
  v6 = *(unsigned int *)v5;
  if ( a3 == 1 )
  {
    *a5 = bswap32(v6);
    v7 = bswap32(*(_DWORD *)(v5 + 4));
  }
  else
  {
    *a5 = v6;
    v7 = *(_DWORD *)(v5 + 4);
  }
  a5[1] = (unsigned __int8)v7;
  a5[2] = v7 >> 8;
  LODWORD(v5) = *(_DWORD *)(v5 + 8);
  v8 = bswap32(v5);
  if ( a3 == 1 )
    v5 = v8;
  else
    v5 = (unsigned int)v5;
  a5[3] = v5;
  return result;
}
