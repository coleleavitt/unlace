__int64 __fastcall sub_F7D5E0(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rsi
  _QWORD *v4; // r12
  _QWORD *v5; // rbp
  void *v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // rbp
  _QWORD *v9; // r12
  _QWORD *v10; // rdi

  v2 = 16LL * *(unsigned int *)(a1 + 128);
  *(_QWORD *)a1 = &off_2B4C340;
  operator delete(*(_QWORD *)(a1 + 112), v2, 8);
  operator delete(*(_QWORD *)(a1 + 88), 24LL * *(unsigned int *)(a1 + 104), 8);
  v3 = *(unsigned int *)(a1 + 80);
  if ( (_DWORD)v3 )
  {
    v4 = *(_QWORD **)(a1 + 64);
    v5 = &v4[2 * v3];
    do
    {
      if ( *v4 != -8192 && *v4 != -4096 )
      {
        v6 = (void *)v4[1];
        if ( v6 )
        {
          sub_F7D1D0(v4[1]);
          operator delete(v6, 0x68u);
        }
      }
      v4 += 2;
    }
    while ( v5 != v4 );
    v3 = *(unsigned int *)(a1 + 80);
  }
  operator delete(*(_QWORD *)(a1 + 64), 16 * v3, 8);
  operator delete(*(_QWORD *)(a1 + 40), 24LL * *(unsigned int *)(a1 + 56), 8);
  *(_QWORD *)a1 = &unk_2C05168;
  v7 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v7 )
  {
    v8 = *(_QWORD **)(a1 + 8);
    v9 = &v8[10 * v7];
    do
    {
      if ( *v8 != -4096 && *v8 != -8192 )
      {
        v10 = (_QWORD *)v8[1];
        if ( v10 != v8 + 3 )
          free(v10);
      }
      v8 += 10;
    }
    while ( v9 != v8 );
    v7 = *(unsigned int *)(a1 + 24);
  }
  return operator delete(*(_QWORD *)(a1 + 8), 80 * v7, 8);
}
