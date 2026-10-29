__int64 __fastcall sub_895700(__int64 a1, unsigned int a2)
{
  unsigned int *v3; // rcx
  unsigned int *v4; // rdx
  unsigned int *v5; // rax
  unsigned int v6; // edi

  v3 = *(unsigned int **)(a1 + 16);
  v4 = *(unsigned int **)(a1 + 48);
  if ( v4 == &v3[4 * *(_QWORD *)(a1 + 24)] || a2 < *v4 || a2 >= v4[1] )
  {
    v5 = sub_8952A0((_QWORD *)a1, a2);
  }
  else
  {
    v5 = v4 - 4;
    if ( v4 == v3 )
      return 0xFFFFFFFFLL;
  }
  if ( *(unsigned int **)(a1 + 80) != v5 )
  {
    v6 = v5[1];
    *(_QWORD *)(a1 + 48) = v5;
    *(_DWORD *)(a1 + 44) = v6 - 1;
    *(_QWORD *)(a1 + 56) = *((_QWORD *)v5 + 1) + 4LL * (v6 - 1 - *v5);
    return v5[1] - 1;
  }
  return 0xFFFFFFFFLL;
}

