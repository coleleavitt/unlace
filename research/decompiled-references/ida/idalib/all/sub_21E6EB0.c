__int64 __fastcall sub_21E6EB0(__int64 a1, unsigned __int64 **a2)
{
  unsigned __int64 *v3; // rbp
  unsigned __int64 v4; // rdx
  void **p_ptr; // r8
  unsigned __int64 **v6; // r9
  unsigned __int64 *v7; // rsi
  unsigned __int64 v8; // r12
  unsigned __int64 *v9; // rbp
  unsigned __int64 *v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v14; // rbx
  void **v15; // rdi
  void *v16; // rax
  int v17; // eax
  size_t v18; // rdx
  void **v19; // [rsp+0h] [rbp-168h]
  void **v20; // [rsp+0h] [rbp-168h]
  void **v21; // [rsp+0h] [rbp-168h]
  void **v22; // [rsp+0h] [rbp-168h]
  unsigned __int64 **v23; // [rsp+8h] [rbp-160h]
  const char *v24; // [rsp+10h] [rbp-158h] BYREF
  __int16 v25; // [rsp+30h] [rbp-138h]
  void *ptr; // [rsp+40h] [rbp-128h] BYREF
  __int64 v27; // [rsp+48h] [rbp-120h]
  _QWORD v28[2]; // [rsp+50h] [rbp-118h] BYREF
  __int16 v29; // [rsp+60h] [rbp-108h]

  v3 = *a2;
  v4 = **a2;
  if ( v4 > 0x1C )
  {
    v29 = 259;
    ptr = "memprof schema invalid";
    v12 = operator new(0x30u);
    *(_DWORD *)(v12 + 8) = 9;
    *(_QWORD *)v12 = &off_2C74C70;
    sub_2253560(v12 + 16, &ptr);
    *(_BYTE *)(a1 + 240) |= 1u;
    *(_QWORD *)a1 = v12;
    return a1;
  }
  p_ptr = &ptr;
  v6 = a2;
  v7 = v3 + 1;
  v27 = 0x1C00000000LL;
  ptr = v28;
  if ( !v4 )
  {
    *v6 = v7;
    *(_QWORD *)a1 = a1 + 16;
    *(_BYTE *)(a1 + 240) &= ~1u;
    *(_QWORD *)(a1 + 8) = 0x1C00000000LL;
    return a1;
  }
  if ( v3[1] > 0x1B )
    goto LABEL_13;
  v28[0] = v3[1];
  LODWORD(v27) = 1;
  if ( v4 == 1 )
  {
    *v6 = v3 + 2;
    v16 = (void *)(a1 + 16);
    LODWORD(v11) = 1;
    *(_BYTE *)(a1 + 240) &= ~1u;
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0x1C00000000LL;
    goto LABEL_21;
  }
  v8 = v3[2];
  if ( v8 > 0x1B )
  {
LABEL_13:
    v20 = p_ptr;
    v24 = "memprof schema invalid";
    v25 = 259;
    v14 = operator new(0x30u);
    *(_DWORD *)(v14 + 8) = 9;
    *(_QWORD *)v14 = &off_2C74C70;
    sub_2253560(v14 + 16, &v24);
    *(_QWORD *)a1 = v14;
    v15 = (void **)ptr;
    *(_BYTE *)(a1 + 240) |= 1u;
    p_ptr = v20;
    goto LABEL_14;
  }
  v9 = v3 + 3;
  v10 = &v7[v4];
  v11 = 1;
  while ( 1 )
  {
    if ( v11 + 1 > (unsigned __int64)HIDWORD(v27) )
    {
      v23 = v6;
      v19 = p_ptr;
      sub_2237220(p_ptr, v28, v11 + 1, 8);
      v11 = (unsigned int)v27;
      v6 = v23;
      p_ptr = v19;
    }
    *((_QWORD *)ptr + v11) = v8;
    v11 = (unsigned int)(v27 + 1);
    LODWORD(v27) = v27 + 1;
    if ( v10 == v9 )
      break;
    v8 = *v9++;
    if ( v8 > 0x1B )
      goto LABEL_13;
  }
  v16 = (void *)(a1 + 16);
  *v6 = v10;
  v15 = (void **)ptr;
  *(_BYTE *)(a1 + 240) &= ~1u;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x1C00000000LL;
  if ( !(_DWORD)v11 )
    goto LABEL_14;
  if ( v15 != p_ptr + 2 )
  {
    v17 = HIDWORD(v27);
    *(_QWORD *)a1 = v15;
    *(_DWORD *)(a1 + 8) = v11;
    *(_DWORD *)(a1 + 12) = v17;
    return a1;
  }
  v4 = (unsigned int)v11;
  if ( (unsigned int)v11 > 0x1C )
  {
    v22 = p_ptr;
    sub_2237220(a1, a1 + 16, (unsigned int)v11, 8);
    v16 = *(void **)a1;
    v15 = (void **)ptr;
    p_ptr = v22;
    v18 = 8LL * (unsigned int)v27;
    if ( !v18 )
      goto LABEL_23;
    goto LABEL_22;
  }
LABEL_21:
  v18 = 8 * v4;
  v15 = p_ptr + 2;
LABEL_22:
  v21 = p_ptr;
  memcpy(v16, v15, v18);
  v15 = (void **)ptr;
  p_ptr = v21;
LABEL_23:
  *(_DWORD *)(a1 + 8) = v11;
LABEL_14:
  if ( v15 != p_ptr + 2 )
    free(v15);
  return a1;
}
