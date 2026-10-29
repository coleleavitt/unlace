unsigned __int64 __fastcall sub_1DC9300(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  _QWORD *v8; // r15
  unsigned __int16 *v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int16 *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // r8
  unsigned __int64 *v15; // r14
  unsigned int v16; // eax
  unsigned __int16 *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  unsigned __int64 v22; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v23; // [rsp+18h] [rbp-D0h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-C0h]
  _BYTE v26[184]; // [rsp+30h] [rbp-B8h] BYREF

  v8 = *(_QWORD **)(a2 + 24);
  if ( v8 )
  {
    v9 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 24), a3, a4, a5, a6, a7, a8);
    v8 = (_QWORD *)((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFELL);
    if ( v9 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      return 0;
  }
  v10 = *(_QWORD *)(a2 + 32);
  v22 = v10;
  if ( v10 )
  {
    v11 = sub_1DC71F0(a1, v10, a3, a4, a5, a6, a7, a8);
    if ( v11 != (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
      v22 = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  v12 = *(unsigned int *)(a2 + 16);
  v25 = 0x1000000000LL;
  ptr = v26;
  if ( v12 > 0x10 )
  {
    sub_2237220(&ptr, v26, v12, 8);
    v12 = *(unsigned int *)(a2 + 16);
  }
  v13 = a2 + 8 * v12 + 72;
  v14 = a2 + 72;
  if ( v13 == a2 + 72 )
  {
    v16 = v25;
LABEL_16:
    v20 = sub_1B3BC90(
            *(__int64 **)(*a1 + 760),
            v8,
            v22,
            *(unsigned int *)(a2 + 52),
            *(unsigned int *)(a2 + 60),
            *(_DWORD *)(a2 + 56),
            a7,
            a8,
            *(_DWORD *)(a2 + 64),
            (__int64 *)ptr,
            v16,
            *(_DWORD *)a2,
            *(_DWORD *)(a2 + 12),
            *(_DWORD *)(a2 + 40),
            *(_DWORD *)(a2 + 4));
  }
  else
  {
    v15 = (unsigned __int64 *)(a2 + 72);
    while ( 1 )
    {
      v17 = sub_1DC71F0(a1, *v15, v12, a4, v14, a6, a7, a8);
      if ( v17 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        break;
      a4 = (unsigned int)v25;
      v18 = (unsigned __int64)v17 & 0xFFFFFFFFFFFFFFFELL;
      v19 = (unsigned int)v25 + 1LL;
      if ( v19 <= HIDWORD(v25) )
      {
        v12 = (unsigned __int64)ptr;
      }
      else
      {
        v23 = v18;
        sub_2237220(&ptr, v26, v19, 8);
        a4 = (unsigned int)v25;
        v12 = (unsigned __int64)ptr;
        v18 = v23;
      }
      *(_QWORD *)(v12 + 8 * a4) = v18;
      ++v15;
      v16 = v25 + 1;
      LODWORD(v25) = v25 + 1;
      if ( (unsigned __int64 *)v13 == v15 )
        goto LABEL_16;
    }
    v20 = 0;
  }
  if ( ptr != v26 )
    free(ptr);
  return v20;
}
