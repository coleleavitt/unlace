unsigned __int64 __fastcall sub_1DC9D20(
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
  _QWORD *v11; // rdx
  unsigned __int16 *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
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
  v9 = a2 + 8 * v8 + 24;
  v10 = (unsigned __int64 *)(a2 + 24);
  if ( v9 == a2 + 24 )
  {
    v8 = (unsigned int)v19;
LABEL_11:
    v15 = sub_1B23EA0(
            *(__int64 **)(*a1 + 760),
            (unsigned __int64 *)ptr,
            v8,
            *(_DWORD *)a2,
            *(_DWORD *)(a2 + 12),
            *(_DWORD *)(a2 + 4),
            *(double *)a3.m128_u64);
  }
  else
  {
    while ( 1 )
    {
      v12 = sub_1DC71F0(a1, *v10, v8, a6, a7, a8, a3, a4);
      if ( v12 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        break;
      a6 = (unsigned int)v19;
      v13 = (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFELL;
      v14 = (unsigned int)v19 + 1LL;
      if ( v14 <= HIDWORD(v19) )
      {
        v11 = ptr;
      }
      else
      {
        v17 = v13;
        sub_2237220(&ptr, v20, v14, 8);
        a6 = (unsigned int)v19;
        v11 = ptr;
        v13 = v17;
      }
      v11[a6] = v13;
      ++v10;
      v8 = (unsigned int)(v19 + 1);
      LODWORD(v19) = v19 + 1;
      if ( (unsigned __int64 *)v9 == v10 )
        goto LABEL_11;
    }
    v15 = 0;
  }
  if ( ptr != v20 )
    free(ptr);
  return v15;
}
