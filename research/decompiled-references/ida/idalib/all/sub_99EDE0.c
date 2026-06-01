__int64 __fastcall sub_99EDE0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // r12
  char v8; // bp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 *v14; // rbx
  __int64 v15; // rsi
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 *v22; // rsi
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+18h] [rbp-50h]
  __int64 v28[8]; // [rsp+28h] [rbp-40h] BYREF

  result = a1[1].m128i_i64[0];
  if ( !result )
  {
    v7 = a1[1].m128i_i64[1];
    if ( (*(_BYTE *)(a2 + 14) & 1) == 0 )
      goto LABEL_7;
    goto LABEL_4;
  }
  v7 = a1[1].m128i_i64[0];
  if ( a1[20].m128i_i8[0] )
    return 0;
  if ( (*(_BYTE *)(a2 + 14) & 1) != 0 )
  {
LABEL_4:
    a3 = *(unsigned __int16 *)(a2 + 12);
    if ( *(_QWORD *)(a2 + 8 * a3 + 24) )
    {
      a1[20].m128i_i8[0] = 1;
      return result;
    }
  }
LABEL_7:
  v8 = 0;
  v27 = a1[7].m128i_i64[1];
  v13 = sub_999B20((__int64)a1, a2, a3, a4, a5, a6);
  *(_QWORD *)(v13 + 32) = a2 & 0xFFFFFFFFFFFFFFF9LL;
  v14 = (__int64 *)(a2 + 24);
  v25 = a2 + 24 + 8LL * *(unsigned __int16 *)(a2 + 12);
  if ( a2 + 24 != v25 )
  {
    while ( 1 )
    {
      v15 = *v14;
      a1[1].m128i_i64[1] = v7;
      v16 = *(_QWORD *)(v15 + 8) == 0;
      a1[1].m128i_i64[0] = 0;
      if ( v16 )
        v8 = 1;
      v17 = sub_99ECD0(a1, v15, v9, v10, v11, v12);
      if ( !v17 )
        return 0;
      ++v14;
      sub_9999E0(v13, v17, 0, (_QWORD *)(a1->m128i_i64[1] + 32), v18, v19);
      if ( (__int64 *)v25 == v14 )
      {
        if ( !v8 )
          break;
        goto LABEL_15;
      }
    }
  }
  v23 = a1->m128i_i64[1];
  v24 = (_QWORD *)(v23 + 32);
  if ( v27 )
    sub_9999E0(v13, v27, 0, v24, v11, v12);
  else
    sub_999860(v13, *(_QWORD *)(v23 + 8), 2LL * (*(_QWORD *)(v23 + 8) == 0), v24, v11, v12);
LABEL_15:
  v20 = a1->m128i_i64[1];
  v21 = a1[7].m128i_i64[1];
  a1[1].m128i_i64[1] = v7;
  a1[7].m128i_i64[1] = v13;
  v28[0] = v13;
  v22 = *(__int64 **)(v20 + 72);
  if ( v22 == *(__int64 **)(v20 + 80) )
  {
    sub_9981B0(v20 + 64, v22, v28);
  }
  else
  {
    *v22 = v13;
    *(_QWORD *)(v20 + 72) = v22 + 1;
  }
  a1[1].m128i_i64[0] = 0;
  result = sub_99D480((__int64)a1, *(_QWORD *)(a2 + 16), 1, 0, v11, v12);
  a1[7].m128i_i64[1] = v21;
  return result;
}
