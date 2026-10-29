__int64 __fastcall sub_5001E0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int32 a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // r13
  __int64 v8; // r15
  int v9; // r14d
  int v10; // r12d
  __int64 v12; // [rsp+10h] [rbp-50h]

  v7 = *(_QWORD *)(a2 + 24);
  v8 = *(_QWORD *)(a2 + 32);
  v9 = *(_DWORD *)(a2 + 44);
  v12 = *(_QWORD *)(a2 + 56);
  v10 = *(_DWORD *)(a2 + 48);
  sub_4FF880(a1, a2, a3, a4, a5, a6, a7);
  *(_QWORD *)(a2 + 24) = v7;
  *(_QWORD *)(a2 + 32) = v8;
  *(_DWORD *)(a2 + 44) = v9;
  if ( *(_DWORD *)(a2 + 48) != v10 )
  {
    if ( !under_debugger )
      interr(3282);
    BUG();
  }
  if ( !v12 )
    *(_QWORD *)(a2 + 56) = 0;
  return a1;
}
