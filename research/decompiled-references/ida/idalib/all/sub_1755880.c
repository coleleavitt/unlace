void __fastcall sub_1755880(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void **v9; // r13
  void **v10; // rbx
  void **v11; // r12
  void **v12; // rbx
  void **vars0; // [rsp+0h] [rbp+0h] BYREF
  unsigned int vars8; // [rsp+8h] [rbp+8h]
  char vars10; // [rsp+10h] [rbp+10h] BYREF

  sub_1754C50(&vars0, *(__int64 **)(a1 + 8), (__int64 *)(**(_QWORD **)a1 & 0xFFFFFFFFFFFFFFF8LL), a4, a5, a6);
  sub_1745E10(*(_QWORD *)(a1 + 16), (__int64)&vars0);
  v9 = vars0;
  v10 = &vars0[8 * (unsigned __int64)vars8];
  if ( vars0 != v10 )
  {
    do
    {
      while ( 1 )
      {
        v10 -= 8;
        if ( *v10 == v10 + 2 )
          break;
        free(*v10);
        if ( v9 == v10 )
          goto LABEL_4;
      }
    }
    while ( v9 != v10 );
LABEL_4:
    v10 = vars0;
  }
  if ( v10 != (void **)&vars10 )
    free(v10);
  sub_1754C50(&vars0, *(__int64 **)(a1 + 8), (__int64 *)((**(_QWORD **)a1 & 0xFFFFFFFFFFFFFFF8LL) + 8), v6, v7, v8);
  sub_1745E10(*(_QWORD *)(a1 + 24), (__int64)&vars0);
  v11 = vars0;
  v12 = &vars0[8 * (unsigned __int64)vars8];
  if ( vars0 != v12 )
  {
    do
    {
      while ( 1 )
      {
        v12 -= 8;
        if ( *v12 == v12 + 2 )
          break;
        free(*v12);
        if ( v11 == v12 )
          goto LABEL_10;
      }
    }
    while ( v11 != v12 );
LABEL_10:
    v12 = vars0;
  }
  if ( v12 != (void **)&vars0 )
    free(v12);
}
