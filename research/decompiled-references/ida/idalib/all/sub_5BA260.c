__int64 __fastcall sub_5BA260(__m128i *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rbp
  unsigned __int64 *v8; // r15
  unsigned __int64 *v10; // rax
  _QWORD *v11; // rsi
  unsigned __int64 v12; // rax
  char v13; // r14
  unsigned __int64 i; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 *v18; // rax
  __int64 v19; // rax

  v5 = a3;
  v6 = (__int64)a1;
  v8 = sub_505D70((__int64)&a1[106].m128i_i64[1], a3);
  if ( v5 < *(_QWORD *)a2 || v5 >= *(_QWORD *)(a2 + 8) )
  {
    if ( v8 && (unsigned __int64 *)a2 != v8 && *(_QWORD *)a2 != v8[3] )
      return 0;
    if ( (int)sub_5C9B30(a1, a2, v5) < 0 )
    {
      v17 = sub_5CDC00(a1, a2, v5);
      v5 = v17;
      if ( v17 == -1 )
        return 0;
      v18 = sub_505D70((__int64)&a1[106].m128i_i64[1], v17);
      v8 = v18;
      if ( v18 )
      {
        if ( (unsigned __int64 *)a2 != v18 && v18[3] != *(_QWORD *)a2 )
          return 0;
      }
    }
  }
  if ( !a4 )
  {
    sub_5BA580(a1, a2, v5);
    return 1;
  }
  v10 = sub_5B9070(a1, a2, v5);
  v11 = v10;
  if ( !v10 )
  {
    if ( *(_QWORD *)(a2 + 72) )
    {
      a1 = (__m128i *)a2;
      v11 = (_QWORD *)sub_5B6DB0(a2, 0);
      if ( !v11 )
        return 0;
    }
    else
    {
      a1 = (__m128i *)&qword_20;
      v19 = qcalloc(32, 16);
      *(_QWORD *)(a2 + 72) = v19;
      v11 = (_QWORD *)v19;
      if ( !v19 )
        sub_3BC000((int)"add_stkpnt");
      *(_DWORD *)(a2 + 68) = 1;
    }
    v11[1] = 0;
    v13 = 1;
    goto LABEL_14;
  }
  if ( *v10 != v5 )
  {
    a1 = (__m128i *)a2;
    v16 = sub_5B6DB0(a2, (__int64)v10);
    if ( v16 )
    {
      v11 = (_QWORD *)(v16 + 16);
      v13 = 1;
      goto LABEL_14;
    }
    return 0;
  }
  v12 = v10[1];
  if ( *(_QWORD **)(a2 + 72) != v11 )
    v12 -= *(v11 - 1);
  v13 = 0;
  a4 -= v12;
  if ( !a4 )
    return 1;
LABEL_14:
  *v11 = v5;
  for ( i = ((__int64)v11 - *(_QWORD *)(a2 + 72)) >> 4; i < *(unsigned int *)(a2 + 68); v11 += 2 )
  {
    v11[1] += a4;
    ++i;
  }
  if ( *(_QWORD *)a2 >= v5 )
  {
    v11 = (_QWORD *)a2;
    a1 = (__m128i *)v6;
    sub_5BA4E0(v6, a2);
  }
  if ( (get_merge_state(a1, v11) & 2) != 0 )
  {
    sub_5D07F0(v6, a2, 1);
    return 1;
  }
  v15 = -1;
  if ( v8 )
    v15 = v8[1];
  sub_5CC740(v6, a2, v5, v15, 0);
  return sub_5BA1C0(v6, a2, v13);
}
