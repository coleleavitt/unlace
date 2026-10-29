__int64 __fastcall sub_C2000(__int64 *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi

  result = *a1;
  if ( *a1 )
  {
    v3 = *(_QWORD *)result;
    if ( !a1[1] )
    {
      *(_QWORD *)result = result & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)result & 3LL;
      *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      result = *a1;
      *(_QWORD *)*a1 |= 2uLL;
      goto LABEL_4;
    }
    v4 = v3 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_21:
      *(_QWORD *)result = result & 0xFFFFFFFFFFFFFFFCLL | v3 & 3;
      *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      result = *a1;
      *(_QWORD *)*a1 |= 2uLL;
      a1[1] = 0;
LABEL_4:
      if ( *a1 )
        return qfree();
      return result;
    }
    v5 = *(_QWORD *)(v4 + 8);
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v8 = *(_QWORD **)(v4 + 16);
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_24;
      goto LABEL_16;
    }
    v6 = *(_QWORD **)(v5 + 8);
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v7 = *(_QWORD **)(v5 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
      {
LABEL_26:
        sub_11A960(v5 + 96);
        sub_11A960(v5 + 80);
        sub_11A960(v5 + 64);
        *(_QWORD *)v5 |= 2uLL;
LABEL_13:
        if ( v5 )
          qfree();
        v8 = *(_QWORD **)(v4 + 16);
        if ( (*(_BYTE *)v8 & 2) != 0 )
        {
LABEL_17:
          if ( (*(_BYTE *)v4 & 2) != 0 )
          {
LABEL_18:
            if ( v3 > 3 )
              qfree();
            result = *a1;
            v3 = *(_QWORD *)*a1;
            goto LABEL_21;
          }
LABEL_24:
          sub_11A960(v4 + 96);
          sub_11A960(v4 + 80);
          sub_11A960(v4 + 64);
          *(_QWORD *)v4 |= 2uLL;
          goto LABEL_18;
        }
LABEL_16:
        sub_B88E0(v8);
        goto LABEL_17;
      }
    }
    else
    {
      sub_B88E0(v6);
      v7 = *(_QWORD **)(v5 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_12;
    }
    sub_B88E0(v7);
LABEL_12:
    if ( (*(_BYTE *)v5 & 2) != 0 )
      goto LABEL_13;
    goto LABEL_26;
  }
  return result;
}
