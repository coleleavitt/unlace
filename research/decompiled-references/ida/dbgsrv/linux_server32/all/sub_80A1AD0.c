/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A1AD0
// Address: 0x080A1AD0

//----- (080A1AD0) --------------------------------------------------------
int __cdecl sub_80A1AD0(int a1, int a2, char a3)
{
  unsigned int v4; // edi
  unsigned int *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  int v8; // [esp-24h] [ebp-28h]
  int v9; // [esp-20h] [ebp-24h]
  int v10; // [esp-1Ch] [ebp-20h]

  if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 5 )
    return 0;
  v4 = *(_DWORD *)(a2 + 24);
  if ( v4 == -1 )
  {
    v4 = *(_DWORD *)(a2 + 20);
    if ( v4 == -1 )
      v4 = *(_DWORD *)(a2 + 8);
  }
  v5 = (unsigned int *)sub_80A10C0(a1, *(_DWORD *)(a2 + 4), v4);
  if ( !v5 )
    return 0;
  sub_80A03F0(a1, (char *)&qword_811CFF4 - 277250, v4);
  *(_BYTE *)(a2 + 12) = 1;
  v6 = *(_DWORD **)(a1 + 224);
  v7 = &v6[*(_DWORD *)(a1 + 228)];
  if ( v6 != v7 )
  {
    while ( v4 != *v6 )
    {
      if ( v7 == ++v6 )
        return sub_80A15D0((__int64 ***)a1, v5, (_DWORD *)a2, a3);
    }
    if ( v7 != v6 )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(617, v8, v9, v10);
      JUMPOUT(0x804FBF6);
    }
  }
  return sub_80A15D0((__int64 ***)a1, v5, (_DWORD *)a2, a3);
}
// 80A1BAD: control flows out of bounds to 804FBF6
// 80A1BBD: variable 'v8' is possibly undefined
// 80A1BBD: variable 'v9' is possibly undefined
// 80A1BBD: variable 'v10' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811F8A1: using guessed type char byte_811F8A1;
