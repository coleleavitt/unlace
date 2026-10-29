_QWORD *__fastcall sub_7BD2D0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax

  v2 = a1[5] & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a1[5] & 7) != 0 )
    v2 = 0;
  if ( a2 == v2 )
    return a1;
  v3 = a1[13];
  if ( v3 )
  {
    if ( v3 <= 7 )
      return nullptr;
    goto LABEL_6;
  }
  sub_7BCDC0((unsigned __int64 *)(a1[12] + 88LL), a1[12]);
  v3 = a1[13];
  if ( v3 > 7 )
  {
LABEL_6:
    v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    v5 = *(_QWORD *)(v4 + 8);
    v6 = v5 + 8LL * *(unsigned int *)(v4 + 16);
    goto LABEL_7;
  }
  if ( v3 )
    return nullptr;
  sub_7BCDC0((unsigned __int64 *)(a1[12] + 88LL), a1[12]);
  v10 = a1[13];
  if ( v10 <= 7 )
    return nullptr;
  v6 = 0;
  v5 = *(_QWORD *)((v10 & 0xFFFFFFFFFFFFFFF8LL) + 8);
LABEL_7:
  if ( v6 == v5 )
    return nullptr;
  if ( a2 )
  {
    while ( 1 )
    {
      a1 = *(_QWORD **)v5;
      v7 = *(_QWORD *)(*(_QWORD *)v5 + 40LL);
      if ( (v7 & 7) == 0 && a2 == (v7 & 0xFFFFFFFFFFFFFFF8LL) )
        break;
      a1 = (_QWORD *)sub_7BD1D0((__int64)a1, a2);
      if ( a1 )
        break;
      v5 += 8;
      if ( v6 == v5 )
        return nullptr;
    }
  }
  else
  {
    while ( 1 )
    {
      a1 = *(_QWORD **)v5;
      v9 = *(_QWORD *)(*(_QWORD *)v5 + 40LL);
      if ( (v9 & 7) != 0 )
        break;
      if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        break;
      a1 = (_QWORD *)sub_7BD1D0((__int64)a1, 0);
      if ( a1 )
        break;
      v5 += 8;
      if ( v6 == v5 )
        return nullptr;
    }
  }
  return a1;
}

