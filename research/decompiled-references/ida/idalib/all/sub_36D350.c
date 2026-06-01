__int64 __fastcall sub_36D350(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rsi
  unsigned __int8 v8; // al

  v3 = getseg(*(_QWORD *)(a1 + 8));
  if ( !v3 )
    return 0;
  *(_QWORD *)(a2 + 8) = 1;
  v4 = (_QWORD *)v3;
  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 != *(_QWORD *)(v3 + 8) )
  {
    v8 = set_segm_end(*(_QWORD *)(a1 + 8), v5, *(unsigned int *)(a1 + 104));
    *(_QWORD *)(a2 + 8) = v8;
    if ( !v8 )
      return 0;
  }
  v6 = *(_QWORD *)(a1 + 40);
  if ( *v4 == v6 )
    return 0;
  *(_QWORD *)(a2 + 8) = (unsigned __int8)set_segm_start(*(_QWORD *)(a1 + 8), v6, *(unsigned int *)(a1 + 104));
  return 0;
}
