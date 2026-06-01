_QWORD *__fastcall sub_79BF40(__int64 *a1)
{
  __int64 v1; // rdx
  _QWORD *result; // rax
  _QWORD *v3; // rdx

  v1 = *a1;
  *((_BYTE *)a1 + 9) &= ~2u;
  result = (_QWORD *)(*(_DWORD *)v1 >> 1);
  if ( *(_DWORD *)v1 >> 1 )
  {
    if ( (*(_BYTE *)v1 & 1) != 0 )
    {
      result = (_QWORD *)(v1 + 8);
      v3 = (_QWORD *)(v1 + 72);
LABEL_4:
      while ( *result > 0xFFFFFFFFFFFFFFFDLL )
      {
        result += 2;
        if ( result == v3 )
          return result;
      }
      while ( result != v3 )
      {
        result[1] |= 2uLL;
        result += 2;
        if ( result == v3 )
          break;
        while ( *result > 0xFFFFFFFFFFFFFFFDLL )
        {
          result += 2;
          if ( result == v3 )
            return result;
        }
      }
    }
    else
    {
      result = *(_QWORD **)(v1 + 8);
      v3 = &result[2 * *(unsigned int *)(v1 + 16)];
      if ( result != v3 )
        goto LABEL_4;
    }
  }
  return result;
}

