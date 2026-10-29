void __fastcall sub_FC5E80(__int64 a1, int *a2)
{
  int *v2; // rdx
  int *i; // rax
  unsigned int v4; // ecx
  unsigned __int64 v5; // r10
  int *v6; // rax
  unsigned int v7; // r8d
  unsigned __int64 v8; // r9
  int *v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rdx

  if ( (int *)a1 == a2 )
    return;
  v2 = (int *)(a1 + 16);
  if ( a2 == (int *)(a1 + 16) )
    return;
  while ( 2 )
  {
    while ( 1 )
    {
      v6 = v2;
      v7 = *v2;
      v8 = *((_QWORD *)v2 + 1);
      if ( (unsigned int)*v2 >= *(_DWORD *)a1 && (v7 != *(_DWORD *)a1 || *(_QWORD *)(a1 + 8) <= v8) )
        break;
      v9 = v2 + 4;
      v10 = (__int64)v2 - a1;
      v11 = ((__int64)v2 - a1) >> 4;
      if ( v10 > 0 )
      {
        do
        {
          v6 -= 4;
          v6[4] = *v6;
          *((_QWORD *)v6 + 3) = *((_QWORD *)v6 + 1);
          --v11;
        }
        while ( v11 );
      }
      *(_DWORD *)a1 = v7;
      v2 = v9;
      *(_QWORD *)(a1 + 8) = v8;
      if ( a2 == v9 )
        return;
    }
    for ( i = v2; ; *((_QWORD *)i + 3) = v5 )
    {
      v4 = *(i - 4);
      if ( v7 < v4 )
      {
        v5 = *((_QWORD *)i - 1);
        goto LABEL_17;
      }
      if ( v7 != v4 )
        break;
      v5 = *((_QWORD *)i - 1);
      if ( v5 <= v8 )
        break;
LABEL_17:
      *i = v4;
      i -= 4;
    }
    *i = v7;
    *((_QWORD *)i + 1) = v8;
    v2 += 4;
    if ( a2 != v2 )
      continue;
    break;
  }
}
