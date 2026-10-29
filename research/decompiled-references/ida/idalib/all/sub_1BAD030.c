__int64 __fastcall sub_1BAD030(__int64 *a1, __int64 a2, void *a3, __int64 a4, __int64 a5, __m128 a6, __m128 a7)
{
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned int v9; // ebx
  __int64 v10; // rax
  char v11; // r14
  unsigned int i; // r12d
  unsigned __int64 *v13; // r15
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rcx
  __int64 v18; // rbx
  __int64 v20; // r15
  __int64 v21; // rax
  char v22; // [rsp+1Bh] [rbp-9Dh]
  int v23; // [rsp+1Ch] [rbp-9Ch]
  int v24; // [rsp+20h] [rbp-98h]
  unsigned __int64 v25; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v27; // [rsp+38h] [rbp-80h]
  _BYTE v28[120]; // [rsp+40h] [rbp-78h] BYREF

  v7 = a2;
  v8 = *(_QWORD *)(a2 + 32);
  v9 = *(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 20);
  v23 = *(_DWORD *)(a2 + 64);
  v10 = *(_QWORD *)(a2 + 72);
  ptr = v28;
  v24 = v10;
  v27 = 0x800000000LL;
  if ( v9 > 8 )
  {
    sub_2237220(&ptr, v28, v9, 8);
  }
  else if ( !v9 )
  {
    v20 = *a1;
    v17 = v28;
    goto LABEL_14;
  }
  v11 = 0;
  v22 = 0;
  for ( i = 0; i != v9; ++i )
  {
    while ( 1 )
    {
      v13 = (unsigned __int64 *)(v8 + 8LL * i);
      v14 = sub_1B73BE0(a1, *v13, (unsigned __int64)a3, a6, a7, a4, a5);
      if ( v14 > 1 )
        break;
      ++i;
      v11 = 1;
      if ( v9 == i )
        goto LABEL_9;
    }
    a4 = (unsigned int)v27;
    v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
    v22 |= *v13 != v15;
    v16 = (unsigned int)v27 + 1LL;
    if ( v16 > HIDWORD(v27) )
    {
      v25 = v15;
      sub_2237220(&ptr, v28, v16, 8);
      a4 = (unsigned int)v27;
      v15 = v25;
    }
    a3 = ptr;
    *((_QWORD *)ptr + a4) = v15;
    LODWORD(v27) = v27 + 1;
  }
LABEL_9:
  v7 = a2;
  v17 = ptr;
  v18 = 1;
  if ( !v11 )
  {
    v20 = *a1;
    if ( v22 )
    {
LABEL_15:
      v21 = sub_1C54D50(
              v20,
              *(_DWORD *)(v7 + 8),
              *(_DWORD *)(v7 + 40),
              v24,
              v23,
              *(_DWORD *)(v7 + 16),
              *(_QWORD *)(v7 + 48),
              *(_QWORD *)(v7 + 56),
              *(_DWORD *)(v7 + 20),
              *(_QWORD *)(v7 + 80),
              (unsigned int)(*(_DWORD *)(v7 + 20) + *(_DWORD *)(v7 + 16)),
              *(_QWORD *)(v7 + 88),
              *(unsigned int *)(v7 + 24),
              (__int64)v17,
              (unsigned int)v27,
              *(_DWORD *)(v7 + 44));
      v17 = ptr;
      v18 = v21;
      goto LABEL_10;
    }
LABEL_14:
    v18 = v7;
    if ( !*(_DWORD *)(v20 + 12632) )
      goto LABEL_10;
    goto LABEL_15;
  }
LABEL_10:
  if ( v17 != v28 )
    free(v17);
  return v18;
}
