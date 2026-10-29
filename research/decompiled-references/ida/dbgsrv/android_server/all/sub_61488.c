/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61488
// Address: 0x0000000000061488

//----- (0000000000061488) ----------------------------------------------------
__int64 __fastcall sub_61488(__int64 a1)
{
  __int64 v1; // x9
  __int64 v2; // x10
  __int64 v4; // x8
  __int64 v5; // x20
  __int64 v6; // x10
  int v7; // w2
  __int64 v8; // x8

  v1 = *(_QWORD *)(a1 + 296);
  v2 = *(_QWORD *)(a1 + 304);
  v4 = v2 - 1;
  v5 = *(unsigned int *)(v1 + 4 * (v2 - 1));
  if ( v2 )
  {
    *(_QWORD *)(a1 + 304) = v4;
    v6 = v2 - 2;
    v7 = *(_DWORD *)(v1 + 4 * v6);
    if ( v4 )
      v8 = v6;
    else
      v8 = 0;
    *(_QWORD *)(a1 + 304) = v8;
  }
  else
  {
    v7 = *(_DWORD *)(v1 - 4);
  }
  sub_61190(a1, 171, v7);
  if ( (_DWORD)v5 )
    ((void (__fastcall *)(_QWORD, __int64, _QWORD))loc_68E54)(
      *(_QWORD *)(a1 + 200),
      v5,
      (unsigned int)(-4 - v5 + *(_DWORD *)(a1 + 208)));
  return 0;
}
