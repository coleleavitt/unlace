void __fastcall sub_ABDA50(_QWORD *a1, unsigned int a2)
{
  unsigned int *v4; // r10
  unsigned int *v5; // rsi
  unsigned int v6; // r9d
  unsigned int v7; // edi
  unsigned int *v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rax

  v4 = *(unsigned int **)(a1[63] + 8LL * a2);
  v5 = (unsigned int *)(a1[65] + 4LL * a2);
  v6 = *v5;
  if ( v4 && (v7 = *(v4 - 1), v6 < v7) )
  {
    v8 = &v4[v6];
    v9 = *(_QWORD *)(a1[2] + 8848LL);
    v10 = v6 + 1;
    while ( *(_BYTE *)(v9 + *v8) )
    {
      *v5 = v10;
      ++v8;
      if ( v7 == v10 )
        goto LABEL_8;
      ++v10;
    }
  }
  else
  {
LABEL_8:
    *v5 = 0;
    if ( !v6 )
      goto LABEL_13;
    v11 = *(_QWORD *)(a1[2] + 8848LL);
    if ( !*(_BYTE *)(v11 + *v4) )
      return;
    v12 = 1;
    *v5 = 1;
    if ( v6 == 1 )
    {
LABEL_13:
      sub_ABCC10((__int64)a1, a2);
      return;
    }
    while ( *(_BYTE *)(v11 + v4[v12]) )
    {
      *v5 = ++v12;
      if ( v6 == v12 )
        goto LABEL_13;
    }
  }
}

