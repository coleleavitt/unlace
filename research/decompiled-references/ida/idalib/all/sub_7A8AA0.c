__int64 __fastcall sub_7A8AA0(__int64 a1, const char *a2)
{
  if ( *(_BYTE *)(a1 + 265) )
    return set_qerrno(2012);
  if ( *(_DWORD *)a1 )
    return set_qerrno(2017);
  *(_DWORD *)a1 = 5;
  if ( strlen(a2) > 0x7F || !sub_8B7120(qword_2CCB598, a2, sub_7A9730) )
    return set_qerrno(2018);
  qstrncpy(a1 + 4, a2, 128);
  return 0;
}
