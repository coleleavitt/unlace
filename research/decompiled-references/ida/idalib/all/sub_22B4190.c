__int64 __fastcall sub_22B4190(_DWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  char *v3; // rax
  char *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax

  if ( a2 > 4 )
  {
    v5 = (__int64)a1 + a2 - 5;
    if ( *(_DWORD *)v5 == 1718575992 && *(_BYTE *)(v5 + 4) == 102 )
      return 8;
LABEL_13:
    result = 1;
    if ( *(_DWORD *)((char *)a1 + a2 - 4) == 1717989219 )
      return result;
    goto LABEL_14;
  }
  if ( a2 == 4 )
    goto LABEL_13;
  if ( a2 == 3 )
  {
LABEL_14:
    v6 = (__int64)a1 + a2 - 3;
    if ( *(_WORD *)v6 == 27749 && *(_BYTE *)(v6 + 2) == 102 )
      return 3;
  }
  if ( a2 <= 3 )
    goto LABEL_17;
  result = 4;
  if ( *(_DWORD *)((char *)a1 + a2 - 4) == 1717989223 )
    return result;
  if ( a2 <= 4 )
  {
LABEL_17:
    if ( a2 == 4 )
    {
      result = 7;
      if ( *a1 != 1836278135 )
        return 0;
      return result;
    }
    return 0;
  }
  v3 = (char *)a1 + a2 - 5;
  if ( *(_DWORD *)v3 == 1751343469 && v3[4] == 111 )
    return 5;
  result = 7;
  if ( *(_DWORD *)((char *)a1 + a2 - 4) != 1836278135 )
  {
    v4 = (char *)a1 + a2 - 5;
    if ( *(_DWORD *)v4 == 1919512691 && v4[4] == 118 )
      return 6;
    return 0;
  }
  return result;
}
