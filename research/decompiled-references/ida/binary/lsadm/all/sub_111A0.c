__int64 __fastcall sub_111A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  const char *v4; // rdx
  __int64 *v5; // rbx
  const char *v6; // rdx
  size_t v7; // r13
  const char *v8; // r14
  char *v9; // rax
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  const char *v12; // r14
  size_t v13; // r13
  const char *v14; // rdx
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // r12
  __int64 v18; // r13
  time_t v19; // rsi
  void *v20; // rdi
  void *v22; // rdi
  __int64 v23; // r13
  void *v24; // rsi
  void *v25; // rax
  const void *v26; // rsi
  __int64 v27; // rax
  __int64 v29; // [rsp+10h] [rbp-88h]
  __int64 v30; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int128 v32; // [rsp+28h] [rbp-70h]
  void *v33; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-50h]
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v3 = sub_29E10(24);
  v4 = s1;
  *(_QWORD *)v3 = 0;
  v5 = (__int64 *)v3;
  *(_OWORD *)(v3 + 8) = 0;
  if ( *(_QWORD *)(a2 + 8) )
    v4 = *(const char **)a2;
  sub_10E50((__int64 *)v3, "user", v4);
  v6 = s1;
  if ( *(_QWORD *)(a2 + 32) )
    v6 = *(const char **)(a2 + 24);
  sub_10E50(v5, "machine_id", v6);
  v7 = *(_QWORD *)(a2 + 56);
  if ( !v7 )
  {
    ptr = nullptr;
    v32 = 0;
    goto LABEL_11;
  }
  v8 = *(const char **)(a2 + 48);
  v9 = strstr(v8, "::ffff:");
  if ( v8 == v9 && v9 )
  {
    v10 = v7 - 1;
    v11 = 7;
    ptr = nullptr;
    v32 = 0;
    if ( v10 <= 7 )
      v11 = v10;
    v12 = &v8[v11];
    v13 = v10 - v11;
    if ( v13 )
    {
      v22 = nullptr;
      if ( v13 != -1 )
      {
        ptr = (void *)sub_29E60(&ptr, 0, v13 + 1, 1);
        v22 = ptr;
      }
      *(_QWORD *)&v32 = v13 + 1;
      memmove(v22, v12, v13);
      *((_BYTE *)ptr + v13) = 0;
      if ( (_QWORD)v32 )
        goto LABEL_32;
    }
LABEL_11:
    v14 = s1;
    goto LABEL_12;
  }
  ptr = nullptr;
  v32 = 0;
  v25 = (void *)sub_29E10(v7);
  v26 = *(const void **)(a2 + 48);
  *((_QWORD *)&v32 + 1) = v7;
  ptr = v25;
  memcpy(v25, v26, v7);
  *(_QWORD *)&v32 = v7;
LABEL_32:
  v14 = (const char *)ptr;
LABEL_12:
  sub_10E50(v5, "peer_address", v14);
  v15 = v5[1];
  v29 = *(_QWORD *)(a2 + 80);
  v30 = *v5;
  if ( v15 )
  {
    v16 = *v5;
    v17 = 0;
    while ( !*(_QWORD *)(v16 + 8) || strcmp(*(const char **)v16, "used_seats") )
    {
      ++v17;
      v16 += 40;
      if ( v15 == v17 )
        goto LABEL_33;
    }
    v18 = v16 + 24;
  }
  else
  {
LABEL_33:
    if ( v5[2] < (unsigned __int64)(v15 + 1) )
    {
      v30 = sub_29E60(v5, v30, v15 + 1, 40);
      v15 = v5[1];
      *v5 = v30;
    }
    v23 = v30 + 40 * v15;
    *(_QWORD *)v23 = 0;
    *(_OWORD *)(v23 + 8) = 0;
    *(_DWORD *)(v23 + 24) = 0;
    *(_QWORD *)(v23 + 32) = 0;
    ++v5[1];
    v24 = *(void **)v23;
    if ( *(_QWORD *)(v23 + 16) <= 0xAu )
    {
      v27 = sub_29E60(v23, v24, 11, 1);
      *(_QWORD *)v23 = v27;
      v24 = (void *)v27;
    }
    *(_QWORD *)(v23 + 8) = 11;
    v18 = v23 + 24;
    qmemcpy(v24, "used_seats", 10);
    *(_BYTE *)(*(_QWORD *)(v18 - 24) + 10LL) = 0;
  }
  if ( *(_DWORD *)v18 )
    sub_218D0(v18);
  *(_DWORD *)v18 = 1;
  *(_QWORD *)(v18 + 8) = v29;
  v19 = *(_QWORD *)(a2 + 72);
  if ( (unsigned __int64)(v19 + 1) > 1 )
  {
    sub_11050((__int64)&v33, v19);
    if ( v34 > 1 )
      sub_10E50(v5, "borrowed_until", (const char *)v33);
    if ( v33 )
    {
      v34 = 0;
      j__free(v33);
    }
  }
  v20 = ptr;
  *(_DWORD *)a1 = 3;
  *(_QWORD *)(a1 + 8) = v5;
  if ( v20 )
  {
    *(_QWORD *)&v32 = 0;
    j__free(v20);
  }
  return a1;
}

