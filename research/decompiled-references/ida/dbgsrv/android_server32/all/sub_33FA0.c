/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_33FA0
// Address: 0x00033FA0

//----- (00033FA0) --------------------------------------------------------
int __fastcall sub_33FA0(int a1, _DWORD *a2)
{
  unsigned int v3; // r1
  unsigned int v4; // r0
  __int64 v5; // kr00_8
  _DWORD *v6; // r5
  int v7; // r6
  bool v8; // cf

  v3 = *(_DWORD *)(a1 + 48);
  v4 = *(_DWORD *)(a1 + 52);
  if ( v3 >= v4 )
  {
    v5 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 40);
    v6 = (_DWORD *)(a1 + 40);
    v7 = 0;
    if ( !v5 )
      return v7;
    sub_367E8((_DWORD *)(a1 + 28), v5);
    v7 = 0;
    *(_DWORD *)(a1 + 48) = 0;
    v4 = sub_33A56(a1, v5);
    *(_DWORD *)(a1 + 52) = v4;
    if ( !v4 )
      return v7;
    v8 = __CFADD__(*v6, v4);
    *v6 += v4;
    *(_DWORD *)(a1 + 44) += v8;
    v3 = *(_DWORD *)(a1 + 48);
  }
  v7 = 0;
  if ( v3 < v4 )
  {
    *a2 = *(_DWORD *)(a1 + 28) + 24 * v3;
    ++*(_DWORD *)(a1 + 48);
    return 1;
  }
  return v7;
}
