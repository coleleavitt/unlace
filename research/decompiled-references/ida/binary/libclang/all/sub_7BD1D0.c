__int64 __fastcall sub_7BD1D0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  __int64 *v4; // rbx
  __int64 *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
  {
    if ( v2 <= 7 )
      return 0;
    goto LABEL_3;
  }
  sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 > 7 )
  {
LABEL_3:
    v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    v4 = *(__int64 **)(v3 + 8);
    v5 = &v4[*(unsigned int *)(v3 + 16)];
    goto LABEL_4;
  }
  if ( v2 )
    return 0;
  sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
  v10 = *(_QWORD *)(a1 + 104);
  if ( v10 <= 7 )
    return 0;
  v5 = nullptr;
  v4 = *(__int64 **)((v10 & 0xFFFFFFFFFFFFFFF8LL) + 8);
LABEL_4:
  if ( v5 == v4 )
    return 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v6 = *v4;
      v7 = *(_QWORD *)(*v4 + 40);
      if ( (v7 & 7) == 0 && a2 == (v7 & 0xFFFFFFFFFFFFFFF8LL) )
        break;
      v6 = sub_7BD1D0(v6, a2);
      if ( v6 )
        break;
      if ( v5 == ++v4 )
        return 0;
    }
  }
  else
  {
    while ( 1 )
    {
      v6 = *v4;
      v9 = *(_QWORD *)(*v4 + 40);
      if ( (v9 & 7) != 0 )
        break;
      if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        return *v4;
      v6 = sub_7BD1D0(v6, 0);
      if ( v6 )
        return v6;
      if ( v5 == ++v4 )
        return 0;
    }
  }
  return v6;
}

