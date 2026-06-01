__int64 __fastcall sub_A62450(__int64 a1, __int64 a2, double a3)
{
  char v3; // al
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx

  v3 = *(_BYTE *)(a2 + 80);
  if ( (v3 & 2) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 1048);
    v6 = *(unsigned int *)(a2 + 8);
    if ( !v5 || (v7 = *(unsigned int *)(v5 - 4), (_DWORD)v7 == *(_DWORD *)(v5 - 8)) )
    {
      sub_2FD3F0((unsigned int **)(a1 + 1048));
      v5 = *(_QWORD *)(a1 + 1048);
      v7 = *(unsigned int *)(v5 - 4);
    }
    *(_DWORD *)(v5 + 4 * v7) = v6;
    ++*(_DWORD *)(v5 - 4);
    --*(_DWORD *)(*(_QWORD *)(a1 + 704) + 4 * v6);
    v3 = *(_BYTE *)(a2 + 80);
  }
  if ( (v3 & 1) != 0 )
  {
    ++*(_DWORD *)(a1 + 300);
    return sub_A62000(a1, a2, a3);
  }
  else
  {
    ++*(_DWORD *)(a1 + 296);
    return sub_A61B80(a1, a2, a3);
  }
}

