unsigned __int64 __fastcall sub_3A0230(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rbx
  int v6; // r14d
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rbx
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // [rsp+8h] [rbp-50h]
  int v14; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v4 = 0;
  v15 = __readfsqword(0x28u);
  while ( dword_2389780[v4] != 35 )
  {
    if ( ++v4 == 14 )
    {
      if ( !under_debugger )
        interr(44);
      BUG();
    }
  }
  v6 = v4;
  v7 = *(_QWORD *)(*a1 + 1344LL);
  if ( ((unsigned int)getinf(10) & *(_DWORD *)&asc_2389740[4 * (int)v4]) != 0 )
  {
    if ( a3 == -1 )
    {
      if ( !sub_4EE820(a1 + 203, a2) )
      {
        v9 = (unsigned int)sub_3B90A0(a1, a2);
        v13 = v7 + 88;
        if ( (unsigned int)sub_79B3A0(v7 + 88, *a1, v9, 65) )
          return sub_39FD00(v7, v6, a2, a2 + 1);
        goto LABEL_15;
      }
    }
    else
    {
      v8 = sub_5AFCE0(a1);
      if ( !v8 || (int)sub_5AEEA0(a1, v8, a2) < 0 )
      {
        v9 = (unsigned int)sub_3B90A0(a1, a2);
        v13 = v7 + 88;
        if ( (unsigned int)sub_79B3A0(v7 + 88, *a1, v9, 65) - 1 <= 0xFFFFFFFD )
          return sub_39FD00(v7, v6, a2, a2 + 1);
LABEL_15:
        v11 = sub_3B90A0(a1, a3);
        v12 = *a1;
        v14 = v11;
        sub_79B440(v13, v12, (unsigned int)v9, &v14, 4, 65);
        return sub_39FD00(v7, v6, a2, a2 + 1);
      }
    }
  }
  return v15 - __readfsqword(0x28u);
}

