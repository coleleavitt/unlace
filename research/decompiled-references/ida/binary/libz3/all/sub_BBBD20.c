__int64 __fastcall sub_BBBD20(__int64 a1)
{
  unsigned int **v1; // rbx
  unsigned int v2; // r13d
  unsigned int **v3; // r14
  __int64 i; // rax
  unsigned int *v6; // r12
  _DWORD *v7; // rax
  int v8; // edx
  __int64 v9; // rsi
  _DWORD *v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  unsigned int v13; // eax

  v1 = *(unsigned int ***)(a1 + 1048);
  if ( !v1 )
    return 0;
  v2 = 0;
  v3 = &v1[*((unsigned int *)v1 - 1)];
  if ( v3 == v1 )
    return v2;
  do
  {
    for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(a1 + 16) )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(i + 8984) != qword_1C7ED88 )
          return 1;
        if ( !*(_BYTE *)(i + 2416) )
          break;
        if ( ++v1 == v3 )
          return 1;
        v2 = *(unsigned __int8 *)(i + 2416);
      }
      v6 = *v1;
      if ( *((_WORD *)*v1 + 2) )
        break;
      v7 = *(_DWORD **)(*((_QWORD *)v6 + 2) + 24LL);
      if ( !v7 )
        break;
      v8 = *(_DWORD *)(a1 + 1744);
      if ( v8 != *v7 )
        break;
      if ( v7[1] != 42 || v6[6] != 1 )
        goto LABEL_16;
      v11 = *((_QWORD *)v6 + 4);
      if ( !*(_WORD *)(v11 + 4) )
      {
        v12 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
        if ( v12 )
        {
          if ( v8 == *v12 && v12[1] == 43 )
            goto LABEL_30;
        }
      }
      v13 = sub_BBB240(a1, *v1);
      if ( !(_BYTE)v13 )
      {
        v8 = *(_DWORD *)(a1 + 1744);
        if ( *((_WORD *)v6 + 2) )
          break;
        v7 = *(_DWORD **)(*((_QWORD *)v6 + 2) + 24LL);
        if ( !v7 )
          break;
LABEL_30:
        if ( *v7 != v8 )
          break;
LABEL_16:
        if ( v7[1] == 43 && v6[6] == 1 )
        {
          v9 = *((_QWORD *)v6 + 4);
          if ( *(_WORD *)(v9 + 4)
            || (v10 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL)) == nullptr
            || *v10 != v8
            || v10[1] != 42 )
          {
            v2 |= sub_BBB240(a1, (unsigned int *)v9);
          }
        }
        break;
      }
      if ( ++v1 == v3 )
        return 1;
      v2 = v13;
    }
    ++v1;
  }
  while ( v3 != v1 );
  return v2;
}

