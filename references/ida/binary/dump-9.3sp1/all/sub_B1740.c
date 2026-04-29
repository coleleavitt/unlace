__int64 __fastcall sub_B1740(__int64 *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  _QWORD *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi

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
LABEL_27:
      *(_QWORD *)result = result & 0xFFFFFFFFFFFFFFFCLL | v3 & 3;
      *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
      *(_QWORD *)*a1 &= ~1uLL;
      result = *a1;
      *(_QWORD *)*a1 |= 2uLL;
      a1[1] = 0;
LABEL_4:
      if ( *a1 )
        return qfree(*a1);
      return result;
    }
    v5 = *(_QWORD *)(v4 + 8);
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v10 = *(_QWORD **)(v4 + 16);
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_30;
      goto LABEL_22;
    }
    v6 = *(_QWORD **)(v5 + 8);
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
      v7 = *(_QWORD **)(v5 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
      {
LABEL_11:
        v8 = *(_QWORD *)(v5 + 112);
        if ( v8 )
        {
          *(_QWORD *)(v5 + 120) = 0;
          qfree(v8);
        }
        qfree(*(_QWORD *)(v5 + 96));
        v9 = *(_QWORD *)(v5 + 72);
        if ( v9 )
        {
          *(_QWORD *)(v5 + 80) = 0;
          qfree(v9);
        }
        qfree(*(_QWORD *)(v5 + 56));
        sub_11CDA0(v5 + 40);
        sub_11CDA0(v5 + 24);
        *(_QWORD *)v5 |= 2uLL;
LABEL_19:
        if ( v5 )
          qfree(v5);
        v10 = *(_QWORD **)(v4 + 16);
        if ( (*(_BYTE *)v10 & 2) != 0 )
        {
LABEL_23:
          if ( (*(_BYTE *)v4 & 2) != 0 )
          {
LABEL_24:
            if ( v3 > 3 )
              qfree(v3 & 0xFFFFFFFFFFFFFFFCLL);
            result = *a1;
            v3 = *(_QWORD *)*a1;
            goto LABEL_27;
          }
LABEL_30:
          v11 = *(_QWORD *)(v4 + 112);
          if ( v11 )
          {
            *(_QWORD *)(v4 + 120) = 0;
            qfree(v11);
          }
          qfree(*(_QWORD *)(v4 + 96));
          v12 = *(_QWORD *)(v4 + 72);
          if ( v12 )
          {
            *(_QWORD *)(v4 + 80) = 0;
            qfree(v12);
          }
          qfree(*(_QWORD *)(v4 + 56));
          sub_11CDA0(v4 + 40);
          sub_11CDA0(v4 + 24);
          *(_QWORD *)v4 |= 2uLL;
          goto LABEL_24;
        }
LABEL_22:
        sub_A1CC0(v10);
        goto LABEL_23;
      }
    }
    else
    {
      sub_A1CC0(v6);
      v7 = *(_QWORD **)(v5 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_18;
    }
    sub_A1CC0(v7);
LABEL_18:
    if ( (*(_BYTE *)v5 & 2) != 0 )
      goto LABEL_19;
    goto LABEL_11;
  }
  return result;
}
