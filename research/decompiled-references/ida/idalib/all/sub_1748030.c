__int64 __fastcall sub_1748030(__int64 a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // r12
  _QWORD *v4; // rbx
  void *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r12

  if ( (*(_BYTE *)(a1 + 96) & 1) == 0 )
    operator delete(*(_QWORD *)(a1 + 104), 24LL * *(unsigned int *)(a1 + 112), 8);
  operator delete(*(_QWORD *)(a1 + 72), 16LL * *(unsigned int *)(a1 + 88), 8);
  v2 = *(unsigned int *)(a1 + 64);
  if ( (_DWORD)v2 )
  {
    v3 = *(_QWORD **)(a1 + 48);
    v4 = &v3[4 * v2];
    do
    {
      if ( *v3 != -8192 && *v3 != -4096 )
      {
        v5 = (void *)v3[1];
        if ( v5 )
          operator delete(v5);
      }
      v3 += 4;
    }
    while ( v4 != v3 );
    v2 = *(unsigned int *)(a1 + 64);
  }
  operator delete(*(_QWORD *)(a1 + 48), 32 * v2, 8);
  v6 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v6 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v8 = v7 + 656 * v6;
    do
    {
      if ( *(_QWORD *)v7 != -4096 && *(_QWORD *)v7 != -8192 )
      {
        sub_1747E80(v7 + 8);
        if ( (*(_BYTE *)(v7 + 8) & 1) == 0 )
          operator delete(*(_QWORD *)(v7 + 16), 160LL * *(unsigned int *)(v7 + 24), 8);
      }
      v7 += 656;
    }
    while ( v8 != v7 );
    v6 = *(unsigned int *)(a1 + 40);
  }
  return operator delete(*(_QWORD *)(a1 + 24), 656 * v6, 8);
}
