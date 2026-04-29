__int64 __fastcall sub_310130(const __m128i **a1, _DWORD *a2, __int64 *a3, int a4, __int64 a5)
{
  char v7; // cl
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  const __m128i *v10; // rdx
  unsigned __int64 v11; // rcx
  const __m128i *v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned __int64 v15; // rdi
  __int64 v16; // r9
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r12
  unsigned __int64 v22; // r13
  __int64 v23; // rdi
  int v24; // r14d
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __m128i v29; // xmm0

  if ( a4 == 8 )
  {
    v8 = -1;
    v9 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v7 = 8 * a4;
    v8 = (1LL << v7) - 1;
    v9 = (1LL << (v7 - 1)) - 1;
  }
  v10 = a1[1];
  v11 = a5 - v9;
  if ( v10 == (const __m128i *)&byte_1 )
  {
    v12 = *a1;
    v15 = (*a1)->m128i_i64[0];
    v16 = v12->m128i_i64[1];
    if ( v15 >= v11 )
    {
      if ( v16 != 1 )
      {
        v17 = v15 + v16;
        v18 = v15 + v16 - 1;
        if ( v15 == v11 )
        {
          if ( a5 != v18 )
          {
            *a2 = 9;
            v19 = v12->m128i_i64[0] + v12->m128i_i64[1] - 1;
            goto LABEL_27;
          }
          *a2 = 8;
          *a3 = 0;
          return 1;
        }
        goto LABEL_17;
      }
    }
    else
    {
      v17 = v15 + v16;
      v18 = v15 + v16 - 1;
      if ( v8 < v18 )
        goto LABEL_66;
      if ( v16 != 1 )
      {
LABEL_17:
        if ( v8 == v18 )
        {
          if ( v15 == 1 )
          {
            *a2 = 0;
            *a3 = 0;
            return 1;
          }
          *a2 = 2;
          v20 = v12->m128i_i64[0];
          *a3 = v12->m128i_i64[0];
          if ( !v20 )
            return 1;
        }
        else
        {
          if ( v9 != v18 )
          {
            if ( v15 )
              return 0;
            if ( v8 != v17 )
            {
              *a2 = 5;
              v19 = v12->m128i_i64[0] + v12->m128i_i64[1] - 1;
              goto LABEL_27;
            }
            *a2 = 0;
            *a3 = v8;
            return 1;
          }
          *a2 = 7;
          v27 = v12->m128i_i64[0];
          *a3 = v12->m128i_i64[0];
          if ( !v27 )
            return 1;
        }
LABEL_32:
        switch ( *a2 )
        {
          case 0:
          case 1:
LABEL_34:
            if ( under_debugger )
              goto LABEL_68;
            interr(52802, v8, v12, v11, a5);
LABEL_36:
            v21 = 1;
            v22 = 8;
LABEL_37:
            v23 = *a3;
            if ( *a3 )
            {
LABEL_38:
              if ( a5 != v23 )
              {
                if ( v23 + v21 == a5
                  || (v24 = bitcount(v23), v25 = bitcount(v21 + *a3), v24 > v25)
                  || v24 == v25 && (v26 = 344, _bittest64(&v26, v22)) )
                {
                  *a2 = v22;
                  *a3 += v21;
                }
              }
              return 1;
            }
LABEL_62:
            if ( under_debugger )
              goto LABEL_68;
            interr(52803, v8, v12, v11, a5);
            break;
          case 2:
            v23 = *a3;
            v22 = 4;
            v21 = -1;
            goto LABEL_38;
          case 3:
LABEL_49:
            v21 = -1;
            v22 = 5;
            goto LABEL_37;
          case 4:
LABEL_48:
            v21 = 1;
            v22 = 2;
            goto LABEL_37;
          case 5:
LABEL_47:
            v21 = 1;
            v22 = 3;
            goto LABEL_37;
          case 6:
LABEL_46:
            v21 = 1;
            v22 = 7;
            goto LABEL_37;
          case 7:
LABEL_45:
            v21 = -1;
            v22 = 6;
            goto LABEL_37;
          case 8:
LABEL_44:
            v21 = -1;
            v22 = 9;
            goto LABEL_37;
          case 9:
            goto LABEL_36;
          default:
            goto LABEL_62;
        }
        goto LABEL_64;
      }
    }
    *a2 = 1;
    *a3 = v12->m128i_i64[0];
    return 1;
  }
  if ( v10 != (const __m128i *)&word_2 )
    return 0;
  v12 = *a1;
  if ( (*a1)->m128i_i64[0] )
    return 0;
  v13 = v12[1].m128i_u64[0];
  if ( a5 != v13 + v12[1].m128i_i64[1] - 1 )
    return 0;
  v8 = v12->m128i_u64[1];
  if ( v9 + 1 == v11 || v9 >= v8 - 1 && v13 >= v11 )
  {
    if ( v8 + 1 == v13 )
    {
      *a2 = 0;
      v29 = _mm_loadu_si128(v12);
      *a3 = _mm_add_epi64(v29, _mm_srli_si128(v29, 8)).m128i_u64[0];
    }
    else
    {
      --v8;
      if ( v11 != v13 )
      {
        if ( v9 != v8 )
          return 0;
        *a2 = 7;
        v19 = v12[1].m128i_i64[0];
LABEL_27:
        *a3 = v19;
        switch ( *a2 )
        {
          case 0:
          case 1:
            goto LABEL_34;
          case 2:
            v21 = -1;
            v22 = 4;
            goto LABEL_37;
          case 3:
            goto LABEL_49;
          case 4:
            goto LABEL_48;
          case 5:
            goto LABEL_47;
          case 6:
            goto LABEL_46;
          case 7:
            goto LABEL_45;
          case 8:
            goto LABEL_44;
          case 9:
            goto LABEL_36;
          default:
            goto LABEL_62;
        }
      }
      if ( v9 != v8 )
      {
        *a2 = 9;
        v28 = v12->m128i_i64[0] + v12->m128i_i64[1] - 1;
        *a3 = v28;
        if ( !v28 )
          return 1;
        goto LABEL_32;
      }
      *a2 = 2;
      *a3 = 0;
    }
    return 1;
  }
LABEL_64:
  if ( under_debugger )
    goto LABEL_68;
  interr(52830, v8, v12, v11, a5);
LABEL_66:
  if ( under_debugger )
LABEL_68:
    BUG();
  interr(52801, v8, v12, v11, a5);
  return sub_310580();
}
