_QWORD *__fastcall sub_79AA10(__int64 a1, char a2)
{
  __int64 v2; // rdx
  _QWORD *result; // rax
  bool v4; // dl
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD **v8; // rcx
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx

  v2 = *(_QWORD *)(a1 + 16);
  result = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
  v4 = ((v2 >> 2) & 1) == 0;
  if ( a2 )
  {
    if ( !v4 )
      result = (_QWORD *)result[1];
  }
  else if ( !v4 )
  {
    result = (_QWORD *)*result;
  }
  if ( result )
  {
    v5 = result[1] & 0x7F;
    if ( (result[1] & 0x7F) == 0 || (result[1] & 0x7F) == 0x16 )
    {
      return nullptr;
    }
    else if ( (unsigned __int8)v5 > 0x10u )
    {
      if ( (((_BYTE)v5 + 96) & 0x7Fu) > 5 )
      {
        while ( 1 )
        {
LABEL_14:
          v7 = sub_79A2E0((__int64)result);
          v8 = (_QWORD **)(*(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          v9 = (*(_QWORD *)(v7 + 16) & 4) == 0;
          result = v8;
          if ( v9 )
          {
            if ( !v8 )
              return result;
          }
          else
          {
            result = *v8;
            if ( !*v8 )
              return result;
          }
          v10 = result[1] & 0x7F;
          if ( (result[1] & 0x7F) == 0 || (result[1] & 0x7F) == 0x16 )
            break;
          if ( (unsigned __int8)v10 > 0x10u )
          {
            if ( (((_BYTE)v10 + 96) & 0x7Fu) <= 5 )
              return result;
          }
          else
          {
            v11 = 65922;
            if ( _bittest64(&v11, v10) )
              return result;
          }
        }
        return nullptr;
      }
    }
    else
    {
      v6 = 65922;
      if ( !_bittest64(&v6, v5) )
        goto LABEL_14;
    }
  }
  return result;
}

