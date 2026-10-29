__int64 __fastcall sub_18B210(__int64 a1, __int64 a2, char a3, __int64 *a4)
{
  char *v4; // rbp
  const char *v7; // r12
  size_t v8; // rax
  size_t v9; // rbp
  void *v10; // rdi
  size_t v11; // r13
  size_t v12; // rax
  size_t v13; // r12
  __int64 *(__fastcall *v14)(__int64, __int64 *); // rax
  char *v15; // r12
  __int64 (*v16)(); // rax
  void *v17; // rdi
  size_t v18; // r13
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  char s[3]; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-30h]

  v4 = (char *)a2;
  v23 = __readfsqword(0x28u);
  if ( a3 > 108 )
  {
    switch ( a3 )
    {
      case 'm':
      case 'n':
      case 'o':
      case 'u':
LABEL_15:
        sub_94440(a4);
        return 1;
      case 'p':
      case 'q':
      case 'y':
        if ( !*(_QWORD *)(a2 + 8) )
          goto LABEL_20;
        v7 = *(const char **)a2;
        if ( !*(_QWORD *)a2 )
          goto LABEL_20;
        v8 = strlen(*(const char **)a2);
        v9 = v8;
        if ( !v8 )
          goto LABEL_20;
        v10 = (void *)*a4;
        v11 = v8 + 1;
        if ( a4[2] < v8 + 1 )
        {
          v21 = qvector_reserve();
          *a4 = v21;
          v10 = (void *)v21;
        }
        a4[1] = v11;
        memmove(v10, v7, v9);
        *(_BYTE *)(*a4 + v9) = 0;
        return 1;
      case 's':
        if ( *(__int64 *)a2 >= 0 )
          goto LABEL_18;
        qmemcpy(s, "-0b", sizeof(s));
        v4 = s;
        num2str_uint32();
        goto LABEL_19;
      default:
        return 0;
    }
  }
  if ( a3 <= 83 )
  {
    switch ( a3 )
    {
      case '$':
        if ( *(_QWORD *)a2 == -1 )
          return 1;
        v14 = *(__int64 *(__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 240LL);
        if ( v14 == sub_18B1F0 )
          goto LABEL_15;
        v14(a1, a4);
        break;
      case 'A':
      case 'F':
        goto LABEL_21;
      case 'D':
      case 'M':
      case 'N':
      case 'O':
        goto LABEL_15;
      case 'H':
        v4 = s;
        format_c_number();
        goto LABEL_19;
      case 'L':
        v4 = s;
        v15 = s;
        goto LABEL_29;
      default:
        return 0;
    }
    return 1;
  }
  if ( ((1LL << (a3 - 84)) & 0x140011) != 0 )
  {
LABEL_21:
    if ( !a2 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( a3 == 89 )
  {
LABEL_18:
    *(_WORD *)s = 25136;
    v4 = s;
    num2str_uint32();
    goto LABEL_19;
  }
  if ( a3 != 108 )
    return 0;
  if ( *(__int64 *)a2 >= 0 )
  {
    v4 = s;
    v15 = s;
  }
  else
  {
    s[0] = 45;
    v15 = &s[1];
    v4 = s;
  }
LABEL_29:
  v16 = *(__int64 (**)())(*(_QWORD *)a1 + 224LL);
  if ( v16 == sub_184660 )
    goto LABEL_30;
  v20 = v16();
  if ( v20 == 8 )
  {
    *v15 = 48;
    goto LABEL_30;
  }
  if ( v20 <= 8 )
  {
    if ( v20 == 2 )
    {
      *(_WORD *)v15 = 25136;
      goto LABEL_30;
    }
  }
  else
  {
    if ( v20 == 10 )
    {
LABEL_30:
      num2str_uint64();
      goto LABEL_19;
    }
    if ( v20 == 16 )
    {
      *(_WORD *)v15 = 30768;
      goto LABEL_30;
    }
  }
LABEL_19:
  v12 = strlen(v4);
  v13 = v12;
  if ( v12 )
  {
    v17 = (void *)*a4;
    v18 = v12 + 1;
    if ( a4[2] < v12 + 1 )
    {
      v19 = qvector_reserve();
      *a4 = v19;
      v17 = (void *)v19;
    }
    a4[1] = v18;
    memmove(v17, v4, v13);
    *(_BYTE *)(*a4 + v13) = 0;
    return 1;
  }
LABEL_20:
  a4[1] = 0;
  return 1;
}

