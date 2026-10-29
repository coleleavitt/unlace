__int64 __fastcall sub_2105CE0(_QWORD *a1, __m128i *a2)
{
  __m128i *v3; // rax
  __m128i *v4; // rdx
  __m128i *v5; // r14
  __int64 v6; // rdx
  _QWORD *v7; // r13
  __int32 v8; // eax
  char v9; // r15
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  char v12; // al
  __int64 v13; // r15
  __int64 v14; // rdi
  _QWORD *v16; // rdx
  __m128i *v17; // rdi
  __m128i *v18; // [rsp+8h] [rbp-40h]

  v3 = (__m128i *)operator new(0x50u);
  v4 = (__m128i *)a2->m128i_i64[0];
  v5 = v3;
  v18 = v3 + 3;
  v3[2].m128i_i64[0] = (__int64)v3[3].m128i_i64;
  if ( v4 == &a2[1] )
  {
    v3[3] = _mm_loadu_si128(a2 + 1);
  }
  else
  {
    v3[2].m128i_i64[0] = (__int64)v4;
    v3[3].m128i_i64[0] = a2[1].m128i_i64[0];
  }
  v6 = a2->m128i_i64[1];
  a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
  v7 = a1 + 1;
  v8 = a2[2].m128i_i32[0];
  v9 = a2[2].m128i_i8[4];
  a2[1].m128i_i8[0] = 0;
  a2->m128i_i64[1] = 0;
  v10 = (_QWORD *)a1[2];
  v5[2].m128i_i64[1] = v6;
  v5[4].m128i_i32[0] = v8;
  v5[4].m128i_i8[4] = v9;
  v5[4].m128i_i64[1] = 0;
  if ( !v10 )
  {
    v10 = a1 + 1;
    if ( v7 == (_QWORD *)a1[3] )
    {
      v14 = 1;
LABEL_18:
      std::_Rb_tree_insert_and_rebalance(v14, v5, v10, a1 + 1);
      ++a1[5];
      return (__int64)v5;
    }
    goto LABEL_14;
  }
  if ( v9 )
  {
    while ( 1 )
    {
      if ( *((_BYTE *)v10 + 68)
        && sub_9C4B50((__int64)v5[2].m128i_i64, (__int64)(v10 + 4)) >= 0
        && (sub_9C4B50((__int64)(v10 + 4), (__int64)v5[2].m128i_i64) < 0 || v5[4].m128i_i8[0] >= *((_BYTE *)v10 + 64)) )
      {
        v16 = (_QWORD *)v10[3];
        v12 = 0;
      }
      else
      {
        v16 = (_QWORD *)v10[2];
        v12 = v9;
      }
      if ( !v16 )
        break;
      v10 = v16;
    }
  }
  else
  {
    if ( !*((_BYTE *)v10 + 68) )
      goto LABEL_6;
LABEL_11:
    while ( 1 )
    {
      v11 = v10[3];
      v12 = 0;
      if ( !v11 )
        break;
      while ( 1 )
      {
        v10 = (_QWORD *)v11;
        if ( *(_BYTE *)(v11 + 68) )
          break;
LABEL_6:
        if ( sub_9C4B50((__int64)v5[2].m128i_i64, (__int64)(v10 + 4)) >= 0
          && (sub_9C4B50((__int64)(v10 + 4), (__int64)v5[2].m128i_i64) < 0 || v5[4].m128i_i32[0] >= *((_DWORD *)v10 + 16)) )
        {
          goto LABEL_11;
        }
        v11 = v10[2];
        v12 = 1;
        if ( !v11 )
          goto LABEL_12;
      }
    }
  }
LABEL_12:
  if ( v12 )
  {
    if ( (_QWORD *)a1[3] == v10 )
      goto LABEL_16;
LABEL_14:
    v13 = std::_Rb_tree_decrement(v10);
    if ( (unsigned __int8)sub_2103610(v13 + 32, (__int64)v5[2].m128i_i64) )
    {
      if ( v10 )
        goto LABEL_16;
      v13 = 0;
    }
    goto LABEL_29;
  }
  v13 = (__int64)v10;
  if ( (unsigned __int8)sub_2103610((__int64)(v10 + 4), (__int64)v5[2].m128i_i64) )
  {
LABEL_16:
    v14 = 1;
    if ( v7 != v10 )
      v14 = (unsigned __int8)sub_2103610((__int64)v5[2].m128i_i64, (__int64)(v10 + 4));
    goto LABEL_18;
  }
LABEL_29:
  v17 = (__m128i *)v5[2].m128i_i64[0];
  if ( v18 != v17 )
    operator delete(v17);
  operator delete(v5);
  return v13;
}
