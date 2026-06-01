__int64 __fastcall sub_5BA710(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  if ( a2 >= *(_QWORD *)(a1 + 48) || !*(_QWORD *)(*(_QWORD *)(a1 + 40) + 32 * a2) )
  {
    if ( !under_debugger )
      interr(1938);
    BUG();
  }
  switch_dbctx(*(int *)(a1 + 8));
  v2 = *(_QWORD *)(a1 + 40) + 32 * a2;
  result = sub_5BA580(*(__m128i **)(qword_2CCB598 + 1672), *(_QWORD *)v2, *(void **)(v2 + 8));
  if ( !(_BYTE)result )
    sub_5B6310();
  *(_QWORD *)v2 = 0;
  *(_QWORD *)(v2 + 8) = -1;
  *(_QWORD *)(v2 + 16) = 0;
  *(_BYTE *)(v2 + 24) = 0;
  return result;
}
