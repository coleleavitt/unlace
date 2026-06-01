unsigned __int64 __fastcall sub_1D4A3A0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // rbp
  unsigned __int16 **v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
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
  v8 = a2 + 8 * v7 + 64;
  v9 = (unsigned __int16 **)(a2 + 64);
  if ( v8 != a2 + 64 )
  {
    while ( 1 )
    {
      v10 = sub_1D434A0(a1, *v9, a3, a4, v7, a6, a7);
      if ( v10 == 1 )
        goto LABEL_12;
      a6 = (unsigned int)v18;
      v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
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
      if ( (unsigned __int16 **)v8 == v9 )
      {
        v7 = *(unsigned int *)(a2 + 16);
        break;
      }
    }
  }
  v13 = sub_1D434A0(a1, *(unsigned __int16 **)(a2 + 40 * v7 + 64), a3, a4, v7, a6, a7);
  if ( v13 == 1 )
  {
LABEL_12:
    v14 = 0;
    goto LABEL_13;
  }
  v14 = sub_1B43520(
          *(__int64 **)(*a1 + 760),
          (__int64 *)ptr,
          (unsigned int)v18,
          (_DWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL),
          *(_DWORD *)a2,
          *(_DWORD *)(a2 + 12),
          a3,
          a4,
          *(_DWORD *)(a2 + 48),
          *(_DWORD *)(a2 + 52),
          *(_DWORD *)(a2 + 56),
          *(_DWORD *)(a2 + 60),
          *(_DWORD *)(a2 + 4));
LABEL_13:
  if ( ptr != v19 )
    free(ptr);
  return v14;
}
