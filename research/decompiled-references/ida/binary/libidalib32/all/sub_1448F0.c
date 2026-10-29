__int64 __fastcall sub_1448F0(__int64 a1, _QWORD **a2)
{
  int v2; // edx
  __int64 result; // rax
  char v4; // r14
  char v5; // al

  v2 = sub_F9410(0, 1155);
  result = 0;
  if ( v2 == 1 )
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = getn_selector();
        if ( v5 )
          break;
        if ( !(unsigned __int8)sub_193150(a2) )
          goto LABEL_6;
      }
      v4 = v5;
      del_selector();
    }
    while ( (unsigned __int8)sub_193150(a2) );
LABEL_6:
    if ( v4 )
    {
      getinf();
      getinf();
      auto_mark_range();
      sub_1931A0(a1, a2, **a2);
      return 1;
    }
    else
    {
      sub_1931A0(a1, a2, **a2);
      return 2;
    }
  }
  return result;
}

