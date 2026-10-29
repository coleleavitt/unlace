void __fastcall sub_457980(__int64 a1)
{
  int v1; // edx
  int v2; // eax
  __int64 v3; // r14
  __int64 v4; // rax
  unsigned int *v5; // rbx
  __int64 v6; // r13
  unsigned int *v7; // r12
  int v8; // eax
  unsigned int v9; // r15d

  if ( !*(_QWORD *)(a1 + 16) )
  {
LABEL_15:
    v7 = *(unsigned int **)(a1 + 8);
    goto LABEL_5;
  }
  v1 = *(_DWORD *)(a1 + 32);
  v2 = 1;
  if ( v1 )
    v2 = -(v1 != 1);
  v3 = *(_QWORD *)(switch_dbctx(*(int *)(*(_QWORD *)a1 + 4LL * v2 + 16)) + 1480);
  v4 = switch_dbctx(*(int *)(*(_QWORD *)a1 + 4LL * *(int *)(a1 + 32) + 16));
  v5 = *(unsigned int **)(a1 + 8);
  v6 = *(_QWORD *)(v4 + 1480);
  v7 = &v5[*(_QWORD *)(a1 + 16)];
  if ( v5 != v7 )
  {
    do
    {
      while ( 1 )
      {
        v9 = *v5;
        if ( (sub_3B9AA0(v6, *v5, 4) & 0xC000) == 0 )
          break;
        if ( v7 == ++v5 )
          goto LABEL_15;
      }
      v8 = sub_3B9AA0(v3, v9, 4);
      if ( ((~(_WORD)v8 & 0x600) != 0 || (v8 & 0x10000000) == 0) && (v8 & 0x1000) == 0 && (v8 & 0xC000) == 0x8000 )
        sub_3CA860(v3, v9);
      ++v5;
    }
    while ( v7 != v5 );
    goto LABEL_15;
  }
LABEL_5:
  if ( v7 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v7);
  }
}

