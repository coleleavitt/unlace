__int64 __fastcall sub_1029410(__int64 a1, int a2, __int64 (__fastcall *a3)(__int64), __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int v9; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v10[5]; // [rsp+10h] [rbp-28h] BYREF

  v9 = a2;
  v10[0] = &v9;
  v10[1] = a1;
  if ( sub_1029150() )
    return sub_10291A0((__int64)sub_1029240, (__int64)v10, (__int64)a3, a4, v6, v7);
  else
    return a3(a4);
}
