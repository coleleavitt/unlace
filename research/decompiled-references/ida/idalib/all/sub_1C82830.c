unsigned __int64 __fastcall sub_1C82830(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  _QWORD *v7; // r15
  unsigned __int16 *v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int16 *v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // r8
  unsigned __int64 *v14; // r14
  unsigned int v15; // eax
  unsigned __int16 *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int64 v21; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v22; // [rsp+18h] [rbp-D0h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+28h] [rbp-C0h]
  _BYTE v25[184]; // [rsp+30h] [rbp-B8h] BYREF

  v7 = *(_QWORD **)(a2 + 24);
  if ( v7 )
  {
    v8 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 24), a6, a7, a3, a4, a5);
    v7 = (_QWORD *)((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFELL);
    if ( v8 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      return 0;
  }
  v9 = *(_QWORD *)(a2 + 32);
  v21 = v9;
  if ( v9 )
  {
    v10 = sub_1C7CFE0(a1, v9, a6, a7, a3, a4, a5);
    if ( v10 != (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
      v21 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  v11 = *(unsigned int *)(a2 + 16);
  v24 = 0x1000000000LL;
  ptr = v25;
  if ( v11 > 0x10 )
  {
    sub_2237220(&ptr, v25, v11, 8);
    v11 = *(unsigned int *)(a2 + 16);
  }
  v12 = a2 + 8 * v11 + 72;
  v13 = a2 + 72;
  if ( v12 == a2 + 72 )
  {
    v15 = v24;
LABEL_16:
    v19 = sub_1B3BC90(
            *(__int64 **)(*a1 + 760),
            v7,
            v21,
            *(unsigned int *)(a2 + 52),
            *(unsigned int *)(a2 + 60),
            *(_DWORD *)(a2 + 56),
            a6,
            a7,
            *(_DWORD *)(a2 + 64),
            (__int64 *)ptr,
            v15,
            *(_DWORD *)a2,
            *(_DWORD *)(a2 + 12),
            *(_DWORD *)(a2 + 40),
            *(_DWORD *)(a2 + 4));
  }
  else
  {
    v14 = (unsigned __int64 *)(a2 + 72);
    while ( 1 )
    {
      v16 = sub_1C7CFE0(a1, *v14, a6, a7, v11, a4, v13);
      if ( v16 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        break;
      a4 = (unsigned int)v24;
      v17 = (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFELL;
      v18 = (unsigned int)v24 + 1LL;
      if ( v18 <= HIDWORD(v24) )
      {
        v11 = (unsigned __int64)ptr;
      }
      else
      {
        v22 = v17;
        sub_2237220(&ptr, v25, v18, 8);
        a4 = (unsigned int)v24;
        v11 = (unsigned __int64)ptr;
        v17 = v22;
      }
      *(_QWORD *)(v11 + 8 * a4) = v17;
      ++v14;
      v15 = v24 + 1;
      LODWORD(v24) = v24 + 1;
      if ( (unsigned __int64 *)v12 == v14 )
        goto LABEL_16;
    }
    v19 = 0;
  }
  if ( ptr != v25 )
    free(ptr);
  return v19;
}
