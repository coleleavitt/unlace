__int64 __fastcall sub_1AF2C30(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  char **v10; // r12
  char *v11; // r13
  char *v12; // rbp

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)(v2 + 344);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v2 + 336);
    if ( a2 == *(_QWORD *)(v4 + 6776LL * v3 - 8) )
    {
      v9 = v3 - 1;
      *(_DWORD *)(v2 + 344) = v9;
      v10 = (char **)(v4 + 6776 * v9);
      v11 = *v10;
      v12 = &(*v10)[1688 * *((unsigned int *)v10 + 2)];
      if ( *v10 != v12 )
      {
        do
        {
          v12 -= 1688;
          sub_1AEA350((__int64)v12);
        }
        while ( v11 != v12 );
        v12 = *v10;
      }
      if ( v12 != (char *)(v10 + 2) )
        free(v12);
    }
  }
  v5 = *(_QWORD *)(v2 + 27464);
  *(_QWORD *)(v2 + 328) = 0;
  v6 = *(_QWORD *)(v5 + 32);
  result = v6 + 8LL * *(unsigned int *)(v5 + 40);
  if ( v6 != result )
  {
    v8 = *(_QWORD *)(result - 8);
    result -= 8;
    if ( (unsigned __int8)((*(_BYTE *)(v8 + 8) & 7) - 1) <= 2u )
    {
      while ( v6 != result )
      {
        v8 = *(_QWORD *)(result - 8);
        result -= 8;
        if ( (unsigned __int8)((*(_BYTE *)(v8 + 8) & 7) - 1) > 2u )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      *(_QWORD *)(v2 + 328) = v8;
    }
  }
  return result;
}
