__int64 __fastcall sub_5FFD80(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // al
  const char *cc_parm; // r12
  char v5; // al
  __int64 v6; // r12
  char v7; // al

  result = get_merge_state(a1, a2);
  if ( (result & 3) == 0 )
  {
    v3 = getinf(57);
    cc_parm = cfg_get_cc_parm(v3 & 0xF, "HEADER_PATH");
    if ( cc_parm )
    {
      if ( !(_BYTE)a2 && sub_631490(a1, 0, 71) > 0 )
      {
        v7 = getinf(57);
        result = (__int64)cfg_get_cc_parm(v7 & 0xF, "PREDEFINED_MACROS");
        v6 = result;
        if ( !result )
          return result;
        goto LABEL_11;
      }
      sub_632C30(a1, 71, cc_parm, 0);
    }
    v5 = getinf(57);
    result = (__int64)cfg_get_cc_parm(v5 & 0xF, "PREDEFINED_MACROS");
    v6 = result;
    if ( !result )
      return result;
    if ( (_BYTE)a2 )
      return sub_632C30(a1, 72, v6, 0);
LABEL_11:
    result = sub_631490(a1, 0, 72);
    if ( result > 0 )
      return result;
    return sub_632C30(a1, 72, v6, 0);
  }
  return result;
}
