unsigned __int64 __fastcall sub_5C72C0(__int64 a1)
{
  _QWORD *v1; // rbp
  unsigned __int64 fchunk_qty; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __m128i v7; // xmm0
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __m128i v17; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 1616);
  fchunk_qty = get_fchunk_qty();
  v3 = v1[4];
  if ( fchunk_qty == v3 )
  {
LABEL_14:
    if ( !v3 )
      return v18 - __readfsqword(0x28u);
    goto LABEL_10;
  }
  v17.m128i_i64[0] = -1;
  v4 = fchunk_qty;
  v17.m128i_i32[2] = 0;
  if ( fchunk_qty < v3 )
  {
    v1[4] = fchunk_qty;
    v3 = fchunk_qty;
    goto LABEL_14;
  }
  v5 = v1[3];
  v6 = v1[5];
  if ( (unsigned __int64)&v17 >= v5 && (unsigned __int64)&v17 < v5 + 16 * v6 )
  {
    if ( v6 >= v4 || (v16 = qvector_reserve(v1 + 3, v5, v4, 16), v3 = v1[4], v1[3] = v16, v5 = v16, v3 < v4) )
    {
      while ( 1 )
      {
        v13 = v3++;
        v14 = 16 * v13 + v5;
        *(_QWORD *)v14 = -1;
        *(_DWORD *)(v14 + 8) = 0;
        if ( v4 == v3 )
          break;
        v5 = v1[3];
      }
    }
  }
  else if ( v6 >= v4 || (v15 = qvector_reserve(v1 + 3, v5, v4, 16), v3 = v1[4], v1[3] = v15, v5 = v15, v3 < v4) )
  {
    v7 = _mm_load_si128(&v17);
    while ( 1 )
    {
      v8 = v3++;
      *(__m128i *)(v5 + 16 * v8) = v7;
      if ( v4 == v3 )
        break;
      v5 = v1[3];
    }
  }
  v1[4] = v4;
LABEL_10:
  v9 = 0;
  do
  {
    v10 = *(_QWORD *)getn_fchunk((unsigned int)v9);
    v11 = v9++;
    *(_QWORD *)(v1[3] + 16 * v11) = v10;
  }
  while ( v9 < v1[4] );
  return v18 - __readfsqword(0x28u);
}
