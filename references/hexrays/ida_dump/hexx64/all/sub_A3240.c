_QWORD *__fastcall sub_A3240(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  _QWORD *v15; // [rsp+8h] [rbp-50h]
  _QWORD *v16; // [rsp+10h] [rbp-48h]

  v10 = (_QWORD *)j__qalloc_or_throw(80);
  v11 = v10;
  if ( a2 )
    v12 = *(_QWORD *)(a2 + 24);
  else
    v12 = *(_QWORD *)(a1 + 32);
  v10[5] = 0;
  v16 = v10 + 4;
  v15 = v10 + 6;
  v10[4] = 0xFFFFFFFF00000000LL;
  v10[6] = 0xFFFFFFFF00000000LL;
  v10[7] = 0;
  v10[8] = 0xFFFFFFFF00000000LL;
  v10[9] = 0;
  sub_330970(v10, v12);
  *(_DWORD *)v11 = a3;
  if ( a3 > 62 )
    *((_DWORD *)v11 + 1) |= 0x10u;
  if ( a4 )
    sub_125180(v16);
  if ( a5 )
    sub_125180(v15);
  if ( a6 )
    sub_125180(v11 + 8);
  if ( !(unsigned int)sub_15BC70((_DWORD)v11, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0, 0, 0, 0, 0)
    || *(_DWORD *)v11 )
  {
    return sub_A3160(a1, v11, a2);
  }
  if ( v11 )
  {
    sub_11CDA0(v11 + 8);
    sub_11CDA0(v15);
    sub_11CDA0(v16);
    j__qfree(v11);
  }
  return (_QWORD *)a2;
}
