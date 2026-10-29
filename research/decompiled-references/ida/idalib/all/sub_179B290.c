void __fastcall sub_179B290(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r12
  unsigned int v7; // r14d
  __int64 v8; // r13
  __int64 v9; // r8
  __int64 v10; // r9

  if ( *a2 )
  {
    v6 = a1[33];
    v7 = *(_DWORD *)(*a2 + 24);
    v8 = *(_QWORD *)(v6 + 32);
    if ( (unsigned __int8)sub_FD3830(v8, 0xA57u, v7, v6, a5, a6) != 1
      || (unsigned __int8)sub_FD3830(v8, 0xA5Eu, v7, v6, v9, v10) != 1 )
    {
      sub_A93480(a1[31], a2, 1, a1[30]);
    }
  }
}
