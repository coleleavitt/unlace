bool __fastcall sub_1A0A130(__int64 a1, _QWORD *a2)
{
  bool result; // al
  _BYTE *v3; // rdx

  result = sub_AAC110((__int64)a2, a2[2333], a1, 0);
  if ( result )
    return 1;
  v3 = (_BYTE *)a2[290];
  if ( (v3[1] & 8) != 0 || (*v3 & 2) != 0 )
  {
    if ( !sub_AAC110((__int64)a2, a2[2336], a1, 0) )
      return sub_AAC110((__int64)a2, a2[2337], a1, 0);
    return 1;
  }
  return result;
}
