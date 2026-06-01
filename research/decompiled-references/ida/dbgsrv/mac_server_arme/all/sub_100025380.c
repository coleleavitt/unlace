/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025380
// Address: 0x0000000100025380

//----- (0000000100025380) ----------------------------------------------------
__int64 __fastcall sub_100025380(__int64 a1)
{
  char v2; // w21
  __int64 v3; // x20
  _QWORD *v4; // x1
  __int64 v5; // x8
  __int64 v6; // x20
  _QWORD *v7; // x1
  __int64 v8; // x8

  if ( *(_DWORD *)(a1 + 216) == 1 )
    v2 = 112;
  else
    v2 = -32;
  *(_BYTE *)(a1 + 212) = v2;
  v3 = *(_QWORD *)(a1 + 200);
  v4 = *(_QWORD **)v3;
  v5 = *(_QWORD *)(v3 + 8);
  if ( *(_QWORD *)(v3 + 16) < (unsigned __int64)(v5 + 1) )
  {
    v4 = qvector_reserve(*(_QWORD **)(a1 + 200), v4, v5 + 1, 1u);
    *(_QWORD *)v3 = v4;
    v5 = *(_QWORD *)(v3 + 8);
  }
  *((_BYTE *)v4 + v5) = v2;
  ++*(_QWORD *)(v3 + 8);
  ++*(_DWORD *)(a1 + 208);
  *(_BYTE *)(a1 + 212) = -81;
  v6 = *(_QWORD *)(a1 + 200);
  v7 = *(_QWORD **)v6;
  v8 = *(_QWORD *)(v6 + 8);
  if ( *(_QWORD *)(v6 + 16) < (unsigned __int64)(v8 + 1) )
  {
    v7 = qvector_reserve(*(_QWORD **)(a1 + 200), v7, v8 + 1, 1u);
    *(_QWORD *)v6 = v7;
    v8 = *(_QWORD *)(v6 + 8);
  }
  *((_BYTE *)v7 + v8) = -81;
  ++*(_QWORD *)(v6 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
