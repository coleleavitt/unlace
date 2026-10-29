__int64 __fastcall sub_298350(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v5; // r13
  unsigned int v6; // ebx
  __int64 v7; // r12
  __int64 v8; // rax

  v2 = *(_QWORD *)(a2 + 24);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 64) + 24LL);
  if ( !*(_QWORD *)(v3 + 16) )
    return 0;
  v5 = *(_QWORD *)(v3 + 8);
  v6 = sub_288E90(*(_QWORD *)(a1 + 64), v2, v5 + 16);
  if ( !(_BYTE)v6 )
    return 0;
  if ( *(_DWORD *)(v5 + 28) == -1 )
  {
    v7 = *(_QWORD *)(v3 + 8);
    v8 = *(_QWORD *)v7;
    **(_QWORD **)(v7 + 8) = *(_QWORD *)v7;
    *(_QWORD *)(v8 + 8) = *(_QWORD *)(v7 + 8);
    sub_255050(v7 + 16);
    qfree(v7);
    --*(_QWORD *)(v3 + 16);
  }
  else
  {
    sub_255050(v5 + 16);
  }
  return v6;
}
