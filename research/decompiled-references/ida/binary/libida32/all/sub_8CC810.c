unsigned __int64 __fastcall sub_8CC810(__int64 *a1)
{
  size_t v1; // rbx
  const void *v2; // rbp
  __int64 addr; // rax
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // edx
  unsigned int v8; // ebx
  size_t v9; // rax
  char *v10; // rdi
  char *v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rax
  unsigned int v15; // edx
  char v16; // al
  char *v17; // rbp
  unsigned __int64 v18; // r13
  size_t v19; // rax
  unsigned __int64 v20; // rbx
  char *v21; // rsi
  size_t v22; // r15
  size_t v23; // r8
  size_t v24; // r14
  unsigned __int64 v25; // rdx
  __int64 v26; // rdx
  size_t v27; // rdx
  unsigned __int64 v28; // rax
  char *v29; // rsi
  char *v30; // rsi
  unsigned __int64 v31; // rbp
  char *v32; // rsi
  char v33; // [rsp-8h] [rbp-A8h]
  size_t v34; // [rsp+0h] [rbp-A0h]
  char *endptr; // [rsp+10h] [rbp-90h] BYREF
  char *nptr; // [rsp+18h] [rbp-88h] BYREF
  __int128 v37; // [rsp+20h] [rbp-80h]
  char s[40]; // [rsp+38h] [rbp-68h] BYREF
  unsigned __int64 v39; // [rsp+60h] [rbp-40h]

  v1 = a1[1];
  v2 = (const void *)*a1;
  v39 = __readfsqword(0x28u);
  v37 = 0;
  nptr = nullptr;
  if ( !v1 )
  {
    addr = __tls_get_addr();
    v7 = 1103515245 * *(_DWORD *)(addr + 4) + 12345;
    *(_DWORD *)(addr + 4) = v7;
    v8 = v7 % 0x7FFFFFFF;
LABEL_3:
    qsnprintf((int)s, 32, (int)"%u", v8, v5, v6, v33);
    v9 = strlen(s);
    if ( v9 )
      sub_8CC520(a1, s, v9);
    goto LABEL_5;
  }
  v12 = nullptr;
  if ( v1 != -1 )
  {
    nptr = (char *)qvector_reserve(&nptr, 0, v1 + 1, 1);
    v12 = nptr;
  }
  *(_QWORD *)&v37 = v1 + 1;
  memmove(v12, v2, v1);
  nptr[v1] = 0;
  v13 = a1[1];
  v14 = __tls_get_addr();
  v15 = 1103515245 * *(_DWORD *)(v14 + 4) + 12345;
  *(_DWORD *)(v14 + 4) = v15;
  v8 = v15 % 0x7FFFFFFF;
  if ( !v13 )
    goto LABEL_3;
  v16 = *nptr;
  if ( *nptr )
  {
    v17 = nptr;
    while ( (unsigned __int8)(v16 - 48) > 9u )
    {
      v16 = *++v17;
      if ( !v16 )
      {
        v18 = v17 - nptr;
        goto LABEL_16;
      }
    }
    v18 = v17 - nptr;
    v8 ^= strtoul(v17, &endptr, 10);
    if ( (_QWORD)v37 )
    {
      v28 = v37 - 1;
      v29 = (char *)(endptr - v17);
      if ( v18 < (__int64)v37 - 1 )
      {
        if ( v29 )
        {
          v30 = &v29[v18];
          v31 = v18;
          if ( (unsigned __int64)v30 < v28 )
          {
            v31 = v18 + v28 - (_QWORD)v30;
            memmove(&nptr[v18], &v30[(_QWORD)nptr], v28 - (_QWORD)v30);
          }
          v32 = nptr;
          if ( *((_QWORD *)&v37 + 1) < v31 + 1 )
          {
            nptr = (char *)qvector_reserve(&nptr, nptr, v31 + 1, 1);
            v32 = nptr;
          }
          *(_QWORD *)&v37 = v31 + 1;
          v32[v31] = 0;
        }
      }
    }
  }
  else
  {
    v18 = 0;
  }
LABEL_16:
  qsnprintf((int)s, 32, (int)"%u", v8, v5, v6, v33);
  v19 = strlen(s);
  v20 = v37;
  v21 = nptr;
  v22 = v19;
  if ( (_QWORD)v37 )
  {
    v20 = v37 - 1;
    v23 = v19 + v37 - 1;
    v24 = v19 + v37;
    if ( *((_QWORD *)&v37 + 1) >= v19 + (unsigned __int64)v37 )
      goto LABEL_18;
  }
  else
  {
    v24 = v19 + 1;
    if ( *((_QWORD *)&v37 + 1) >= v19 + 1 )
    {
      *(_QWORD *)&v37 = v19 + 1;
      nptr[v19] = 0;
      goto LABEL_20;
    }
    v23 = v19;
  }
  v34 = v23;
  nptr = (char *)qvector_reserve(&nptr, nptr, v24, 1);
  v23 = v34;
  v21 = nptr;
LABEL_18:
  *(_QWORD *)&v37 = v24;
  v21[v23] = 0;
  if ( v18 < v20 )
  {
    v25 = v20;
    v20 = v18;
    memmove(&nptr[v18 + v22], &nptr[v18], v25 - v18);
  }
LABEL_20:
  memmove(&nptr[v20], s, v22);
  v26 = v37;
  v10 = nptr;
  a1[1] = 0;
  if ( v26 )
  {
    v27 = v26 - 1;
    if ( v27 )
    {
      sub_8CC520(a1, v10, v27);
LABEL_5:
      v10 = nptr;
    }
  }
  if ( v10 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v10);
  }
  return v39 - __readfsqword(0x28u);
}

