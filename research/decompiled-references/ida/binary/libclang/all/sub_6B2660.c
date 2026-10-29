__int64 __fastcall sub_6B2660(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  _BYTE *v4; // rax
  _BYTE *v5; // rcx
  _BYTE *v6; // rdx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *i; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  result = 0;
  if ( v2 == *(_QWORD *)(a2 + 8) )
  {
    v4 = *(_BYTE **)a1;
    v5 = (_BYTE *)(*(_QWORD *)a1 + v2);
    if ( *(_BYTE **)a1 == v5 )
    {
LABEL_8:
      v7 = *(_QWORD *)(a1 + 24);
      result = 0;
      if ( v7 == *(_QWORD *)(a2 + 24) )
      {
        v8 = *(_QWORD **)(a1 + 16);
        v9 = &v8[v7];
        if ( v8 == v9 )
        {
          return 1;
        }
        else
        {
          for ( i = *(_QWORD **)(a2 + 16); *v8 == *i; ++i )
          {
            if ( v9 == ++v8 )
              return 1;
          }
          return 0;
        }
      }
    }
    else
    {
      v6 = *(_BYTE **)a2;
      while ( *v4 == *v6 )
      {
        ++v4;
        ++v6;
        if ( v5 == v4 )
          goto LABEL_8;
      }
      return 0;
    }
  }
  return result;
}

