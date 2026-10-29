// bad sp value at call has been detected, the output may be wrong!
unsigned __int64 __fastcall sub_3B27E0(int a1, int a2, __int64 a3)
{
  int v3; // r13d
  __int64 v4; // r12
  __int64 v5; // rbx
  int v6; // esi
  unsigned int v7; // esi
  _DWORD *v8; // rbp
  __int64 *v9; // r13
  __m128i *v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 *m128i_i64; // r12
  __int64 v13; // rbp
  __int64 *i; // rbx
  __int64 v15; // rsi
  __int64 *v16; // r14
  _BYTE v18[32]; // [rsp+0h] [rbp-5Ch] BYREF
  __int64 v19; // [rsp+20h] [rbp-3Ch]
  int v20; // [rsp+28h] [rbp-34h]
  unsigned __int64 v21; // [rsp+2Ch] [rbp-30h]

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
        v8 = *(_DWORD **)(v5 + 32);
        if ( v8[10] )
          break;
        sub_3A91C0(*(_QWORD *)(v5 + 32), v8[13]);
        v6 = v8[13];
        v8[10] = 0;
        v7 = v3 + v6;
        v8[8] = v7;
        v8[13] = v7;
        sub_3A72A0((__int64)v8, v7);
        v5 = std::_Rb_tree_increment();
        if ( v5 == v4 )
          goto LABEL_6;
      }
      sub_3ABA20(*(_QWORD *)(v5 + 32));
      v5 = std::_Rb_tree_increment();
    }
    while ( v5 != v4 );
  }
LABEL_6:
  v20 = 0;
  v19 = 0xFFFFFFFFLL;
  v9 = sub_3AAB40((__int64)v18);
  v10 = **(__m128i ***)(qword_2CA1698 + 1384);
  if ( v9 != (__int64 *)v10 )
  {
    if ( ((char *)v9 - (char *)v10) >> 3 )
    {
      _BitScanReverse64(&v11, ((char *)v9 - (char *)v10) >> 3);
      sub_3B25C0(v10, v9, 2LL * (int)v11, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3AAB20);
      if ( (char *)v9 - (char *)v10 > 128 )
      {
        m128i_i64 = v10[8].m128i_i64;
        sub_3B2350(v10->m128i_i8, v10[8].m128i_i8, sub_3AAB20);
        if ( v9 != (__int64 *)&v10[8] )
        {
          do
          {
            v13 = *m128i_i64;
            for ( i = m128i_i64; ; i[1] = *i )
            {
              v15 = *(i - 1);
              v16 = i--;
              if ( !(unsigned __int8)sub_3AAB20(v13, v15) )
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
      sub_3B25C0(v10, v9, -2, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3AAB20);
    }
    sub_3B2350(v10->m128i_i8, (char *)v9, sub_3AAB20);
  }
  return v21 - __readfsqword(0x28u);
}

