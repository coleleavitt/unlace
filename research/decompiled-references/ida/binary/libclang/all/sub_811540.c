__int64 __fastcall sub_811540(__m128i *a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __m128i v5; // xmm1
  __int128 v6; // rax
  __int128 v8; // [rsp+F0h] [rbp-58h] BYREF
  __m128i v9; // [rsp+108h] [rbp-40h] BYREF

  sub_AC4830(&v8);
  v5 = _mm_loadu_si128(&v9);
  v6 = v8;
LABEL_2:
  if ( v5.m128i_i64[0] == (_QWORD)v6 )
  {
LABEL_9:
    if ( v5.m128i_i64[1] == *((_QWORD *)&v6 + 1) )
      return v6;
  }
  while ( 1 )
  {
    if ( (BYTE8(v6) & 3) == 0 )
      goto LABEL_12;
    a2 = *(_QWORD *)sub_ACE280(&v8, a2, *((_QWORD *)&v6 + 1), v2, v3, v4);
    if ( a2 )
      goto LABEL_5;
LABEL_6:
    *((_QWORD *)&v6 + 1) = *((_QWORD *)&v8 + 1);
    if ( (BYTE8(v8) & 3) == 0 )
      break;
    if ( *((_QWORD *)&v8 + 1) <= 3u )
    {
      a2 = 1;
      sub_ACE0F0(&v8, 1);
      v6 = v8;
      goto LABEL_2;
    }
    sub_ACE150(&v8);
    v6 = v8;
    if ( v5.m128i_i64[0] == (_QWORD)v8 )
      goto LABEL_9;
  }
  *(_QWORD *)&v6 = v8 + 8;
  *(_QWORD *)&v8 = v6;
  if ( __PAIR128__(*((unsigned __int64 *)&v8 + 1), v6) != *(_OWORD *)&v5 )
  {
LABEL_12:
    while ( 1 )
    {
      a2 = *(_QWORD *)v6;
      if ( *(_QWORD *)v6 )
        break;
      *(_QWORD *)&v6 = v6 + 8;
      *(_QWORD *)&v8 = v6;
      if ( *(_OWORD *)&v5 == v6 )
        return v6;
    }
LABEL_5:
    sub_80FCA0(a1, a2);
    goto LABEL_6;
  }
  return v6;
}

