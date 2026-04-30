__int64 __fastcall sub_27EB60(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 result; // rax
  __int64 v11; // rsi

  v6 = a1[2];
  v7 = a1[3];
  v8 = a1[4];
  a1[2] = a2;
  v9 = a1[5];
  a1[3] = a3;
  a1[4] = a4;
  a1[5] = a5;
  if ( a2 != v6 )
  {
    result = sub_45E0F0(a1, v6, a2);
    a3 = a1[3];
  }
  if ( v7 != a3 )
    result = sub_45E160(a1, v7);
  if ( a1[4] != v8 )
    result = sub_45E1D0(a1, v8);
  if ( a1[5] != v9 )
    result = sub_45E240(a1, v9);
  v11 = a1[2];
  if ( v11 != v6 )
    return callui(166, v11, v6, (_DWORD)callui, a5, a6);
  return result;
}
