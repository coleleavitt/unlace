unsigned __int64 __fastcall sub_313A20(__int64 **a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d
  unsigned __int64 result; // rax
  __int64 v5; // rdi
  unsigned int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx

  v1 = *((_DWORD *)a1 + 2);
  v2 = *((_DWORD *)a1 + 3);
  result = (unsigned __int64)*a1;
  v5 = **a1;
  if ( v1 == v2 )
  {
    result = v1 >> 5;
    if ( v5 && (unsigned int)result < *(_DWORD *)(v5 - 4) )
      goto LABEL_16;
    return result;
  }
  if ( !v5 )
  {
    while ( (v1 & 0x1F) != 0 )
    {
      *((_DWORD *)a1 + 2) = ++v1;
      if ( v1 == v2 )
        return result;
    }
    if ( v2 != v1 )
    {
      v6 = *((_DWORD *)a1 + 2);
      if ( v6 != v2 )
      {
        LODWORD(result) = v1 >> 5;
        v7 = v1 >> 5;
        goto LABEL_22;
      }
    }
    return result;
  }
  do
  {
    result = v1 >> 5;
    if ( (unsigned int)result < *(_DWORD *)(v5 - 4)
      && (*(_DWORD *)(v5 + 4LL * (unsigned int)result) & (1 << (v1 & 0x1F))) != 0
      || (v1 & 0x1F) == 0 )
    {
      if ( (unsigned int)result < *(_DWORD *)(v5 - 4) )
        goto LABEL_16;
      if ( v2 != v1 )
      {
        v6 = *((_DWORD *)a1 + 2);
        v7 = (unsigned int)result;
        if ( v2 != v6 )
          goto LABEL_22;
      }
      return result;
    }
    *((_DWORD *)a1 + 2) = ++v1;
  }
  while ( v2 != v1 );
  result = v2 >> 5;
  if ( (unsigned int)result >= *(_DWORD *)(v5 - 4) )
    return result;
LABEL_16:
  v7 = (unsigned int)result;
  if ( (*(_DWORD *)(v5 + 4LL * (unsigned int)result) & (1 << v1)) == 0 && v1 != v2 )
  {
    v6 = *((_DWORD *)a1 + 2);
    if ( v6 != v2 )
    {
LABEL_22:
      while ( !*(_DWORD *)(v5 + 4 * v7) )
      {
        v6 += 32;
        LODWORD(result) = result + 1;
        *((_DWORD *)a1 + 2) = v6;
        if ( v6 == v2 )
          goto LABEL_35;
        v7 = (unsigned int)result;
      }
      if ( v2 == v6 )
      {
LABEL_35:
        result = *((unsigned int *)a1 + 2);
        if ( v2 == (_DWORD)result )
          return result;
        if ( v5 )
        {
          do
          {
LABEL_27:
            v9 = (unsigned int)result >> 5;
            if ( (unsigned int)v9 < *(_DWORD *)(v5 - 4) && (*(_DWORD *)(v5 + 4 * v9) & (1 << (result & 0x1F))) != 0 )
              break;
            if ( (result & 0x1F) == 0 )
              break;
            result = (unsigned int)(result + 1);
            *((_DWORD *)a1 + 2) = result;
          }
          while ( v2 != (_DWORD)result );
          return result;
        }
      }
      else
      {
        v8 = v6 >> 5;
        if ( v5 )
        {
          if ( (unsigned int)v8 < *(_DWORD *)(v5 - 4) )
          {
            if ( (*(_DWORD *)(v5 + 4 * v8) & (1 << v6)) != 0 )
            {
              result = *((unsigned int *)a1 + 2);
              if ( (_DWORD)result == v2 )
                return result;
            }
            else
            {
              result = v6 + 1;
              *((_DWORD *)a1 + 2) = result;
              if ( (_DWORD)result == v2 )
                return result;
            }
          }
          else
          {
            result = v6 + 1;
            *((_DWORD *)a1 + 2) = result;
            if ( (_DWORD)result == v2 )
              return result;
          }
          goto LABEL_27;
        }
        result = v6 + 1;
        *((_DWORD *)a1 + 2) = result;
        if ( v2 == (_DWORD)result )
          return result;
      }
      do
      {
        if ( (result & 0x1F) == 0 )
          break;
        result = (unsigned int)(result + 1);
        *((_DWORD *)a1 + 2) = result;
      }
      while ( (_DWORD)result != v2 );
    }
  }
  return result;
}

