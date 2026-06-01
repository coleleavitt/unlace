__int64 __fastcall sub_F57040(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  char v4; // cl
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rax
  char *v8; // r15
  char *v9; // rbx
  char *v10; // rax
  char *v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  char *v15; // rax
  __int64 v16; // rax
  __int64 v18; // [rsp+8h] [rbp-B0h]
  void **p_ptr; // [rsp+18h] [rbp-A0h] BYREF
  void *ptr; // [rsp+20h] [rbp-98h] BYREF
  __int64 v21; // [rsp+28h] [rbp-90h]
  int v22; // [rsp+30h] [rbp-88h]
  char v23; // [rsp+34h] [rbp-84h]
  char v24; // [rsp+38h] [rbp-80h] BYREF

  v21 = 8;
  p_ptr = &ptr;
  ptr = &v24;
  v22 = 0;
  v23 = 1;
  sub_F56AF0(a1, &p_ptr);
  v3 = *(_QWORD *)(a2 + 24);
  v4 = v23;
  v5 = v3 + 8LL * *(unsigned int *)(a2 + 32);
  v18 = *(_QWORD *)(a2 + 24);
  if ( v3 == v5 )
  {
LABEL_24:
    v12 = 0;
    if ( !v4 )
      goto LABEL_25;
    return v12;
  }
  while ( 1 )
  {
    v6 = *(_QWORD *)(v5 - 8);
    if ( !v4 )
      break;
    v7 = HIDWORD(v21);
    v8 = (char *)ptr + 8 * HIDWORD(v21);
    if ( ptr != v8 )
      goto LABEL_4;
LABEL_23:
    v5 -= 8;
    if ( v18 == v5 )
      goto LABEL_24;
  }
  v7 = (unsigned int)v21;
  v8 = (char *)ptr + 8 * (unsigned int)v21;
  if ( ptr == v8 )
    goto LABEL_23;
LABEL_4:
  v9 = (char *)ptr;
  if ( *(_QWORD *)ptr == -2 || *(_QWORD *)ptr == -1 )
  {
    v10 = (char *)ptr + 8;
    do
    {
      v9 = v10;
      if ( v8 == v10 )
        break;
      v10 += 8;
    }
    while ( *(_QWORD *)v9 >= 0xFFFFFFFFFFFFFFFELL );
    if ( v4 )
      v7 = HIDWORD(v21);
    else
      v7 = (unsigned int)v21;
  }
  v11 = (char *)ptr + 8 * v7;
  if ( v9 == v11 )
    goto LABEL_23;
  while ( 1 )
  {
    v12 = *(_QWORD *)v9;
    v13 = *(_QWORD *)(sub_B68470(*(_QWORD *)v9 + 72LL) + 16);
    if ( (v13 & 4) != 0 )
      break;
    v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v14 )
      v14 -= 64LL;
    if ( v6 == v14 )
      goto LABEL_29;
LABEL_15:
    if ( v9 + 8 != v8 )
    {
      if ( *((_QWORD *)v9 + 1) < 0xFFFFFFFFFFFFFFFELL )
      {
        v9 += 8;
        goto LABEL_21;
      }
      v15 = v9 + 16;
      while ( 1 )
      {
        v9 = v15;
        if ( v15 == v8 )
          break;
        v15 += 8;
        if ( *(_QWORD *)v9 < 0xFFFFFFFFFFFFFFFELL )
          goto LABEL_21;
      }
    }
    v9 = v8;
LABEL_21:
    if ( v11 == v9 )
    {
      v4 = v23;
      goto LABEL_23;
    }
  }
  v16 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v16 )
    v16 -= 64;
  if ( v6 != v16 )
    goto LABEL_15;
LABEL_29:
  if ( v23 )
    return v12;
LABEL_25:
  free(ptr);
  return v12;
}

