__int64 __fastcall sub_5B35B0(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        _DWORD *a4,
        double a5,
        double a6,
        double a7)
{
  unsigned int *v10; // rax
  unsigned int *v11; // rbp
  unsigned int v12; // r12d
  __int64 v14; // rsi
  unsigned int v15; // eax
  unsigned int *v16; // rax
  unsigned int *v17; // [rsp+0h] [rbp-48h]

  v10 = sub_5AE770(a1, (__int64)a4, a3);
  if ( !v10 )
    return a3;
  v11 = v10;
  if ( *v10 != a3 )
    return a3;
  if ( *a4 == a3 )
    return a3;
  if ( !a4 )
    return a3;
  if ( !(unsigned __int8)sub_5B0DC0(a3, a4) )
    return a3;
  v14 = *v11;
  if ( a3 - 1 != (_DWORD)v14 )
  {
    v17 = sub_4EE820((__int64)(a1 + 194), v14);
    if ( v17 != sub_4EE820((__int64)(a1 + 194), a3 - 1) )
      return a3;
  }
  v15 = sub_4ECA50((__int64)(a1 + 203), a2);
  v16 = sub_4EE890((__int64)(a1 + 203), v15);
  if ( !v16 )
    return a3;
  if ( *v16 != *v11 )
    return a3;
  v12 = v11[1];
  if ( !(unsigned __int8)sub_5B3360(a1, (__int64)a4, v11, 0, a5, a6, a7) )
    return a3;
  return v12;
}

