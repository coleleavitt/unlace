__int64 __fastcall sub_4FC540(__int64 a1, const char **a2, char a3, __int64 *a4, double a5)
{
  char *v5; // rbp
  const char *v8; // r12
  size_t v9; // rax
  size_t v10; // rbp
  void *v11; // rdi
  size_t v12; // r13
  const char *v13; // rdx
  const char *v14; // rsi
  size_t v15; // rax
  size_t v16; // r12
  __int64 *(__fastcall *v17)(double, __int64, __int64 *); // rax
  __int64 v18; // rsi
  char *v19; // r12
  __int64 (*v20)(); // rax
  __int64 v21; // rdx
  void *v22; // rdi
  size_t v23; // r13
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  char s[3]; // [rsp+10h] [rbp-78h] BYREF
  _BYTE v28[69]; // [rsp+13h] [rbp-75h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-30h]

  v5 = (char *)a2;
  v29 = __readfsqword(0x28u);
  if ( a3 > 108 )
  {
    switch ( a3 )
    {
      case 'm':
        sub_169A50(a4, (__int64)"%llX", *a2);
        return 1;
      case 'n':
        if ( (__int64)*a2 < 0 )
          sub_169A50(a4, (__int64)"-0x%a", a5);
        else
LABEL_18:
          sub_169A50(a4, (__int64)"0x%a", a5);
        return 1;
      case 'o':
        v13 = *a2;
        if ( (__int64)*a2 < 0 )
          sub_169A50(a4, (__int64)"-0%llo", -(__int64)v13);
        else
          sub_169A50(a4, (__int64)"0%llo", v13);
        return 1;
      case 'p':
      case 'q':
      case 'y':
        if ( !a2[1] )
          goto LABEL_25;
        v8 = *a2;
        if ( !*a2 )
          goto LABEL_25;
        v9 = strlen(*a2);
        v10 = v9;
        if ( !v9 )
          goto LABEL_25;
        v11 = (void *)*a4;
        v12 = v9 + 1;
        if ( a4[2] < v9 + 1 )
        {
          v26 = qvector_reserve(a4, *a4, v9 + 1, 1);
          *a4 = v26;
          v11 = (void *)v26;
        }
        a4[1] = v12;
        memmove(v11, v8, v10);
        *(_BYTE *)(*a4 + v10) = 0;
        return 1;
      case 's':
        v14 = *a2;
        if ( *(__int64 *)v5 >= 0 )
          goto LABEL_23;
        qmemcpy(s, "-0b", sizeof(s));
        v5 = s;
        num2str_uint32(v28, (unsigned int)-(int)v14, 2, 0);
        goto LABEL_24;
      case 'u':
        sub_169A50(a4, (__int64)"%llu", *a2);
        return 1;
      default:
        return 0;
    }
  }
  if ( a3 <= 83 )
  {
    switch ( a3 )
    {
      case '$':
        if ( *a2 == (const char *)-1LL )
          return 1;
        v17 = *(__int64 *(__fastcall **)(double, __int64, __int64 *))(*(_QWORD *)a1 + 448LL);
        if ( v17 == sub_4FC520 )
          goto LABEL_30;
        ((void (__fastcall *)(__int64, __int64 *))v17)(a1, a4);
        break;
      case 'A':
      case 'F':
        goto LABEL_26;
      case 'D':
        sub_169A50(a4, (__int64)"%lld", *a2);
        return 1;
      case 'H':
        v5 = s;
        format_c_number(s, 32, *a2, (__int64)*a2 >> 63, 8, 259);
        goto LABEL_24;
      case 'L':
        v5 = s;
        v18 = (__int64)*a2;
        v19 = s;
        goto LABEL_36;
      case 'M':
LABEL_30:
        sub_169A50(a4, (__int64)"%a", a5);
        break;
      case 'N':
        goto LABEL_18;
      case 'O':
        sub_169A50(a4, (__int64)"0%llo", *a2);
        return 1;
      default:
        return 0;
    }
    return 1;
  }
  if ( ((1LL << (a3 - 84)) & 0x140011) != 0 )
  {
LABEL_26:
    if ( !a2 )
      goto LABEL_25;
    goto LABEL_24;
  }
  if ( a3 == 89 )
  {
    v14 = *a2;
LABEL_23:
    *(_WORD *)s = 25136;
    v5 = s;
    num2str_uint32(&s[2], v14, 2, 0);
  }
  else
  {
    if ( a3 != 108 )
      return 0;
    v18 = (__int64)*a2;
    if ( v18 >= 0 )
    {
      v5 = s;
      v19 = s;
    }
    else
    {
      s[0] = 45;
      v18 = -v18;
      v19 = &s[1];
      v5 = s;
    }
LABEL_36:
    v20 = *(__int64 (**)())(*(_QWORD *)a1 + 432LL);
    if ( v20 == sub_4F8880 )
      goto LABEL_37;
    v25 = v20();
    v21 = (unsigned int)v25;
    if ( v25 == 8 )
    {
      *v19++ = 48;
      goto LABEL_38;
    }
    if ( v25 <= 8 )
    {
      if ( v25 == 2 )
      {
        v19 += 2;
        *((_WORD *)v19 - 1) = 25136;
        goto LABEL_38;
      }
    }
    else
    {
      if ( v25 == 10 )
      {
LABEL_37:
        v21 = 10;
LABEL_38:
        num2str_uint64(v19, v18, v21, 0);
        goto LABEL_24;
      }
      if ( v25 == 16 )
      {
        v19 += 2;
        *((_WORD *)v19 - 1) = 30768;
        goto LABEL_38;
      }
    }
  }
LABEL_24:
  v15 = strlen(v5);
  v16 = v15;
  if ( v15 )
  {
    v22 = (void *)*a4;
    v23 = v15 + 1;
    if ( a4[2] < v15 + 1 )
    {
      v24 = qvector_reserve(a4, *a4, v15 + 1, 1);
      *a4 = v24;
      v22 = (void *)v24;
    }
    a4[1] = v23;
    memmove(v22, v5, v16);
    *(_BYTE *)(*a4 + v16) = 0;
    return 1;
  }
LABEL_25:
  a4[1] = 0;
  return 1;
}
