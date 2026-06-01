__int64 __fastcall sub_92410(__int64 a1, __int64 a2, char *a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned __int64 v7; // r13
  __int64 v8; // rcx
  void *v9; // r12
  void *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdi

  if ( a2 < 0 )
    goto LABEL_42;
  v5 = *(_QWORD *)(a1 + 40);
  v7 = a4;
  if ( v5 > a2 )
  {
    v16 = *(_QWORD *)(a1 + 32);
    if ( v16 )
    {
      v17 = v5 - a2;
      if ( v17 > a4 )
        v17 = a4;
      v18 = v17;
      if ( !(unsigned int)sub_95990(v16, a2, 0) )
      {
        v19 = sub_95810(*(FILE **)(a1 + 32), a3);
        v20 = v19;
        if ( v19 == v7 )
          return v19;
        if ( v18 == v19 )
        {
          a3 += v19;
          v7 -= v19;
          goto LABEL_29;
        }
      }
      return -1;
    }
LABEL_42:
    sub_8F860(3u);
    return -1;
  }
  if ( v5 < a2 )
  {
    if ( *(_QWORD *)(a1 + 64) <= 0x3FFFFu )
    {
      *(_QWORD *)(a1 + 48) = sub_96080(a1 + 48, *(_QWORD *)(a1 + 48), &loc_40000, 1);
      v5 = *(_QWORD *)(a1 + 40);
    }
    *(_QWORD *)(a1 + 56) = &loc_40000;
    while ( a2 != v5 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 = *(void **)(a1 + 48);
      v10 = (void *)(a2 - v5);
      if ( a2 - v5 > (unsigned __int64)&loc_40000 )
        v10 = &loc_40000;
      v11 = v8 - v5;
      if ( v8 - v5 > (unsigned __int64)v10 )
        v11 = (__int64)v10;
      if ( !v8 )
        v11 = (__int64)v10;
      v12 = sub_923E0(*(_QWORD *)(a1 + 24), *(void **)(a1 + 48), v11, v8, a5);
      if ( v12 > 0 )
      {
        v13 = *(_QWORD *)(a1 + 32);
        if ( !v13 || !(unsigned int)sub_95990(v13, *(_QWORD *)(a1 + 40), 0) && v12 == sub_958B0(*(FILE **)(a1 + 32), v9) )
        {
          v5 = v12 + *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 40) = v5;
          if ( v10 == (void *)v12 )
            continue;
        }
      }
      return 0;
    }
  }
  v20 = 0;
LABEL_29:
  v21 = *(_QWORD *)(a1 + 8);
  if ( v21 )
  {
    v22 = v21 - *(_QWORD *)(a1 + 40);
    if ( v7 > v22 )
      v7 = v22;
  }
  v14 = sub_923E0(*(_QWORD *)(a1 + 24), a3, v7, a4, a5);
  if ( v14 > 0 )
  {
    v23 = *(_QWORD *)(a1 + 32);
    if ( !v23 || !(unsigned int)sub_95990(v23, *(_QWORD *)(a1 + 40), 0) && v14 == sub_958B0(*(FILE **)(a1 + 32), a3) )
    {
      *(_QWORD *)(a1 + 40) += v14;
      v14 += v20;
      return v14;
    }
    v14 = -1;
  }
  if ( v20 > 0 )
    return v20;
  return v14;
}

