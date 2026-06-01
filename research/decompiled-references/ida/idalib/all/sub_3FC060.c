__int64 __fastcall sub_3FC060(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
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
    a1[97] = a2;
    a1[98] = a3;
    a1[99] = a4;
    sub_697EE0(v5);
  }
  else
  {
    a1[99] = 0;
    *(_OWORD *)(a1 + 97) = 0;
    if ( (*(_BYTE *)(v5 + 72) & 1) == 0 )
    {
      ++*((_DWORD *)a1 + 200);
      *((_BYTE *)a1 + 804) = 1;
      sub_681B50(a1);
      v15 = *((_DWORD *)a1 + 200);
      *((_BYTE *)a1 + 804) = 0;
      if ( v15 > 0 )
        *((_DWORD *)a1 + 200) = v15 - 1;
    }
    v13 = a1[115];
    while ( v13 )
    {
      sub_3FBB40(*(_QWORD **)(v13 + 24));
      v14 = (void *)v13;
      v13 = *(_QWORD *)(v13 + 16);
      operator delete(v14, 0x38u);
    }
    a1[115] = 0;
    a1[116] = (__int64)(a1 + 114);
    a1[117] = (__int64)(a1 + 114);
    a1[118] = 0;
    a1[128] = -1;
    sub_4DB040(a1, 0, -1);
    if ( (unsigned __int8)netnode_inited() )
      sub_3FB9D0(a1);
  }
  v6 = (void *)a1[102];
  if ( v6 )
  {
    a1[103] = 0;
    qfree(v6);
    a1[102] = 0;
    a1[104] = 0;
  }
  a1[105] = 0;
  v7 = *a1;
  *((_BYTE *)a1 + 805) = 0;
  sub_359AE0(v7, 0xFFFFFFFFFFFFFFFFLL, 0);
  v8 = a1[109];
  while ( v8 )
  {
    v9 = (_QWORD *)v8;
    sub_3FBD10(*(_QWORD **)(v8 + 24));
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
  a1[109] = 0;
  a1[110] = (__int64)(a1 + 108);
  a1[111] = (__int64)(a1 + 108);
  a1[112] = 0;
  a1[128] = -1;
  sub_359AE0(v11, 0xFFFFFFFFFFFFFFFFLL, 0xFFFFFFFFFFFFFFFELL);
  return reset_undo();
}
