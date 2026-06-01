/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432C30
// Address: 0x0000000000432C30

//----- (0000000000432C30) ----------------------------------------------------
__int64 __fastcall sub_432C30(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  unsigned int v3; // ebp
  int v4; // edx

  v1 = *(_QWORD *)(a1 + 296);
  v2 = *(_QWORD *)(a1 + 304);
  v3 = *(_DWORD *)(v1 + 4 * v2 - 4);
  v4 = v3;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 304) = v2 - 1;
    v4 = *(_DWORD *)(v1 + 4 * (v2 - 1) - 4);
    if ( v2 != 1 )
      *(_QWORD *)(a1 + 304) = v2 - 2;
  }
  sub_432AC0(a1, 171, v4);
  if ( v3 )
    sub_438BA0(*(__int64 **)(a1 + 200), v3, *(_DWORD *)(a1 + 208) - 4 - v3);
  return 0;
}
