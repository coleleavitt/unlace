char __fastcall sub_80EF10(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r14
  unsigned int *v5; // rbx
  __int64 v6; // rax
  int v7; // r13d
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // edi
  int v14; // edx

  v4 = 8LL * a3;
  v5 = *(unsigned int **)(a2 + 16);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 600) + v4);
  v7 = *(_DWORD *)(v6 + 4LL * a4) ^ 1;
  while ( v5 )
  {
    while ( 1 )
    {
      v10 = v5[1];
      if ( a4 != v10 )
        goto LABEL_3;
      v11 = *(_QWORD *)(a1 + 600);
      v6 = *(_QWORD *)(v11 + 8LL * *v5);
      v12 = *(_QWORD *)(v11 + v4);
      if ( !v6 )
        break;
      v13 = *(_DWORD *)(v6 - 4);
      if ( v12 )
        goto LABEL_7;
      v14 = 0;
LABEL_8:
      if ( v14 == v13 )
        goto LABEL_9;
LABEL_3:
      v5 = *((unsigned int **)v5 + 1);
      if ( !v5 )
        return v6;
    }
    if ( v12 )
    {
      v13 = 0;
LABEL_7:
      v14 = *(_DWORD *)(v12 - 4);
      goto LABEL_8;
    }
LABEL_9:
    if ( v7 != *(_DWORD *)(v6 + 4LL * v10) )
      goto LABEL_3;
    LOBYTE(v6) = sub_80EE70(a1);
    v5 = *((unsigned int **)v5 + 1);
  }
  return v6;
}

