/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A8290
// Address: 0x00000000004A8290

//----- (00000000004A8290) ----------------------------------------------------
__int64 __fastcall sub_4A8290(__int64 a1)
{
  unsigned __int8 *v2; // x2
  __int64 *v3; // x20
  int v4; // w1
  bool v7; // zf
  __int64 v8; // x2
  __int64 v9; // x0
  bool v10; // zf
  __int64 result; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // [xsp+38h] [xbp+38h] BYREF

  v2 = *(unsigned __int8 **)(a1 + 24);
  v15 = 0;
  v3 = &v15;
  v4 = *v2;
  if ( v4 == 69 || v4 == 0 || v4 == 46 )
    return 0;
  do
  {
    v7 = v4 == 82 || v4 == 79;
    if ( v7 && v2[1] == 69 )
      break;
    v8 = sub_4A7538(a1);
    if ( !v8 )
      return 0;
    v9 = sub_4A5090(a1, 46, v8, 0);
    *v3 = v9;
    v3 = (__int64 *)(v9 + 16);
    if ( !v9 )
      return 0;
    v2 = *(unsigned __int8 **)(a1 + 24);
    v4 = *v2;
    v10 = v4 == 69 || v4 == 0;
  }
  while ( !v10 && v4 != 46 );
  result = v15;
  if ( !v15 )
    return 0;
  if ( !*(_QWORD *)(v15 + 16) )
  {
    v13 = *(_QWORD *)(v15 + 8);
    if ( *(_DWORD *)v13 == 39 )
    {
      v14 = *(_QWORD *)(v13 + 8);
      if ( *(_DWORD *)(v14 + 28) == 9 )
      {
        *(_DWORD *)(a1 + 80) -= *(_DWORD *)(v14 + 8);
        *(_QWORD *)(result + 8) = 0;
      }
    }
  }
  return result;
}
