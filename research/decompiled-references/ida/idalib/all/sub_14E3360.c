bool __fastcall sub_14E3360(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v4; // rbx
  _DWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rsi
  bool result; // al
  _DWORD *v9; // rax
  _DWORD *v10; // rdx
  __m128i v11[3]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a2;
  sub_13DFA10(v11, a1 + 24);
  v5 = &a2[a3];
  v6 = (4 * a3) >> 4;
  v7 = (4 * a3) >> 2;
  if ( v6 <= 0 )
  {
LABEL_14:
    if ( v7 != 2 )
    {
      if ( v7 != 3 )
      {
        result = 0;
        if ( v7 != 1 )
          return result;
LABEL_22:
        result = 0;
        if ( v11[0].m128i_i32[0] != *v4 )
          return result;
        return v5 != v4;
      }
      if ( v11[0].m128i_i32[0] == *v4 )
        return v5 != v4;
      ++v4;
    }
    if ( v11[0].m128i_i32[0] == *v4 )
      return v5 != v4;
    ++v4;
    goto LABEL_22;
  }
  result = v4 != v5;
  if ( v11[0].m128i_i32[0] != *v4 )
  {
    if ( v4[1] == v11[0].m128i_i32[0] )
    {
      return v5 != v4 + 1;
    }
    else if ( v11[0].m128i_i32[0] == v4[2] )
    {
      return v5 != v4 + 2;
    }
    else
    {
      v9 = v4;
      v10 = &v4[4 * v6];
      if ( v11[0].m128i_i32[0] == v4[3] )
      {
        return v5 != v4 + 3;
      }
      else
      {
        while ( 1 )
        {
          v4 = v9 + 4;
          if ( v10 == v9 + 4 )
          {
            v7 = v5 - v4;
            goto LABEL_14;
          }
          if ( v11[0].m128i_i32[0] == v9[4] )
            return v5 != v4;
          if ( v11[0].m128i_i32[0] == v9[5] )
            return v5 != v9 + 5;
          if ( v11[0].m128i_i32[0] == v9[6] )
            return v5 != v9 + 6;
          if ( v11[0].m128i_i32[0] == v9[7] )
            return v5 != v9 + 7;
          v9 += 4;
        }
      }
    }
  }
  return result;
}
