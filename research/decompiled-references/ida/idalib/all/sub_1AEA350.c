__int64 __fastcall sub_1AEA350(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // rbp
  _QWORD *v8; // r12
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // r13
  void **v14; // r14
  void **v15; // rbp
  __int64 result; // rax

  v2 = *(void **)(a1 + 1544);
  if ( v2 != (void *)(a1 + 1560) )
    free(v2);
  v3 = *(void **)(a1 + 1328);
  if ( v3 != (void *)(a1 + 1344) )
    free(v3);
  operator delete(*(_QWORD *)(a1 + 1304), 16LL * *(unsigned int *)(a1 + 1320), 8);
  operator delete(*(_QWORD *)(a1 + 1280), 8LL * *(unsigned int *)(a1 + 1296), 8);
  v4 = *(void **)(a1 + 1232);
  if ( v4 != (void *)(a1 + 1248) )
    free(v4);
  operator delete(*(_QWORD *)(a1 + 1208), 8LL * *(unsigned int *)(a1 + 1224), 8);
  v5 = *(void **)(a1 + 1160);
  if ( v5 != (void *)(a1 + 1176) )
    free(v5);
  operator delete(*(_QWORD *)(a1 + 1136), 8LL * *(unsigned int *)(a1 + 1152), 8);
  v6 = *(unsigned int *)(a1 + 1048);
  if ( (_DWORD)v6 )
  {
    v7 = *(_QWORD **)(a1 + 1032);
    v8 = &v7[11 * v6];
    do
    {
      if ( *v7 != -8192 && *v7 != -4096 )
      {
        v9 = (_QWORD *)v7[1];
        if ( v9 != v7 + 3 )
          free(v9);
      }
      v7 += 11;
    }
    while ( v8 != v7 );
    v6 = *(unsigned int *)(a1 + 1048);
  }
  operator delete(*(_QWORD *)(a1 + 1032), 88 * v6, 8);
  if ( (*(_BYTE *)(a1 + 728) & 1) == 0 )
    operator delete(*(_QWORD *)(a1 + 736), 24LL * *(unsigned int *)(a1 + 744), 8);
  v10 = *(unsigned int *)(a1 + 720);
  v11 = *(_QWORD *)(a1 + 704);
  v12 = 1184 * v10;
  if ( (_DWORD)v10 )
  {
    v13 = v11 + 1184 * v10;
    do
    {
      if ( *(_QWORD *)v11 != -8192 && *(_QWORD *)v11 != -4096 )
      {
        v14 = *(void ***)(v11 + 8);
        v15 = &v14[18 * *(unsigned int *)(v11 + 16)];
        if ( v14 != v15 )
        {
          do
          {
            while ( 1 )
            {
              v15 -= 18;
              if ( *v15 == v15 + 2 )
                break;
              free(*v15);
              if ( v14 == v15 )
                goto LABEL_26;
            }
          }
          while ( v14 != v15 );
LABEL_26:
          v15 = *(void ***)(v11 + 8);
        }
        if ( v15 != (void **)(v11 + 24) )
          free(v15);
      }
      v11 += 1184;
    }
    while ( v13 != v11 );
    v11 = *(_QWORD *)(a1 + 704);
    v12 = 1184LL * *(unsigned int *)(a1 + 720);
  }
  result = operator delete(v11, v12, 8);
  if ( (*(_BYTE *)(a1 + 568) & 1) == 0 )
    result = operator delete(*(_QWORD *)(a1 + 576), 16LL * *(unsigned int *)(a1 + 584), 8);
  if ( (*(_BYTE *)(a1 + 432) & 1) == 0 )
    result = operator delete(*(_QWORD *)(a1 + 440), 16LL * *(unsigned int *)(a1 + 448), 8);
  if ( (*(_BYTE *)(a1 + 328) & 1) == 0 )
    result = operator delete(*(_QWORD *)(a1 + 336), 24LL * *(unsigned int *)(a1 + 344), 8);
  if ( (*(_BYTE *)a1 & 1) == 0 )
    return operator delete(*(_QWORD *)(a1 + 8), 40LL * *(unsigned int *)(a1 + 16), 8);
  return result;
}
