_QWORD *__fastcall sub_252680(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rdx
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi

  result = *(_QWORD **)(a1 + 72);
  v2 = (_QWORD *)*result;
  if ( *result )
  {
    if ( result[1] )
    {
      result = (_QWORD *)v2[1];
      if ( v2 != result )
      {
        do
        {
LABEL_4:
          while ( 1 )
          {
            v3 = *result;
            *((_BYTE *)result + 64) = 0;
            if ( (v3 & 2) == 0 )
              break;
LABEL_7:
            if ( **(_QWORD ***)(a1 + 72) == result )
              return result;
          }
          v4 = (_QWORD *)result[2];
          if ( (*(_BYTE *)v4 & 2) == 0 )
          {
            do
            {
              result = v4;
              v4 = (_QWORD *)v4[1];
            }
            while ( (*(_BYTE *)v4 & 2) == 0 );
            goto LABEL_7;
          }
          v5 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
          v6 = *v5;
          if ( (*v5 & 2) == 0 )
          {
            while ( (_QWORD *)v5[2] == result )
            {
              result = v5;
              v7 = v6 & 0xFFFFFFFFFFFFFFFCLL;
              v6 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v6 & 2) != 0 )
              {
                result = (_QWORD *)v7;
                if ( **(_QWORD **)(a1 + 72) != v7 )
                  goto LABEL_4;
                return result;
              }
              v5 = (_QWORD *)v7;
            }
          }
          result = v5;
        }
        while ( **(_QWORD ***)(a1 + 72) != v5 );
      }
    }
  }
  return result;
}
