__int64 __fastcall sub_1107CA0(__int64 a1, __int64 a2, const void *a3, size_t a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rbp
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
  void *v30; // rdi
  void *v31; // rdi
  bool v32; // [rsp+Bh] [rbp-8Dh]
  const char *s1; // [rsp+38h] [rbp-60h]
  __int64 v39; // [rsp+40h] [rbp-58h]
  size_t v40; // [rsp+40h] [rbp-58h]
  __int64 v41[8]; // [rsp+58h] [rbp-40h] BYREF

  v7 = *(_QWORD *)(a2 + 176);
  v8 = operator new(0x148u);
  sub_2192F90(v8, v7);
  v9 = *(__int64 **)(a2 + 8);
  v32 = a5 > 1;
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
    v27 = *(_QWORD **)(v8 + 184);
    *(_QWORD *)v8 = off_2BBF988;
    v28 = &v27[*(unsigned int *)(v8 + 192)];
    if ( v27 != v28 )
    {
      do
      {
        while ( 1 )
        {
          v29 = (void *)*--v28;
          if ( !*v28 )
            break;
          sub_2191C80(*v28);
          operator delete(v29, 0x58u);
          if ( v27 == v28 )
            goto LABEL_36;
        }
      }
      while ( v27 != v28 );
LABEL_36:
      v28 = *(_QWORD **)(v8 + 184);
    }
    if ( v28 != (_QWORD *)(v8 + 200) )
      free(v28);
    *(_QWORD *)v8 = &off_2C0BEF8;
    operator delete();
    v30 = *(void **)(v8 + 8);
    if ( v30 != (void *)(v8 + 24) )
      free(v30);
    v31 = (void *)v8;
    v8 = 0;
    operator delete(v31, 0x148u);
    return v8;
  }
LABEL_3:
  v12 = 0;
  while ( 1 )
  {
    v41[0] = *v9;
    if ( (unsigned __int8)sub_2195AD0(v41[0], 3484) )
    {
      v13 = v32;
      v14 = a5 <= 1;
    }
    else
    {
      v14 = sub_2195AD0(v41[0], 3485);
      if ( v14 )
      {
        v14 = v32;
        v13 = a5 <= 1;
      }
      else
      {
        if ( !(unsigned __int8)sub_2195AD0(v41[0], 3486) )
          goto LABEL_21;
        v19 = sub_2293740(a1 + 16);
        v15 = v41[0];
        v21 = (const void *)v19;
        v22 = *(const char ***)(v41[0] + 48);
        if ( !*v22 )
        {
          if ( v20 )
            goto LABEL_11;
          goto LABEL_7;
        }
        v39 = v20;
        s1 = *v22;
        v23 = j__strlen(*v22);
        v24 = s1;
        v25 = v23;
        if ( v23 == v39 )
        {
          if ( !v23 )
            goto LABEL_7;
          v40 = v23;
          if ( !memcmp(s1, v21, v23) )
            goto LABEL_7;
          v24 = s1;
          v25 = v40;
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
      v15 = v41[0];
LABEL_7:
      v16 = *(_QWORD *)(v15 + 16);
      if ( !v16 )
        v16 = v15;
      *(_BYTE *)(v16 + 44) |= 1u;
      (*(void (__fastcall **)(__int64, __int64, __int64 *, __int64, __int64))(*(_QWORD *)a1 + 88LL))(
        a1,
        a2,
        v41,
        v8,
        a6);
    }
    if ( v14 )
      goto LABEL_11;
    v12 = 1;
LABEL_21:
    sub_21943B0(v8, v41[0]);
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

