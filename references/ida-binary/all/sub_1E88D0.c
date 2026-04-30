__int64 __fastcall sub_1E88D0(__int64 a1, const char *a2, int a3)
{
  const char *v4; // rbp
  int v5; // r12d
  size_t v6; // r12
  const __m128i *v7; // r13
  size_t v8; // rax
  size_t v9; // r12
  const char *v11; // r14
  int v12; // r15d
  void *v13; // rdi
  void *v14; // rdi
  size_t v15; // r14
  __int64 func; // rax
  __int64 regvar; // rax
  const char *v18; // rsi
  char *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  const char *v23; // rax
  int v24; // edx
  const char *v25; // [rsp+0h] [rbp-68h] BYREF
  char v26[4]; // [rsp+8h] [rbp-60h] BYREF
  int v27; // [rsp+Ch] [rbp-5Ch]
  char *s1; // [rsp+10h] [rbp-58h] BYREF
  __int128 v29; // [rsp+18h] [rbp-50h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    goto LABEL_11;
  }
  v4 = a2;
  v5 = a3;
  if ( (a3 & 2) == 0 )
  {
    *(_DWORD *)(a1 + 72) = a3;
    v6 = strlen(a2);
    if ( !v6 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      v7 = nullptr;
      goto LABEL_5;
    }
    v11 = a2;
    v7 = nullptr;
    goto LABEL_17;
  }
  v11 = a2;
  v7 = nullptr;
  v12 = str2reg(a2);
  if ( v12 >= 0
    || (func = get_func(xmmword_8CC810)) != 0
    && (regvar = find_regvar(func, xmmword_8CC810, xmmword_8CC810 + 1, 0, a2), (v7 = (const __m128i *)regvar) != nullptr)
    && (v11 = *(const char **)(regvar + 16), v12 = str2reg(v11), v12 >= 0) )
  {
    if ( !(unsigned __int8)parse_reg_name(v26, v11) )
      goto LABEL_14;
    v18 = (const char *)(unsigned int)v12;
    v29 = 0;
    s1 = nullptr;
    if ( get_reg_name(&s1, (unsigned int)v12, v27, 0xFFFFFFFFLL) >= 0 )
    {
      v19 = (char *)&::s1;
      if ( (_QWORD)v29 )
        v19 = s1;
      v18 = v11;
      if ( strcmp(v19, v11) )
      {
        v5 &= ~2u;
        v11 = v4;
        v7 = nullptr;
        goto LABEL_34;
      }
      get_ph();
      v18 = (const char *)&v25;
      v22 = sub_1E73C0(0x3F0u, &v25, 0, v11);
      if ( v22 )
      {
        if ( v22 == 1 )
        {
          v23 = v25;
          goto LABEL_39;
        }
      }
      else
      {
        v24 = str2reg(v11);
        v23 = v11;
        if ( v24 != -1 )
        {
LABEL_39:
          if ( v23 )
            v11 = v23;
        }
      }
    }
LABEL_34:
    if ( s1 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(s1, v18);
    }
LABEL_14:
    *(_DWORD *)(a1 + 72) = v5;
    v6 = strlen(v4);
    if ( !v6 )
    {
      *(_QWORD *)(a1 + 16) = 0;
LABEL_20:
      if ( !v11 )
        goto LABEL_6;
      v4 = v11;
LABEL_5:
      v8 = strlen(v4);
      v9 = v8;
      if ( v8 )
      {
        v14 = *(void **)(a1 + 32);
        v15 = v8 + 1;
        if ( *(_QWORD *)(a1 + 48) < v8 + 1 )
        {
          v21 = qvector_reserve(a1 + 32, *(_QWORD *)(a1 + 32), v15, 1);
          *(_QWORD *)(a1 + 32) = v21;
          v14 = (void *)v21;
        }
        *(_QWORD *)(a1 + 40) = v15;
        memmove(v14, v4, v9);
        *(_BYTE *)(*(_QWORD *)(a1 + 32) + v9) = 0;
LABEL_7:
        if ( v7 )
        {
          *(__m128i *)(a1 + 56) = _mm_loadu_si128(v7);
          return 1;
        }
LABEL_11:
        *(_OWORD *)(a1 + 56) = 0;
        return 1;
      }
LABEL_6:
      *(_QWORD *)(a1 + 40) = 0;
      goto LABEL_7;
    }
LABEL_17:
    v13 = *(void **)(a1 + 8);
    if ( *(_QWORD *)(a1 + 24) < v6 + 1 )
    {
      v20 = qvector_reserve(a1 + 8, *(_QWORD *)(a1 + 8), v6 + 1, 1);
      *(_QWORD *)(a1 + 8) = v20;
      v13 = (void *)v20;
    }
    *(_QWORD *)(a1 + 16) = v6 + 1;
    memmove(v13, v4, v6);
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + v6) = 0;
    goto LABEL_20;
  }
  return 0;
}
