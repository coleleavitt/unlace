__int64 __fastcall sub_8EA580(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  int *v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // esi
  int *v8; // rax
  int v9; // r8d
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rdi
  int v14; // eax
  int v15; // r10d
  __int64 v16; // rax

  if ( *(_DWORD *)(a1 + 816) != *(_DWORD *)(a1 + 812) )
    return 1;
  v3 = *(_QWORD *)(a1 + 64) + 144LL * a2;
  v4 = *(int **)v3;
  v5 = *(_QWORD *)v3 + 16LL * *(unsigned int *)(v3 + 8);
  if ( v5 != *(_QWORD *)v3 )
  {
    v6 = a1 + 384;
    while ( 1 )
    {
      v10 = *(unsigned int *)(a1 + 784);
      v11 = *v4;
      v12 = *(_QWORD *)(a1 + 768);
      if ( !(_DWORD)v10 )
        goto LABEL_7;
      v7 = (v10 - 1) & (37 * v11);
      v8 = (int *)(v12 + 16LL * v7);
      v9 = *v8;
      if ( v11 != *v8 )
        break;
LABEL_5:
      v4 += 4;
      sub_A1ADF0(v6, *((_QWORD *)v8 + 1));
      if ( (int *)v5 == v4 )
        return 1;
    }
    v14 = 1;
    while ( v9 != -1 )
    {
      v15 = v14 + 1;
      v16 = ((_DWORD)v10 - 1) & (v7 + v14);
      v7 = v16;
      v8 = (int *)(v12 + 16 * v16);
      v9 = *v8;
      if ( v11 == *v8 )
        goto LABEL_5;
      v14 = v15;
    }
LABEL_7:
    v8 = (int *)(v12 + 16 * v10);
    goto LABEL_5;
  }
  return 1;
}

