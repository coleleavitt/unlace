unsigned __int64 __fastcall sub_1C826C0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // rbx
  unsigned __int64 *v9; // r15
  unsigned __int16 *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int16 *v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v16; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+18h] [rbp-C0h]
  _BYTE v19[184]; // [rsp+20h] [rbp-B8h] BYREF

  v7 = *(unsigned int *)(a2 + 16);
  v18 = 0x1000000000LL;
  ptr = v19;
  if ( v7 > 0x10 )
  {
    sub_2237220(&ptr, v19, v7, 8);
    v7 = *(unsigned int *)(a2 + 16);
  }
  v8 = (unsigned __int64 *)(a2 + 8 * v7 + 24);
  v9 = (unsigned __int64 *)(a2 + 24);
  if ( v8 != (unsigned __int64 *)(a2 + 24) )
  {
    while ( 1 )
    {
      v10 = sub_1C7CFE0(a1, *v9, a3, a4, v7, a6, a7);
      if ( v10 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_12;
      a6 = (unsigned int)v18;
      v11 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL;
      v12 = (unsigned int)v18 + 1LL;
      if ( v12 <= HIDWORD(v18) )
      {
        v7 = (unsigned __int64)ptr;
      }
      else
      {
        v16 = v11;
        sub_2237220(&ptr, v19, v12, 8);
        a6 = (unsigned int)v18;
        v7 = (unsigned __int64)ptr;
        v11 = v16;
      }
      ++v9;
      *(_QWORD *)(v7 + 8 * a6) = v11;
      LODWORD(v18) = v18 + 1;
      if ( v8 == v9 )
      {
        v8 = (unsigned __int64 *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24);
        break;
      }
    }
  }
  v13 = sub_1C7CFE0(a1, *v8, a3, a4, v7, a6, a7);
  if ( v13 == (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
LABEL_12:
    v14 = 0;
    goto LABEL_13;
  }
  v14 = sub_1B3C110(
          *(__int64 **)(*a1 + 760),
          (__int64 *)ptr,
          (unsigned int)v18,
          (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL,
          *(_DWORD *)a2,
          *(_DWORD *)(a2 + 12),
          a3,
          a4,
          *(_DWORD *)(a2 + 20),
          *(_DWORD *)(a2 + 4));
LABEL_13:
  if ( ptr != v19 )
    free(ptr);
  return v14;
}
