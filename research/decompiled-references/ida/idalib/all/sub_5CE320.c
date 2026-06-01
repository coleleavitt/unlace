__int64 __fastcall sub_5CE320(__m128i *a1, __int64 a2, unsigned __int64 *a3, char a4, double a5, double a6, double a7)
{
  unsigned __int64 v11; // r14
  unsigned __int64 *v12; // r12
  int v14; // eax
  __int64 v15; // rax
  unsigned __int64 *v16; // rsi
  unsigned __int64 v17; // r15
  __m128i *v18; // rax
  __m128i *v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // rsi
  int v22; // eax
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+0h] [rbp-40h]

  if ( !a3 )
    return 0;
  v11 = *a3;
  v12 = sub_505D70((__int64)&a1[106].m128i_i64[1], *a3);
  if ( (int)sub_503EA0((__int64)&a1[106].m128i_i64[1], v12) > 0 )
    return 0;
  lock_func_range(a2, 1);
  sub_39ADA0(0x28u, a2, a3);
  v14 = *(_DWORD *)(a2 + 128);
  *(_QWORD *)(a2 + 16) &= ~0x400uLL;
  *(_DWORD *)(a2 + 128) = --v14;
  memmove(a3, a3 + 2, *(_QWORD *)(a2 + 136) + 16LL * v14 - (_QWORD)a3);
  if ( 16LL * *(int *)(a2 + 128) < (unsigned __int64)*(int *)(a2 + 128) )
    v15 = 0;
  else
    v15 = qrealloc(*(_QWORD *)(a2 + 136));
  *(_QWORD *)(a2 + 136) = v15;
  sub_5C7BB0(a1->m128i_i64, a2, 1);
  if ( !v12 )
    sub_368890();
  v16 = v12;
  v17 = v12[1];
  v24 = *v12;
  v18 = (__m128i *)sub_5CB2B0((__int64)a1, (__int64)v12, *(_QWORD *)a2);
  v19 = v18;
  if ( v18 )
  {
    v20 = v12[5];
    v21 = &v18->m128i_u64[1];
    v22 = *((_DWORD *)v12 + 8) - 1;
    *((_DWORD *)v12 + 8) = v22;
    memmove(v19, v21, v20 + 8LL * v22 - (_QWORD)v19);
    if ( 8LL * *((int *)v12 + 8) < (unsigned __int64)*((int *)v12 + 8) )
      v23 = 0;
    else
      v23 = qrealloc(v12[5]);
    v12[5] = v23;
    v16 = v12;
    v19 = a1;
    sub_5C85A0(a1->m128i_i64, (__int64)v12, 1);
  }
  if ( a4 )
  {
    if ( (get_merge_state(v19, v16) & 2) != 0 )
      sub_5CE170(a1, (unsigned __int64 **)a2, v12, 0, a5, a6, a7);
    else
      sub_5CE170(a1, (unsigned __int64 **)a2, v12, 1, a5, a6, a7);
    sub_5BAD80(a1, a2, v24, v17);
    if ( (get_merge_state(a1, a2) & 2) == 0 )
      sub_5C9B90((int)a1);
  }
  else
  {
    sub_5CE170(a1, (unsigned __int64 **)a2, v12, 0, a5, a6, a7);
  }
  sub_39ADA0(0x29u, a2, v11);
  lock_func_range(a2, 0);
  return 1;
}
