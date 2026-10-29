__int64 __fastcall sub_22CC4D0(__int64 a1, _BYTE *a2, __int64 a3, int a4, int a5, __m128d a6)
{
  double v6; // xmm1_8
  char *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // rsi
  __int64 v15; // r12
  int v16; // esi
  __int64 v17; // rdi
  _BOOL4 v18; // eax
  _BYTE *v19; // rax
  char *v20; // rax
  __int64 v21; // r13
  char *v22; // rax
  _BYTE *v23; // rdx
  int v24; // [rsp+Ch] [rbp-2Ch]

  if ( a5 < 0 )
    sub_22CFDA0(
      "../../../../../libstdc++-v3/src/nonshared17/../c++17/floating_to_chars.cc",
      710,
      "std::optional<std::to_chars_result> std::__handle_special_value(char*, char*, T, chars_format, int) [with T = double]",
      "precision >= 0");
  v6 = fabs(a6.m128d_f64[0]);
  if ( v6 > 1.797693134862316e308 )
  {
    v10 = "-inf";
    v11 = 4;
    v12 = 4;
    if ( (_mm_movemask_pd(a6) & 1) == 0 )
    {
      v10 = "inf";
      v11 = 3;
      v12 = 3;
    }
    if ( a3 - (__int64)a2 < v11 )
      goto LABEL_13;
    v13 = 0;
    do
    {
      v14 = v13++;
      a2[v14] = v10[v14];
    }
    while ( v13 < (unsigned int)v12 );
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = &a2[v12];
    *(_BYTE *)(a1 + 16) = 1;
    return a1;
  }
  if ( v6 >= 2.225073858507201e-308 || a6.m128d_f64[0] != 0.0 )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
  v16 = _mm_movemask_pd(a6) & 1;
  v17 = a3 - (_QWORD)a2;
  v18 = v16 != 0;
  LODWORD(v15) = v18 + 1;
  if ( a4 > 2 )
  {
    if ( a4 == 4 )
    {
      if ( !a5 )
      {
        v15 = (unsigned int)(v18 + 4);
        if ( v17 < v15 )
          goto LABEL_13;
LABEL_46:
        if ( !v16 )
          goto LABEL_47;
        goto LABEL_43;
      }
      v15 = (int)v15 + a5 + 4;
      if ( v17 < v15 )
        goto LABEL_13;
      goto LABEL_32;
    }
LABEL_35:
    v15 = (int)v15;
    if ( (int)v15 <= v17 )
    {
      v23 = a2;
      if ( v16 )
      {
        *a2 = 45;
        v23 = a2 + 1;
      }
      *v23 = 48;
      v20 = v23 + 1;
      goto LABEL_27;
    }
    goto LABEL_13;
  }
  if ( a4 <= 0 )
    goto LABEL_35;
  if ( !a5 )
  {
    if ( a4 != 1 )
    {
      v15 = (int)v15;
      if ( (int)v15 <= v17 )
      {
        if ( v16 )
        {
          v19 = a2 + 1;
          *(_WORD *)a2 = 12333;
LABEL_23:
          v20 = v19 + 1;
          goto LABEL_24;
        }
LABEL_47:
        *a2 = 48;
        v19 = a2;
        goto LABEL_23;
      }
LABEL_13:
      *(_QWORD *)a1 = a3;
      *(_DWORD *)(a1 + 8) = 75;
      *(_BYTE *)(a1 + 16) = 1;
      return a1;
    }
    v15 = (unsigned int)(v18 + 5);
    if ( v17 < v15 )
      goto LABEL_13;
    goto LABEL_46;
  }
  LODWORD(v15) = v15 + a5 + 1;
  if ( a4 != 1 )
  {
    v15 = (int)v15;
    if ( v17 < (int)v15 )
      goto LABEL_13;
    if ( v16 )
    {
      v19 = a2 + 1;
      *(_WORD *)a2 = 12333;
      goto LABEL_34;
    }
    goto LABEL_33;
  }
  v15 = (int)v15 + 4;
  if ( v15 > v17 )
    goto LABEL_13;
LABEL_32:
  if ( !v16 )
  {
LABEL_33:
    *a2 = 48;
    v19 = a2;
    goto LABEL_34;
  }
LABEL_43:
  v19 = a2 + 1;
  *(_WORD *)a2 = 12333;
  if ( !a5 )
    goto LABEL_23;
LABEL_34:
  v19[1] = 46;
  v21 = a5;
  v24 = a4;
  v22 = (char *)memset(v19 + 2, 48, a5);
  a4 = v24;
  v20 = &v22[v21];
LABEL_24:
  if ( a4 == 1 )
  {
    *(_DWORD *)v20 = 808463205;
    v20 += 4;
  }
  else if ( a4 == 4 )
  {
    v20[2] = 48;
    v20 += 3;
    *(_WORD *)(v20 - 3) = 11120;
  }
LABEL_27:
  if ( v20 - a2 != v15 )
    sub_22CFDA0(
      "../../../../../libstdc++-v3/src/nonshared17/../c++17/floating_to_chars.cc",
      799,
      "std::optional<std::to_chars_result> std::__handle_special_value(char*, char*, T, chars_format, int) [with T = double]",
      "first - orig_first == expected_output_length");
  *(_QWORD *)a1 = v20;
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 1;
  return a1;
}
