__int64 __fastcall sub_1EE16A0(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  int v4; // ebp
  int v5; // r15d
  _QWORD *v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // [rsp+18h] [rbp-40h]

  v2 = *(unsigned int *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = v2 + 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
  v4 = v3;
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
  v5 = 0;
  do
  {
    while ( 1 )
    {
      v6 = *(_QWORD **)(a1 + 8);
      v7 = sub_1EE13A0((__int64)v6, *(_QWORD *)(a1 + 16), (__int64 *)(a1 + 32), (_DWORD *)(a1 + 24));
      v12 = sub_1EDB980(v6, v7, v8, v9, v10, v11);
      v13 = a2[2];
      if ( v13 + 1 > (unsigned __int64)a2[3] )
        break;
      ++v5;
      *(_QWORD *)(*(_QWORD *)a2 + 8 * v13) = v12;
      ++a2[2];
      if ( v5 == v4 )
        return *(_QWORD *)a2;
    }
    ++v5;
    v15 = v12;
    sub_2237220(a2, a2 + 4, v13 + 1, 8);
    *(_QWORD *)(*(_QWORD *)a2 + 8LL * a2[2]++) = v15;
  }
  while ( v4 != v5 );
  return *(_QWORD *)a2;
}
