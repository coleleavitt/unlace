__int64 __fastcall sub_DF69D0(unsigned __int64 *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 result; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rax

  v8 = *a1;
  v9 = *a1 & 0xFFFFFFFFFFFFFFF8LL;
  v10 = *a1 & 7;
  if ( (*a1 & 7) != 0 )
  {
    v12 = *(_QWORD **)v9;
    v13 = *(_QWORD *)v9 + 8LL * *(unsigned int *)(v9 + 8);
    if ( v12 != (_QWORD *)v13 )
    {
      while ( *v12 <= 1u )
      {
        if ( (_QWORD *)v13 == ++v12 )
          return 0;
      }
      if ( (_QWORD *)v13 != v12 )
      {
        v14 = *v12;
        if ( a4 == *(_QWORD *)(*v12 + 40LL) )
          goto LABEL_17;
        while ( 1 )
        {
          v15 = v12 + 1;
          if ( (_QWORD *)v13 == v12 + 1 )
            break;
          while ( 1 )
          {
            v14 = *v15;
            v12 = v15;
            if ( *v15 > 1u )
              break;
            if ( (_QWORD *)v13 == ++v15 )
              return 0;
          }
          if ( (_QWORD *)v13 == v15 )
            break;
          if ( a4 == *(_QWORD *)(v14 + 40) )
          {
LABEL_17:
            if ( a2 == *(_DWORD *)(v14 + 32) )
            {
              if ( !a2 )
                return 1;
              v16 = 0;
              while ( *(_QWORD *)(a3 + v16) == *(_QWORD *)(v14 + v16 + 48) )
              {
                v16 += 8;
                if ( 8LL * a2 == v16 )
                  return 1;
              }
            }
          }
        }
      }
    }
    return 0;
  }
  else
  {
    result = 0;
    if ( v8 > 7 && *(_QWORD *)(v9 + 40) == a4 && a2 == *(_DWORD *)(v9 + 32) )
    {
      if ( a2 )
      {
        while ( *(_QWORD *)(a3 + v10) == *(_QWORD *)(v9 + v10 + 48) )
        {
          v10 += 8;
          if ( 8LL * a2 == v10 )
            return 1;
        }
        return 0;
      }
      else
      {
        return 1;
      }
    }
  }
  return result;
}

