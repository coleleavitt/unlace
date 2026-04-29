__int64 __fastcall sub_CDEA0(int *a1, int a2, int a3, char a4)
{
  int v4; // eax
  unsigned __int64 v6; // rdx
  int v7; // r9d
  unsigned __int64 v8; // r10
  unsigned __int64 v10; // rcx
  _DWORD *v11; // rcx
  unsigned __int64 v12; // r9
  _DWORD *v13; // rdx
  _DWORD *v14; // rax
  unsigned __int64 v15; // rax
  int v16; // eax

  v4 = *a1;
  if ( *a1 == 5 )
  {
    v11 = *((_DWORD **)a1 + 14);
    v12 = *((_QWORD *)a1 + 15);
    v13 = &v11[v12];
    if ( v11 != v13 )
    {
      v14 = *((_DWORD **)a1 + 14);
      while ( a2 != *v14 )
      {
        if ( v13 == ++v14 )
          goto LABEL_9;
      }
      if ( v14 != v13 )
      {
        v15 = a1[15];
        if ( v15 >= v12 || a2 != v11[v15] )
          return 0;
        v16 = a1[14];
        ++a1[15];
        a1[14] = ((a3 + v16 - 1) & -a3) + 1;
        return 1;
      }
    }
    goto LABEL_9;
  }
  if ( v4 == 1 )
  {
LABEL_9:
    v10 = a1[14];
    if ( v10 >= *((_QWORD *)a1 + 12) || *(_DWORD *)(*((_QWORD *)a1 + 11) + 4 * v10) != a2 )
      return 0;
    a1[14] = v10 + 1;
    return 1;
  }
  v6 = a1[14];
  v7 = a1[14];
  if ( v6 < *((_QWORD *)a1 + 12) && a2 == *(_DWORD *)(*((_QWORD *)a1 + 11) + 4 * v6) )
  {
    a1[14] = v6 + 1;
    if ( v4 == 3 )
      ++a1[15];
  }
  else
  {
    if ( a4 )
      return 0;
    v8 = a1[15];
    if ( v8 >= *((_QWORD *)a1 + 15) || a2 != *(_DWORD *)(*((_QWORD *)a1 + 14) + 4 * v8) )
      return 0;
    a1[15] = v8 + 1;
    if ( v4 == 3 )
    {
      a1[14] = v7 + 1;
    }
    else if ( v4 == 4 )
    {
      a1[14] = a3 + v7;
    }
  }
  return 1;
}
