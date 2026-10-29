__m128i *__fastcall sub_2298CF0(__m128i *a1, char *a2, size_t a3)
{
  char *v3; // r14
  size_t v4; // rbp
  const __m128i *v5; // rbx
  __m128i si128; // xmm0
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  char **v10; // rax

  v3 = a2;
  v4 = a3;
  if ( a3 == 10 )
  {
    if ( *(_QWORD *)a2 != 0x312D746C61626F63LL || *((_WORD *)a2 + 4) != 12336 )
      goto LABEL_3;
    v10 = &off_2BEC060;
    goto LABEL_28;
  }
  if ( a3 == 7 )
  {
    if ( *(_DWORD *)a2 != 1818458467 || *((_WORD *)a2 + 2) != 28271 || a2[6] != 101 )
      goto LABEL_3;
    v10 = &off_2BEC080;
    goto LABEL_28;
  }
  if ( a3 != 8 )
  {
    if ( a3 == 9 )
    {
      if ( *(_QWORD *)a2 == 0x31732D656C707061LL && a2[8] == 48 )
      {
        v10 = &off_2BEC200;
      }
      else
      {
        if ( *(_QWORD *)a2 != 0x31612D656C707061LL || a2[8] != 56 )
          goto LABEL_3;
        v10 = &off_2BEC220;
      }
    }
    else
    {
      if ( a3 != 12 || *(_QWORD *)a2 != 0x616C2D656C707061LL || *((_DWORD *)a2 + 2) != 1953719668 )
        goto LABEL_3;
      v10 = &off_2BEC240;
    }
    goto LABEL_28;
  }
  switch ( *(_QWORD *)a2 )
  {
    case 0x38612D656C707061LL:
      v10 = &off_2BEC0A0;
      goto LABEL_28;
    case 0x39612D656C707061LL:
      v10 = &off_2BEC0C0;
      goto LABEL_28;
    case 0x34732D656C707061LL:
      v10 = &off_2BEC0E0;
      goto LABEL_28;
    case 0x35732D656C707061LL:
      v10 = &off_2BEC100;
      goto LABEL_28;
    case 0x36732D656C707061LL:
      v10 = &off_2BEC120;
      goto LABEL_28;
    case 0x37732D656C707061LL:
      v10 = &off_2BEC140;
      goto LABEL_28;
    case 0x38732D656C707061LL:
      v10 = &off_2BEC160;
      goto LABEL_28;
    case 0x316D2D656C707061LL:
      v10 = &off_2BEC180;
      goto LABEL_28;
    case 0x326D2D656C707061LL:
      v10 = &off_2BEC1A0;
      goto LABEL_28;
    case 0x336D2D656C707061LL:
      v10 = &off_2BEC1C0;
      goto LABEL_28;
    case 0x39732D656C707061LL:
      v10 = &off_2BEC1E0;
LABEL_28:
      v3 = v10[2];
      v4 = (size_t)v10[3];
      break;
  }
LABEL_3:
  v5 = (const __m128i *)&off_2C76300;
  do
  {
    if ( v5->m128i_i64[1] == v4 && (!v4 || !memcmp(v3, (const void *)v5->m128i_i64[0], v4)) )
    {
      si128 = _mm_load_si128(v5);
      v7 = _mm_load_si128(v5 + 1);
      a1[3].m128i_i8[0] = 1;
      v8 = _mm_load_si128(v5 + 2);
      *a1 = si128;
      a1[1] = v7;
      a1[2] = v8;
      return a1;
    }
    v5 += 3;
  }
  while ( v5 != (const __m128i *)&off_2C77140 );
  a1[3].m128i_i64[0] = 0;
  return a1;
}
