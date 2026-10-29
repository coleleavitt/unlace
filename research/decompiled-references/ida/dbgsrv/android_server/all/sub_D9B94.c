/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D9B94
// Address: 0x00000000000D9B94

//----- (00000000000D9B94) ----------------------------------------------------
void __noreturn sub_D9B94()
{
  _QWORD **globals_fast; // x0
  _QWORD *v1; // x8
  unsigned __int64 v2; // x9
  _QWORD *v3; // x9
  const char **v4; // x20
  char *v5; // x0
  const char *v6; // x19
  const char *v7; // x20
  const char *v8; // x0
  char v9[8]; // [xsp+0h] [xbp-430h] BYREF
  char out[1024]; // [xsp+Ch] [xbp-424h] BYREF
  int status; // [xsp+40Ch] [xbp-24h] BYREF
  _QWORD *v12; // [xsp+418h] [xbp-18h] BYREF

  globals_fast = (_QWORD **)_cxa_get_globals_fast();
  if ( !globals_fast || (v1 = *globals_fast) == nullptr )
    sub_D9A54("terminating");
  v2 = v1[12];
  if ( v2 >> 8 == 0x434C4E47432B2BLL )
  {
    if ( v2 == 0x434C4E47432B2B01LL )
      v3 = (_QWORD *)*v1;
    else
      v3 = v1 + 16;
    v12 = v3;
    v4 = (const char **)v1[1];
    *(_QWORD *)v9 = 1024;
    v5 = _cxa_demangle(v4[1], out, (size_t *)v9, &status);
    if ( status )
      v6 = v4[1];
    else
      v6 = v5;
    if ( ((unsigned __int8)sub_D7EE0(&`typeinfo for'std::exception, v4, &v12) & 1) != 0 )
    {
      v7 = off_1669C0;
      v8 = (const char *)(*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      sub_D9A54("terminating with %s exception of type %s: %s", v7, v6, v8);
    }
    sub_D9A54("terminating with %s exception of type %s", off_1669C0, v6);
  }
  sub_D9A54("terminating with %s foreign exception", off_1669C0);
}
// 161370: using guessed type __int64 *`typeinfo for'std::exception;
// 1669C0: using guessed type char *off_1669C0;
