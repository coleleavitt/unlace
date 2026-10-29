__int64 __fastcall sub_3E9120(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  void *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rbp
  _QWORD *v9; // r12
  void *v10; // rdi
  __int64 v11; // rdi
  __int64 v13; // rbp
  void *v14; // rdi
  int v15; // eax

  v5 = *a1;
  if ( a2 )
  {
    a1[96] = a2;
    a1[97] = a3;
    a1[98] = a4;
    sub_6780E0(v5);
  }
  else
  {
    a1[98] = 0;
    *((_OWORD *)a1 + 48) = 0;
    if ( (*(_BYTE *)(v5 + 72) & 1) == 0 )
    {
      ++*((_DWORD *)a1 + 198);
      *((_BYTE *)a1 + 796) = 1;
      sub_6633D0(a1);
      v15 = *((_DWORD *)a1 + 198);
      *((_BYTE *)a1 + 796) = 0;
      if ( v15 > 0 )
        *((_DWORD *)a1 + 198) = v15 - 1;
    }
    v13 = a1[114];
    while ( v13 )
    {
      sub_3E8C00(*(_QWORD **)(v13 + 24));
      v14 = (void *)v13;
      v13 = *(_QWORD *)(v13 + 16);
      operator delete(v14, 0x30u);
    }
    a1[114] = 0;
    a1[115] = (__int64)(a1 + 113);
    a1[116] = (__int64)(a1 + 113);
    a1[117] = 0;
    *((_DWORD *)a1 + 254) = -1;
    sub_4C3F00(a1, 0, 0xFFFFFFFFLL);
    if ( (unsigned __int8)netnode_inited() )
      sub_3E8A70(a1);
  }
  v6 = (void *)a1[101];
  if ( v6 )
  {
    a1[102] = 0;
    qfree(v6);
    a1[101] = 0;
    a1[103] = 0;
  }
  a1[104] = 0;
  v7 = *a1;
  *((_BYTE *)a1 + 797) = 0;
  sub_356720(v7, 0xFFFFFFFF, 0);
  v8 = a1[108];
  while ( v8 )
  {
    v9 = (_QWORD *)v8;
    sub_3E8DD0(*(_QWORD **)(v8 + 24));
    v10 = *(void **)(v8 + 40);
    v8 = *(_QWORD *)(v8 + 16);
    if ( v10 )
    {
      v9[6] = 0;
      qfree(v10);
    }
    operator delete(v9, 0x48u);
  }
  v11 = *a1;
  a1[108] = 0;
  a1[109] = (__int64)(a1 + 107);
  a1[110] = (__int64)(a1 + 107);
  a1[111] = 0;
  *((_DWORD *)a1 + 254) = -1;
  sub_356720(v11, 0xFFFFFFFF, 0xFFFFFFFE);
  return reset_undo();
}

