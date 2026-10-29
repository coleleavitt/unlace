/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63E80
// Address: 0x0000000000063E80

//----- (0000000000063E80) ----------------------------------------------------
__int64 __fastcall sub_63E80(__int64 a1, char a2, int a3)
{
  __int64 v4; // rbp
  __int64 v5; // rcx
  char *v6; // rax
  int v7; // eax
  int v8; // ebp
  int i; // r14d
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi

  *(_BYTE *)(a1 + 212) = a2;
  v4 = *(_QWORD *)(a1 + 200);
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(_QWORD *)(v4 + 16) >= (unsigned __int64)(v5 + 1) )
  {
    v6 = *(char **)v4;
  }
  else
  {
    v6 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v4, v5 + 1, 1u);
    *(_QWORD *)v4 = v6;
    v5 = *(_QWORD *)(v4 + 8);
  }
  v6[v5] = a2;
  ++*(_QWORD *)(v4 + 8);
  v7 = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 208) = v7 + 1;
  v8 = a3 - 5 - v7;
  sub_616A0(a1, a3 - 5 - v7);
  sub_616A0(a1, SHIWORD(v8));
  for ( i = a3 - 4; ; sub_6BEF0(*(_QWORD **)(a1 + 200), v11, i - v11) )
  {
    v10 = *(_QWORD *)(a1 + 280);
    v11 = *(unsigned int *)(*(_QWORD *)(a1 + 272) + 4 * v10 - 4);
    if ( v10 )
      *(_QWORD *)(a1 + 280) = v10 - 1;
    if ( (_DWORD)v11 == -1 )
      break;
  }
  while ( 1 )
  {
    v12 = *(_QWORD *)(a1 + 256);
    v13 = *(unsigned int *)(*(_QWORD *)(a1 + 248) + 4 * v12 - 4);
    if ( v12 )
      *(_QWORD *)(a1 + 256) = v12 - 1;
    if ( (_DWORD)v13 == -1 )
      break;
    sub_6BEF0(*(_QWORD **)(a1 + 200), v13, *(_DWORD *)(a1 + 208) + -4 - v13);
  }
  return 0;
}
