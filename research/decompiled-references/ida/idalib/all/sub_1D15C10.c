__int64 __fastcall sub_1D15C10(
        __int64 *a1,
        __int64 a2,
        void *a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned int v9; // ebx
  __int64 v10; // rax
  char v11; // r14
  unsigned int i; // r12d
  unsigned __int16 **v13; // r15
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rcx
  __int64 v18; // rbx
  __int64 v20; // r15
  unsigned int v21; // r8d
  unsigned int v22; // r9d
  __int64 v23; // rax
  __int128 v24; // [rsp-38h] [rbp-F0h]
  char v25; // [rsp+1Bh] [rbp-9Dh]
  unsigned int v26; // [rsp+1Ch] [rbp-9Ch]
  __int64 v27; // [rsp+20h] [rbp-98h]
  unsigned __int64 v28; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v30; // [rsp+38h] [rbp-80h]
  _BYTE v31[120]; // [rsp+40h] [rbp-78h] BYREF

  v7 = a2;
  v8 = *(_QWORD *)(a2 + 32);
  v9 = *(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 20);
  v26 = *(_DWORD *)(a2 + 64);
  v10 = *(_QWORD *)(a2 + 72);
  ptr = v31;
  v27 = v10;
  v30 = 0x800000000LL;
  if ( v9 > 8 )
  {
    sub_2237220(&ptr, v31, v9, 8);
  }
  else if ( !v9 )
  {
    v20 = *a1;
    v17 = v31;
    goto LABEL_14;
  }
  v11 = 0;
  v25 = 0;
  for ( i = 0; i != v9; ++i )
  {
    while ( 1 )
    {
      v13 = (unsigned __int16 **)(v8 + 8LL * i);
      v14 = sub_1D11200(a1, *v13, a6, a7, (__int64)a3, a4, a5);
      if ( v14 > 1 )
        break;
      ++i;
      v11 = 1;
      if ( v9 == i )
        goto LABEL_9;
    }
    a4 = (unsigned int)v30;
    v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
    v25 |= *v13 != (unsigned __int16 *)v15;
    v16 = (unsigned int)v30 + 1LL;
    if ( v16 > HIDWORD(v30) )
    {
      v28 = v15;
      sub_2237220(&ptr, v31, v16, 8);
      a4 = (unsigned int)v30;
      v15 = v28;
    }
    a3 = ptr;
    *((_QWORD *)ptr + a4) = v15;
    LODWORD(v30) = v30 + 1;
  }
LABEL_9:
  v7 = a2;
  v17 = ptr;
  v18 = 1;
  if ( !v11 )
  {
    v20 = *a1;
    if ( v25 )
    {
LABEL_15:
      v21 = *(_DWORD *)(v7 + 20);
      v22 = *(_DWORD *)(v7 + 16);
      *((_QWORD *)&v24 + 1) = v21 + v22;
      *(_QWORD *)&v24 = *(_QWORD *)(v7 + 80);
      v23 = sub_1C54D50(
              v20,
              *(_DWORD *)(v7 + 8),
              *(_DWORD *)(v7 + 40),
              v27,
              v26,
              v22,
              *(double *)a6.m128_u64,
              *(const void **)(v7 + 48),
              *(_QWORD *)(v7 + 56),
              v21,
              v24,
              *(char **)(v7 + 88),
              *(unsigned int *)(v7 + 24),
              (__int64)v17,
              (unsigned int)v30,
              *(_DWORD *)(v7 + 44));
      v17 = ptr;
      v18 = v23;
      goto LABEL_10;
    }
LABEL_14:
    v18 = v7;
    if ( !*(_DWORD *)(v20 + 12632) )
      goto LABEL_10;
    goto LABEL_15;
  }
LABEL_10:
  if ( v17 != v31 )
    free(v17);
  return v18;
}
