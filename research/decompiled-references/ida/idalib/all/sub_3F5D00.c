__int64 __fastcall sub_3F5D00(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned int *a5, __int64 a6, char **a7)
{
  __int64 v8; // rsi
  __int64 v9; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+10h] [rbp-18h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 112) != a2 || a3 != 72 )
    return 0;
  if ( a6 != 4 )
  {
    sub_35A790(a7);
    return 0;
  }
  v10[0] = a2;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *a5;
  sub_7BF4E0(v10, v8, a4, &v9, 8, 72);
  return 1;
}
