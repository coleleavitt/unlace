__int64 __fastcall sub_24B690(__int64 *a1, unsigned int *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // r12
  int v6; // eax
  const char *v9; // rsi
  __int64 custom_data_format; // rax
  __int64 v11; // rdx
  char *v12; // rdi
  __int64 v13; // rcx
  bool v14; // zf
  __int64 result; // rax
  __m128 v16; // xmm0
  int v17; // eax
  __int64 v18; // rbx
  unsigned int default_radix; // eax
  __int64 v20; // r8
  int v21; // edx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  __int64 v25; // [rsp+8h] [rbp-458h]
  unsigned int v26; // [rsp+8h] [rbp-458h]
  char *v27; // [rsp+10h] [rbp-450h] BYREF
  __int128 v28; // [rsp+18h] [rbp-448h] BYREF
  _BYTE v29[1032]; // [rsp+30h] [rbp-430h] BYREF
  unsigned __int64 v30; // [rsp+438h] [rbp-28h]

  v6 = *a2;
  v30 = __readfsqword(0x28u);
  if ( v6 == -3 )
  {
    sub_169A50(a1, (__int64)"<unavailable>");
    return (a1[1] == 0) + a1[1] - 1;
  }
  if ( (int)a3 >= 0
    && (a3 = (int)a3, (int)a3 < (unsigned __int64)xmmword_8CC398)
    && (a4 = 7LL * (int)a3, a3 = qword_8CC390, (v5 = qword_8CC390 + 8 * a4) != 0) )
  {
    if ( *(_DWORD *)(v5 + 40) != -1 )
    {
      v9 = nullptr;
      v28 = 0;
      v27 = nullptr;
      v27 = (char *)qvector_reserve(&v27, 0, 14, 1);
      *(_QWORD *)&v28 = 14;
      strcpy(v27, "!bad_datafmt!");
      custom_data_format = get_custom_data_format(*(unsigned int *)(v5 + 40));
      if ( custom_data_format || (custom_data_format = get_custom_data_format(*a2)) != 0 )
      {
        *(_QWORD *)&v28 = 0;
        v9 = (const char *)*a2;
        if ( (int)v9 < 0 )
        {
          v12 = (char *)*a1;
          v13 = a1[2];
          v16 = _mm_loadh_ps((const double *)&v28 + 1);
          *a1 = (__int64)v27;
          result = 0;
LABEL_11:
          v27 = v12;
          *((_QWORD *)&v28 + 1) = v13;
          *(__m128 *)(a1 + 1) = v16;
          if ( v12 )
          {
            v25 = result;
            *(_QWORD *)&v28 = 0;
            qfree(v12, v9);
            return v25;
          }
          return result;
        }
        v9 = (const char *)&v27;
        (*(void (__fastcall **)(_QWORD, char **, _QWORD, _QWORD, __int64, _QWORD, _QWORD))(custom_data_format + 64))(
          *(_QWORD *)(custom_data_format + 8),
          &v27,
          *((_QWORD *)a2 + 1),
          *((_QWORD *)a2 + 2),
          -1,
          0,
          0);
      }
      v11 = v28;
      v12 = (char *)*a1;
      v13 = a1[2];
      v14 = (_QWORD)v28 == 0;
      *a1 = (__int64)v27;
      result = v11 - 1;
      v16 = _mm_loadh_ps((const double *)&v28 + 1);
      if ( v14 )
        result = 0;
      goto LABEL_11;
    }
  }
  else
  {
    if ( under_debugger )
      BUG();
    v6 = interr(40046, a2, a3, a4, a5);
  }
  if ( v6 == -2 )
  {
    v17 = *(_DWORD *)(v5 + 44);
    v18 = *((_QWORD *)a2 + 1);
    if ( v17 >= 0 && v17 < *(_DWORD *)(dbg + 64) )
      v18 &= sub_233C80(v5);
    if ( *(_BYTE *)(v5 + 32) == 0xFF )
    {
      default_radix = get_default_radix();
      v20 = default_radix;
      if ( *(_BYTE *)(v5 + 32) == 0xFF )
      {
        v26 = default_radix;
        v24 = sub_233C20(*(_DWORD *)(v5 + 44));
        v20 = v26;
      }
      else
      {
        v21 = *(char *)(v5 + 33);
        v22 = v21 + 6;
        v23 = v21 + 3;
        if ( v23 >= 0 )
          v22 = v23;
        v24 = v22 >> 2;
      }
      b2a64(v29, 1024, v18, (unsigned int)(v24 / 2), v20);
      sub_2296F0(a1, v29);
    }
    else
    {
      sub_169A50(a1, (__int64)"%llX", v18);
    }
  }
  else if ( v6 == -1 && (unsigned __int8)print_fpval(v29, 1024, *((_QWORD *)a2 + 1), a2[4]) )
  {
    sub_2296F0(a1, v29);
  }
  return (a1[1] == 0) + a1[1] - 1;
}
