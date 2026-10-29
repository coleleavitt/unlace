void __fastcall sub_1813170(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __m128i *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 *v19; // rax
  __int64 *v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 *i; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rax

  if ( (unsigned __int8)sub_1812F70((__int64 *)(a1 + 8), a2, (__int64)a3, a4, a5, a6) )
    return;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_3;
  v19 = sub_B8C3D0(a2, a2, v8, v9, v10, v11);
  v20 = (__int64 *)*v19;
  v21 = *v19 + 8LL * *((unsigned int *)v19 + 2);
  if ( *v19 >= v21 )
  {
    if ( v20 != (__int64 *)v21 )
    {
      if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) == 278 )
        return;
      for ( i = (__int64 *)(v21 + 8); v20 != i; ++i )
      {
        v23 = *i;
        if ( *(_WORD *)(v23 + 36) == 278 )
          return;
      }
    }
    goto LABEL_3;
  }
  v24 = *v19;
  while ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 278 )
  {
    v24 += 8LL;
    if ( v21 == v24 )
      goto LABEL_3;
  }
  if ( v21 == v24 )
  {
LABEL_3:
    v12 = *(_QWORD **)(a1 + 248);
    v13 = v12[294];
    v12[304] += 40LL;
    v14 = (__m128i *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v12[295] >= (unsigned __int64)&v14[2].m128i_u64[1] && v13 )
      v12[294] = (char *)v14 + 40;
    else
      v14 = (__m128i *)sub_986170((__int64)(v12 + 294), 40, 40, 3, v10, v11);
    sub_B14F20(v14, *(_QWORD *)(a1 + 248), a3);
    sub_B8CC60(a2, (__int64)v14, v15, v16, v17, v18);
  }
}
