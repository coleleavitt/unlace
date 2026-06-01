/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A53C0
// Address: 0x00000000004A53C0

//----- (00000000004A53C0) ----------------------------------------------------
__int64 __fastcall sub_4A53C0(__int64 a1)
{
  int v1; // w2
  _DWORD *v2; // x7
  int v3; // w0
  __int64 v4; // x7

  v1 = *(_DWORD *)(a1 + 40);
  if ( v1 >= *(_DWORD *)(a1 + 44) )
    return 0;
  v2 = (_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL * v1);
  v2[1] = 0;
  *(_DWORD *)(a1 + 40) = v1 + 1;
  *v2 = 65;
  v3 = sub_4A5320((unsigned __int8 **)(a1 + 24));
  *(_QWORD *)(v4 + 8) = v3;
  return v4;
}
// 4A5408: variable 'v4' is possibly undefined
