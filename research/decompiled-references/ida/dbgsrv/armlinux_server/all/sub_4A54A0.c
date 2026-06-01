/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A54A0
// Address: 0x00000000004A54A0

//----- (00000000004A54A0) ----------------------------------------------------
__int64 __fastcall sub_4A54A0(__int64 a1)
{
  _BYTE *v1; // x1
  int v2; // w0
  __int64 v3; // x8
  int v4; // w1
  int v5; // w3
  __int64 v6; // x2
  __int64 result; // x0

  v1 = *(_BYTE **)(a1 + 24);
  if ( *v1 != 84 )
    return 0;
  *(_QWORD *)(a1 + 24) = v1 + 1;
  v2 = sub_4A5428(a1);
  if ( v2 < 0 )
    return 0;
  v4 = *(_DWORD *)(v3 + 40);
  v5 = *(_DWORD *)(v3 + 44);
  ++*(_DWORD *)(v3 + 64);
  if ( v4 >= v5 )
    return 0;
  v6 = v2;
  result = *(_QWORD *)(v3 + 32) + 24LL * v4;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(v3 + 40) = v4 + 1;
  *(_DWORD *)result = 5;
  *(_QWORD *)(result + 8) = v6;
  return result;
}
// 4A54D0: variable 'v3' is possibly undefined
