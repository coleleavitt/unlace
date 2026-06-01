/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_485DD0
// Address: 0x0000000000485DD0

//----- (0000000000485DD0) ----------------------------------------------------
__int64 __fastcall sub_485DD0(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // x21
  unsigned __int64 v5; // x0
  int v6; // w3
  unsigned __int8 *v8; // x22
  __int64 v9; // x3
  int v10; // w0
  unsigned __int8 *v12; // [xsp+40h] [xbp-10h] BYREF

  if ( a1 )
    *a1 = -1;
  v4 = *a2;
  v5 = *a2 - 1;
  if ( v5 < a3 )
    return 0;
  v6 = *(unsigned __int8 *)(v4 - 1);
  if ( (v6 & 0x80) == 0 )
  {
    if ( a1 )
      *a1 = v6;
    *a2 = v5;
    return 1;
  }
  if ( (v6 & 0xC0) != 0x80 )
    return 0;
  v8 = (unsigned __int8 *)(v4 - 2);
  if ( a3 > v4 - 2 )
    return 0;
  v9 = 2;
  while ( (*v8 & 0xC0) == 0x80 )
  {
    if ( a3 <= (unsigned __int64)--v8 && ++v9 != 5 )
      continue;
    return 0;
  }
  v12 = v8;
  v10 = sub_485C28(&v12);
  if ( v10 == -1 || (unsigned __int64)v12 > v4 )
    return 0;
  if ( a1 )
    *a1 = v10;
  *a2 = (unsigned __int64)v8;
  return 1;
}
