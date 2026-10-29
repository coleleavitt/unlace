void __fastcall sub_F0D960(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // r15d
  __int64 v4; // r14
  size_t v5; // rax
  unsigned int *v6; // rax
  char v7; // dl
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rdx

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 > 0 )
  {
    do
    {
      v4 = *(_QWORD *)a1;
      ++v2;
      v5 = j__strlen("  ");
      sub_9954E0(v4, "  ", v5);
    }
    while ( v3 != v2 );
  }
  sub_995540(*(_QWORD *)a1, "#pragma omp ordered");
  v6 = *(unsigned int **)(a2 + 24);
  v7 = 0;
  if ( v6 )
  {
    v8 = (__int64)&v6[2 * *v6 + 4];
    if ( v6 + 4 != (unsigned int *)v8 )
    {
      v9 = *((_QWORD *)v6 + 2);
      v10 = (__int64 *)(v6 + 6);
      if ( *(_DWORD *)(v9 + 8) == 22 )
      {
LABEL_11:
        v7 = 1;
      }
      else
      {
        while ( (__int64 *)v8 != v10 )
        {
          v11 = *v10++;
          if ( *(_DWORD *)(v11 + 8) == 22 )
            goto LABEL_11;
        }
        v7 = 0;
      }
    }
  }
  sub_F0D670(a1, a2, v7);
}
