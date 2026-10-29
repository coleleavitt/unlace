/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140083F80
// Address: 0x0000000140083F80

//----- (0000000140083F80) ----------------------------------------------------
int __fastcall sub_140083F80(
        _QWORD *a1,
        char *a2,
        unsigned __int64 a3,
        char *a4,
        rsize_t a5,
        int a6,
        bool a7,
        unsigned int a8,
        struct __crt_locale_pointers *a9,
        int a10)
{
  int v12; // eax
  _BOOL8 v13; // r9
  _BOOL8 v14; // rcx
  unsigned __int64 v15; // rdx
  int result; // eax
  int v17[6]; // [rsp+40h] [rbp-18h] BYREF

  v12 = _acrt_fltout(*a1, a6 + 1, 1, (int)v17, a4, a5);
  v13 = v17[0] == 45;
  v14 = a6 > 0;
  v15 = a3 - v14 - v13;
  if ( a3 == -1 )
    v15 = -1;
  result = sub_140089BB0(&a2[v13 + v14], v15, a6 + 1, v17, v12, a10);
  if ( !result )
    return fp_format_e_internal(a2, a3, a6, a7, a8, (struct _strflt *const)v17, 0, a9);
  *a2 = 0;
  return result;
}
