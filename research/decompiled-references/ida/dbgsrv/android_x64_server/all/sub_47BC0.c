/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47BC0
// Address: 0x0000000000047BC0

//----- (0000000000047BC0) ----------------------------------------------------
__int64 __fastcall sub_47BC0(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi

  v4 = -1;
  if ( a4 )
  {
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
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8) )
    {
      v10 = *(_QWORD *)(a1 + 536);
      if ( *(_QWORD *)(v10 + 24) <= v9 )
      {
        if ( !(_BYTE)under_debugger )
          interr(3258);
        BUG();
      }
      if ( (unsigned __int8)sub_4B820((int *)(*(_QWORD *)(v10 + 16) + 40 * v9), v10, a4) )
        return 2
             * (unsigned int)(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 536) + 32LL))(*(_QWORD *)(a1 + 536))
             - 1;
    }
  }
  return v4;
}
// 158B40: using guessed type __int64 under_debugger;
