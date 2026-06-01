void __fastcall sub_1365E60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // r13
  __int64 v6; // r15
  __int64 i; // r14
  __int64 v8; // r12
  _QWORD *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  void *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rdi
  __m128i *v15; // rdi
  __int64 v16; // rbp
  _QWORD *v17; // r12
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-90h]
  void *v23[2]; // [rsp+30h] [rbp-68h] BYREF
  __m128i v24; // [rsp+40h] [rbp-58h] BYREF
  __int64 v25; // [rsp+50h] [rbp-48h]

  v5 = (_QWORD *)(a1 + 40 * a2);
  v19 = (a3 - 1) / 2;
  if ( a2 >= v19 )
  {
    v10 = a3;
    v8 = a2;
    v9 = (_QWORD *)(a1 + 40 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_8;
    goto LABEL_18;
  }
  v6 = a1 + 40 * a2;
  for ( i = a2; ; i = v8 )
  {
    v8 = 2 * (i + 1);
    v5 = (_QWORD *)(a1 + 80 * (i + 1));
    v9 = v5;
    if ( sub_9C4B50((__int64)v5, (__int64)(v5 - 5)) < 0 )
    {
      --v8;
      v5 = (_QWORD *)(a1 + 40 * v8);
      v9 = v5;
    }
    sub_A0AAD0(v6, v5);
    *(_QWORD *)(a1 + 40 * i + 32) = v5[4];
    if ( v8 >= v19 )
      break;
    v6 = (__int64)v5;
  }
  v10 = a3;
  if ( (a3 & 1) == 0 )
  {
LABEL_18:
    if ( (v10 - 2) / 2 == v8 )
    {
      v16 = 2 * (v8 + 1);
      v17 = (_QWORD *)(a1 + 80 * (v8 + 1) - 40);
      sub_A0AAD0((__int64)v5, v17);
      v18 = v17[4];
      v8 = v16 - 1;
      v5[4] = v18;
      v5 = (_QWORD *)(a1 + 40 * (v16 - 1));
      v9 = v5;
    }
  }
LABEL_8:
  v23[0] = &v24;
  if ( *(_QWORD *)a4 == a4 + 16 )
  {
    v24 = _mm_loadu_si128((const __m128i *)(a4 + 16));
  }
  else
  {
    v23[0] = *(void **)a4;
    v24.m128i_i64[0] = *(_QWORD *)(a4 + 16);
  }
  *(_QWORD *)a4 = a4 + 16;
  v11 = *(_QWORD *)(a4 + 32);
  v12 = *(void **)(a4 + 8);
  *(_BYTE *)(a4 + 16) = 0;
  v25 = v11;
  v23[1] = v12;
  *(_QWORD *)(a4 + 8) = 0;
  v13 = (v8 - 1) / 2;
  if ( v8 > a2 )
  {
    while ( 1 )
    {
      v5 = (_QWORD *)(a1 + 40 * v8);
      if ( sub_9C4B50(a1 + 40 * v13, (__int64)v23) >= 0 )
        break;
      v14 = (__int64)v9;
      v8 = v13;
      v9 = (_QWORD *)(a1 + 40 * v13);
      sub_A0AAD0(v14, v9);
      v5[4] = v9[4];
      if ( a2 >= v13 )
      {
        v5 = (_QWORD *)(a1 + 40 * v13);
        break;
      }
      v13 = (v13 - 1) / 2;
    }
  }
  sub_A0AAD0((__int64)v9, v23);
  v15 = (__m128i *)v23[0];
  v5[4] = v25;
  if ( v15 != &v24 )
    operator delete(v15);
}
