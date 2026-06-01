__int64 __fastcall sub_1DCC050(
        __int64 *a1,
        __int64 a2,
        void *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // r12
  __int64 v9; // r13
  unsigned int v10; // ebx
  __int64 v11; // rax
  char v12; // r14
  unsigned int i; // r12d
  unsigned __int64 *v14; // r15
  unsigned __int16 *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  _BYTE *v18; // rcx
  __int64 v19; // rbx
  __int64 v21; // r15
  unsigned int v22; // r8d
  unsigned int v23; // r9d
  __int64 v24; // rax
  __int128 v25; // [rsp-38h] [rbp-F0h]
  char v26; // [rsp+1Bh] [rbp-9Dh]
  unsigned int v27; // [rsp+1Ch] [rbp-9Ch]
  __int64 v28; // [rsp+20h] [rbp-98h]
  unsigned __int64 v29; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v31; // [rsp+38h] [rbp-80h]
  _BYTE v32[120]; // [rsp+40h] [rbp-78h] BYREF

  v8 = a2;
  v9 = *(_QWORD *)(a2 + 32);
  v10 = *(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 20);
  v27 = *(_DWORD *)(a2 + 64);
  v11 = *(_QWORD *)(a2 + 72);
  ptr = v32;
  v28 = v11;
  v31 = 0x800000000LL;
  if ( v10 > 8 )
  {
    sub_2237220(&ptr, v32, v10, 8);
  }
  else if ( !v10 )
  {
    v21 = *a1;
    v18 = v32;
    goto LABEL_14;
  }
  v12 = 0;
  v26 = 0;
  for ( i = 0; i != v10; ++i )
  {
    while ( 1 )
    {
      v14 = (unsigned __int64 *)(v9 + 8LL * i);
      v15 = sub_1DC71F0(a1, *v14, (unsigned __int64)a3, a4, a5, a6, a7, a8);
      if ( (unsigned __int64)v15 > 1 )
        break;
      ++i;
      v12 = 1;
      if ( v10 == i )
        goto LABEL_9;
    }
    a4 = (unsigned int)v31;
    v16 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFELL;
    v26 |= *v14 != v16;
    v17 = (unsigned int)v31 + 1LL;
    if ( v17 > HIDWORD(v31) )
    {
      v29 = v16;
      sub_2237220(&ptr, v32, v17, 8);
      a4 = (unsigned int)v31;
      v16 = v29;
    }
    a3 = ptr;
    *((_QWORD *)ptr + a4) = v16;
    LODWORD(v31) = v31 + 1;
  }
LABEL_9:
  v8 = a2;
  v18 = ptr;
  v19 = 1;
  if ( !v12 )
  {
    v21 = *a1;
    if ( v26 )
    {
LABEL_15:
      v22 = *(_DWORD *)(v8 + 20);
      v23 = *(_DWORD *)(v8 + 16);
      *((_QWORD *)&v25 + 1) = v22 + v23;
      *(_QWORD *)&v25 = *(_QWORD *)(v8 + 80);
      v24 = sub_1C54D50(
              v21,
              *(_DWORD *)(v8 + 8),
              *(_DWORD *)(v8 + 40),
              v28,
              v27,
              v23,
              *(double *)a7.m128_u64,
              *(const void **)(v8 + 48),
              *(_QWORD *)(v8 + 56),
              v22,
              v25,
              *(char **)(v8 + 88),
              *(unsigned int *)(v8 + 24),
              (__int64)v18,
              (unsigned int)v31,
              *(_DWORD *)(v8 + 44));
      v18 = ptr;
      v19 = v24;
      goto LABEL_10;
    }
LABEL_14:
    v19 = v8;
    if ( !*(_DWORD *)(v21 + 12632) )
      goto LABEL_10;
    goto LABEL_15;
  }
LABEL_10:
  if ( v18 != v32 )
    free(v18);
  return v19;
}
