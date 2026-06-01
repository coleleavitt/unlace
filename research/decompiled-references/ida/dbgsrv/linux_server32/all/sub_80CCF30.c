/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CCF30
// Address: 0x080CCF30

//----- (080CCF30) --------------------------------------------------------
int __cdecl sub_80CCF30(int a1, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // [esp-18h] [ebp-34h]
  int v6; // [esp-14h] [ebp-30h]
  int v7; // [esp-10h] [ebp-2Ch]

  *(_DWORD *)(a1 + 16) = a4;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 20) = a2;
  *(_DWORD *)a1 = &off_811C8D8;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 36) = a1 + 92;
  *(_WORD *)(a1 + 32860) = 1;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_BYTE *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  result = sub_80D46B0((_DWORD *)(a1 + 36), "1.3.1", 56);
  if ( result )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(192, v5, v6, v7);
    JUMPOUT(0x805226A);
  }
  return result;
}
// 80CCFDD: control flows out of bounds to 805226A
// 80CCFEB: variable 'v5' is possibly undefined
// 80CCFEB: variable 'v6' is possibly undefined
// 80CCFEB: variable 'v7' is possibly undefined
// 811C8D8: using guessed type int (__cdecl *off_811C8D8)(int, int, int, int, int);
// 811F8A1: using guessed type char byte_811F8A1;
