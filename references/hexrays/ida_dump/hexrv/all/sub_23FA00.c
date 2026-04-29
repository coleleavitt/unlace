__int64 __fastcall sub_23FA00(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // rbp

  if ( *(_DWORD *)(a2 + 8) != a4 )
    return 0;
  v6 = a4;
  if ( !(unsigned int)sub_254EA0(*(_QWORD *)(a2 + 24), a3) )
  {
    v10 = *(_QWORD *)(a2 + 24);
    if ( v10 )
    {
      sub_250A30(*(_QWORD *)(a2 + 24));
      clear_tinfo_t(v10 + 48);
      j__qfree(v10);
    }
    sub_250C50(a2, *(_QWORD *)(a2 + 32));
    return 1;
  }
  if ( (unsigned int)v6 > 0x2C )
    return 0;
  v7 = 0x142800F80000LL;
  if ( !_bittest64(&v7, v6) )
    return 0;
  if ( !(unsigned __int8)sub_23FA00(a1, *(_QWORD *)(a2 + 24), a3, (unsigned int)v6) )
  {
    v8 = sub_254EA0(*(_QWORD *)(a2 + 32), a3);
    v9 = *(_QWORD *)(a2 + 32);
    if ( !v8 )
    {
      if ( v9 )
      {
        sub_250A30(*(_QWORD *)(a2 + 32));
        clear_tinfo_t(v9 + 48);
        j__qfree(v9);
      }
      sub_250C50(a2, *(_QWORD *)(a2 + 24));
      return 1;
    }
    if ( !(unsigned __int8)sub_23FA00(a1, *(_QWORD *)(a2 + 32), a3, (unsigned int)v6) )
      return 0;
  }
  sub_23F5C0(a2, *(_QWORD *)(a1 + 112), 0);
  return 1;
}
