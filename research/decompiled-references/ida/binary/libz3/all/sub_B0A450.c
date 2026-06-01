__int64 __fastcall sub_B0A450(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  unsigned int v4; // edx
  unsigned int i; // ebx
  __int64 v6; // rdx
  unsigned int v7; // ebx
  unsigned int *v8; // rdx

  result = *(_QWORD *)(a1 + 64);
  if ( result )
  {
    v3 = 0;
    while ( v3 < *(_DWORD *)(result - 4) )
    {
      sub_B06390(a1, a2, v3, 0);
      v4 = v3++;
      sub_B06390(a1, a2, v4, 1u);
      result = *(_QWORD *)(a1 + 64);
      if ( !result )
        return result;
    }
    for ( i = 0; i < *(_DWORD *)(result - 4); ++i )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(result + 48LL * i + 16);
        if ( !v6 )
          break;
        ++i;
        sub_B09C10(a1, a2, v6, 1);
        result = *(_QWORD *)(a1 + 64);
        if ( !result )
          return result;
        if ( i >= *(_DWORD *)(result - 4) )
          goto LABEL_11;
      }
    }
LABEL_11:
    v7 = 0;
    while ( v7 < *(_DWORD *)(result - 4) )
    {
      v8 = *(unsigned int **)(result + 48LL * v7 + 40);
      if ( v8 )
      {
        ++v7;
        sub_B05300(a1, a2, v8, 1);
        result = *(_QWORD *)(a1 + 64);
        if ( !result )
          return result;
      }
      else
      {
        ++v7;
      }
    }
  }
  return result;
}

