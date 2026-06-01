__int64 __fastcall sub_205B370(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbp
  _BYTE *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  if ( (unsigned __int8)(*(_BYTE *)a1 - 13) <= 3u )
    return 0;
  v4 = a1[2];
  if ( v4 )
  {
    v5 = *(_BYTE **)(v4 + 24);
    if ( *v5 <= 0x15u )
    {
      if ( (_BYTE)a2 )
      {
        do
        {
          a2 = 1;
          if ( !(unsigned __int8)sub_205B370(v5, 1) )
            break;
          v6 = a1[2];
          if ( !v6 )
            goto LABEL_16;
          v5 = *(_BYTE **)(v6 + 24);
        }
        while ( *v5 <= 0x15u );
      }
      else
      {
        do
        {
          result = sub_205B370(v5, 0);
          if ( !(_BYTE)result )
            break;
          v4 = *(_QWORD *)(v4 + 8);
          if ( !v4 )
            return result;
          v5 = *(_BYTE **)(v4 + 24);
        }
        while ( *v5 <= 0x15u );
      }
    }
    return 0;
  }
  else
  {
    result = 1;
    if ( (_BYTE)a2 )
    {
LABEL_16:
      sub_20BD630(a1);
      sub_205B240(a1, a2, v7, v8);
      return 1;
    }
  }
  return result;
}
