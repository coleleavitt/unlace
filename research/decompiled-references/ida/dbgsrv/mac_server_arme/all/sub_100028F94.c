/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100028F94
// Address: 0x0000000100028F94

//----- (0000000100028F94) ----------------------------------------------------
__int64 __fastcall sub_100028F94(__int64 a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x1
  _QWORD *v4; // t1
  int v5; // w20
  __int64 v6; // x8

  v4 = *(_QWORD **)(a1 + 248);
  v2 = (_QWORD *)(a1 + 248);
  v3 = v4;
  v5 = *((_DWORD *)v2 - 10);
  v6 = v2[1];
  if ( v2[2] < (unsigned __int64)(v6 + 1) )
  {
    v3 = qvector_reserve(v2, v3, v6 + 1, 4u);
    *(_QWORD *)(a1 + 248) = v3;
    v6 = *(_QWORD *)(a1 + 256);
  }
  *((_DWORD *)v3 + v6) = v5;
  ++*(_QWORD *)(a1 + 256);
  return 0;
}
