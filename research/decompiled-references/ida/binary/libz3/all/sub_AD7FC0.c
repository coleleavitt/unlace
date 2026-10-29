_QWORD *__fastcall sub_AD7FC0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // r13
  unsigned __int8 v8; // al
  __int64 v9; // rdx
  __int64 v10; // rbx
  _QWORD *result; // rax
  __int64 v12; // r12
  _DWORD **v13; // r14
  char v14; // dl
  __int64 v15; // rdx
  __int64 v17; // [rsp+10h] [rbp-68h]
  __m128i v19; // [rsp+20h] [rbp-58h] BYREF
  __m128i v20[4]; // [rsp+30h] [rbp-48h] BYREF

  v6 = (a3 - 1) / 2;
  v19.m128i_i64[0] = a5;
  v19.m128i_i64[1] = a6;
  v17 = a3 & 1;
  if ( a2 >= v6 )
  {
    result = (_QWORD *)(a1 + 8 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_10;
    v7 = a2;
  }
  else
  {
    v7 = a2;
    do
    {
      v8 = sub_ACCA40(&v19, *(_DWORD **)(a1 + 16 * (v7 + 1)), *(_DWORD **)(a1 + 16 * (v7 + 1) - 8));
      v9 = v7;
      v10 = 2 * (v7 + 1) - v8;
      result = (_QWORD *)(a1 + 8 * v10);
      v7 = v10;
      *(_QWORD *)(a1 + 8 * v9) = *result;
    }
    while ( v10 < v6 );
    if ( v17 )
      goto LABEL_5;
  }
  if ( (a3 - 2) / 2 == v7 )
  {
    v15 = *(_QWORD *)(a1 + 8 * (2 * v7 + 2) - 8);
    v7 = 2 * v7 + 1;
    *result = v15;
    result = (_QWORD *)(a1 + 8 * v7);
  }
LABEL_5:
  v20[0] = _mm_load_si128(&v19);
  v12 = (v7 - 1) / 2;
  if ( v7 > a2 )
  {
    while ( 1 )
    {
      v13 = (_DWORD **)(a1 + 8 * v12);
      v14 = sub_ACCA40(v20, *v13, a4);
      result = (_QWORD *)(a1 + 8 * v7);
      if ( !v14 )
        break;
      v7 = v12;
      *result = *v13;
      if ( a2 >= v12 )
      {
        result = (_QWORD *)(a1 + 8 * v12);
        break;
      }
      v12 = (v12 - 1) / 2;
    }
  }
LABEL_10:
  *result = a4;
  return result;
}

