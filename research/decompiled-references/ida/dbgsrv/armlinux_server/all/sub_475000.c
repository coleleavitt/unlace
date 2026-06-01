/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475000
// Address: 0x0000000000475000

//----- (0000000000475000) ----------------------------------------------------
__int64 __fastcall sub_475000(__int64 a1, int *a2, __int64 a3)
{
  int v4; // w6
  __int64 v5; // x4
  __int64 *v6; // x5
  int v7; // w0
  int v8; // w3
  __int64 v9; // t1
  __int64 result; // x0
  __int64 (*v12)(); // x4
  int v13; // w0
  int *v14; // [xsp+10h] [xbp-10h]
  __int64 v15; // [xsp+18h] [xbp-8h]

  v4 = *(_DWORD *)(a1 + 868);
  if ( v4 < 0 )
  {
    v12 = *(__int64 (**)())(*(_QWORD *)a1 + 624LL);
    if ( v12 == sub_4071D0 || (v14 = a2, v15 = a3, v13 = v12(), v13 < 0) )
    {
      *(_DWORD *)(a1 + 868) = 0;
      return 6;
    }
    a2 = v14;
    a3 = v15;
    if ( v13 > 16 )
      v4 = 16;
    else
      v4 = v13;
    *(_DWORD *)(a1 + 868) = v4;
  }
  if ( !v4 )
    return 6;
  v5 = *(_QWORD *)(a1 + 1264);
  if ( a3 == v5 )
    return 4;
  v6 = (__int64 *)(a1 + 1288);
  v7 = 0;
  v8 = -1;
  while ( 1 )
  {
    if ( v8 < 0 && v5 == -1 )
      v8 = v7;
    if ( ++v7 == v4 )
      break;
    v9 = *v6;
    v6 += 3;
    v5 = v9;
    if ( v9 == a3 )
      return 4;
  }
  if ( v8 == -1 )
    return 6;
  result = 0;
  if ( a2 )
    *a2 = v8;
  return result;
}
