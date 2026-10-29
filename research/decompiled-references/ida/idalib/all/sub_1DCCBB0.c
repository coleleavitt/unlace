__int64 __fastcall sub_1DCCBB0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // rbp
  void *v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rbp
  int v16; // eax
  unsigned __int64 *v17; // r15
  char v18; // r14
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int16 *v21; // rax
  char *v22; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  unsigned __int16 *v26; // [rsp+0h] [rbp-78h]
  unsigned __int64 v27; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v29; // [rsp+18h] [rbp-60h]
  _BYTE v30[88]; // [rsp+20h] [rbp-58h] BYREF

  v9 = 1;
  v26 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 24) + 32), a3, a4, a5, a6, a7, a8);
  if ( v26 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return v9;
  v13 = *(unsigned int *)(a2 + 24);
  v14 = a2 + 32;
  v29 = 0x400000000LL;
  v15 = a2 + 32 + 8 * v13;
  ptr = v30;
  v16 = v13;
  if ( v15 == a2 + 32 )
  {
    v24 = 0;
    v22 = v30;
LABEL_14:
    v25 = sub_1B11C10(
            *(__int64 **)(*a1 + 760),
            (unsigned __int64)v26 & 0xFFFFFFFFFFFFFFFELL,
            *(_DWORD *)(a2 + 16),
            *(_DWORD *)(a2 + 20),
            v22,
            v24,
            a7,
            a8,
            a2 + 8LL * (unsigned int)(v16 + 1) + 32,
            v13);
    v22 = (char *)ptr;
    v9 = v25;
    if ( ptr == v30 )
      return v9;
    goto LABEL_11;
  }
  v17 = (unsigned __int64 *)(a2 + 32);
  v18 = 0;
  do
  {
    while ( 1 )
    {
      v21 = sub_1DC71F0(a1, *v17, (unsigned __int64)v10, v11, v14, v12, a7, a8);
      if ( v21 != (unsigned __int16 *)((char *)&dword_0 + 1) )
        break;
      ++v17;
      v18 = 1;
      if ( (unsigned __int64 *)v15 == v17 )
        goto LABEL_9;
    }
    v11 = (unsigned int)v29;
    v19 = (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFFELL;
    v20 = (unsigned int)v29 + 1LL;
    if ( v20 > HIDWORD(v29) )
    {
      v27 = v19;
      sub_2237220(&ptr, v30, v20, 8);
      v11 = (unsigned int)v29;
      v19 = v27;
    }
    v10 = ptr;
    ++v17;
    *((_QWORD *)ptr + v11) = v19;
    LODWORD(v29) = v29 + 1;
  }
  while ( (unsigned __int64 *)v15 != v17 );
LABEL_9:
  v22 = (char *)ptr;
  v9 = 1;
  if ( !v18 )
  {
    v13 = *(unsigned int *)(a2 + 24);
    v24 = (unsigned int)v29;
    v16 = *(_DWORD *)(a2 + 24);
    goto LABEL_14;
  }
  if ( ptr != v30 )
LABEL_11:
    free(v22);
  return v9;
}
