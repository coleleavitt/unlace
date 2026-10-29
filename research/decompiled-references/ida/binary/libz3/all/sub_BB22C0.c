_DWORD *__fastcall sub_BB22C0(__int64 a1, _DWORD *a2, int **a3)
{
  int *v3; // r12
  int *v4; // r13
  _DWORD *v5; // rbp
  _QWORD *v6; // rax
  int v7; // r15d
  __int64 v8; // rbx

  v3 = *a3;
  if ( !*a3 )
    return a2;
  v4 = &v3[*(v3 - 1)];
  if ( v4 == v3 )
    return a2;
  v5 = a2;
  do
  {
    while ( 1 )
    {
      v7 = *v3;
      v8 = sub_180C100(*(_QWORD *)(a1 + 120), 32);
      *(_QWORD *)v8 = 0x80000000LL;
      *(_DWORD *)(v8 + 24) = v7;
      *(_OWORD *)(v8 + 8) = 0;
      if ( v5 )
        break;
      ++v3;
      v5 = (_DWORD *)v8;
      if ( v4 == v3 )
        return v5;
    }
    if ( (_DWORD *)v8 != v5 )
    {
      v6 = (_QWORD *)sub_180C100(*(_QWORD *)(a1 + 120), 24);
      *v5 = (*v5 + 1) & 0x3FFFFFFF | *v5 & 0xC0000000;
      *(_DWORD *)v8 = (*(_DWORD *)v8 + 1) & 0x3FFFFFFF | *(_DWORD *)v8 & 0xC0000000;
      *v6 = 0;
      v6[2] = v8;
      v6[1] = v5;
      v5 = v6;
    }
    ++v3;
  }
  while ( v4 != v3 );
  return v5;
}

