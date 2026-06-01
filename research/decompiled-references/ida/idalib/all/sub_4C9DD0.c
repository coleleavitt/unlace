__int64 __fastcall sub_4C9DD0(__int64 a1, __int64 a2, __int64 a3, const char *a4, char a5)
{
  const char *v6; // rbx
  char v8; // al
  size_t v9; // r13
  const char *v10; // rax
  char v11; // dl
  void *v12; // rsi
  __int128 v13; // kr00_16
  void *v14; // rdi
  __int64 v15; // rax
  size_t v16; // rax
  size_t v17; // rbp
  void *v18; // rdi
  char v19; // dl
  const char *v20; // rax
  const char *v21; // rdx
  const char *v23; // rsi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v25; // [rsp+8h] [rbp-40h]
  unsigned __int64 v26; // [rsp+18h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v6 = a4;
  if ( !a4 )
  {
    if ( a2 )
      goto LABEL_17;
    return (unsigned int)v6;
  }
  if ( a3 != -1 )
    v6 = sub_4C9CA0(a1, a3, a4);
  while ( 1 )
  {
    v8 = *v6;
    if ( *v6 == 106 )
    {
      if ( v6[1] != 95 )
        break;
      v19 = v6[2];
      v20 = v6 + 2;
      if ( v19 != 64 )
      {
LABEL_30:
        if ( v19 != 46 )
          goto LABEL_31;
        goto LABEL_38;
      }
      v21 = v6 + 2;
LABEL_40:
      v20 = v21 + 1;
      v19 = v21[1];
      goto LABEL_30;
    }
    if ( v8 == 64 )
    {
      v21 = v6;
      goto LABEL_40;
    }
    if ( v8 == 46 )
    {
      v20 = v6;
LABEL_38:
      ++v20;
LABEL_31:
      if ( (a5 & 2) != 0 )
        goto LABEL_32;
      goto LABEL_35;
    }
    if ( (a5 & 2) != 0 )
      break;
    v20 = v6;
LABEL_35:
    while ( *v20 == 95 )
      ++v20;
LABEL_32:
    if ( v6 == v20 )
      break;
    v6 = v20;
  }
  v9 = strlen(v6);
  v10 = &v6[v9];
  if ( v6 < &v6[v9] )
  {
    while ( *(v10 - 1) == 95 )
    {
      if ( --v10 == v6 )
      {
        v9 = 0;
        if ( !a2 )
          goto LABEL_42;
LABEL_16:
        ptr = nullptr;
        v25 = 0;
        if ( !v9 )
          goto LABEL_17;
        v17 = v9 + 1;
        if ( v9 == -1 )
        {
          v9 = -1;
          v18 = nullptr;
          goto LABEL_51;
        }
        goto LABEL_27;
      }
    }
    v9 = v10 - v6;
    if ( v6 >= v10 )
      goto LABEL_15;
    while ( 1 )
    {
      v11 = *(v10 - 1);
      if ( (unsigned __int8)(v11 - 48) > 9u )
        break;
      if ( --v10 == v6 )
        goto LABEL_15;
    }
    if ( !*v10 || v6 >= v10 || v11 != 64 && (v11 != 95 || (a5 & 1) != 0) )
    {
LABEL_15:
      if ( !a2 )
        goto LABEL_42;
      goto LABEL_16;
    }
    v16 = v10 - v6;
    v9 = v16 - 1;
    if ( !a2 )
      goto LABEL_42;
    ptr = nullptr;
    v17 = v16;
    v25 = 0;
    if ( v16 == 1 )
      goto LABEL_17;
LABEL_27:
    ptr = (void *)qvector_reserve(&ptr, 0, v17, 1);
    v18 = ptr;
LABEL_51:
    v23 = v6;
    *(_QWORD *)&v25 = v17;
    LODWORD(v6) = 1;
    memmove(v18, v23, v9);
    *((_BYTE *)ptr + v9) = 0;
    v12 = ptr;
    v13 = v25;
    goto LABEL_18;
  }
  if ( a2 )
  {
    ptr = nullptr;
    v17 = v9 + 1;
    v25 = 0;
    if ( v9 )
      goto LABEL_27;
LABEL_17:
    LODWORD(v6) = 0;
    v12 = nullptr;
    v13 = 0u;
LABEL_18:
    v14 = *(void **)a2;
    v15 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = v12;
    *(_OWORD *)(a2 + 8) = v13;
    ptr = v14;
    *((_QWORD *)&v25 + 1) = v15;
    if ( v14 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v14);
    }
  }
  else
  {
LABEL_42:
    LOBYTE(v6) = v9 != 0;
  }
  return (unsigned int)v6;
}
