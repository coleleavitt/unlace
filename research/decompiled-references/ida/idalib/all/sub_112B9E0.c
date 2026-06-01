_QWORD *__fastcall sub_112B9E0(__int64 a1, __int64 a2, const void *a3, size_t a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rbx
  _QWORD *v8; // rbp
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 *v11; // rax
  char v12; // r14
  bool v13; // dl
  char v14; // r15
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  const void *v21; // rsi
  const char **v22; // rax
  size_t v23; // rax
  const char *v24; // rcx
  size_t v25; // r8
  int v26; // eax
  _QWORD *v27; // r13
  _QWORD *v28; // rbx
  void *v29; // r12
  __int64 v30; // rdi
  char *v31; // rdi
  void *v32; // rdi
  bool v33; // [rsp+Bh] [rbp-8Dh]
  const char *s1; // [rsp+38h] [rbp-60h]
  __int64 v40; // [rsp+40h] [rbp-58h]
  size_t v41; // [rsp+40h] [rbp-58h]
  __int64 v42[8]; // [rsp+58h] [rbp-40h] BYREF

  v7 = *(_QWORD *)(a2 + 176);
  v8 = (_QWORD *)operator new(0x148u);
  sub_21B6CD0(v8, v7);
  v9 = *(__int64 **)(a2 + 8);
  v33 = a5 > 1;
  v10 = &v9[*(unsigned int *)(a2 + 16)];
  if ( v10 == v9 )
    goto LABEL_33;
  v11 = v9 + 1;
  if ( !*v9 )
  {
    while ( 1 )
    {
      v9 = v11;
      if ( v10 == v11 )
        break;
      if ( *v11++ )
        goto LABEL_3;
    }
LABEL_33:
    v27 = (_QWORD *)v8[23];
    *v8 = off_2BE9928;
    v28 = &v27[*((unsigned int *)v8 + 48)];
    if ( v27 != v28 )
    {
      do
      {
        while ( 1 )
        {
          v29 = (void *)*--v28;
          if ( !*v28 )
            break;
          sub_21B59C0(*v28);
          operator delete(v29, 0x58u);
          if ( v27 == v28 )
            goto LABEL_36;
        }
      }
      while ( v27 != v28 );
LABEL_36:
      v28 = (_QWORD *)v8[23];
    }
    if ( v28 != v8 + 25 )
      free(v28);
    v30 = v8[19];
    *v8 = &off_2C35EF8;
    operator delete(v30, 12LL * *((unsigned int *)v8 + 42), 4);
    v31 = (char *)v8[1];
    if ( v31 != (char *)(v8 + 3) )
      free(v31);
    v32 = v8;
    v8 = nullptr;
    operator delete(v32, 0x148u);
    return v8;
  }
LABEL_3:
  v12 = 0;
  while ( 1 )
  {
    v42[0] = *v9;
    if ( (unsigned __int8)sub_21B9810(v42[0], 3484) )
    {
      v13 = v33;
      v14 = a5 <= 1;
    }
    else
    {
      v14 = sub_21B9810(v42[0], 3485);
      if ( v14 )
      {
        v14 = v33;
        v13 = a5 <= 1;
      }
      else
      {
        if ( !(unsigned __int8)sub_21B9810(v42[0], 3486) )
          goto LABEL_21;
        v19 = sub_22B7480(a1 + 16);
        v15 = v42[0];
        v21 = (const void *)v19;
        v22 = *(const char ***)(v42[0] + 48);
        if ( !*v22 )
        {
          if ( v20 )
            goto LABEL_11;
          goto LABEL_7;
        }
        v40 = v20;
        s1 = *v22;
        v23 = j__strlen(*v22);
        v24 = s1;
        v25 = v23;
        if ( v23 == v40 )
        {
          if ( !v23 )
            goto LABEL_7;
          v41 = v23;
          if ( !memcmp(s1, v21, v23) )
            goto LABEL_7;
          v24 = s1;
          v25 = v41;
        }
        if ( !a4 || v25 != a4 )
        {
LABEL_11:
          v17 = v9 + 1;
          v12 = 1;
          if ( v10 == v9 + 1 )
            goto LABEL_22;
          goto LABEL_12;
        }
        v26 = memcmp(v24, a3, a4);
        v13 = v26 == 0;
        v14 = v26 != 0;
      }
    }
    if ( v13 )
    {
      v15 = v42[0];
LABEL_7:
      v16 = *(_QWORD *)(v15 + 16);
      if ( !v16 )
        v16 = v15;
      *(_BYTE *)(v16 + 44) |= 1u;
      (*(void (__fastcall **)(__int64, __int64, __int64 *, _QWORD *, __int64))(*(_QWORD *)a1 + 88LL))(
        a1,
        a2,
        v42,
        v8,
        a6);
    }
    if ( v14 )
      goto LABEL_11;
    v12 = 1;
LABEL_21:
    sub_21B80F0(v8, v42[0]);
    v17 = v9 + 1;
    if ( v10 == v9 + 1 )
      goto LABEL_22;
LABEL_12:
    if ( !v9[1] )
      break;
LABEL_13:
    v9 = v17;
  }
  while ( v10 != ++v17 )
  {
    if ( *v17 )
      goto LABEL_13;
  }
LABEL_22:
  if ( !v12 )
    goto LABEL_33;
  return v8;
}
