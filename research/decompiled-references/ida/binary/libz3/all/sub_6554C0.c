__int64 __fastcall sub_6554C0(__int64 a1)
{
  __int64 *v1; // r12
  __int64 result; // rax
  unsigned int v3; // r13d
  unsigned __int64 v4; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdi

  v1 = *(__int64 **)(a1 + 8);
  result = v1[1];
  if ( result )
  {
    v3 = *(_DWORD *)(a1 + 16);
    v4 = result + 8LL * *(unsigned int *)(result - 4);
    v5 = (__int64 *)(result + 8LL * v3);
    if ( (unsigned __int64)v5 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v6 = *v5;
        if ( *v5 )
        {
          v7 = *v1;
          if ( (*(_DWORD *)(v6 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v5 >= v4 )
          goto LABEL_8;
      }
      sub_15D7BC0(v7, v6);
      ++v5;
    }
    while ( (unsigned __int64)v5 < v4 );
LABEL_8:
    result = v1[1];
    if ( result )
LABEL_9:
      *(_DWORD *)(result - 4) = v3;
  }
  return result;
}

