__int64 __fastcall sub_3DF180(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4, _BYTE *a5)
{
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // edx

  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  v7 = *(_QWORD *)(a2 + 8);
  if ( !v7 )
  {
    if ( *(int *)a2 >= 0 && *(int *)(a2 + 4) >= 0 && *(_QWORD *)(a2 + 16) )
      v7 = 0;
    else
      v7 = *(_QWORD *)(a1 + 32);
  }
  result = *(_QWORD *)(v7 + 24);
  if ( (int)result > 0 )
  {
    v9 = 8LL * (unsigned int)(result - 1) + 8;
    result = 0;
    while ( 1 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + result);
      if ( *(_DWORD *)(v10 + 56) != 4 )
        break;
      v11 = *(_DWORD *)(v10 + 372);
      if ( v11 == 2 )
      {
        *a4 = 1;
        goto LABEL_9;
      }
      if ( v11 == 3 )
      {
        result += 8;
        *a5 = 1;
        if ( v9 == result )
          return result;
      }
      else
      {
LABEL_9:
        result += 8;
        if ( v9 == result )
          return result;
      }
    }
    ++*a3;
    goto LABEL_9;
  }
  return result;
}
