__int64 __fastcall sub_408580(__int64 a1, __m128i *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rcx

  result = *(_QWORD *)(a1 + 2376);
  v4 = a1 + 2368;
  if ( !result )
    return 0;
  v5 = a1 + 2368;
  do
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(result + 16);
      v7 = *(_QWORD *)(result + 24);
      if ( *(_DWORD *)(result + 32) < a3 )
        break;
      v5 = result;
      result = *(_QWORD *)(result + 16);
      if ( !v6 )
        goto LABEL_6;
    }
    result = *(_QWORD *)(result + 24);
  }
  while ( v7 );
LABEL_6:
  if ( v4 != v5 && a3 >= *(_DWORD *)(v5 + 32) )
  {
    if ( a2 )
    {
      *a2 = _mm_loadu_si128((const __m128i *)(v5 + 36));
      a2[1].m128i_i64[0] = *(_QWORD *)(v5 + 52);
    }
    return 1;
  }
  return result;
}

