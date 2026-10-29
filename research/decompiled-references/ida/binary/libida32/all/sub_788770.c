__int64 __fastcall sub_788770(__int64 a1, const char *a2)
{
  if ( *(_BYTE *)(a1 + 265) )
    return set_qerrno(2012, a2);
  if ( *(_DWORD *)a1 )
    return set_qerrno(2017, a2);
  *(_DWORD *)a1 = 5;
  if ( strlen(a2) > 0x7F || !sub_893780(qword_2CA1698, a2, sub_789390) )
    return set_qerrno(2018, a2);
  qstrncpy(a1 + 4, a2, 128);
  return 0;
}

