__int64 __fastcall sub_30DB0(__int64 a1, __int64 **a2, char **a3)
{
  __int64 (__fastcall *v5)(__int64, __int64 *); // rax
  const char **v6; // rax
  const char *v7; // r13
  size_t v8; // rax
  size_t v9; // r12
  unsigned int v10; // ebx
  __int64 v12; // rdi
  char *v13; // rdi
  char *v14; // rax
  int v15; // edx
  bool v16; // zf
  char v17; // al
  char *v18; // r12
  char *v19; // rax
  char *v20; // rbp
  char v21; // al
  char v22; // al
  void *v23; // rdi
  char *v24; // r14
  __int64 v25; // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64 *))(*a2)[18];
  if ( v5 == sub_2D280 )
  {
    v6 = (const char **)sub_2CEC0(a2[2], 0x10000000, 0x10000000u, 0x10000000);
    if ( v6 )
    {
      v7 = *v6;
      if ( !*v6 || (v8 = strlen(*v6), (v9 = v8) == 0) )
      {
        a3[1] = nullptr;
        return 1;
      }
      v23 = *a3;
      v24 = (char *)(v8 + 1);
      if ( (unsigned __int64)a3[2] < v8 + 1 )
      {
        v25 = qvector_reserve(a3, *a3, v8 + 1, 1);
        *a3 = (char *)v25;
        v23 = (void *)v25;
      }
      a3[1] = v24;
      memmove(v23, v7, v9);
      (*a3)[v9] = 0;
    }
  }
  else
  {
    v5((__int64)a2, (__int64 *)a3);
  }
  if ( (unsigned __int64)a3[1] <= 1 )
    return 1;
  v12 = a1;
  v10 = 0;
  sub_30CA0(v12, a3);
  v13 = *a3;
LABEL_11:
  while ( 1 )
  {
    v14 = strstr(v13, "<unnamed");
    if ( !v14 )
      break;
    while ( 1 )
    {
      v16 = *a3 == v14;
      v13 = v14 + 8;
      v17 = v14[8];
      LOBYTE(v15) = v16;
      v10 |= v15;
      if ( !v17 )
        break;
      while ( v17 != 62 )
      {
        if ( v17 == 45 )
          *v13 = 95;
        v17 = *++v13;
        if ( !v17 )
          goto LABEL_11;
      }
      v14 = strstr(v13 + 1, "<unnamed");
      if ( !v14 )
        goto LABEL_19;
    }
  }
LABEL_19:
  if ( (_BYTE)v10 )
    return 1;
  v18 = *a3;
  v19 = strstr(*a3, "__unnamed");
  v20 = v19;
  if ( v19 )
  {
    if ( v18 == v19 || (v21 = *(v19 - 1), v21 != 95) && ((unsigned int)v21 > 0x7F || !isalnum(v21)) )
    {
      v22 = v20[9];
      if ( v22 != 95 )
      {
        if ( (unsigned int)v22 <= 0x7F )
        {
          LOBYTE(v10) = isalnum(v22) == 0;
          return v10;
        }
        return 1;
      }
    }
  }
  return v10;
}
