__int64 __fastcall sub_7FCB10(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rdx

  if ( (__m128i *)a1[48].m128i_i64[0] != &a1[48] )
    goto LABEL_2;
  if ( a1[7].m128i_i64[0] )
  {
    if ( !(unsigned int)sub_7F3E80((__int64)a1, 341) )
    {
      a1[6].m128i_i64[1] += 341;
LABEL_2:
      v8 = (_QWORD *)a1[48].m128i_i64[1];
      v9 = (_QWORD *)v8[1];
      v10 = *v8;
      *(_QWORD *)(v10 + 8) = v9;
      *v9 = v10;
      v11 = (_QWORD *)a1[47].m128i_i64[1];
      a1[47].m128i_i64[1] = (__int64)v8;
      *v11 = v8;
      *(__m128i *)v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&a1[47], (__m128i)(unsigned __int64)v11);
      ++a1[95].m128i_i64[1];
      *((_BYTE *)v8 - 32) = 3;
      *((_BYTE *)v8 - 31) = a5;
      *(v8 - 3) = a2;
      *(v8 - 2) = a3;
      *(v8 - 1) = a4;
      return 0;
    }
  }
  else if ( !(unsigned int)sub_7FBB10(a1, 0) )
  {
    goto LABEL_2;
  }
  return 12;
}

