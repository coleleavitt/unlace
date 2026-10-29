unsigned __int64 __fastcall sub_1AC2490(__int64 **a1, __int64 a2)
{
  char v3; // al
  void *v4; // r8
  __int64 v5; // r15
  signed __int64 v6; // r15
  char *v7; // rdi
  int v8; // eax
  __int64 v9; // r14
  unsigned __int64 *v10; // rbx
  __int64 v11; // rax
  unsigned __int64 *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 *v15; // r14
  unsigned __int64 *i; // r14
  char *v17; // rax
  char *v18; // r14
  signed __int64 v19; // rbx
  __int64 v20; // r15
  __int64 v21; // rax
  int v22; // edx
  char v23; // al
  char v24; // al
  const void *v25; // rcx
  __int64 v26; // r8
  unsigned __int64 v27; // rbx
  char *v29; // rdi
  char *srca; // [rsp+8h] [rbp-D0h]
  void *src; // [rsp+8h] [rbp-D0h]
  void *v32; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+18h] [rbp-C0h]
  _BYTE v34[48]; // [rsp+20h] [rbp-B8h] BYREF
  void *ptr; // [rsp+50h] [rbp-88h] BYREF
  __int64 v36; // [rsp+58h] [rbp-80h]
  _BYTE v37[48]; // [rsp+60h] [rbp-78h] BYREF
  char v38; // [rsp+90h] [rbp-48h]

  v3 = *(_BYTE *)(a2 + 144);
  if ( *(_BYTE *)(a2 + 1) == 41 )
  {
    if ( v3 != 7 )
      goto LABEL_60;
    v4 = *(void **)(a2 + 24);
    v5 = *(unsigned int *)(a2 + 32);
  }
  else
  {
    if ( v3 != 4 )
      goto LABEL_60;
    v4 = *(void **)(a2 + 16);
    v5 = *(unsigned int *)(a2 + 24);
  }
  v6 = 8 * v5;
  v7 = v34;
  v33 = 0x600000000LL;
  v8 = 0;
  v32 = v34;
  v9 = v6 >> 3;
  v10 = (unsigned __int64 *)v34;
  if ( v6 > 48 )
  {
    src = v4;
    sub_2237220(&v32, v34, v6 >> 3, 8);
    v10 = (unsigned __int64 *)v32;
    v8 = v33;
    v4 = src;
    v7 = (char *)v32 + 8 * (unsigned int)v33;
  }
  if ( v6 )
  {
    memcpy(v7, v4, v6);
    v10 = (unsigned __int64 *)v32;
    v8 = v33;
  }
  LODWORD(v33) = v9 + v8;
  v11 = 8LL * (unsigned int)(v9 + v8);
  v12 = &v10[(unsigned __int64)v11 / 8];
  v13 = v11 >> 3;
  v14 = v11 >> 5;
  if ( v14 )
  {
    v15 = &v10[4 * v14];
    while ( !(unsigned __int8)sub_1AA3DE0(*a1, 1, *v10) )
    {
      if ( (unsigned __int8)sub_1AA3DE0(*a1, 1, v10[1]) )
      {
        ++v10;
        goto LABEL_15;
      }
      if ( (unsigned __int8)sub_1AA3DE0(*a1, 1, v10[2]) )
      {
        v10 += 2;
        goto LABEL_15;
      }
      if ( (unsigned __int8)sub_1AA3DE0(*a1, 1, v10[3]) )
      {
        v10 += 3;
        goto LABEL_15;
      }
      v10 += 4;
      if ( v15 == v10 )
      {
        v13 = v12 - v10;
        goto LABEL_46;
      }
    }
    goto LABEL_15;
  }
LABEL_46:
  if ( v13 == 2 )
  {
LABEL_56:
    if ( (unsigned __int8)sub_1AA3DE0(*a1, 1, *v10) )
      goto LABEL_15;
    ++v10;
    goto LABEL_58;
  }
  if ( v13 == 3 )
  {
    if ( (unsigned __int8)sub_1AA3DE0(*a1, 1, *v10) )
      goto LABEL_15;
    ++v10;
    goto LABEL_56;
  }
  if ( v13 != 1 )
  {
LABEL_49:
    v10 = v12;
    goto LABEL_20;
  }
LABEL_58:
  if ( !(unsigned __int8)sub_1AA3DE0(*a1, 1, *v10) )
    goto LABEL_49;
LABEL_15:
  if ( v12 != v10 )
  {
    for ( i = v10 + 1; v12 != i; ++i )
    {
      if ( !(unsigned __int8)sub_1AA3DE0(*a1, 1, *i) )
        *v10++ = *i;
    }
  }
LABEL_20:
  v17 = (char *)v32;
  v18 = (char *)((_BYTE *)v32 + 8 * (unsigned int)v33 - (_BYTE *)v12);
  if ( v12 != (unsigned __int64 *)((char *)v32 + 8 * (unsigned int)v33) )
  {
    memmove(v10, v12, (_BYTE *)v32 + 8 * (unsigned int)v33 - (_BYTE *)v12);
    v17 = (char *)v32;
  }
  v36 = 0x600000000LL;
  ptr = v37;
  LODWORD(v33) = ((char *)v10 + (_QWORD)v18 - v17) >> 3;
  v19 = 8LL * (unsigned int)v33;
  v20 = v19 >> 3;
  if ( (unsigned __int64)v19 > 0x30 )
  {
    srca = v17;
    sub_2237220(&ptr, v37, (8LL * (unsigned int)v33) >> 3, 8);
    v17 = srca;
    v29 = (char *)ptr + 8 * (unsigned int)v36;
  }
  else
  {
    if ( !v19 )
      goto LABEL_24;
    v29 = v37;
  }
  memcpy(v29, v17, v19);
  LODWORD(v19) = v36;
LABEL_24:
  v21 = *(unsigned __int8 *)(a2 + 144);
  v38 = 0;
  v22 = v20 + v19;
  LODWORD(v36) = v20 + v19;
  if ( (_BYTE)v21 != 0xFF )
  {
    if ( (_BYTE)v21 == 4 )
    {
      sub_1576230((char ***)(a2 + 16), (char ***)&ptr);
      *(_BYTE *)(a2 + 80) = v38;
      goto LABEL_30;
    }
    funcs_1576A39[v21]();
    v22 = v36;
  }
  *(_QWORD *)(a2 + 16) = a2 + 32;
  *(_QWORD *)(a2 + 24) = 0x600000000LL;
  if ( v22 )
    sub_1576230((char ***)(a2 + 16), (char ***)&ptr);
  v23 = v38;
  *(_BYTE *)(a2 + 144) = 4;
  *(_BYTE *)(a2 + 80) = v23;
LABEL_30:
  if ( ptr != v37 )
    free(ptr);
  v24 = *(_BYTE *)(a2 + 144);
  if ( *(_BYTE *)(a2 + 1) != 41 )
  {
    if ( v24 == 4 )
    {
      v25 = *(const void **)(a2 + 16);
      v26 = *(unsigned int *)(a2 + 24);
      goto LABEL_35;
    }
LABEL_60:
    abort();
  }
  if ( v24 != 7 )
    goto LABEL_60;
  v25 = *(const void **)(a2 + 24);
  v26 = *(unsigned int *)(a2 + 32);
LABEL_35:
  v27 = sub_EB43E0(a1[1], *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 12), v25, v26, *(unsigned int *)(a2 + 8));
  if ( v32 != v34 )
    free(v32);
  return v27;
}
