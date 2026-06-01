/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140032A80
// Address: 0x0000000140032A80

//----- (0000000140032A80) ----------------------------------------------------
__int64 __fastcall sub_140032A80(__int64 a1, char a2, int a3)
{
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx

  sub_1400347C0(a1, a2);
  v5 = a3 - *(_DWORD *)(a1 + 200) - 4;
  sub_1400343E0(a1, a3 - *(_WORD *)(a1 + 200) - 4);
  sub_1400343E0(a1, HIWORD(v5));
  while ( 1 )
  {
    v6 = *(_QWORD *)(a1 + 272);
    v7 = *(unsigned int *)(*(_QWORD *)(a1 + 264) + 4 * v6 - 4);
    if ( v6 )
      *(_QWORD *)(a1 + 272) = v6 - 1;
    if ( (_DWORD)v7 == -1 )
      break;
    sub_14002E390(*(_QWORD **)(a1 + 192), v7, a3 - v7 - 4);
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(a1 + 248);
    v9 = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 4 * v8 - 4);
    if ( v8 )
      *(_QWORD *)(a1 + 248) = v8 - 1;
    if ( (_DWORD)v9 == -1 )
      break;
    sub_14002E390(*(_QWORD **)(a1 + 192), v9, *(_DWORD *)(a1 + 200) - v9 - 4);
  }
  return 0;
}
