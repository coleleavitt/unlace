__int64 __fastcall sub_7763C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rbp

  result = 1;
  if ( a3 != a2 )
  {
    v5 = *(_QWORD *)(a1 + 48) + 176 * a2;
    v6 = *(_QWORD *)(v5 + 32);
    v7 = *(_QWORD *)(v5 + 24);
    v8 = v7 + 9 * v6;
    if ( v7 == v8 )
    {
      return 0;
    }
    else
    {
      result = *(unsigned __int8 *)(v7 + 8);
      if ( (_BYTE)result )
      {
LABEL_10:
        while ( 1 )
        {
          result = sub_7763C0(a1, *(_QWORD *)v7, a3);
          if ( (_BYTE)result || v8 == v7 + 9 )
            break;
          result = *(unsigned __int8 *)(v7 + 17);
          if ( !(_BYTE)result )
          {
            if ( (*(_BYTE *)(v5 + 168) & 4) != 0 )
              return result;
            v7 += 18;
            if ( v8 == v7 )
              return result;
            while ( !*(_BYTE *)(v7 + 8) )
            {
              v7 += 9;
              if ( v8 == v7 )
                return 0;
            }
            goto LABEL_9;
          }
          v7 += 9;
        }
      }
      else if ( (*(_BYTE *)(v5 + 168) & 4) == 0 )
      {
        v7 += 9;
        if ( v6 != 1 )
        {
          while ( !*(_BYTE *)(v7 + 8) )
          {
            v7 += 9;
            if ( v8 == v7 )
              return 0;
          }
        }
LABEL_9:
        if ( v8 != v7 )
          goto LABEL_10;
      }
    }
  }
  return result;
}
