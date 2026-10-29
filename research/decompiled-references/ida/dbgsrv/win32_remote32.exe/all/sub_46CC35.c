/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46CC35
// Address: 0x0046CC35

//----- (0046CC35) --------------------------------------------------------
int __usercall sub_46CC35@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3, int a4)
{
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int *v11; // edx
  int i; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  unsigned __int64 v17; // kr08_8
  int v18; // eax
  unsigned int v19; // [esp+4h] [ebp-Ch] BYREF
  unsigned int v20; // [esp+8h] [ebp-8h]
  char v21; // [esp+Fh] [ebp-1h] BYREF

  if ( !a3 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return 22;
  }
  memset(a3, 0xFFu, 0x24u);
  if ( !a4 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, 0);
    return 22;
  }
  v5 = *(_DWORD *)(a4 + 4);
  v19 = *(_DWORD *)a4;
  v20 = v5;
  if ( __SPAIR64__(v5, v19) < -43200 || __SPAIR64__(v5, v19) > 0x79358EFDFLL )
  {
    *sub_46B984() = 22;
    return 22;
  }
  v21 = 0;
  v6 = sub_46CD7F(&v19, &v21);
  v7 = v19;
  a3[5] = v6;
  v8 = sub_462A90(__PAIR64__(v20, v7), 86400);
  a3[7] = v8;
  v9 = (__PAIR64__(v20, v7) - 86400LL * v8) >> 32;
  v10 = v7 - 86400 * v8;
  v20 = v9;
  v11 = dword_4A7AFC;
  if ( !v21 )
    v11 = dword_4A7AC8;
  for ( i = 1; v11[i] < v8; ++i )
    ;
  v13 = i - 1;
  a3[4] = v13;
  a3[3] = v8 - v11[v13];
  v14 = sub_462A90(*(_QWORD *)a4, 86400);
  v15 = v20;
  a3[6] = (v14 + 4) % 7;
  v16 = sub_462A90(__PAIR64__(v15, v10), 3600);
  a3[2] = v16;
  v17 = __PAIR64__(v15, v10) - 3600LL * v16;
  v18 = sub_462A90(v17, 60);
  a3[8] = 0;
  a3[1] = v18;
  *a3 = v17 - 60 * v18;
  return 0;
}
// 4A7AC8: using guessed type int dword_4A7AC8[];
// 4A7AFC: using guessed type int dword_4A7AFC[];
