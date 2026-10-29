// bad sp value at call has been detected, the output may be wrong!
unsigned __int64 __fastcall sub_3B7060(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 *v9; // r13
  __m128i *v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 *m128i_i64; // r12
  __int64 v13; // rbp
  __int64 *i; // rbx
  __int64 v15; // rsi
  __int64 *v16; // r14
  _BYTE v18[32]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+28h] [rbp-40h]
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  v3 = a2 - a1;
  v4 = a3 + 8;
  v5 = *(_QWORD *)(a3 + 24);
  v21 = __readfsqword(0x28u);
  if ( v5 != a3 + 8 )
  {
    do
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v5 + 32);
        if ( *(_DWORD *)(v8 + 44) )
          break;
        sub_3AD8A0(*(_QWORD *)(v5 + 32), *(_QWORD *)(v8 + 56));
        v6 = *(_QWORD *)(v8 + 56);
        *(_DWORD *)(v8 + 44) = 0;
        v7 = v3 + v6;
        *(_QWORD *)(v8 + 32) = v7;
        *(_QWORD *)(v8 + 56) = v7;
        sub_3ABAC0(v8, v7);
        v5 = std::_Rb_tree_increment(v5);
        if ( v5 == v4 )
          goto LABEL_6;
      }
      sub_3B0140(*(_QWORD *)(v5 + 32));
      v5 = std::_Rb_tree_increment(v5);
    }
    while ( v5 != v4 );
  }
LABEL_6:
  v19 = -1;
  v20 = 0;
  v9 = sub_3AF270((__int64)v18);
  v10 = **(__m128i ***)(qword_2CCB598 + 1576);
  if ( v9 != (__int64 *)v10 )
  {
    if ( ((char *)v9 - (char *)v10) >> 3 )
    {
      _BitScanReverse64(&v11, ((char *)v9 - (char *)v10) >> 3);
      sub_3B6E40(v10, v9, 2LL * (int)v11, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3AF250);
      if ( (char *)v9 - (char *)v10 > 128 )
      {
        m128i_i64 = v10[8].m128i_i64;
        sub_3B6BD0(v10->m128i_i8, v10[8].m128i_i8, sub_3AF250);
        if ( v9 != (__int64 *)&v10[8] )
        {
          do
          {
            v13 = *m128i_i64;
            for ( i = m128i_i64; ; i[1] = *i )
            {
              v15 = *(i - 1);
              v16 = i--;
              if ( !(unsigned __int8)sub_3AF250(v13, v15) )
                break;
            }
            ++m128i_i64;
            *v16 = v13;
          }
          while ( v9 != m128i_i64 );
        }
        return v21 - __readfsqword(0x28u);
      }
    }
    else
    {
      sub_3B6E40(v10, v9, -2, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3AF250);
    }
    sub_3B6BD0(v10->m128i_i8, (char *)v9, sub_3AF250);
  }
  return v21 - __readfsqword(0x28u);
}
