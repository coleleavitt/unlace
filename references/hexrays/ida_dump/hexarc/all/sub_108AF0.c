void __fastcall sub_108AF0(__int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 *v6; // rbx
  unsigned __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 *v11; // rcx
  unsigned __int64 *v12; // rbp
  unsigned __int64 *v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // r15
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 *v18; // rdx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r8
  __int64 *v21; // rdi
  __int64 *v22; // rdi
  _QWORD *v23; // rdi
  bool v24; // cf
  __int64 v25; // rdi
  __int64 v26; // [rsp+0h] [rbp-58h]
  unsigned __int64 *v27; // [rsp+8h] [rbp-50h]
  unsigned __int64 v28; // [rsp+10h] [rbp-48h]
  unsigned __int64 v29; // [rsp+10h] [rbp-48h]
  unsigned __int64 v30; // [rsp+18h] [rbp-40h]

  v6 = (unsigned __int64 *)a1[2];
  if ( v6 >= a2 )
    goto LABEL_2;
  v10 = qvector_reserve(a1, 0, a2, 24);
  v11 = (unsigned __int64 *)a1[2];
  v12 = (unsigned __int64 *)a1[1];
  a1[2] = (__int64)v6;
  v26 = v10;
  v13 = (unsigned __int64 *)*a1;
  v27 = v11;
  v14 = (__int64)v12 - 1;
  if ( v14 < 0 )
    goto LABEL_20;
  v15 = v10;
  do
  {
    while ( 1 )
    {
      v16 = *v13;
      *v13 = 0;
      *(_QWORD *)v15 = v16;
      v17 = v13[1];
      v13[1] = 0;
      *(_QWORD *)(v15 + 8) = v17;
      *(_DWORD *)(v15 + 16) = *((_DWORD *)v13 + 4);
      v18 = (unsigned __int64 *)*v13;
      if ( *v13 )
        break;
LABEL_18:
      v13 += 3;
      v15 += 24;
      v24 = v14-- == 0;
      if ( v24 )
        goto LABEL_19;
    }
    v19 = *v18;
    if ( !v13[1] )
    {
      *v18 = (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFCLL | *v18 & 3;
      *(__m128i *)(*v13 + 8) = _mm_unpacklo_epi64((__m128i)*v13, (__m128i)*v13);
      *(_QWORD *)*v13 &= ~1uLL;
      *(_QWORD *)*v13 |= 2uLL;
      v23 = (_QWORD *)*v13;
      if ( !*v13 )
        goto LABEL_18;
      goto LABEL_22;
    }
    v20 = v19 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v19 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
    {
      v21 = *(__int64 **)(v20 + 8);
      if ( (*(_BYTE *)v21 & 2) != 0 )
      {
        v22 = *(__int64 **)(v20 + 16);
        if ( (*(_BYTE *)v22 & 2) != 0 )
          goto LABEL_25;
      }
      else
      {
        v30 = *v18;
        sub_FBA70(v21);
        v20 = v19 & 0xFFFFFFFFFFFFFFFCLL;
        v19 = v30;
        v22 = *(__int64 **)(v20 + 16);
        if ( (*(_BYTE *)v22 & 2) != 0 )
          goto LABEL_13;
      }
      v28 = v20;
      sub_FBA70(v22);
      v20 = v28;
LABEL_13:
      if ( (*(_BYTE *)v20 & 2) != 0 )
      {
LABEL_14:
        if ( v19 > 3 )
          qfree(v20);
        v18 = (unsigned __int64 *)*v13;
        v19 = *(_QWORD *)*v13;
        goto LABEL_17;
      }
LABEL_25:
      v25 = *(_QWORD *)(v20 + 24);
      if ( v25 )
      {
        *(_QWORD *)(v20 + 32) = 0;
        v29 = v20;
        qfree(v25);
        v20 = v29;
      }
      *(_QWORD *)v20 |= 2uLL;
      goto LABEL_14;
    }
LABEL_17:
    *v18 = (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFCLL | v19 & 3;
    *(__m128i *)(*v13 + 8) = _mm_unpacklo_epi64((__m128i)*v13, (__m128i)*v13);
    *(_QWORD *)*v13 &= ~1uLL;
    *(_QWORD *)*v13 |= 2uLL;
    v23 = (_QWORD *)*v13;
    v13[1] = 0;
    if ( !v23 )
      goto LABEL_18;
LABEL_22:
    qfree(v23);
    v13 += 3;
    v15 += 24;
    v24 = v14-- == 0;
  }
  while ( !v24 );
LABEL_19:
  v13 = (unsigned __int64 *)*a1;
LABEL_20:
  qfree(v13);
  *a1 = v26;
  a1[2] = (__int64)v27;
LABEL_2:
  v7 = (unsigned __int64 *)a1[1];
  if ( v7 < a2 )
  {
    do
    {
      v8 = 3LL * (_QWORD)v7;
      v7 = (unsigned __int64 *)((char *)v7 + 1);
      v9 = *a1 + 8 * v8;
      sub_1088E0((__int64 *)v9, a3);
      *(_DWORD *)(v9 + 16) = *(_DWORD *)(a3 + 16);
    }
    while ( a2 != v7 );
  }
  a1[1] = (__int64)a2;
}
