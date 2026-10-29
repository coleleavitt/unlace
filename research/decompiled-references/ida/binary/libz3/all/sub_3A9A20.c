__int64 __fastcall sub_3A9A20(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // r12
  __int64 *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdi

  result = a1[1];
  if ( result )
  {
    v5 = result + 8LL * *(unsigned int *)(result - 4);
    v6 = (__int64 *)(result + 8LL * a2);
    if ( (unsigned __int64)v6 >= v5 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v7 = *v6;
        if ( *v6 )
        {
          v8 = *a1;
          if ( (*(_DWORD *)(v7 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v6 >= v5 )
          goto LABEL_8;
      }
      sub_15D7BC0(v8, v7);
      ++v6;
    }
    while ( (unsigned __int64)v6 < v5 );
LABEL_8:
    result = a1[1];
    if ( result )
LABEL_9:
      *(_DWORD *)(result - 4) = a2;
  }
  return result;
}

