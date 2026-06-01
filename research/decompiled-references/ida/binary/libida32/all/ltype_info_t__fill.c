__int64 __fastcall ltype_info_t(float a1, _BYTE *a2, _QWORD *a3)
{
  __int64 tinfo_property; // rdx
  __int64 result; // rax
  __int64 v6; // rdi

  a2[1] = get_tinfo_property(*a3, 5) != 0;
  tinfo_property = get_tinfo_property(*a3, 288);
  result = 61;
  if ( tinfo_property )
    goto LABEL_4;
  v6 = *a3;
  if ( a2[1] )
  {
    result = get_tinfo_property(v6, 290);
LABEL_4:
    *a2 = result;
    return result;
  }
  result = get_tinfo_property(v6, 2) & 0x3F;
  *a2 = result;
  return result;
}

