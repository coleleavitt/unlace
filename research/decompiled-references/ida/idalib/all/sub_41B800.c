_QWORD *__fastcall sub_41B800(__int64 a1, __m128i *a2, unsigned __int64 a3)
{
  _QWORD *result; // rax
  _QWORD *v4; // r9
  _QWORD *v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rcx

  result = *(_QWORD **)(a1 + 2488);
  v4 = (_QWORD *)(a1 + 2480);
  if ( !result )
    return nullptr;
  v5 = (_QWORD *)(a1 + 2480);
  do
  {
    while ( 1 )
    {
      v6 = result[2];
      v7 = result[3];
      if ( result[4] < a3 )
        break;
      v5 = result;
      result = (_QWORD *)result[2];
      if ( !v6 )
        goto LABEL_6;
    }
    result = (_QWORD *)result[3];
  }
  while ( v7 );
LABEL_6:
  if ( v4 != v5 && a3 >= v5[4] )
  {
    if ( a2 )
    {
      *a2 = _mm_loadu_si128((const __m128i *)(v5 + 5));
      a2[1] = _mm_loadu_si128((const __m128i *)(v5 + 7));
      a2[2].m128i_i64[0] = v5[9];
    }
    return (_QWORD *)(&dword_0 + 1);
  }
  return result;
}
