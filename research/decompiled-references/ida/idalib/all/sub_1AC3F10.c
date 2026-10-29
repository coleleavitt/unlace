unsigned __int64 __fastcall sub_1AC3F10(__int64 **a1, __int64 a2, double a3)
{
  char v4; // al
  void *v5; // r8
  __int64 v6; // r15
  signed __int64 v7; // r15
  char *v8; // rdi
  int v9; // eax
  __int64 v10; // r14
  unsigned __int64 *v11; // rbx
  __int64 v12; // rax
  unsigned __int64 *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 *v16; // r14
  unsigned __int64 *i; // r14
  char *v18; // rax
  char *v19; // r14
  signed __int64 v20; // rbx
  __int64 v21; // r15
  __int64 v22; // rax
  int v23; // edx
  char v24; // al
  char v25; // al
  const void *v26; // rcx
  __int64 v27; // r8
  unsigned __int64 v28; // rbx
  char *v30; // rdi
  char *srca; // [rsp+8h] [rbp-D0h]
  void *src; // [rsp+8h] [rbp-D0h]
  void *v33; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+18h] [rbp-C0h]
  _BYTE v35[48]; // [rsp+20h] [rbp-B8h] BYREF
  void *ptr; // [rsp+50h] [rbp-88h] BYREF
  __int64 v37; // [rsp+58h] [rbp-80h]
  _BYTE v38[48]; // [rsp+60h] [rbp-78h] BYREF
  char v39; // [rsp+90h] [rbp-48h]

  v4 = *(_BYTE *)(a2 + 144);
  if ( *(_BYTE *)(a2 + 1) == 41 )
  {
    if ( v4 != 7 )
      goto LABEL_64;
    v5 = *(void **)(a2 + 24);
    v6 = *(unsigned int *)(a2 + 32);
  }
  else
  {
    if ( v4 != 4 )
      goto LABEL_64;
    v5 = *(void **)(a2 + 16);
    v6 = *(unsigned int *)(a2 + 24);
  }
  v7 = 8 * v6;
  v8 = v35;
  v34 = 0x600000000LL;
  v9 = 0;
  v33 = v35;
  v10 = v7 >> 3;
  v11 = (unsigned __int64 *)v35;
  if ( v7 > 48 )
  {
    src = v5;
    sub_2237220(&v33, v35, v7 >> 3, 8);
    v11 = (unsigned __int64 *)v33;
    v9 = v34;
    v5 = src;
    v8 = (char *)v33 + 8 * (unsigned int)v34;
  }
  if ( v7 )
  {
    memcpy(v8, v5, v7);
    v11 = (unsigned __int64 *)v33;
    v9 = v34;
  }
  LODWORD(v34) = v10 + v9;
  v12 = 8LL * (unsigned int)(v10 + v9);
  v13 = &v11[(unsigned __int64)v12 / 8];
  v14 = v12 >> 3;
  v15 = v12 >> 5;
  if ( v15 )
  {
    v16 = &v11[4 * v15];
    while ( !(unsigned __int8)sub_1AA3DE0(*a1, 23, *v11) )
    {
      if ( (unsigned __int8)sub_1AA3DE0(*a1, 23, v11[1]) )
      {
        ++v11;
        goto LABEL_15;
      }
      if ( (unsigned __int8)sub_1AA3DE0(*a1, 23, v11[2]) )
      {
        v11 += 2;
        goto LABEL_15;
      }
      if ( (unsigned __int8)sub_1AA3DE0(*a1, 23, v11[3]) )
      {
        v11 += 3;
        goto LABEL_15;
      }
      v11 += 4;
      if ( v16 == v11 )
      {
        v14 = v13 - v11;
        goto LABEL_50;
      }
    }
    goto LABEL_15;
  }
