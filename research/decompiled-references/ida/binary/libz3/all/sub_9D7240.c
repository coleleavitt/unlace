void __fastcall sub_9D7240(__int64 a1, unsigned int a2)
{
  unsigned int *v2; // rbx
  unsigned int *i; // r13
  unsigned int v4; // r12d
  unsigned int *v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rdx

  v2 = *(unsigned int **)(*(_QWORD *)(a1 + 648) + 16LL * a2);
  if ( v2 )
  {
    for ( i = &v2[2 * *(v2 - 1)]; i != v2; v2 += 2 )
    {
      v4 = *v2;
      if ( *v2 != -1 )
      {
        v5 = (unsigned int *)(*(_QWORD *)(a1 + 944) + 4LL * v4);
        v6 = *(_DWORD *)(a1 + 936);
        if ( v6 >= *v5 && *(_DWORD *)(*(_QWORD *)(a1 + 632) + 24LL * v4 + 12) != -1 )
        {
          v7 = *(_QWORD *)(a1 + 928);
          *v5 = v6 + 1;
          if ( !v7 || (v8 = *(unsigned int *)(v7 - 4), (_DWORD)v8 == *(_DWORD *)(v7 - 8)) )
          {
            sub_2FD3F0((unsigned int **)(a1 + 928));
            v7 = *(_QWORD *)(a1 + 928);
            v8 = *(unsigned int *)(v7 - 4);
          }
          *(_DWORD *)(v7 + 4 * v8) = v4;
          ++*(_DWORD *)(v7 - 4);
        }
      }
    }
  }
}

