__int64 __fastcall sub_1D16C40(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v8; // rbp
  void *v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rbp
  int v14; // eax
  unsigned __int16 **v15; // r15
  char v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  char *v20; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-78h]
  unsigned __int64 v25; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v27; // [rsp+18h] [rbp-60h]
  _BYTE v28[88]; // [rsp+20h] [rbp-58h] BYREF

  v8 = 1;
  v24 = sub_1D11200(a1, *(unsigned __int16 **)(a2 + 8LL * *(unsigned int *)(a2 + 24) + 32), a6, a7, a3, a4, a5);
  if ( v24 == 1 )
    return v8;
  v11 = *(unsigned int *)(a2 + 24);
  v12 = a2 + 32;
  v27 = 0x400000000LL;
  v13 = a2 + 32 + 8 * v11;
  ptr = v28;
  v14 = v11;
  if ( v13 == a2 + 32 )
  {
    v22 = 0;
    v20 = v28;
LABEL_14:
    v23 = sub_1B11C10(
            *(__int64 **)(*a1 + 760),
            v24 & 0xFFFFFFFFFFFFFFFELL,
            *(_DWORD *)(a2 + 16),
            *(_DWORD *)(a2 + 20),
            v20,
            v22,
            a6,
            a7,
            a2 + 8LL * (unsigned int)(v14 + 1) + 32,
            v11);
    v20 = (char *)ptr;
    v8 = v23;
    if ( ptr == v28 )
      return v8;
    goto LABEL_11;
  }
  v15 = (unsigned __int16 **)(a2 + 32);
  v16 = 0;
  do
  {
    while ( 1 )
    {
      v19 = sub_1D11200(a1, *v15, a6, a7, (__int64)v9, v10, v12);
      if ( v19 != 1 )
        break;
      ++v15;
      v16 = 1;
      if ( (unsigned __int16 **)v13 == v15 )
        goto LABEL_9;
    }
    v10 = (unsigned int)v27;
    v17 = v19 & 0xFFFFFFFFFFFFFFFELL;
    v18 = (unsigned int)v27 + 1LL;
    if ( v18 > HIDWORD(v27) )
    {
      v25 = v17;
      sub_2237220(&ptr, v28, v18, 8);
      v10 = (unsigned int)v27;
      v17 = v25;
    }
    v9 = ptr;
    ++v15;
    *((_QWORD *)ptr + v10) = v17;
    LODWORD(v27) = v27 + 1;
  }
  while ( (unsigned __int16 **)v13 != v15 );
LABEL_9:
  v20 = (char *)ptr;
  v8 = 1;
  if ( !v16 )
  {
    v11 = *(unsigned int *)(a2 + 24);
    v22 = (unsigned int)v27;
    v14 = *(_DWORD *)(a2 + 24);
    goto LABEL_14;
  }
  if ( ptr != v28 )
LABEL_11:
    free(v20);
  return v8;
}
