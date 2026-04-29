__int64 __fastcall sub_1E1AB0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbp
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  if ( *(_BYTE *)(a2 + 24) )
    return a1;
  v3 = *(_QWORD **)(a2 + 8);
  if ( !v3 )
    return a1;
  if ( !*(_QWORD *)(a2 + 16) )
    return a1;
  v4 = (_QWORD *)v3[1];
  if ( v3 == v4 )
    return a1;
  do
  {
LABEL_6:
    while ( 1 )
    {
      sub_1DFB40(v4[3], *((_BYTE *)v4 + 32), *(_QWORD *)a2, (__int64 *)a1, *((_DWORD *)v4 + 11));
      if ( (*v4 & 2) == 0 )
        break;
LABEL_9:
      if ( *(_QWORD **)(a2 + 8) == v4 )
        return a1;
    }
    v5 = (_QWORD *)v4[2];
    if ( (*(_BYTE *)v5 & 2) == 0 )
    {
      do
      {
        v4 = v5;
        v5 = (_QWORD *)v5[1];
      }
      while ( (*(_BYTE *)v5 & 2) == 0 );
      goto LABEL_9;
    }
    v6 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
    v7 = *v6;
    if ( (*v6 & 2) == 0 )
    {
      while ( (_QWORD *)v6[2] == v4 )
      {
        v4 = v6;
        v8 = v7 & 0xFFFFFFFFFFFFFFFCLL;
        v7 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v7 & 2) != 0 )
        {
          v4 = (_QWORD *)v8;
          if ( *(_QWORD *)(a2 + 8) != v8 )
            goto LABEL_6;
          return a1;
        }
        v6 = (_QWORD *)v8;
      }
    }
    v4 = v6;
  }
  while ( *(_QWORD **)(a2 + 8) != v6 );
  return a1;
}
