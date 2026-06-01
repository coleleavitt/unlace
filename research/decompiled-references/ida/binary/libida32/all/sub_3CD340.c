void __fastcall sub_3CD340(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int *v11; // rbp
  unsigned int *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx

  v8 = *(_QWORD *)(a1 + 1024);
  if ( v8 <= 0xFFFFFFFFFFFFFFFDLL )
  {
    v9 = 0;
  }
  else
  {
    v9 = a1 + 896;
    if ( v8 == -1 )
      v9 = a1 + 944;
  }
  if ( a2 == v9 )
    *(_DWORD *)(a1 + 1016) = -1;
  v10 = *(_QWORD *)(a2 + 16);
  v11 = (unsigned int *)(a2 + 8);
  v12 = (unsigned int *)(a2 + 8);
  if ( v10 )
  {
    v13 = *(_QWORD *)(a2 + 16);
    do
    {
      if ( *(_DWORD *)(v13 + 32) < a4 )
      {
        v13 = *(_QWORD *)(v13 + 24);
      }
      else
      {
        v12 = (unsigned int *)v13;
        v13 = *(_QWORD *)(v13 + 16);
      }
    }
    while ( v13 );
    do
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v10 + 16);
        v15 = *(_QWORD *)(v10 + 24);
        if ( *(_DWORD *)(v10 + 32) >= a3 )
          break;
        v10 = *(_QWORD *)(v10 + 24);
        if ( !v15 )
          goto LABEL_15;
      }
      v11 = (unsigned int *)v10;
      v10 = *(_QWORD *)(v10 + 16);
    }
    while ( v14 );
  }
LABEL_15:
  if ( (unsigned __int8)sub_3C7A50(v11, v12, a5) )
    sub_3CCC70(a2, (__int64)v11, (__int64)v12);
}

