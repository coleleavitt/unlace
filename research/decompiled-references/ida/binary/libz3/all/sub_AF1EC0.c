__int64 __fastcall sub_AF1EC0(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rbp
  _QWORD *v3; // rax
  __int64 v4; // rax
  int v5; // ebx
  __int64 result; // rax
  __int64 v7; // rdx

  sub_966D90(a1);
  v1 = *(_QWORD **)(a1 + 96);
  v2 = &v1[2 * *(unsigned int *)(a1 + 104)];
  if ( v1 != v2 )
  {
    while ( *v1 <= 1u )
    {
      v1 += 2;
      if ( v2 == v1 )
        goto LABEL_9;
    }
    while ( v2 != v1 )
    {
      sub_AF1C60(v1[1]);
      v3 = v1 + 2;
      if ( v2 == v1 + 2 )
        break;
      while ( 1 )
      {
        v1 = v3;
        if ( *v3 > 1u )
          break;
        v3 += 2;
        if ( v2 == v3 )
          goto LABEL_9;
      }
    }
  }
LABEL_9:
  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 - 4);
    result = *(_QWORD *)(a1 + 80);
    if ( !result )
      goto LABEL_14;
  }
  else
  {
    result = *(_QWORD *)(a1 + 80);
    v5 = 0;
    if ( !result )
      goto LABEL_14;
  }
  v7 = *(unsigned int *)(result - 4);
  if ( (_DWORD)v7 != *(_DWORD *)(result - 8) )
  {
    *(_DWORD *)(result + 4 * v7) = v5;
    ++*(_DWORD *)(result - 4);
    return result;
  }
LABEL_14:
  sub_2FD3F0((unsigned int **)(a1 + 80));
  result = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(result + 4LL * (unsigned int)(*(_DWORD *)(result - 4))++) = v5;
  return result;
}

