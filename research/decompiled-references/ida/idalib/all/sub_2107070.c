void __fastcall sub_2107070(_QWORD *a1, int a2, __int64 a3, int a4, __int64 a5, int a6)
{
  void *v7; // rdi
  void *v8; // rax
  __int64 v9; // rax
  char *v10; // r12
  char *v11; // rbx
  char *v12; // rdi
  _QWORD vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  void *vars10[5]; // [rsp+10h] [rbp+10h] BYREF
  int vars38; // [rsp+38h] [rbp+38h]
  void *vars40; // [rsp+40h] [rbp+40h] BYREF
  char vars50; // [rsp+50h] [rbp+50h] BYREF
  void *vars60; // [rsp+60h] [rbp+60h] BYREF
  char vars70; // [rsp+70h] [rbp+70h] BYREF
  void *vars80[2]; // [rsp+80h] [rbp+80h]
  __int64 vars90; // [rsp+90h] [rbp+90h]
  char *vars98; // [rsp+98h] [rbp+98h] BYREF
  unsigned int varsA0; // [rsp+A0h] [rbp+A0h]
  char varsA8; // [rsp+A8h] [rbp+A8h] BYREF

  sub_223B7D0((unsigned int)vars0, a4, *a1, 0, a2, a6, 0, 0, 0, 0);
  *(_QWORD *)a3 = vars0[0];
  *(_QWORD *)(a3 + 8) = vars0[1];
  sub_A0AAD0(a3 + 16, vars10);
  *(void **)(a3 + 48) = vars10[4];
  *(_DWORD *)(a3 + 56) = vars38;
  sub_A0AAD0(a3 + 64, &vars40);
  sub_A0AAD0(a3 + 96, &vars60);
  v7 = *(void **)(a3 + 128);
  *(void **)(a3 + 128) = vars80[0];
  v8 = vars80[1];
  *(_OWORD *)vars80 = 0;
  *(_QWORD *)(a3 + 136) = v8;
  v9 = vars90;
  vars90 = 0;
  *(_QWORD *)(a3 + 144) = v9;
  if ( v7 )
    operator delete(v7);
  sub_201A980(a3 + 152, (__int64)&vars98);
  v10 = vars98;
  v11 = &vars98[48 * varsA0];
  if ( vars98 != v11 )
  {
    do
    {
      while ( 1 )
      {
        v11 -= 48;
        v12 = *((char **)v11 + 2);
        if ( v12 == v11 + 32 )
          break;
        operator delete(v12);
        if ( v10 == v11 )
          goto LABEL_6;
      }
    }
    while ( v10 != v11 );
LABEL_6:
    v11 = vars98;
  }
  if ( v11 != &varsA8 )
    free(v11);
  if ( vars80[0] )
    operator delete(vars80[0]);
  if ( vars60 != &vars70 )
    operator delete(vars60);
  if ( vars40 != &vars50 )
    operator delete(vars40);
  if ( vars10[0] != vars0 )
    operator delete(vars10[0]);
}
