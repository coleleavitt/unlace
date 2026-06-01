unsigned __int64 __fastcall sub_1DCAA00(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rdx
  __int64 v9; // rbp
  unsigned __int64 *v10; // r15
  unsigned __int16 *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int16 *v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v17; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+18h] [rbp-C0h]
  _BYTE v20[184]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = *(unsigned int *)(a2 + 16);
  v19 = 0x1000000000LL;
  ptr = v20;
  if ( v8 > 0x10 )
  {
    sub_2237220(&ptr, v20, v8, 8);
    v8 = *(unsigned int *)(a2 + 16);
  }
  v9 = a2 + 8 * v8 + 64;
  v10 = (unsigned __int64 *)(a2 + 64);
  if ( v9 != a2 + 64 )
  {
    while ( 1 )
    {
      v11 = sub_1DC71F0(a1, *v10, v8, a6, a7, a8, a3, a4);
      if ( v11 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_12;
      a6 = (unsigned int)v19;
      v12 = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL;
      v13 = (unsigned int)v19 + 1LL;
      if ( v13 <= HIDWORD(v19) )
      {
        v8 = (unsigned __int64)ptr;
      }
      else
      {
        v17 = v12;
        sub_2237220(&ptr, v20, v13, 8);
        a6 = (unsigned int)v19;
        v8 = (unsigned __int64)ptr;
        v12 = v17;
      }
      ++v10;
      *(_QWORD *)(v8 + 8 * a6) = v12;
      LODWORD(v19) = v19 + 1;
      if ( (unsigned __int64 *)v9 == v10 )
      {
        v8 = *(unsigned int *)(a2 + 16);
        break;
      }
    }
  }
  v14 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 40 * v8 + 64), v8, a6, a7, a8, a3, a4);
  if ( v14 == (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
LABEL_12:
    v15 = 0;
    goto LABEL_13;
  }
  v15 = sub_1B43520(
          *(__int64 **)(*a1 + 760),
          (__int64 *)ptr,
          (unsigned int)v19,
          (_DWORD *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL),
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
  if ( ptr != v20 )
    free(ptr);
  return v15;
}
