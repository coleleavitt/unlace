_BYTE *__fastcall sub_808D90(unsigned int a1, int a2, __int64 a3)
{
  __int64 v5; // rdi
  _BYTE *v6; // rax
  _BYTE *v7; // rdx
  __int64 v8; // rsi
  const char *v9; // r13
  _BYTE *v10; // rax
  _BYTE *result; // rax
  __m128i v12; // xmm0
  _WORD *v13; // rax
  unsigned __int64 v14; // rdx
  __m128i v15; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+20h] [rbp-38h]

  v5 = a3;
  v6 = *(_BYTE **)(a3 + 32);
  v7 = *(_BYTE **)(a3 + 24);
  if ( a2 == 3 )
  {
    if ( v6 < v7 )
    {
      *(_QWORD *)(v5 + 32) = v6 + 1;
      *v6 = 117;
      v6 = *(_BYTE **)(v5 + 32);
      v7 = *(_BYTE **)(v5 + 24);
      goto LABEL_7;
    }
    v8 = 117;
    goto LABEL_35;
  }
  if ( a2 <= 3 )
  {
    if ( a2 != 1 )
    {
      if ( a2 == 2 )
      {
        if ( (unsigned __int64)(v7 - v6) <= 1 )
        {
          sub_26240F0(v5, "u8", 2);
          v6 = *(_BYTE **)(v5 + 32);
          v7 = *(_BYTE **)(v5 + 24);
        }
        else
        {
          *(_WORD *)v6 = 14453;
          v7 = *(_BYTE **)(v5 + 24);
          v6 = (_BYTE *)(*(_QWORD *)(v5 + 32) + 2LL);
          *(_QWORD *)(v5 + 32) = v6;
        }
      }
LABEL_7:
      if ( a1 <= 0x27 )
        goto LABEL_8;
      goto LABEL_13;
    }
    v8 = 76;
    if ( v6 < v7 )
    {
      *(_QWORD *)(v5 + 32) = v6 + 1;
      *v6 = 76;
      v6 = *(_BYTE **)(v5 + 32);
      v7 = *(_BYTE **)(v5 + 24);
      goto LABEL_7;
    }
LABEL_35:
    sub_26239D0(v5, v8);
    v6 = *(_BYTE **)(v5 + 32);
    v7 = *(_BYTE **)(v5 + 24);
    goto LABEL_7;
  }
  if ( a2 != 4 )
    goto LABEL_7;
  v8 = 85;
  if ( v6 >= v7 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 32) = v6 + 1;
  *v6 = 85;
  v6 = *(_BYTE **)(v5 + 32);
  v7 = *(_BYTE **)(v5 + 24);
  if ( a1 <= 0x27 )
  {
LABEL_8:
    if ( a1 > 6 )
    {
      switch ( a1 )
      {
        case 7u:
          v9 = "\\a";
          goto LABEL_38;
        case 8u:
          v9 = "\\b";
          goto LABEL_38;
        case 9u:
          v9 = "\\t";
          goto LABEL_38;
        case 0xAu:
          v9 = "\\n";
          goto LABEL_38;
        case 0xBu:
          v9 = "\\v";
          goto LABEL_38;
        case 0xCu:
          v9 = "\\f";
          if ( v7 == v6 )
            goto LABEL_42;
          goto LABEL_39;
        case 0xDu:
          v9 = "\\r";
          goto LABEL_38;
        case 0x27u:
          v9 = "\\'";
          goto LABEL_38;
        default:
          goto LABEL_14;
      }
    }
    goto LABEL_17;
  }
LABEL_13:
  v9 = "\\\\";
  if ( a1 == 92 )
  {
LABEL_38:
    if ( v7 == v6 )
    {
LABEL_42:
      v5 = sub_26240F0(v5, "'", 1);
      v13 = *(_WORD **)(v5 + 32);
      if ( *(_QWORD *)(v5 + 24) - (_QWORD)v13 > 1u )
        goto LABEL_40;
    }
    else
    {
LABEL_39:
      *v6 = 39;
      v13 = (_WORD *)(*(_QWORD *)(v5 + 32) + 1LL);
      v14 = *(_QWORD *)(v5 + 24) - (_QWORD)v13;
      *(_QWORD *)(v5 + 32) = v13;
      if ( v14 > 1 )
      {
LABEL_40:
        *v13 = *(_WORD *)v9;
        result = (_BYTE *)(*(_QWORD *)(v5 + 32) + 2LL);
        *(_QWORD *)(v5 + 32) = result;
        goto LABEL_23;
      }
    }
    v5 = sub_26240F0(v5, v9, 2);
    result = *(_BYTE **)(v5 + 32);
    goto LABEL_23;
  }
LABEL_14:
  if ( (~a1 & 0xFFFFFF00) != 0 )
  {
    if ( a1 <= 0xFF )
      goto LABEL_17;
    if ( a1 <= 0xFFFF )
    {
      if ( (unsigned __int64)(v7 - v6) <= 2 )
      {
        v5 = sub_26240F0(v5, "'\\u", 3);
      }
      else
      {
        v6[2] = 117;
        *(_WORD *)v6 = 23591;
        *(_QWORD *)(v5 + 32) += 3LL;
      }
      v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_49F6CB8, (__m128i)(unsigned __int64)"%04x");
      goto LABEL_32;
    }
LABEL_48:
    if ( (unsigned __int64)(v7 - v6) <= 2 )
    {
      v5 = sub_26240F0(v5, "'\\U", 3);
    }
    else
    {
      v6[2] = 85;
      *(_WORD *)v6 = 23591;
      *(_QWORD *)(v5 + 32) += 3LL;
    }
    v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_49F6CB8, (__m128i)(unsigned __int64)"%08x");
    goto LABEL_32;
  }
  if ( a2 )
    goto LABEL_48;
  a1 = (unsigned __int8)a1;
LABEL_17:
  if ( (*((_WORD *)qword_3CAF3E0 + (int)a1) & 0x3EC) != 0 )
  {
    if ( v7 == v6 )
    {
      v5 = sub_26240F0(v5, "'", 1);
      v10 = *(_BYTE **)(v5 + 32);
    }
    else
    {
      *v6 = 39;
      v10 = (_BYTE *)(*(_QWORD *)(v5 + 32) + 1LL);
      *(_QWORD *)(v5 + 32) = v10;
    }
    if ( (unsigned __int64)v10 >= *(_QWORD *)(v5 + 24) )
    {
      v5 = sub_26239D0(v5, a1);
    }
    else
    {
      *(_QWORD *)(v5 + 32) = v10 + 1;
      *v10 = a1;
    }
    result = *(_BYTE **)(v5 + 32);
LABEL_23:
    if ( *(_BYTE **)(v5 + 24) == result )
      return (_BYTE *)sub_26240F0(v5, "'", 1);
    goto LABEL_33;
  }
  if ( (unsigned __int64)(v7 - v6) <= 2 )
  {
    v5 = sub_26240F0(v5, "'\\x", 3);
  }
  else
  {
    v6[2] = 120;
    *(_WORD *)v6 = 23591;
    *(_QWORD *)(v5 + 32) += 3LL;
  }
  v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_49F6CB8, (__m128i)(unsigned __int64)"%02x");
LABEL_32:
  v16 = a1;
  v15 = v12;
  v5 = sub_26248B0(v5, &v15);
  result = *(_BYTE **)(v5 + 32);
  if ( *(_BYTE **)(v5 + 24) != result )
  {
LABEL_33:
    *result = 39;
    ++*(_QWORD *)(v5 + 32);
    return result;
  }
  return (_BYTE *)sub_26240F0(v5, "'", 1);
}

