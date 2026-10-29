__int64 __fastcall sub_87E50(__m128i *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rdx

  if ( (__m128i *)a1[48].m128i_i64[0] != &a1[48] )
    goto LABEL_2;
  if ( a1[7].m128i_i64[0] )
  {
    if ( !(unsigned int)sub_7FE80((__int64)a1, 341) )
    {
      a1[6].m128i_i64[1] += 341;
LABEL_2:
      v6 = (_QWORD *)a1[48].m128i_i64[1];
      v7 = (_QWORD *)v6[1];
      v8 = *v6;
      *(_QWORD *)(v8 + 8) = v7;
      *v7 = v8;
      v9 = (_QWORD *)a1[47].m128i_i64[1];
      a1[47].m128i_i64[1] = (__int64)v6;
      *v9 = v6;
      *(__m128i *)v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&a1[47], (__m128i)(unsigned __int64)v9);
      ++a1[95].m128i_i64[1];
      *((_BYTE *)v6 - 32) = 2;
      LOBYTE(v9) = *a4;
      *(v6 - 3) = a2;
      *((_BYTE *)v6 - 31) = (_BYTE)v9;
      *(v6 - 2) = a3;
      return 0;
    }
  }
  else if ( !(unsigned int)sub_87B10(a1, 0) )
  {
    goto LABEL_2;
  }
  return 12;
}

