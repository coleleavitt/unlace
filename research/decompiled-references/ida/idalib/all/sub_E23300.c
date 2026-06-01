__int64 __fastcall sub_E23300(__int64 a1, const __m128i *a2)
{
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdx

  result = a2[1].m128i_u32[2];
  if ( !*(_DWORD *)(a1 + 24) )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( (_DWORD)result )
    {
      if ( !v4 )
      {
        v7 = a2->m128i_i64[0];
        *(_DWORD *)(a1 + 24) = result;
        *(_QWORD *)a1 = v7;
        goto LABEL_11;
      }
    }
    else
    {
      if ( a2[2].m128i_i64[0] == v4 )
      {
        *(_QWORD *)a1 = a2->m128i_i64[0];
        result = a2[2].m128i_u32[2];
        *(_DWORD *)(a1 + 40) = result;
        return result;
      }
      if ( !v4 )
      {
        result = a2->m128i_i64[0];
        *(_QWORD *)a1 = a2->m128i_i64[0];
LABEL_7:
        *(__m128i *)(a1 + 32) = _mm_loadu_si128(a2 + 2);
        v6 = a2[2].m128i_i64[0];
        *(_QWORD *)(a1 + 32) = v6;
        if ( v6 )
          sub_E1E330(v6, a1);
        return result;
      }
    }
    sub_E1E360(*(_QWORD *)(a1 + 32), (_QWORD *)a1);
    *(_QWORD *)(a1 + 32) = 0;
    sub_E1E3B0(v4);
    result = a2[1].m128i_u32[2];
  }
  v5 = a2->m128i_i64[0];
  *(_DWORD *)(a1 + 24) = result;
  *(_QWORD *)a1 = v5;
  if ( !(_DWORD)result )
    goto LABEL_7;
LABEL_11:
  switch ( (_DWORD)result )
  {
    case 1:
      *(__m128i *)(a1 + 32) = _mm_loadu_si128(a2 + 2);
      break;
    case 2:
      result = a2[2].m128i_i64[0];
      *(_QWORD *)(a1 + 32) = result;
      break;
    case 3:
      *(__m128i *)(a1 + 32) = _mm_loadu_si128(a2 + 2);
      break;
  }
  return result;
}
