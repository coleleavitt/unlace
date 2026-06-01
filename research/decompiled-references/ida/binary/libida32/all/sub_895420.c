unsigned int *__fastcall sub_895420(__int64 a1, unsigned int a2)
{
  unsigned int *result; // rax
  unsigned int *v3; // rdx
  unsigned __int64 v4; // rdx
  int v5; // ecx
  unsigned int v6; // ecx

  result = *(unsigned int **)(a1 + 48);
  v3 = *(unsigned int **)(a1 + 80);
  if ( result == v3 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    v4 = 0;
  }
  else if ( a2 >= *result )
  {
    v6 = result[1];
    if ( a2 < v6 )
      return result;
    if ( v6 == a2 )
      return v3;
    v5 = *(_DWORD *)(a1 + 24);
    v4 = (int)((((__int64)result - *(_QWORD *)(a1 + 16)) >> 4) + 1);
  }
  else
  {
    v4 = 0;
    v5 = (((__int64)result - *(_QWORD *)(a1 + 16)) >> 4) + 1;
  }
  v3 = sub_8951C0((_QWORD *)a1, a2, v4, v5);
  result = *(unsigned int **)(a1 + 80);
  if ( result != v3 && *v3 == a2 )
    return v3;
  if ( v3 != *(unsigned int **)(a1 + 16) && result != v3 - 4 && a2 >= *(v3 - 4) && a2 < *(v3 - 3) )
    return v3 - 4;
  return result;
}

