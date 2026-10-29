__int64 __fastcall sub_54F40(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        double a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  char v14; // r12
  __int64 v15; // rsi
  _QWORD *v17; // [rsp+8h] [rbp-50h]
  char v18; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 16);
  v19 = __readfsqword(0x28u);
  if ( *(_WORD *)(v8 + 520) != 1 )
    return 0;
  if ( *(_BYTE *)(v8 + 249) )
  {
    sub_EAA0((__int64)"%a: Invalid GOT relocation (.got already exists)\n", a4);
    return 0;
  }
  v17 = (_QWORD *)(a8 + 16);
  v12 = sub_4A750((__int64 *)(a8 + 16), *(_QWORD *)(a8 + 8), 1);
  if ( !v12 )
    return 0;
  if ( a2 )
    *a2 = v12;
  v13 = *(_QWORD *)(a8 + 8);
  v14 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 617LL);
  if ( a7 )
    v15 = sub_54BB0(v17, v13, a7, "_ptr", &v18, 1);
  else
    v15 = sub_54820((__int64)v17, v13, a6, &v18, 1);
  *a3 = v15;
  if ( !v15 )
  {
    if ( !under_debugger )
      interr(20084);
    BUG();
  }
  if ( v18 )
    sub_42050(a1, v15, a6, 0, 0, v14 == 0 ? 4 : 12, 0, 0x40000000, 0);
  return 1;
}

