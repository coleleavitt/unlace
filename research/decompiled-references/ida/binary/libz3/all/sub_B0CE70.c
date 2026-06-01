__int64 __fastcall sub_B0CE70(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 result; // rax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int *v7; // rcx
  int v8; // edx
  __int64 v9; // rsi
  unsigned int *v10; // rcx
  unsigned int *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rax

  v2 = 0;
  result = *(_QWORD *)(a1 + 864);
  v4 = 0;
LABEL_2:
  if ( result )
  {
    while ( v2 < *(_DWORD *)(result - 4) )
    {
      v5 = *(_QWORD *)(a1 + 856);
      if ( !v5 )
        goto LABEL_19;
      v6 = *(unsigned int *)(result + 4LL * v2);
      if ( (unsigned int)v6 >= *(_DWORD *)(v5 - 4) )
        goto LABEL_19;
      v7 = (int *)(v5 + 4 * v6);
      v8 = *v7;
      v9 = (unsigned int)-*v7;
      if ( *v7 > 0 )
        v9 = (unsigned int)v8;
      if ( !v8 )
      {
LABEL_19:
        ++v2;
        goto LABEL_2;
      }
      result = *(unsigned int *)(a1 + 872);
      if ( (int)result < (int)v9 )
      {
        if ( v8 <= 0 )
          result = (unsigned int)-(int)result;
        *v7 = result;
        v9 = *(unsigned int *)(a1 + 872);
      }
      if ( v4 )
      {
        result = sub_182B840(v4, v9);
        v4 = result;
      }
      else
      {
        v4 = v9;
      }
      ++v2;
      if ( v4 == 1 )
        return result;
      result = *(_QWORD *)(a1 + 864);
      if ( !result )
        break;
    }
  }
  if ( v4 > 1 )
  {
    sub_B0CA60(a1);
    v10 = *(unsigned int **)(a1 + 864);
    if ( v10 )
    {
      v11 = &v10[*(v10 - 1)];
      if ( v11 != v10 )
      {
        v12 = *(_QWORD *)(a1 + 856);
        do
        {
          v13 = *v10++;
          *(int *)(v12 + 4 * v13) /= (int)v4;
        }
        while ( v10 != v11 );
      }
    }
    result = (v4 + *(_DWORD *)(a1 + 872) - 1) / v4;
    *(_DWORD *)(a1 + 872) = result;
  }
  return result;
}