LABEL_50:
  if ( v14 == 2 )
  {
LABEL_60:
    if ( (unsigned __int8)sub_1AA3DE0(*a1, 23, *v11) )
      goto LABEL_15;
    ++v11;
    goto LABEL_62;
  }
  if ( v14 == 3 )
  {
    if ( (unsigned __int8)sub_1AA3DE0(*a1, 23, *v11) )
      goto LABEL_15;
    ++v11;
    goto LABEL_60;
  }
  if ( v14 != 1 )
  {
LABEL_53:
    v11 = v13;
    goto LABEL_20;
  }
LABEL_62:
  if ( !(unsigned __int8)sub_1AA3DE0(*a1, 23, *v11) )
    goto LABEL_53;
LABEL_15:
  if ( v13 != v11 )
  {
    for ( i = v11 + 1; v13 != i; ++i )
    {
      if ( !(unsigned __int8)sub_1AA3DE0(*a1, 23, *i) )
        *v11++ = *i;
    }
  }
LABEL_20:
  v18 = (char *)v33;
  v19 = (char *)((_BYTE *)v33 + 8 * (unsigned int)v34 - (_BYTE *)v13);
  if ( v13 != (unsigned __int64 *)((char *)v33 + 8 * (unsigned int)v34) )
  {
    memmove(v11, v13, (_BYTE *)v33 + 8 * (unsigned int)v34 - (_BYTE *)v13);
    v18 = (char *)v33;
  }
  v37 = 0x600000000LL;
  ptr = v38;
  LODWORD(v34) = ((char *)v11 + (_QWORD)v19 - v18) >> 3;
  v20 = 8LL * (unsigned int)v34;
  v21 = v20 >> 3;
  if ( (unsigned __int64)v20 > 0x30 )
  {
    srca = v18;
    sub_2237220(&ptr, v38, (8LL * (unsigned int)v34) >> 3, 8);
    v18 = srca;
    v30 = (char *)ptr + 8 * (unsigned int)v37;
  }
  else
  {
    if ( !v20 )
      goto LABEL_24;
    v30 = v38;
  }
  memcpy(v30, v18, v20);
  LODWORD(v20) = v37;
LABEL_24:
  v22 = *(unsigned __int8 *)(a2 + 144);
  v39 = 0;
  v23 = v21 + v20;
  LODWORD(v37) = v21 + v20;
  if ( (_BYTE)v22 != 0xFF )
  {
    if ( (_BYTE)v22 == 4 )
    {
      sub_1576230((char ***)(a2 + 16), (char ***)&ptr);
      *(_BYTE *)(a2 + 80) = v39;
      goto LABEL_30;
    }
    funcs_1576A39[v22]();
    v23 = v37;
  }
  *(_QWORD *)(a2 + 16) = a2 + 32;
  *(_QWORD *)(a2 + 24) = 0x600000000LL;
  if ( v23 )
    sub_1576230((char ***)(a2 + 16), (char ***)&ptr);
  v24 = v39;
  *(_BYTE *)(a2 + 144) = 4;
  *(_BYTE *)(a2 + 80) = v24;
LABEL_30:
  if ( ptr != v38 )
    free(ptr);
  if ( *(_BYTE *)a2 != 13 || !(unsigned __int8)sub_1AC36C0((__int64)*a1, (char *)a2, 0, a3) )
  {
    v25 = *(_BYTE *)(a2 + 144);
    if ( *(_BYTE *)(a2 + 1) == 41 )
    {
      if ( v25 == 7 )
      {
        v26 = *(const void **)(a2 + 24);
        v27 = *(unsigned int *)(a2 + 32);
        goto LABEL_36;
      }
    }
    else if ( v25 == 4 )
    {
      v26 = *(const void **)(a2 + 16);
      v27 = *(unsigned int *)(a2 + 24);
LABEL_36:
      v28 = sub_EB4200(a1[1], *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 12), v26, v27, *(unsigned int *)(a2 + 8));
      goto LABEL_37;
    }
LABEL_64:
    abort();
  }
  v28 = 0;
LABEL_37:
  if ( v33 != v35 )
    free(v33);
  return v28;
}
