/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_641A0
// Address: 0x00000000000641A0

//----- (00000000000641A0) ----------------------------------------------------
__int64 __fastcall sub_641A0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rsi
  int v5; // edx
  __int64 v6; // rax

  v1 = *(_QWORD *)(a1 + 296);
  v2 = *(_QWORD *)(a1 + 304);
  v3 = *(unsigned int *)(v1 + 4 * v2 - 4);
  if ( v2 )
  {
    v4 = v2 - 1;
    *(_QWORD *)(a1 + 304) = v2 - 1;
    v5 = *(_DWORD *)(v1 + 4 * v2 - 8);
    v6 = v2 - 2;
    if ( !v4 )
      v6 = 0;
    *(_QWORD *)(a1 + 304) = v6;
  }
  else
  {
    v5 = *(_DWORD *)(v1 - 4);
  }
  sub_63E80(a1, 171, v5);
  if ( (_DWORD)v3 )
    sub_6BEF0(*(_QWORD **)(a1 + 200), v3, *(_DWORD *)(a1 + 208) + -4 - v3);
  return 0;
}
