__int64 __fastcall sub_61D7D0(__int64 *a1, int *a2)
{
  int v2; // eax
  __int64 result; // rax
  __int64 v4; // rax

  v2 = *a2;
  if ( (unsigned int)*a2 > 2 )
  {
    if ( v2 == 3 && !*((_BYTE *)a2 + 24) )
      return sub_6160A0((__int64)a1, *((_QWORD *)a2 + 1));
    return 0;
  }
  if ( !v2 )
  {
    if ( a2[4] != 1 )
      return sub_61B330(
               a1,
               *(_QWORD *)(*((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFFFF8LL),
               (*((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFFFF8LL) + 8);
    return 0;
  }
  if ( a2[10] == 1 )
  {
LABEL_7:
    if ( v2 == 2 && (*((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFCLL) > 7 && (a2[6] & 4) == 0 )
    {
      v4 = sub_81F070(a2 + 6);
      if ( v4 )
        sub_61C6C0(a1, v4);
    }
    return 0;
  }
  result = sub_6160A0((__int64)a1, *((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFFFFCLL);
  if ( !(_BYTE)result )
  {
    v2 = *a2;
    goto LABEL_7;
  }
  return result;
}

