__int64 __fastcall sub_3F0150(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v5; // r14
  unsigned int v6; // r12d
  __int64 v7; // r13

  v1 = sub_3EF970((__int64 *)a1);
  if ( !(_BYTE)v1 )
    return v1;
  v3 = *(_QWORD *)a1;
  v4 = *(int *)(a1 + 8);
  v5 = *(_QWORD *)a1 + 40 * v4 + 64;
  v6 = sub_3EF260(*(_QWORD *)a1, v4, *(_DWORD *)(a1 + 12));
  if ( v6 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 832LL) + 468LL) )
  {
    if ( !under_debugger )
      sub_37EA20(51392);
    BUG();
  }
  *(_QWORD *)(*(_QWORD *)a1 + 880LL) = *(_QWORD *)(v3 + 40);
  v7 = *(_QWORD *)a1;
  sub_3EF830(*(_QWORD *)a1, v5);
  sub_3EC660(v7, v6, *(_DWORD *)(a1 + 12));
  *(_BYTE *)(a1 + 16) = 1;
  return v1;
}
