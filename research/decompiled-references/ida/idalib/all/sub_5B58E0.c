__int64 __fastcall sub_5B58E0(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v6)(__int64); // rax
  unsigned __int64 *v7; // rax
  __int64 (__fastcall *v9)(unsigned __int64 *, unsigned __int64, int); // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  _QWORD *v12; // rdx
  _QWORD *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // r14
  void *v21; // rdi
  void *v22; // rbx
  __m128i v23; // xmm1
  __m128i v24; // xmm1
  void *v25; // rdi
  __m128i v26; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __m128i v28; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v6 = *(__int64 (__fastcall **)(__int64))(*a2 + 32);
  if ( v6 == sub_3DB7B0 )
    v7 = a2 + 2;
  else
    v7 = (unsigned __int64 *)v6((__int64)a2);
  if ( a3 < *v7 || a3 >= v7[1] )
    return a1;
  v9 = *(__int64 (__fastcall **)(unsigned __int64 *, unsigned __int64, int))(*a2 + 40);
  if ( v9 == sub_5B3560 )
  {
    if ( !a2[10] )
      return a1;
    v10 = (_QWORD *)a2[7];
    v11 = a2 + 6;
    v12 = v10;
    if ( !v10 )
      return a1;
    v13 = a2 + 6;
    do
    {
      while ( 1 )
      {
        v14 = v12[2];
        v15 = v12[3];
        if ( v12[4] >= a3 )
          break;
        v12 = (_QWORD *)v12[3];
        if ( !v15 )
          goto LABEL_13;
      }
      v13 = v12;
      v12 = (_QWORD *)v12[2];
    }
    while ( v14 );
LABEL_13:
    if ( v11 == v13 || a3 != v13[4] )
      return a1;
  }
  else
  {
    if ( a3 != v9(a2, a3, 0) )
      return a1;
    v10 = (_QWORD *)a2[7];
    v11 = a2 + 6;
    if ( !v10 )
    {
LABEL_25:
      if ( !under_debugger )
        interr(2451);
      BUG();
    }
  }
  v16 = v11;
  do
  {
    while ( 1 )
    {
      v17 = v10[2];
      v18 = v10[3];
      if ( v10[4] >= a3 )
        break;
      v10 = (_QWORD *)v10[3];
      if ( !v18 )
        goto LABEL_23;
    }
    v11 = v10;
    v10 = (_QWORD *)v10[2];
  }
  while ( v17 );
LABEL_23:
  if ( v16 == v11 || a3 < v11[4] )
    goto LABEL_25;
  v19 = v11[5];
  a2[17] = v19;
  if ( v19 != -1 )
  {
    v20 = switch_dbctx(*((int *)a2 + 2));
    a2[12] = 0;
    a2[15] = 0;
    sub_7BEA80(*(_QWORD *)(v20 + 1672) + 2456LL, **(_QWORD **)(v20 + 1672), a2 + 11, a3, 83);
    sub_7BEA80(*(_QWORD *)(v20 + 1672) + 2456LL, **(_QWORD **)(v20 + 1672), a2 + 14, a3, 70);
    sub_5B5690((__int64)&ptr, a3, a2[17], (__int64)(a2 + 11), (__int64)(a2 + 14));
    v21 = *(void **)a1;
    v22 = ptr;
    ptr = nullptr;
    v23 = _mm_loadu_si128(&v28);
    v28 = 0;
    if ( v21 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v26 = v23;
      qfree(v21);
      v24 = _mm_load_si128(&v26);
      v25 = ptr;
      *(_QWORD *)a1 = v22;
      *(__m128i *)(a1 + 8) = v24;
      if ( v25 )
      {
        v28.m128i_i64[0] = 0;
        qfree(v25);
      }
    }
    else
    {
      *(_QWORD *)a1 = v22;
      *(__m128i *)(a1 + 8) = v23;
    }
  }
  return a1;
}
