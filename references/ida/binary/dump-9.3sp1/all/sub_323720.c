__int64 __fastcall sub_323720(__int64 a1)
{
  __int64 result; // rax

  if ( *(char *)(a1 + 12) > 8 )
  {
    if ( !under_debugger )
      sub_383060(50670);
LABEL_18:
    BUG();
  }
  if ( (unsigned __int8)is_off()
    || (unsigned __int8)is_seg()
    || (unsigned __int8)is_manual()
    || (unsigned __int8)is_stkvar()
    || (unsigned __int8)is_fltnum() )
  {
    if ( !under_debugger )
      sub_383060(50671);
    goto LABEL_18;
  }
  if ( (unsigned __int8)is_enum() || (result = is_stroff(), (_BYTE)result) )
  {
    result = get_named_type();
    if ( !(_DWORD)result )
    {
      if ( !under_debugger )
        sub_383060(50672);
      goto LABEL_18;
    }
  }
  return result;
}
