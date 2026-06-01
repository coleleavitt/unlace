unsigned int *__fastcall sub_A543B0(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 i; // rax
  unsigned int *result; // rax
  unsigned int *v6; // rsi
  unsigned int v7; // edi
  __int64 v8; // rdx

  v2 = 16LL * a2;
  for ( i = v2 + a1[89]; *(_DWORD *)(i + 8); i = v2 + a1[89] )
  {
    result = *(unsigned int **)i;
    if ( !result )
      break;
    v6 = &result[2 * *(result - 1)];
    if ( v6 == result )
      break;
    v7 = -1;
    do
    {
      if ( *result != -1 )
      {
        v8 = *(unsigned int *)(a1[87] + 24LL * *result + 12);
        if ( (_DWORD)v8 != -1 )
        {
          if ( ((*(_BYTE *)(a1[90] + 4 * v8 + 3) >> 4) & 3) == 1 )
            return result;
          if ( v7 == -1 )
            v7 = *result;
        }
      }
      result += 2;
    }
    while ( v6 != result );
    if ( v7 == -1 )
      break;
    sub_A53A70(a1, v7);
  }
  return nullptr;
}

