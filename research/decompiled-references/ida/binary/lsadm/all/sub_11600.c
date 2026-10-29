__int64 __fastcall sub_11600(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  const char *v4; // rdx
  __int64 *v5; // rbx
  const char *v6; // rdx
  __int64 v7; // rax
  const char *v8; // rdx
  __int64 *v9; // rbp
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r14
  time_t v14; // rsi
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // r13
  int v18; // edx
  __int64 v19; // r12
  char *v21; // rsi
  __int64 v22; // r14
  void *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+10h] [rbp-68h]
  __int64 v29; // [rsp+10h] [rbp-68h]
  __int64 v30; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-50h]
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v3 = sub_29E10(24);
  v4 = s1;
  *(_QWORD *)v3 = 0;
  v5 = (__int64 *)v3;
  *(_OWORD *)(v3 + 8) = 0;
  if ( a2[9] )
    v4 = (const char *)a2[8];
  sub_10E50((__int64 *)v3, "version", v4);
  v6 = s1;
  if ( a2[6] )
    v6 = (const char *)a2[5];
  sub_10E50(v5, "mac_address", v6);
  v7 = sub_29E10(24);
  v8 = s1;
  *(_QWORD *)v7 = 0;
  v9 = (__int64 *)v7;
  *(_OWORD *)(v7 + 8) = 0;
  if ( a2[2] )
    v8 = (const char *)a2[1];
  sub_10E50((__int64 *)v7, "peer_name", v8);
  v10 = v9[1];
  v28 = *(unsigned int *)a2;
  v30 = *v9;
  if ( v10 )
  {
    v11 = *v9;
    v12 = 0;
    while ( !*(_QWORD *)(v11 + 8) || strcmp(*(const char **)v11, "session_id") )
    {
      ++v12;
      v11 += 40;
      if ( v10 == v12 )
        goto LABEL_33;
    }
    v13 = v11 + 24;
  }
  else
  {
LABEL_33:
    if ( v9[2] < (unsigned __int64)(v10 + 1) )
    {
      v27 = sub_29E60(v9, v30, v10 + 1, 40);
      v10 = v9[1];
      v30 = v27;
      *v9 = v27;
    }
    v22 = v30 + 40 * v10;
    *(_QWORD *)v22 = 0;
    *(_OWORD *)(v22 + 8) = 0;
    *(_DWORD *)(v22 + 24) = 0;
    *(_QWORD *)(v22 + 32) = 0;
    ++v9[1];
    v23 = *(void **)v22;
    if ( *(_QWORD *)(v22 + 16) <= 0xAu )
    {
      v26 = sub_29E60(v22, v23, 11, 1);
      *(_QWORD *)v22 = v26;
      v23 = (void *)v26;
    }
    *(_QWORD *)(v22 + 8) = 11;
    v13 = v22 + 24;
    qmemcpy(v23, "session_id", 10);
    *(_BYTE *)(*(_QWORD *)(v13 - 24) + 10LL) = 0;
  }
  if ( *(_DWORD *)v13 )
    sub_218D0(v13);
  *(_DWORD *)v13 = 1;
  *(_QWORD *)(v13 + 8) = v28;
  v14 = a2[4];
  if ( (unsigned __int64)(v14 + 1) > 1 )
  {
    sub_11050((__int64)&ptr, v14);
    if ( v32 > 1 )
      sub_10E50(v9, "established", (const char *)ptr);
    if ( ptr )
    {
      v32 = 0;
      j__free(ptr);
    }
  }
  v15 = v5[1];
  v29 = *v5;
  if ( v15 )
  {
    v16 = *v5;
    v17 = 0;
    while ( !*(_QWORD *)(v16 + 8) || strcmp(*(const char **)v16, "client") )
    {
      ++v17;
      v16 += 40;
      if ( v15 == v17 )
        goto LABEL_28;
    }
  }
  else
  {
LABEL_28:
    if ( v5[2] < (unsigned __int64)(v15 + 1) )
    {
      v25 = sub_29E60(v5, v29, v15 + 1, 40);
      v15 = v5[1];
      v29 = v25;
      *v5 = v25;
    }
    v16 = v29 + 40 * v15;
    *(_QWORD *)v16 = 0;
    *(_OWORD *)(v16 + 8) = 0;
    *(_DWORD *)(v16 + 24) = 0;
    *(_QWORD *)(v16 + 32) = 0;
    ++v5[1];
    v21 = *(char **)v16;
    if ( *(_QWORD *)(v16 + 16) <= 6u )
    {
      v24 = sub_29E60(v16, v21, 7, 1);
      *(_QWORD *)v16 = v24;
      v21 = (char *)v24;
    }
    *(_QWORD *)(v16 + 8) = 7;
    *(_DWORD *)v21 = 1701407843;
    *((_WORD *)v21 + 2) = 29806;
    *(_BYTE *)(*(_QWORD *)v16 + 6LL) = 0;
  }
  v18 = *(_DWORD *)(v16 + 24);
  v19 = v16 + 24;
  if ( v18 )
    sub_218D0(v19);
  *(_DWORD *)v19 = 3;
  *(_QWORD *)(v19 + 8) = v9;
  *(_DWORD *)a1 = 3;
  *(_QWORD *)(a1 + 8) = v5;
  return a1;
}

