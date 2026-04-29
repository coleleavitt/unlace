__int64 __fastcall sub_323720(__int64 a1)
{
  const char *v1; // rsi
  __int64 result; // rax

  if ( *(char *)(a1 + 12) > 8 )
  {
    if ( !under_debugger )
      sub_383060(50670);
LABEL_20:
    BUG();
  }
  if ( (unsigned __int8)is_off(*(_QWORD *)(a1 + 40), (unsigned int)*(char *)(a1 + 12))
    || (unsigned __int8)is_seg(*(_QWORD *)(a1 + 40), (unsigned int)*(char *)(a1 + 12))
    || (unsigned __int8)is_manual(*(_QWORD *)(a1 + 40), (unsigned int)*(char *)(a1 + 12))
    || (unsigned __int8)is_stkvar(*(_QWORD *)(a1 + 40), (unsigned int)*(char *)(a1 + 12))
    || (unsigned __int8)is_fltnum(*(_QWORD *)(a1 + 40), (unsigned int)*(char *)(a1 + 12)) )
  {
    if ( !under_debugger )
      sub_383060(50671);
    goto LABEL_20;
  }
  if ( (unsigned __int8)is_enum(*(_QWORD *)(a1 + 40), (unsigned int)*(char *)(a1 + 12))
    || (result = is_stroff(*(_QWORD *)(a1 + 40), (unsigned int)*(char *)(a1 + 12)), (_BYTE)result) )
  {
    v1 = s1;
    if ( *(_QWORD *)(a1 + 24) )
      v1 = *(const char **)(a1 + 16);
    result = get_named_type(0, v1, 1, 0, 0, 0, 0, 0, 0);
    if ( !(_DWORD)result )
    {
      if ( !under_debugger )
        sub_383060(50672);
      goto LABEL_20;
    }
  }
  return result;
}
