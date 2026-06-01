__int64 __fastcall sub_20C9C90(char *a1, _QWORD *a2)
{
  char v2; // dl
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx

  *a2 = 0;
  v2 = *a1;
  if ( (unsigned __int8)*a1 <= 0x1Cu )
  {
    if ( v2 == 23 )
    {
      v5 = *((_QWORD *)a1 + 9);
      result = 0;
      if ( v5 )
LABEL_4:
        *a2 = *(_QWORD *)(v5 + 112);
    }
    else if ( (unsigned __int8)(v2 - 13) > 3u )
    {
      result = 1;
      if ( v2 == 22 )
      {
        v5 = *((_QWORD *)a1 + 3);
        result = 0;
        if ( v5 )
          goto LABEL_4;
      }
    }
    else
    {
      v6 = *((_QWORD *)a1 + 5);
      result = 0;
      if ( v6 )
        *a2 = *(_QWORD *)(v6 + 120);
    }
  }
  else
  {
    v3 = *((_QWORD *)a1 + 5);
    result = 0;
    if ( v3 )
    {
      v5 = *(_QWORD *)(v3 + 72);
      if ( v5 )
        goto LABEL_4;
    }
  }
  return result;
}
