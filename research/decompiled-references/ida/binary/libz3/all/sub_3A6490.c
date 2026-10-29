void __fastcall sub_3A6490(__int64 a1, int a2, __int64 *a3)
{
  __int64 *v3; // r13
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  unsigned int v7; // eax

  if ( a2 )
  {
    v3 = &a3[a2];
    v4 = a3;
    v5 = *a3;
    v6 = *(_QWORD *)(a1 + 8);
    if ( *a3 )
      ++*(_DWORD *)(v5 + 8);
    if ( v6 )
      goto LABEL_9;
LABEL_5:
    sub_23A6F0((unsigned int **)(a1 + 8));
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_DWORD *)(v6 - 4);
    while ( 1 )
    {
      ++v4;
      *(_QWORD *)(v6 + 8LL * v7) = v5;
      *(_DWORD *)(v6 - 4) = v7 + 1;
      if ( v3 == v4 )
        break;
      v5 = *v4;
      if ( *v4 )
        ++*(_DWORD *)(v5 + 8);
LABEL_9:
      v7 = *(_DWORD *)(v6 - 4);
      if ( v7 == *(_DWORD *)(v6 - 8) )
        goto LABEL_5;
    }
  }
}

