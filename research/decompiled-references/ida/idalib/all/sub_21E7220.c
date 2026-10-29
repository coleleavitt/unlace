__int64 __fastcall sub_21E7220(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v5; // r12
  __int64 i; // r11
  __int64 v7; // r8
  __int64 v8; // r10
  unsigned int v9; // ebx
  unsigned int *v10; // r9
  __int64 v11; // rdx
  unsigned int j; // r10d

  result = a3 - 1;
  v5 = (a3 - 1) / 2;
  if ( a2 < v5 )
  {
    for ( i = a2; ; i = v7 )
    {
      v8 = 2 * (i + 1);
      v7 = v8 - 1;
      v9 = *(_DWORD *)(a1 + 8 * (i + 1));
      v10 = (unsigned int *)(a1 + 4 * (v8 - 1));
      if ( *v10 <= v9 )
      {
        *(_DWORD *)(a1 + 4 * i) = v9;
        if ( v5 <= v8 )
        {
          v10 = (unsigned int *)(a1 + 8 * (i + 1));
          v7 = 2 * (i + 1);
          if ( (a3 & 1) != 0 )
            goto LABEL_9;
          goto LABEL_16;
        }
        v7 = 2 * (i + 1);
      }
      else
      {
        *(_DWORD *)(a1 + 4 * i) = *v10;
        if ( v5 <= v7 )
        {
          if ( (a3 & 1) == 0 )
            goto LABEL_16;
          goto LABEL_9;
        }
      }
    }
  }
  v10 = (unsigned int *)(a1 + 4 * a2);
  v7 = a2;
  if ( (a3 & 1) == 0 )
  {
LABEL_16:
    if ( v7 == (a3 - 2) / 2 )
    {
      v7 = 2 * v7 + 1;
      *v10 = *(_DWORD *)(a1 + 4 * v7);
      v10 = (unsigned int *)(a1 + 4 * v7);
    }
LABEL_9:
    result = v7 - 1;
    v11 = (v7 - 1) / 2;
    if ( v7 > a2 )
    {
      for ( j = *(_DWORD *)(a1 + 4 * v11); j < a4; v11 = (v11 - 1) / 2 )
      {
        *(_DWORD *)(a1 + 4 * v7) = j;
        v10 = (unsigned int *)(a1 + 4 * v11);
        result = (v11 - 1) / 2;
        if ( a2 >= v11 )
          break;
        j = *(_DWORD *)(a1 + 4 * result);
        v7 = v11;
      }
    }
  }
  *v10 = a4;
  return result;
}
