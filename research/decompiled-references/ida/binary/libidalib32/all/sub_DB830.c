__int64 __fastcall sub_DB830(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // r12
  int v4; // eax
  __int64 custom_data_format; // rax
  __int64 v7; // rdx
  char *v8; // rdi
  __int64 v9; // rcx
  bool v10; // zf
  __int64 result; // rax
  __m128 v12; // xmm0
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  int i; // ecx
  __int64 v17; // rsi
  __int64 v18; // [rsp+8h] [rbp-458h]
  char *v19; // [rsp+10h] [rbp-450h] BYREF
  __int128 v20; // [rsp+18h] [rbp-448h] BYREF
  _BYTE v21[1032]; // [rsp+30h] [rbp-430h] BYREF
  unsigned __int64 v22; // [rsp+438h] [rbp-28h]

  v4 = *(_DWORD *)a2;
  v22 = __readfsqword(0x28u);
  if ( v4 == -3 )
  {
    sub_94360(a1);
    return (a1[1] == 0) + a1[1] - 1;
  }
  if ( a3 >= 0 && a3 < (unsigned __int64)xmmword_251378 && (v3 = qword_251370 + 56LL * a3) != 0 )
  {
    if ( *(_DWORD *)(v3 + 40) != -1 )
    {
      v20 = 0;
      v19 = (char *)qvector_reserve();
      *(_QWORD *)&v20 = 14;
      strcpy(v19, "!bad_datafmt!");
      custom_data_format = get_custom_data_format();
      if ( custom_data_format || (custom_data_format = get_custom_data_format()) != 0 )
      {
        *(_QWORD *)&v20 = 0;
        if ( *(int *)a2 < 0 )
        {
          v8 = (char *)*a1;
          v9 = a1[2];
          v12 = _mm_loadh_ps((const double *)&v20 + 1);
          *a1 = (__int64)v19;
          result = 0;
LABEL_11:
          v19 = v8;
          *((_QWORD *)&v20 + 1) = v9;
          *(__m128 *)(a1 + 1) = v12;
          if ( v8 )
          {
            v18 = result;
            *(_QWORD *)&v20 = 0;
            qfree();
            return v18;
          }
          return result;
        }
        (*(void (__fastcall **)(_QWORD, char **, _QWORD, _QWORD, __int64, _QWORD, _QWORD))(custom_data_format + 56))(
          *(_QWORD *)(custom_data_format + 8),
          &v19,
          *(_QWORD *)(a2 + 8),
          *(unsigned int *)(a2 + 16),
          0xFFFFFFFFLL,
          0,
          0);
      }
      v7 = v20;
      v8 = (char *)*a1;
      v9 = a1[2];
      v10 = (_QWORD)v20 == 0;
      *a1 = (__int64)v19;
      result = v7 - 1;
      v12 = _mm_loadh_ps((const double *)&v20 + 1);
      if ( v10 )
        result = 0;
      goto LABEL_11;
    }
  }
  else
  {
    if ( under_debugger )
      BUG();
    v4 = interr();
  }
  if ( v4 == -2 )
  {
    v13 = *(_DWORD *)(v3 + 44);
    if ( v13 >= 0 && v13 < *(_DWORD *)(dbg + 64LL) )
    {
      v14 = sub_C5EC0(v3);
      if ( v14 > 0 )
      {
        v15 = 0;
        for ( i = 0; i != v14; ++i )
        {
          v17 = 1LL << i;
          v15 |= v17;
        }
      }
    }
    if ( *(_BYTE *)(v3 + 32) == 0xFF )
    {
      get_default_radix();
      if ( *(_BYTE *)(v3 + 32) == 0xFF )
        sub_C3500(*(_DWORD *)(v3 + 44));
      b2a64();
      sub_BAC20((__int64)a1, v21);
    }
    else
    {
      sub_94360(a1);
    }
  }
  else if ( v4 == -1 && (unsigned __int8)print_fpval() )
  {
    sub_BAC20((__int64)a1, v21);
  }
  return (a1[1] == 0) + a1[1] - 1;
}

