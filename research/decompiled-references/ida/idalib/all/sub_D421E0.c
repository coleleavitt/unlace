unsigned __int64 __fastcall sub_D421E0(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbp

  if ( ((unsigned __int64)(unsigned int)sub_21F9130(a2) + 63) >> 6 == 1 )
  {
    sub_21F8E40(a2);
    return 0;
  }
  else
  {
    v3 = sub_21F9130(a2);
    v6 = a1[71];
    v7 = 8 * (((unsigned __int64)v3 + 63) >> 6);
    a1[81] += v7;
    v8 = v7 + ((v6 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a1[72] >= v8 && v6 )
    {
      a1[71] = v8;
      v9 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v9 = sub_986170((__int64)(a1 + 71), v7, v7, 3, v4, v5);
    }
    sub_21F8E40(a2);
    return v9;
  }
}
