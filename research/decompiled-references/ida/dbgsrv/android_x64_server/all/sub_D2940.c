/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D2940
// Address: 0x00000000000D2940

//----- (00000000000D2940) ----------------------------------------------------
void __noreturn sub_D2940()
{
  _QWORD **globals_fast; // rax
  _QWORD *v1; // rax
  _QWORD *v2; // rcx
  const char **v3; // rbx
  char *v4; // rax
  const char *v5; // r14
  const char *v6; // rbx
  const char *v7; // rax
  int status; // [rsp+Ch] [rbp-42Ch] BYREF
  _QWORD *v9; // [rsp+10h] [rbp-428h] BYREF
  size_t outlen; // [rsp+18h] [rbp-420h] BYREF
  char out[1048]; // [rsp+20h] [rbp-418h] BYREF

  globals_fast = (_QWORD **)_cxa_get_globals_fast();
  if ( !globals_fast || (v1 = *globals_fast) == nullptr )
    sub_D27E0("terminating");
  if ( v1[12] >> 8 == 0x434C4E47432B2BLL )
  {
    if ( v1[12] == 0x434C4E47432B2B01LL )
      v2 = (_QWORD *)*v1;
    else
      v2 = v1 + 16;
    v9 = v2;
    v3 = (const char **)v1[1];
    outlen = 1024;
    v4 = _cxa_demangle(v3[1], out, &outlen, &status);
    if ( status )
      v5 = v3[1];
    else
      v5 = v4;
    if ( (unsigned __int8)sub_D0F10(&`typeinfo for'std::exception, v3, &v9) )
    {
      v6 = *(const char **)off_1556E0;
      v7 = (const char *)(*(__int64 (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      sub_D27E0("terminating with %s exception of type %s: %s", v6, v5, v7);
    }
    sub_D27E0("terminating with %s exception of type %s", *(const char **)off_1556E0, v5);
  }
  sub_D27E0("terminating with %s foreign exception", *(const char **)off_1556E0);
}
// D2940: using guessed type void __noreturn sub_D2940();
// 1514F0: using guessed type void (__fastcall *`typeinfo for'std::exception)(std::type_info *__hidden this);
