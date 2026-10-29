__int64 __fastcall sub_A656E0(__int64 a1, __int64 a2, double a3)
{
  char v3; // al
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx

  v3 = *(_BYTE *)(a2 + 48);
  if ( (v3 & 2) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 952);
    v6 = *(unsigned int *)(a2 + 8);
    if ( !v5 || (v7 = *(unsigned int *)(v5 - 4), (_DWORD)v7 == *(_DWORD *)(v5 - 8)) )
    {
      sub_2FD3F0((unsigned int **)(a1 + 952));
      v5 = *(_QWORD *)(a1 + 952);
      v7 = *(unsigned int *)(v5 - 4);
    }
    *(_DWORD *)(v5 + 4 * v7) = v6;
    ++*(_DWORD *)(v5 - 4);
    --*(_DWORD *)(*(_QWORD *)(a1 + 640) + 4 * v6);
    v3 = *(_BYTE *)(a2 + 48);
  }
  if ( (v3 & 1) != 0 )
  {
    ++*(_DWORD *)(a1 + 236);
    return sub_A65280(a1, a2, a3);
  }
  else
  {
    ++*(_DWORD *)(a1 + 232);
    return sub_A64E00(a1, a2, a3);
  }
}

