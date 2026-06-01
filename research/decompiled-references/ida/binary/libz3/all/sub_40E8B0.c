__int64 __fastcall sub_40E8B0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rax
  __int64 *v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v10; // rbx
  unsigned int **v11; // rdi
  int v12; // edx
  unsigned int v13; // edx

  v4 = a2[1];
  if ( !v4 )
    goto LABEL_13;
  v5 = (__int64 *)a2[1];
  v6 = v4 + 8LL * *(unsigned int *)(v4 - 4);
  if ( v4 < v6 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = *a2;
          if ( (*(_DWORD *)(v7 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v5 >= v6 )
          goto LABEL_8;
      }
      sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( (unsigned __int64)v5 < v6 );
LABEL_8:
    v4 = a2[1];
    if ( !v4 )
    {
LABEL_13:
      v10 = *(_QWORD *)(a1 + 24);
      if ( v10 )
        ++*(_DWORD *)(v10 + 8);
      v11 = (unsigned int **)(a2 + 1);
      goto LABEL_16;
    }
  }
  v10 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(v4 - 4) = 0;
  v11 = (unsigned int **)(a2 + 1);
  v12 = 0;
  if ( v10 )
  {
    ++*(_DWORD *)(v10 + 8);
    v12 = *(_DWORD *)(v4 - 4);
    v11 = (unsigned int **)(a2 + 1);
  }
  if ( *(_DWORD *)(v4 - 8) == v12 )
  {
LABEL_16:
    sub_23A6F0(v11);
    v4 = a2[1];
  }
  v13 = *(_DWORD *)(v4 - 4);
  *(_QWORD *)(v4 + 8LL * v13) = v10;
  *(_DWORD *)(v4 - 4) = v13 + 1;
  sub_15EE300(a2);
  return sub_3D8440(a2);
}

