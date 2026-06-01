void __fastcall sub_1543CD0(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  void **v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r13
  _BYTE *v8; // rbp
  _BYTE *v9; // r15
  _BYTE *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  _BYTE *v13; // rbx
  __int64 v14; // rdx
  _BYTE *v15; // rax
  _BYTE *v16; // rdi
  size_t v17; // rdx
  size_t v18; // rdx
  __int64 v19; // rdx
  _BYTE *v20; // rdi
  unsigned __int64 v21; // r14
  size_t v22; // rdx
  unsigned __int64 v23; // r14
  size_t v24; // rdx
  unsigned __int64 v25; // r14
  size_t v26; // rdx
  _BYTE *src; // [rsp+0h] [rbp-48h]
  char *srca; // [rsp+0h] [rbp-48h]
  char *v29; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)a1;
  v3 = 32LL * *(unsigned int *)(a1 + 8);
  v4 = (void **)(*(_QWORD *)a1 + v3);
  v5 = v3 >> 5;
  v6 = v3 >> 7;
  if ( v6 )
  {
    v7 = *(_QWORD *)a1;
    v29 = (char *)(v2 + (v6 << 7));
    do
    {
      if ( !sub_9B4AA0(v7, "fpsr") )
        goto LABEL_4;
      if ( !sub_9B4AA0(v7, "mxcsr") )
        goto LABEL_4;
      srca = (char *)v7;
      v7 += 32;
      if ( !sub_9B4AA0(v7, "fpsr") )
        goto LABEL_4;
      if ( !sub_9B4AA0(v7, "mxcsr") )
        goto LABEL_4;
      v7 = (__int64)(srca + 64);
      if ( !sub_9B4AA0((__int64)(srca + 64), "fpsr") )
        goto LABEL_4;
      if ( !sub_9B4AA0(v7, "mxcsr") )
        goto LABEL_4;
      v7 = (__int64)(srca + 96);
      if ( !sub_9B4AA0((__int64)(srca + 96), "fpsr") || !sub_9B4AA0(v7, "mxcsr") )
        goto LABEL_4;
      v7 = (__int64)(srca + 128);
    }
    while ( v29 != srca + 128 );
    v5 = ((__int64)v4 - v7) >> 5;
  }
  else
  {
    v7 = *(_QWORD *)a1;
  }
  if ( v5 == 2 )
  {
LABEL_67:
    v23 = *(_QWORD *)(v7 + 8);
    if ( !v23 )
      goto LABEL_89;
    v24 = 4;
    if ( v23 <= 4 )
      v24 = *(_QWORD *)(v7 + 8);
    if ( memcmp(*(const void **)v7, "fpsr", v24)
      || (__int64)(v23 - 4) > 0x7FFFFFFF
      || (__int64)(v23 - 4) < (__int64)0xFFFFFFFF80000000LL
      || (_DWORD)v23 != 4 )
    {
LABEL_89:
      if ( sub_9B4AA0(v7, "mxcsr") )
      {
        v7 += 32;
LABEL_76:
        v25 = *(_QWORD *)(v7 + 8);
        if ( !v25 )
          goto LABEL_90;
        v26 = 4;
        if ( v25 <= 4 )
          v26 = *(_QWORD *)(v7 + 8);
        if ( memcmp(*(const void **)v7, "fpsr", v26)
          || (__int64)(v25 - 4) > 0x7FFFFFFF
          || (__int64)(v25 - 4) < (__int64)0xFFFFFFFF80000000LL
          || (_DWORD)v25 != 4 )
        {
LABEL_90:
          if ( sub_9B4AA0(v7, "mxcsr") )
            goto LABEL_47;
        }
        goto LABEL_4;
      }
    }
    goto LABEL_4;
  }
  if ( v5 != 3 )
  {
    if ( v5 != 1 )
      goto LABEL_47;
    goto LABEL_76;
  }
  v21 = *(_QWORD *)(v7 + 8);
  if ( !v21 )
    goto LABEL_91;
  v22 = 4;
  if ( v21 <= 4 )
    v22 = *(_QWORD *)(v7 + 8);
  if ( memcmp(*(const void **)v7, "fpsr", v22)
    || (__int64)(v21 - 4) > 0x7FFFFFFF
    || (__int64)(v21 - 4) < (__int64)0xFFFFFFFF80000000LL
    || (_DWORD)v21 != 4 )
  {
LABEL_91:
    if ( sub_9B4AA0(v7, "mxcsr") )
    {
      v7 += 32;
      goto LABEL_67;
    }
  }
