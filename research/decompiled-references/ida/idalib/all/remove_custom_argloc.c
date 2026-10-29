__int64 __fastcall remove_custom_argloc(int a1)
{
  unsigned __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rcx

  v1 = (unsigned int)(a1 - 7);
  v2 = *(_QWORD *)(qword_2CCB598 + 1672);
  result = 0;
  if ( v1 < *(_QWORD *)(v2 + 2776) )
  {
    *(_QWORD *)(*(_QWORD *)(v2 + 2768) + 8LL * (int)v1) = 0;
    v4 = *(_QWORD *)(v2 + 2776);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v2 + 2768);
      do
      {
        if ( *(_QWORD *)(v5 + 8 * v4 - 8) )
          break;
        *(_QWORD *)(v2 + 2776) = --v4;
      }
      while ( v4 );
    }
    return 1;
  }
  return result;
}
