__int64 __fastcall sub_4D2860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *i; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d

  if ( !a2 )
    return 0;
  if ( (debug & 0x20) != 0 )
    sub_383DA0();
  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
  {
    if ( a2 == i[6] )
      sub_4CE720((__int64)i, *(const char **)a1, a3, a4, a5, a6);
  }
  sub_4CF0D0(a2, a2, a3, a4, a5, a6);
  sub_4D2700(a2, a2, v8, v9, v10, v11);
  return 1;
}

