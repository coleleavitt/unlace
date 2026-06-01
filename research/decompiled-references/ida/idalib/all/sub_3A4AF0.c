unsigned __int64 __fastcall sub_3A4AF0(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v6; // r14d
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v4 = 0;
  v15 = __readfsqword(0x28u);
  while ( dword_23AD7A0[v4] != 35 )
  {
    if ( ++v4 == 14 )
    {
      if ( !under_debugger )
        interr(44);
      BUG();
    }
  }
  v6 = v4;
  v7 = *(_QWORD *)(*a1 + 1536LL);
  if ( ((unsigned int)getinf(10) & *(_DWORD *)&asc_23AD760[4 * (int)v4]) != 0 )
  {
    if ( a3 == -1 )
    {
      if ( !sub_505D70(a1 + 213, a2) )
      {
        v9 = sub_3BDD60(a1, a2);
        v13 = v7 + 112;
        if ( sub_7BE710(v7 + 112, *a1, v9, 65) )
          return sub_3A44A0(v7, v6, a2, (void *)(a2 + 1));
        goto LABEL_15;
      }
    }
    else
    {
      v8 = sub_5CAA10(a1);
      if ( !v8 || (int)sub_5C9B30(a1, v8, a2) < 0 )
      {
        v9 = sub_3BDD60(a1, a2);
        v13 = v7 + 112;
        if ( (unsigned __int64)(sub_7BE710(v7 + 112, *a1, v9, 65) - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          return sub_3A44A0(v7, v6, a2, (void *)(a2 + 1));
LABEL_15:
        v11 = sub_3BDD60(a1, a3);
        v12 = *a1;
        v14 = v11;
        sub_7BE7C0(v13, v12, v9, &v14, 8, 65);
        return sub_3A44A0(v7, v6, a2, (void *)(a2 + 1));
      }
    }
  }
  return v15 - __readfsqword(0x28u);
}
