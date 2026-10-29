__int64 __fastcall sub_13ABCB0(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4, int a5, unsigned int a6)
{
  __int64 v6; // rbp
  unsigned int v7; // ebx
  unsigned int v8; // r10d
  char v9; // al
  unsigned __int8 *v10; // rsi
  __int64 v11; // rax
  char v13; // al
  void **p_ptr; // r11
  _BYTE *v17; // rsi
  char *v18; // rbp
  __int64 v19; // rcx
  _BYTE *v20; // rax
  char v21; // r13
  unsigned int v22; // edx
  char v23; // dl
  unsigned int v24; // ecx
  __int64 v25; // r8
  unsigned int v26; // eax
  __int64 v27; // rdx
  unsigned __int8 *v28; // rax
  __int64 v29; // rcx
  void **v31; // [rsp+10h] [rbp-88h]
  void **v32; // [rsp+10h] [rbp-88h]
  _BYTE *v33; // [rsp+18h] [rbp-80h]
  unsigned int v34; // [rsp+24h] [rbp-74h]
  int v35; // [rsp+28h] [rbp-70h]
  unsigned int v36; // [rsp+2Ch] [rbp-6Ch]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __m128i si128; // [rsp+38h] [rbp-60h]
  _BYTE v39[80]; // [rsp+48h] [rbp-50h] BYREF

  v6 = a1 + 1;
  v7 = a1 + 1;
  if ( v6 == a3 )
    return v7;
  v8 = a1 + 1;
  v9 = *(_BYTE *)(a2 + a1);
  if ( v9 == 40 )
  {
    v13 = 41;
    goto LABEL_16;
  }
  if ( v9 <= 40 )
  {
    if ( v9 == 34 )
    {
      v13 = 34;
      goto LABEL_16;
    }
    if ( v9 != 39 )
      goto LABEL_7;
LABEL_15:
    v13 = 39;
    goto LABEL_16;
  }
  switch ( v9 )
  {
    case '`':
      goto LABEL_15;
    case '{':
      v13 = 125;
      break;
    case '[':
      v13 = 93;
      break;
    default:
LABEL_7:
      if ( (unsigned int)v6 >= a4 || (byte_2411740[2 * *(unsigned __int8 *)(a2 + v6)] & 7) != 0 )
      {
        return a1 + 1;
      }
      else
      {
        v7 = a1 + 1;
        v10 = (unsigned __int8 *)(a1 + 2 + a2);
        do
        {
          if ( a4 <= ++v7 )
            break;
          v11 = *v10++;
        }
        while ( (byte_2411740[2 * v11] & 7) == 0 );
      }
      return v7;
  }
LABEL_16:
  p_ptr = &ptr;
  v17 = v39;
  v39[0] = v13;
  ptr = v39;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA410);
  if ( (unsigned int)v6 < a4 )
  {
    v7 = a1 + 2;
    v18 = (char *)(a2 + v6);
    v19 = 1;
    v20 = v39;
    while ( 1 )
    {
      v23 = *v18;
      if ( v17[v19 - 1] != *v18 )
        break;
      si128.m128i_i64[0] = --v19;
      if ( a4 == v7 )
        goto LABEL_28;
LABEL_24:
      v22 = v7 + 1;
      ++v18;
      if ( !v19 )
      {
        v28 = (unsigned __int8 *)(a2 + v22);
        if ( (byte_2411740[2 * *(unsigned __int8 *)(a2 + v7)] & 7) == 0 )
        {
          while ( 1 )
          {
            v7 = v22;
            if ( a4 <= v22 )
              break;
            v29 = *v28++;
            if ( (byte_2411740[2 * v29] & 7) != 0 )
            {
              v24 = v22 - a1;
              if ( v22 - a1 + a5 > a6 )
                goto LABEL_29;
              goto LABEL_32;
            }
            ++v22;
          }
        }
LABEL_28:
        v24 = v7 - a1;
        if ( v7 - a1 + a5 > a6 )
        {
LABEL_29:
          if ( a6 / 3 <= v24 )
          {
            v25 = (unsigned int)(a5 + 1);
            goto LABEL_31;
          }
        }
LABEL_32:
        if ( ptr != p_ptr + 3 )
          free(ptr);
        return v7;
      }
      v17 = ptr;
      ++v7;
    }
    if ( v23 != 40 )
    {
      if ( v23 <= 40 )
      {
        if ( v23 == 34 )
        {
          v21 = 34;
          goto LABEL_36;
        }
        if ( v23 != 39 )
        {
LABEL_23:
          if ( a4 == v7 )
            goto LABEL_28;
          goto LABEL_24;
        }
      }
      else if ( v23 != 96 )
      {
        if ( v23 == 123 )
        {
          v21 = 125;
        }
        else
        {
          v21 = 93;
          if ( v23 != 91 )
            goto LABEL_23;
        }
LABEL_36:
        v27 = v19 + 1;
        if ( (unsigned __int64)(v19 + 1) <= si128.m128i_i64[1] )
        {
LABEL_37:
          v17[v19] = v21;
          v19 = ++si128.m128i_i64[0];
          goto LABEL_23;
        }
LABEL_40:
        v36 = a6;
        v35 = a5;
        v34 = v8;
        v33 = v20;
        v32 = p_ptr;
        sub_2236E10(p_ptr, v20, v27, 1);
        v17 = ptr;
        v19 = si128.m128i_i64[0];
        a6 = v36;
        a5 = v35;
        v8 = v34;
        v20 = v33;
        p_ptr = v32;
        goto LABEL_37;
      }
      v21 = 39;
      v27 = v19 + 1;
      if ( (unsigned __int64)(v19 + 1) <= si128.m128i_i64[1] )
        goto LABEL_37;
      goto LABEL_40;
    }
    v21 = 41;
    goto LABEL_36;
  }
  v25 = (unsigned int)(a5 + 1);
  v7 = a1 + 1;
  if ( a6 < (unsigned int)v25 && a6 <= 5 )
  {
LABEL_31:
    v31 = p_ptr;
    v26 = sub_13ABCB0(v8, a2, a3, a4, v25);
    p_ptr = v31;
    v7 = v26;
    goto LABEL_32;
  }
  return v7;
}
