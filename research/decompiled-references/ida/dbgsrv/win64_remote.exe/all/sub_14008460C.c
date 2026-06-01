/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14008460C
// Address: 0x000000014008460C

//----- (000000014008460C) ----------------------------------------------------
int __fastcall sub_14008460C(
        __int64 *a1,
        char *a2,
        unsigned __int64 a3,
        char *a4,
        rsize_t SizeInBytes,
        int a6,
        int a7,
        unsigned __int64 a8,
        struct __crt_locale_pointers *a9,
        int a10)
{
  rsize_t v10; // rdi
  char *v11; // rbx
  int result; // eax
  bool v13; // r11
  __int64 v14; // rdx
  int v15; // r8d
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r10
  unsigned int v19; // edx
  int v20; // esi
  __int64 v21; // rcx
  int v22; // eax
  _BOOL8 v23; // r9
  unsigned __int64 v24; // rdx
  int v25[4]; // [rsp+50h] [rbp-18h] BYREF

  v10 = a3;
  v11 = a2;
  if ( !a2 || !a3 || !a4 || !SizeInBytes )
  {
    *errno() = 22;
    invalid_parameter_noinfo();
    return 22;
  }
  v13 = a6 == 65 || (unsigned int)(a6 - 69) <= 2;
  if ( (a8 & 8) == 0 )
  {
    v14 = *a1;
    if ( (((unsigned __int64)*a1 >> 52) & 0x7FF) == 0x7FF )
    {
      v15 = 12;
      if ( (v14 & 0xFFFFFFFFFFFFFLL) != 0 )
      {
        if ( v14 < 0 && (v14 & 0xFFFFFFFFFFFFFLL) == 0x8000000000000LL )
          v16 = 12;
        else
          v16 = (-(__int64)((v14 & 0x8000000000000LL) != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 8;
      }
      else
      {
        v16 = 0;
      }
      v17 = (unsigned __int64)v14 >> 63;
      if ( v10 >= v17 + 4 )
      {
        v18 = -1;
        if ( (_BYTE)v17 )
        {
          *v11++ = 45;
          *v11 = 0;
          if ( v10 != -1 )
            --v10;
        }
        do
          ++v18;
        while ( (*(&off_1400B2260[2 * !v13])[v16])[v18] );
        if ( strcpy_s(v11, v10, (const char *)(&(&off_1400B2260[2 * !v13])[v16])[v10 <= v18]) )
          invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        return 0;
      }
      else
      {
        *v11 = 0;
      }
      return v15;
    }
  }
  v19 = (a8 >> 4) & 1 | 2;
  v20 = (a8 & 0x20) != 0 ? a10 : 0;
  switch ( a6 )
  {
    case 'A':
      return fp_format_a(a1, v11, a3, a4, SizeInBytes, a7, v13, v19, a9, v20);
    case 'E':
      return sub_140083F80(a1, v11, a3, a4, SizeInBytes, a7, v13, v19, a9, v20);
    case 'F':
      goto LABEL_35;
    case 'G':
      return sub_1400843A8(a1, v11, a3, a4, SizeInBytes, a7, v13, v19, v20, a9);
    case 'a':
      return fp_format_a(a1, v11, a3, a4, SizeInBytes, a7, v13, v19, a9, v20);
    case 'e':
      return sub_140083F80(a1, v11, a3, a4, SizeInBytes, a7, v13, v19, a9, v20);
  }
  if ( a6 != 102 )
    return sub_1400843A8(a1, v11, a3, a4, SizeInBytes, a7, v13, v19, v20, a9);
LABEL_35:
  v21 = *a1;
  *(_OWORD *)v25 = 0;
  v22 = _acrt_fltout(v21, a7, 0, (int)v25, a4, SizeInBytes);
  v23 = v25[0] == 45;
  v24 = v10 - v23;
  if ( v10 == -1 )
    v24 = -1;
  result = sub_140089BB0(&v11[v23], v24, a7 + v25[1], v25, v22, v20);
  if ( !result )
    return fp_format_f_internal(v11, v10, a7, (struct _strflt *const)v25, 0, a9);
  *v11 = 0;
  return result;
}
// 140083C00: using guessed type __int64 __fastcall fp_format_a(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD, _DWORD);
// 1400B2260: using guessed type char (*off_1400B2260[2])[4];
