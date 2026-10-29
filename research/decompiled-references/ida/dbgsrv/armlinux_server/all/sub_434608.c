/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_434608
// Address: 0x0000000000434608

//----- (0000000000434608) ----------------------------------------------------
__int64 __fastcall sub_434608(__int64 a1)
{
  __int64 v2; // x20
  char v3; // w21
  __int64 v4; // x1
  _BYTE *v5; // x0
  __int64 v6; // x20
  __int64 v7; // x1
  _BYTE *v8; // x0

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(_DWORD *)(a1 + 216) == 1 )
    v3 = 112;
  else
    v3 = -32;
  *(_BYTE *)(a1 + 212) = v3;
  v4 = *(_QWORD *)(v2 + 8);
  if ( (unsigned __int64)(v4 + 1) > *(_QWORD *)(v2 + 16) )
  {
    v5 = sub_491288(v2, *(void **)v2, v4 + 1, 1u);
    *(_QWORD *)v2 = v5;
    v4 = *(_QWORD *)(v2 + 8);
  }
  else
  {
    v5 = *(_BYTE **)v2;
  }
  v5[v4] = v3;
  ++*(_QWORD *)(v2 + 8);
  *(_BYTE *)(a1 + 212) = -81;
  v6 = *(_QWORD *)(a1 + 200);
  ++*(_DWORD *)(a1 + 208);
  v7 = *(_QWORD *)(v6 + 8);
  if ( (unsigned __int64)(v7 + 1) > *(_QWORD *)(v6 + 16) )
  {
    v8 = sub_491288(v6, *(void **)v6, v7 + 1, 1u);
    *(_QWORD *)v6 = v8;
    v7 = *(_QWORD *)(v6 + 8);
  }
  else
  {
    v8 = *(_BYTE **)v6;
  }
  v8[v7] = -81;
  ++*(_QWORD *)(v6 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
