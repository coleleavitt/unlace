/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433430
// Address: 0x0000000000433430

//----- (0000000000433430) ----------------------------------------------------
__int64 __fastcall sub_433430(__int64 a1)
{
  __int64 v1; // x19
  __int64 v2; // x3
  int v3; // w21
  void *v4; // x1

  v1 = a1 + 248;
  v2 = *(_QWORD *)(a1 + 256);
  v3 = *(_DWORD *)(a1 + 208);
  v4 = *(void **)(a1 + 248);
  if ( (unsigned __int64)(v2 + 1) > *(_QWORD *)(a1 + 264) )
  {
    v4 = sub_491288(a1 + 248, v4, v2 + 1, 4u);
    *(_QWORD *)(a1 + 248) = v4;
    v2 = *(_QWORD *)(v1 + 8);
  }
  *((_DWORD *)v4 + v2) = v3;
  ++*(_QWORD *)(v1 + 8);
  return 0;
}
