__int64 __fastcall sub_4E7970(__int64 a1, __int64 a2, __int64 a3, signed __int32 a4, int a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r15
  int v8; // r14d
  int v9; // r12d
  __int64 v11; // [rsp+8h] [rbp-50h]

  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a2 + 32);
  v8 = *(_DWORD *)(a2 + 44);
  v9 = *(_DWORD *)(a2 + 48);
  v11 = *(_QWORD *)(a2 + 56);
  sub_4E6FC0(a1, a2, a3, a4, a5, a6);
  *(_QWORD *)(a2 + 24) = v6;
  *(_QWORD *)(a2 + 32) = v7;
  *(_DWORD *)(a2 + 44) = v8;
  if ( *(_DWORD *)(a2 + 48) != v9 )
  {
    if ( !under_debugger )
      interr(3282);
    BUG();
  }
  if ( !v11 )
    *(_QWORD *)(a2 + 56) = 0;
  return a1;
}

