__int64 __fastcall sub_209E6F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        unsigned __int64 a8)
{
  __int64 v8; // r11
  unsigned __int64 v9; // r10
  __int64 v10; // rbx
  __int64 i; // r9
  __int64 v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // r8
  __int64 v15; // r8
  _QWORD *j; // r9
  _QWORD *v17; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rdx
  __int64 v23; // [rsp+8h] [rbp-30h]

  v8 = a7;
  v9 = a8;
  v10 = (a3 - 1) / 2;
  if ( a2 >= v10 )
  {
    v13 = (_QWORD *)(a1 + 24 * a2);
    if ( (a3 & 1) != 0 )
    {
      v23 = _mm_loadu_si128((const __m128i *)&a7).m128i_i64[1];
      goto LABEL_13;
    }
    v12 = a2;
  }
  else
  {
    for ( i = a2; ; i = v12 )
    {
      v12 = 2 * (i + 1);
      v13 = (_QWORD *)(a1 + 48 * (i + 1));
      if ( *(v13 - 1) > v13[2] )
      {
        --v12;
        v13 = (_QWORD *)(a1 + 24 * v12);
      }
      v14 = (_QWORD *)(a1 + 24 * i);
      *v14 = *v13;
      v14[1] = v13[1];
      v14[2] = v13[2];
      if ( v10 <= v12 )
        break;
    }
    if ( (a3 & 1) != 0 )
      goto LABEL_8;
  }
  if ( (a3 - 2) / 2 == v12 )
  {
    v19 = v12 + 1;
    v20 = 2 * (v12 + 1);
    v21 = v20 + 4 * v19;
    v12 = v20 - 1;
    v22 = (_QWORD *)(a1 + 8 * v21 - 24);
    *v13 = *v22;
    v13[1] = v22[1];
    v13[2] = v22[2];
    v13 = (_QWORD *)(a1 + 24 * v12);
  }
LABEL_8:
  v23 = _mm_loadu_si128((const __m128i *)&a7).m128i_i64[1];
  v15 = (v12 - 1) / 2;
  if ( v12 > a2 )
  {
    for ( j = (_QWORD *)(a1 + 24 * v15); j[2] < v9; v15 = (v15 - 1) / 2 )
    {
      v17 = (_QWORD *)(a1 + 24 * v12);
      *v17 = *j;
      v17[1] = j[1];
      v17[2] = j[2];
      v13 = (_QWORD *)(a1 + 24 * v15);
      if ( a2 >= v15 )
        break;
      j = (_QWORD *)(a1 + 24 * ((v15 - 1) / 2));
      v12 = v15;
    }
  }
LABEL_13:
  *v13 = v8;
  v13[2] = v9;
  v13[1] = v23;
  return v23;
}
