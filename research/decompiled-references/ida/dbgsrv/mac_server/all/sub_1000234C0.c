/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000234C0
// Address: 0x00000001000234C0

//----- (00000001000234C0) ----------------------------------------------------
char __fastcall sub_1000234C0(__int64 a1, int a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  int v12; // edx
  __int64 v13; // rcx
  _DWORD *v14; // r8

  LOBYTE(v4) = -1;
  if ( !a4 )
    return v4;
  v7 = *(_QWORD *)(a1 + 536);
  *(_DWORD *)(v7 + 84) = a2;
  *(_DWORD *)(v7 + 80) = 0;
  v8 = *(_QWORD *)(a1 + 536);
  v9 = a3;
  if ( *(_QWORD *)(v8 + 24) > (unsigned __int64)a3 )
  {
    *(_DWORD *)(v8 + 80) |= *(unsigned __int8 *)(**(_QWORD **)(v8 + 8) + 32LL * a3 + 12);
    v8 = *(_QWORD *)(a1 + 536);
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8) )
    return v4;
  v10 = *(_QWORD *)(a1 + 536);
  if ( *(_QWORD *)(v10 + 24) > v9 )
  {
    if ( (unsigned __int8)sub_100023EE0((int *)(*(_QWORD *)(v10 + 16) + 40 * v9), v10, a4) )
      return ((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 536) + 32LL))(*(_QWORD *)(a1 + 536)) - 1) | 1;
    return v4;
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0xCBAu);
  return sub_100023590(3258, v10, v12, v13, v14);
}
// 100023585: variable 'v12' is possibly undefined
// 100023585: variable 'v13' is possibly undefined
// 100023585: variable 'v14' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
