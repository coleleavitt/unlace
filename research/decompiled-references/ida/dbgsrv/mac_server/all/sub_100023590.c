/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100023590
// Address: 0x0000000100023590

//----- (0000000100023590) ----------------------------------------------------
char __fastcall sub_100023590(__int64 a1, int a2, int a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // rbx
  int v6; // r12d
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rsi

  if ( !a5 )
    return 0;
  v5 = a5;
  v6 = a4;
  v7 = a3;
  v8 = *(_QWORD *)(a1 + 536);
  *(_DWORD *)(v8 + 84) = a2;
  *(_DWORD *)(v8 + 80) = 0;
  v9 = (int)a4;
  if ( (_DWORD)a4 )
  {
    v10 = a3;
    a4 = (int)a4;
    do
    {
      v11 = *(_QWORD *)(a1 + 536);
      if ( *(_QWORD *)(v11 + 24) > (unsigned __int64)v10 )
        *(_DWORD *)(v11 + 80) |= *(unsigned __int8 *)(**(_QWORD **)(v11 + 8) + 32LL * v10 + 12);
      ++v10;
      --a4;
    }
    while ( a4 );
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 536) + 24LL))(*(_QWORD *)(a1 + 536)) )
    return 0;
  if ( !v6 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 536) + 32LL))(*(_QWORD *)(a1 + 536));
  while ( 1 )
  {
    v12 = *(_QWORD *)(a1 + 536);
    if ( *(_QWORD *)(v12 + 24) <= (unsigned __int64)v7 )
      break;
    if ( !(unsigned __int8)sub_100023EE0((int *)(*(_QWORD *)(v12 + 16) + 40LL * v7), v12, v5) )
      return 0;
    v5 += 8;
    ++v7;
    if ( !--v9 )
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 536) + 32LL))(*(_QWORD *)(a1 + 536));
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0xCBAu);
  return sub_1000236B0();
}
// 1000AE23D: using guessed type char under_debugger;
