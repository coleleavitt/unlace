unsigned __int64 *__fastcall sub_97F9D0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int64 *v11; // rax
  unsigned __int64 *v12; // r13
  unsigned int v13; // eax
  _QWORD **v14; // rbx
  __int64 v15; // r12
  _QWORD *v16; // rsi
  unsigned __int64 *result; // rax

  v6 = a1[1].m128i_i64[0];
  if ( !v6 )
  {
    v6 = sub_975DA0((__int64)a1, a2, a3, a4, a5, a6);
    a1[1].m128i_i64[0] = v6;
  }
  if ( (unsigned __int8)sub_978340(a1, (_WORD *)a2) )
  {
    v10 = a1[22].m128i_i64[0];
    if ( v10 )
      *(_QWORD *)(v10 + 8) = v6;
  }
  v11 = *(unsigned __int64 **)(v6 + 8);
  if ( (unsigned __int64)v11 >= *(_QWORD *)(v6 + 16) )
  {
    sub_975850((const __m128i **)v6, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v7, v8, v9);
    v11 = *(unsigned __int64 **)(v6 + 8);
  }
  *v11 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v11[1] = 1;
  v12 = (unsigned __int64 *)a1[1].m128i_i64[0];
  *(_QWORD *)(v6 + 8) += 16LL;
  v13 = *(unsigned __int16 *)(a2 + 4) - 1;
  if ( *(_WORD *)(a2 + 4) != 1 )
  {
    v14 = (_QWORD **)(a2 + 8LL * v13 + 16);
    v15 = a2 + 8LL * v13 + 8 - 8LL * ((unsigned int)*(unsigned __int16 *)(a2 + 4) - 2);
    do
    {
      v16 = *v14;
      if ( (*(_WORD *)*v14 & 0x1FF) != 0x1A )
        goto LABEL_12;
LABEL_11:
      v16 = (_QWORD *)v16[2];
LABEL_12:
      while ( 1 )
      {
        --v14;
        result = sub_97E030(a1, v16, 0, v7, v8, v9);
        if ( !result )
          break;
        if ( v14 == (_QWORD **)v15 )
          return result;
        v16 = *v14;
        v12 = result;
        if ( (*(_WORD *)*v14 & 0x1FF) == 0x1A )
          goto LABEL_11;
      }
    }
    while ( v14 != (_QWORD **)v15 );
  }
  return v12;
}

