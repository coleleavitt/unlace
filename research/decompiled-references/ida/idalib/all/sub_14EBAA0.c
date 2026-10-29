__int64 __fastcall sub_14EBAA0(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // r14
  _DWORD *v4; // r15
  __int64 v6; // r12
  _DWORD *v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+8h] [rbp-80h]
  __m128i v14; // [rsp+10h] [rbp-78h] BYREF
  __int64 v15; // [rsp+20h] [rbp-68h]
  __m128i v16[5]; // [rsp+30h] [rbp-58h] BYREF

  v3 = a1 + 24;
  v4 = &a2[a3];
  v6 = (4 * a3) >> 4;
  v13 = (4 * a3) >> 2;
  while ( 1 )
  {
    sub_13DFA10(v16, v3);
    if ( v6 <= 0 )
    {
      v10 = v13;
      v7 = a2;
LABEL_15:
      if ( v10 != 2 )
      {
        if ( v10 != 3 )
        {
          if ( v10 != 1 )
            goto LABEL_18;
LABEL_31:
          if ( v16[0].m128i_i32[0] != *v7 )
            goto LABEL_18;
          goto LABEL_21;
        }
        if ( v16[0].m128i_i32[0] == *v7 )
        {
LABEL_21:
          if ( v7 != v4 )
            return 1;
          goto LABEL_18;
        }
        ++v7;
      }
      if ( v16[0].m128i_i32[0] != *v7 )
      {
        ++v7;
        goto LABEL_31;
      }
      goto LABEL_21;
    }
    if ( v16[0].m128i_i32[0] != *a2 )
    {
      v7 = a2 + 1;
      if ( v16[0].m128i_i32[0] != a2[1] )
      {
        v7 = a2 + 2;
        if ( v16[0].m128i_i32[0] != a2[2] )
        {
          v8 = a2;
          v9 = v6;
          v7 = a2 + 3;
          if ( a2[3] != v16[0].m128i_i32[0] )
          {
            while ( 1 )
            {
              v7 = v8 + 4;
              if ( !--v9 )
              {
                v10 = v4 - v7;
                goto LABEL_15;
              }
              if ( v16[0].m128i_i32[0] == v8[4] )
                goto LABEL_21;
              if ( v16[0].m128i_i32[0] == v8[5] )
              {
                v7 = v8 + 5;
                goto LABEL_21;
              }
              if ( v16[0].m128i_i32[0] == v8[6] )
              {
                if ( v8 + 6 == v4 )
                  goto LABEL_18;
                return 1;
              }
              if ( v16[0].m128i_i32[0] == v8[7] )
                break;
              v8 += 4;
            }
            if ( v8 + 7 == v4 )
              goto LABEL_18;
            return 1;
          }
        }
      }
      goto LABEL_21;
    }
    if ( a2 != v4 )
      return 1;
LABEL_18:
    v16[0].m128i_i32[0] = 1;
    if ( sub_14E3360(a1, v16, 1) )
      return 0;
    sub_13DF9D0(&v14, v3);
    v11 = v15;
    *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v14);
    *(_QWORD *)(a1 + 104) = v11;
  }
}
