void __fastcall sub_8E74D0(__int64 a1, const __m128i *a2)
{
  __int64 v2; // rdx
  const __m128i *v3; // r9
  const __m128i *i; // rcx
  unsigned int v5; // eax
  __int64 v6; // r8

  v2 = (unsigned int)(a2[4].m128i_i32[0] >> 8);
  if ( (_DWORD)v2 == -1 )
    goto LABEL_16;
  v3 = nullptr;
  for ( i = a2 + 4; ; v2 = (unsigned int)(i->m128i_i32[0] >> 8) )
  {
    v5 = i->m128i_i8[0];
    if ( i->m128i_i8[0] == -1 )
      BUG();
    v6 = *(_QWORD *)(a1 + 8672);
    if ( v6 )
    {
      if ( v5 >= *(_DWORD *)(v6 - 4) )
        v6 = 0;
      else
        v6 = *(_QWORD *)(v6 + 8LL * v5);
    }
    if ( a2 == *(const __m128i **)(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v2) + 8LL) )
      break;
LABEL_3:
    i = (const __m128i *)i->m128i_i64[1];
    if ( !i )
      goto LABEL_12;
LABEL_4:
    ;
  }
  if ( !v3 )
  {
    v3 = a2 + 4;
    a2[4] = _mm_loadu_si128(i);
    goto LABEL_3;
  }
  v3->m128i_i64[1] = (__int64)i;
  v3 = i;
  i = (const __m128i *)i->m128i_i64[1];
  if ( i )
    goto LABEL_4;
LABEL_12:
  if ( v3 )
  {
    v3->m128i_i64[1] = 0;
    return;
  }
LABEL_16:
  a2[4].m128i_i32[0] |= 0xFFFFFF00;
  a2[4].m128i_i64[1] = 0;
}

