__int64 __fastcall sub_1F18050(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  int v4; // r15d
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v8; // [rsp+8h] [rbp-40h]

  v2 = *(unsigned int *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = v2 + 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
  if ( a2[3] < (unsigned int)v3 )
  {
    sub_2237220(a2, a2 + 4, (unsigned int)v3, 8);
    if ( !(_DWORD)v3 )
      return *(_QWORD *)a2;
  }
  else if ( !(_DWORD)v3 )
  {
    return *(_QWORD *)a2;
  }
  v4 = 0;
  do
  {
    while ( 1 )
    {
      v5 = sub_1F16500(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 16), (__int64 *)(a1 + 32), (_DWORD *)(a1 + 24));
      v6 = a2[2];
      if ( v6 + 1 > (unsigned __int64)a2[3] )
        break;
      ++v4;
      *(_QWORD *)(*(_QWORD *)a2 + 8 * v6) = v5;
      ++a2[2];
      if ( v4 == (_DWORD)v3 )
        return *(_QWORD *)a2;
    }
    ++v4;
    v8 = v5;
    sub_2237220(a2, a2 + 4, v6 + 1, 8);
    *(_QWORD *)(*(_QWORD *)a2 + 8LL * a2[2]++) = v8;
  }
  while ( (_DWORD)v3 != v4 );
  return *(_QWORD *)a2;
}