LABEL_4:
  if ( v4 == (void **)v7 )
  {
LABEL_47:
    v7 = (__int64)v4;
    goto LABEL_32;
  }
  if ( v4 == (void **)(v7 + 32) )
    goto LABEL_29;
  v8 = (_BYTE *)(v7 + 48);
  src = v4 + 2;
  do
  {
    while ( !sub_9B4AA0((__int64)(v8 - 16), "fpsr") || !sub_9B4AA0((__int64)(v8 - 16), "mxcsr") )
    {
      v8 += 32;
      if ( src == v8 )
        goto LABEL_15;
    }
    v9 = *((_BYTE **)v8 - 2);
    v10 = *(_BYTE **)v7;
    if ( v8 == v9 )
    {
      v18 = *((_QWORD *)v8 - 1);
      if ( !v18 )
        goto LABEL_53;
      if ( v18 != 1 )
      {
        memcpy(v10, v8, v18);
        v18 = *((_QWORD *)v8 - 1);
        v10 = *(_BYTE **)v7;
LABEL_53:
        *(_QWORD *)(v7 + 8) = v18;
        v10[v18] = 0;
        v10 = *((_BYTE **)v9 - 2);
        goto LABEL_14;
      }
      *v10 = *v8;
      v19 = *((_QWORD *)v8 - 1);
      v20 = *(_BYTE **)v7;
      *(_QWORD *)(v7 + 8) = v19;
      v20[v19] = 0;
      v10 = *((_BYTE **)v9 - 2);
    }
    else
    {
      if ( v10 == (_BYTE *)(v7 + 16) )
      {
        *(_QWORD *)v7 = v9;
        *(_QWORD *)(v7 + 8) = *((_QWORD *)v8 - 1);
        *(_QWORD *)(v7 + 16) = *(_QWORD *)v8;
      }
      else
      {
        *(_QWORD *)v7 = v9;
        v11 = *(_QWORD *)(v7 + 16);
        *(_QWORD *)(v7 + 8) = *((_QWORD *)v8 - 1);
        *(_QWORD *)(v7 + 16) = *(_QWORD *)v8;
        if ( v10 )
        {
          *((_QWORD *)v8 - 2) = v10;
          *(_QWORD *)v8 = v11;
          goto LABEL_14;
        }
      }
      *((_QWORD *)v8 - 2) = v8;
      v10 = v8;
    }
LABEL_14:
    *((_QWORD *)v8 - 1) = 0;
    v7 += 32;
    v8 += 32;
    *v10 = 0;
  }
  while ( src != v8 );
LABEL_15:
  v2 = *(_QWORD *)a1;
  v12 = (*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8) - (__int64)v4) >> 5;
  if ( *(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8) - (__int64)v4 <= 0 )
  {
    v4 = (void **)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
    goto LABEL_28;
  }
  v13 = v4 + 2;
  while ( 2 )
  {
    v15 = *((_BYTE **)v13 - 2);
    v16 = *(_BYTE **)v7;
    if ( v15 == v13 )
    {
      v17 = *((_QWORD *)v13 - 1);
      if ( v17 )
      {
        if ( v17 == 1 )
          *v16 = *v13;
        else
          memcpy(v16, v13, v17);
        v17 = *((_QWORD *)v13 - 1);
        v16 = *(_BYTE **)v7;
      }
      *(_QWORD *)(v7 + 8) = v17;
      v16[v17] = 0;
      v16 = *((_BYTE **)v13 - 2);
    }
    else
    {
      if ( v16 == (_BYTE *)(v7 + 16) )
      {
        *(_QWORD *)v7 = v15;
        *(_QWORD *)(v7 + 8) = *((_QWORD *)v13 - 1);
        *(_QWORD *)(v7 + 16) = *(_QWORD *)v13;
      }
      else
      {
        *(_QWORD *)v7 = v15;
        v14 = *(_QWORD *)(v7 + 16);
        *(_QWORD *)(v7 + 8) = *((_QWORD *)v13 - 1);
        *(_QWORD *)(v7 + 16) = *(_QWORD *)v13;
        if ( v16 )
        {
          *((_QWORD *)v13 - 2) = v16;
          *(_QWORD *)v13 = v14;
          goto LABEL_20;
        }
      }
      *((_QWORD *)v13 - 2) = v13;
      v16 = v13;
    }
LABEL_20:
    *((_QWORD *)v13 - 1) = 0;
    v7 += 32;
    v13 += 32;
    *v16 = 0;
    if ( --v12 )
      continue;
    break;
  }
  v2 = *(_QWORD *)a1;
  v4 = (void **)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
LABEL_28:
  if ( v4 != (void **)v7 )
  {
    do
    {
LABEL_29:
      while ( 1 )
      {
        v4 -= 4;
        if ( *v4 == v4 + 2 )
          break;
        operator delete(*v4);
        if ( v4 == (void **)v7 )
          goto LABEL_31;
      }
    }
    while ( v4 != (void **)v7 );
LABEL_31:
    v2 = *(_QWORD *)a1;
  }
LABEL_32:
  *(_DWORD *)(a1 + 8) = (v7 - v2) >> 5;
}
