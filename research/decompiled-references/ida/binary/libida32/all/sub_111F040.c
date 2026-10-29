__int64 *__fastcall sub_111F040(__int64 a1)
{
  __int64 *result; // rax
  __int64 *v2; // rdx
  __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned int *v5; // rbx

  result = *(__int64 **)a1;
  v2 = *(__int64 **)(a1 + 8);
  if ( v2 != *(__int64 **)a1 )
  {
    while ( 1 )
    {
      v3 = *result;
      if ( *result )
      {
        v4 = *(unsigned int *)(a1 + 16);
        v5 = (unsigned int *)(a1 + 16);
        if ( (_DWORD)v4 )
          break;
      }
LABEL_8:
      *(_QWORD *)a1 = ++result;
      if ( result == v2 )
        return result;
    }
    while ( 1 )
    {
      result = (__int64 *)sub_2195AD0(v3, v4);
      if ( (_BYTE)result )
        break;
      if ( (unsigned int *)(a1 + 32) != ++v5 )
      {
        v4 = *v5;
        if ( (_DWORD)v4 )
          continue;
      }
      v2 = *(__int64 **)(a1 + 8);
      result = *(__int64 **)a1;
      goto LABEL_8;
    }
  }
  return result;
}

