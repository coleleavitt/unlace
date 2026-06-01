_QWORD *__fastcall sub_5BB320(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v5; // rcx
  void *v6; // rdi

  v2 = *(_QWORD **)a1;
  if ( **(_QWORD **)a1 != **(_QWORD **)a2 || (v3 = *(_QWORD *)(a1 + 8), v3 != *(_QWORD *)(a2 + 8)) )
  {
    if ( !under_debugger )
      interr(1922);
LABEL_11:
    BUG();
  }
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = v5;
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  if ( !(unsigned __int8)sub_5BA260(*(__m128i **)(qword_2CCB598 + 1672), (__int64)v2, v3, v5) )
  {
    if ( !under_debugger )
      interr(1923);
    goto LABEL_11;
  }
  v6 = *(void **)(a1 + 8);
  if ( *(_BYTE *)(a1 + 24) )
    return (_QWORD *)set_abits(v6, 2);
  else
    return clr_abits(v6, 2);
}
