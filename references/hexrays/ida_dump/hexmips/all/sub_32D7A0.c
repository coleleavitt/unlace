char __fastcall sub_32D7A0(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v6; // rbx
  unsigned __int64 *v7; // rbp
  char result; // al

  v6 = (unsigned __int64 *)a2[1];
  v7 = &v6[2 * a2[2]];
  if ( v7 == v6 )
  {
LABEL_6:
    result = 1;
    if ( *a2 )
      return *a1 == *a2;
  }
  else
  {
    while ( 1 )
    {
      result = sub_32D5F0((__int64)a1, v6, a3, a4, a5, a6);
      if ( !result )
        break;
      v6 += 2;
      if ( v7 == v6 )
        goto LABEL_6;
    }
  }
  return result;
}
