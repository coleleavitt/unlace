/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100029AE0
// Address: 0x0000000100029AE0

//----- (0000000100029AE0) ----------------------------------------------------
__int64 __fastcall sub_100029AE0(__int64 a1, char a2, int a3)
{
  __int64 v4; // r12
  void *v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // r15d
  int i; // r14d
  __int64 v10; // rax
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // rsi

  *(_BYTE *)(a1 + 212) = a2;
  v4 = *(_QWORD *)(a1 + 200);
  v5 = *(void **)v4;
  v6 = *(_QWORD *)(v4 + 8);
  if ( *(_QWORD *)(v4 + 16) < (unsigned __int64)(v6 + 1) )
  {
    v5 = qvector_reserve(*(_QWORD *)(a1 + 200), v5, v6 + 1, 1u);
    *(_QWORD *)v4 = v5;
    v6 = *(_QWORD *)(v4 + 8);
  }
  *((_BYTE *)v5 + v6) = a2;
  ++*(_QWORD *)(v4 + 8);
  v7 = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 208) = v7 + 1;
  v8 = a3 - v7 - 5;
  sub_100026A20(a1, a3 - v7 - 5);
  sub_100026A20(a1, SHIWORD(v8));
  for ( i = a3 - 4; ; sub_100032CB0(*(void ***)(a1 + 200), v11, i - (_DWORD)v11) )
  {
    v10 = *(_QWORD *)(a1 + 280);
    v11 = (__int64 *)*(unsigned int *)(*(_QWORD *)(a1 + 272) + 4 * v10 - 4);
    if ( v10 )
      *(_QWORD *)(a1 + 280) = v10 - 1;
    if ( (_DWORD)v11 == -1 )
      break;
  }
  while ( 1 )
  {
    v12 = *(_QWORD *)(a1 + 256);
    v13 = (__int64 *)*(unsigned int *)(*(_QWORD *)(a1 + 248) + 4 * v12 - 4);
    if ( v12 )
      *(_QWORD *)(a1 + 256) = v12 - 1;
    if ( (_DWORD)v13 == -1 )
      break;
    sub_100032CB0(*(void ***)(a1 + 200), v13, *(_DWORD *)(a1 + 208) - (_DWORD)v13 - 4);
  }
  return 0;
}
