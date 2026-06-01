/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A6120
// Address: 0x080A6120

//----- (080A6120) --------------------------------------------------------
int __cdecl sub_80A6120(int a1, __int64 a2, int a3)
{
  int v3; // eax
  int *v4; // edx
  int v5; // edi
  int v6; // edi
  int v7; // edx

  if ( !a2 )
  {
    *(_OWORD *)(a3 + 52) = 0;
    *(_DWORD *)a3 = "";
    *(_OWORD *)(a3 + 4) = 0;
    *(_OWORD *)(a3 + 20) = 0;
    *(_OWORD *)(a3 + 36) = 0;
    *(_OWORD *)(a3 + 60) = 0;
    return 0;
  }
  if ( a2 - 1 < (unsigned __int64)*(unsigned int *)(a1 + 56) )
  {
    v3 = *(_DWORD *)(a1 + 52) + 100 * (a2 - 1);
    v4 = &dword_80DDFD8;
    *(_QWORD *)(a3 + 20) = *(_QWORD *)v3;
    v5 = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(a3 + 40) = 0;
    *(_DWORD *)(a3 + 36) = v5;
    if ( *(_DWORD *)(v3 + 16) )
      v4 = *(int **)(v3 + 12);
    *(_DWORD *)a3 = v4;
    v6 = *(_DWORD *)(v3 + 24);
    *(_DWORD *)(a3 + 48) = 0;
    *(_DWORD *)(a3 + 44) = v6;
    v7 = *(_DWORD *)(v3 + 28);
    *(_DWORD *)(a3 + 72) = 0;
    *(_DWORD *)(a3 + 68) = v7;
    *(_QWORD *)(a3 + 4) = *(_QWORD *)(v3 + 40);
    *(_QWORD *)(a3 + 52) = *(_QWORD *)(v3 + 48);
    return 0;
  }
  return -1;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
