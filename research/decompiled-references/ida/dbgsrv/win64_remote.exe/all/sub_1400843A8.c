/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400843A8
// Address: 0x00000001400843A8

//----- (00000001400843A8) ----------------------------------------------------
int __fastcall sub_1400843A8(
        __int64 *a1,
        char *a2,
        unsigned __int64 a3,
        char *a4,
        rsize_t a5,
        int a6,
        bool a7,
        unsigned int a8,
        int a9,
        struct __crt_locale_pointers *a10)
{
  __int64 v11; // rcx
  int v13; // eax
  _BOOL8 v14; // r8
  unsigned __int64 v15; // rdx
  int v16; // r14d
  char *v17; // rbx
  int result; // eax
  int v19; // eax
  int v21[6]; // [rsp+40h] [rbp-18h] BYREF

  v11 = *a1;
  *(_OWORD *)v21 = 0;
  v13 = _acrt_fltout(v11, a6, 0, (int)v21, a4, a5);
  v14 = v21[0] == 45;
  v15 = a3 - v14;
  v16 = v21[1] - 1;
  v17 = &a2[v14];
  if ( a3 == -1 )
    v15 = -1;
  result = sub_140089BB0(v17, v15, a6, v21, v13, a9);
  if ( result )
  {
    *a2 = 0;
  }
  else
  {
    v19 = v21[1] - 1;
    if ( v21[1] - 1 < -4 || v19 >= a6 )
    {
      return fp_format_e_internal(a2, a3, a6, a7, a8, (struct _strflt *const)v21, 1, a10);
    }
    else
    {
      if ( v16 < v19 )
      {
        while ( *v17++ )
          ;
        *(v17 - 2) = 0;
      }
      return fp_format_f_internal(a2, a3, a6, (struct _strflt *const)v21, 1, a10);
    }
  }
  return result;
}
