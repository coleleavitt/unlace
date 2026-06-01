/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_793E0
// Address: 0x000793E0

//----- (000793E0) --------------------------------------------------------
int __cdecl sub_793E0(int a1, __int64 a2, int a3)
{
  int result; // eax
  int v4; // eax
  int v5; // esi
  char *v6; // edx

  if ( a2 )
  {
    result = -1;
    if ( a2 - 1 >= (unsigned __int64)*(unsigned int *)(a1 + 56) )
      return result;
    v4 = *(_DWORD *)(a1 + 52);
    v5 = 100 * (a2 - 1);
    *(_QWORD *)(a3 + 20) = *(_QWORD *)(v4 + v5);
    *(_DWORD *)(a3 + 36) = *(_DWORD *)(v4 + v5 + 8);
    *(_DWORD *)(a3 + 40) = 0;
    if ( *(_DWORD *)(v4 + v5 + 16) )
      v6 = *(char **)(v4 + v5 + 12);
    else
      v6 = byte_EF875;
    *(_DWORD *)a3 = v6;
    *(_DWORD *)(a3 + 44) = *(_DWORD *)(v4 + v5 + 24);
    *(_DWORD *)(a3 + 48) = 0;
    *(_DWORD *)(a3 + 68) = *(_DWORD *)(v4 + v5 + 28);
    *(_DWORD *)(a3 + 72) = 0;
    *(_QWORD *)(a3 + 4) = *(_QWORD *)(v4 + v5 + 40);
    *(_QWORD *)(a3 + 52) = *(_QWORD *)(v4 + v5 + 48);
  }
  else
  {
    *(_DWORD *)(a3 + 4) = 0;
    *(_DWORD *)(a3 + 12) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)(a3 + 20) = 0;
    *(_DWORD *)(a3 + 16) = 0;
    *(_DWORD *)(a3 + 28) = 0;
    *(_DWORD *)(a3 + 24) = 0;
    *(_DWORD *)(a3 + 36) = 0;
    *(_DWORD *)(a3 + 32) = 0;
    *(_DWORD *)(a3 + 44) = 0;
    *(_DWORD *)(a3 + 40) = 0;
    *(_DWORD *)(a3 + 52) = 0;
    *(_DWORD *)(a3 + 48) = 0;
    *(_DWORD *)(a3 + 60) = 0;
    *(_DWORD *)(a3 + 56) = 0;
    *(_DWORD *)(a3 + 68) = 0;
    *(_DWORD *)(a3 + 64) = 0;
    *(_DWORD *)(a3 + 72) = 0;
    *(_DWORD *)a3 = &byte_DCEE2;
  }
  return 0;
}
// DCEE2: using guessed type char byte_DCEE2;
