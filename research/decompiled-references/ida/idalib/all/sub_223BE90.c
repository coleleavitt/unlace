void __fastcall sub_223BE90(
        __int64 *a1,
        _QWORD *a2,
        char *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const __m128i *a9,
        __int64 a10)
{
  unsigned __int8 v10; // bl
  char *v11; // r12
  char *v12; // rbx
  char *v13; // rdi
  _BYTE _0[16]; // [rsp+0h] [rbp+0h] BYREF
  void *vars10; // [rsp+10h] [rbp+10h]
  void *vars40; // [rsp+40h] [rbp+40h]
  char vars50; // [rsp+50h] [rbp+50h] BYREF
  void *vars60; // [rsp+60h] [rbp+60h]
  char vars70; // [rsp+70h] [rbp+70h] BYREF
  void *vars80; // [rsp+80h] [rbp+80h]
  char *vars98; // [rsp+98h] [rbp+98h]
  unsigned int varsA0; // [rsp+A0h] [rbp+A0h]
  char varsA8; // [rsp+A8h] [rbp+A8h] BYREF

  v10 = a6;
  sub_223B7D0((__int64)_0, (__int64)a1, a3, a4, a5, a6, a7, a8, a9, a10);
  sub_223BDD0(a1, a2, (__int64)_0, v10);
  v11 = vars98;
  v12 = &vars98[48 * varsA0];
  if ( vars98 != v12 )
  {
    do
    {
      while ( 1 )
      {
        v12 -= 48;
        v13 = *((char **)v12 + 2);
        if ( v13 == v12 + 32 )
          break;
        operator delete(v13);
        if ( v11 == v12 )
          goto LABEL_4;
      }
    }
    while ( v11 != v12 );
LABEL_4:
    v12 = vars98;
  }
  if ( v12 != &varsA8 )
    free(v12);
  if ( vars80 )
    operator delete(vars80);
  if ( vars60 != &vars70 )
    operator delete(vars60);
  if ( vars40 != &vars50 )
    operator delete(vars40);
  if ( vars10 != _0 )
    operator delete(vars10);
}
