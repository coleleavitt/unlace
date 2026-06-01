__int64 __fastcall sub_BDBD60(__int64 *a1, __int64 a2, unsigned __int8 a3, unsigned int **a4, unsigned int **a5)
{
  int v5; // ebp
  unsigned int **v6; // rbx
  __int64 v7; // rax
  unsigned int **v8; // r13
  __int64 result; // rax

  v5 = a3;
  v6 = (unsigned int **)(a2 + 32);
  v7 = 8LL * *(unsigned int *)(a2 + 24);
  v8 = (unsigned int **)(a2 + 32 + v7);
  if ( !v7 )
    return 1;
  while ( 1 )
  {
    result = sub_BDB970(a1, *v6, v5, a4, a5);
    if ( !(_BYTE)result )
      break;
    if ( v8 == ++v6 )
      return 1;
  }
  return result;
}

