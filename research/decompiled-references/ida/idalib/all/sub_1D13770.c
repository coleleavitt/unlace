__int64 __fastcall sub_1D13770(
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
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
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
  v8 = a2 + 8 * v7 + 40;
  v9 = (unsigned __int16 **)(a2 + 40);
  if ( v8 == a2 + 40 )
  {
    v10 = (unsigned int)v18;
LABEL_11:
    v14 = sub_1B3A940(
            *(__int64 **)(*a1 + 760),
            *(_DWORD *)(a2 + 20),
            *(_DWORD *)(a2 + 24),
            *(_DWORD *)(a2 + 28),
            (unsigned __int64 *)ptr,
            v10,
            a3,
            a4,
            *(_DWORD *)a2,
            *(_DWORD *)(a2 + 12),
            *(_DWORD *)(a2 + 4));
  }
  else
  {
    while ( 1 )
    {
      v11 = sub_1D11200(a1, *v9, a3, a4, v7, a6, a7);
      if ( v11 == 1 )
        break;
      a6 = (unsigned int)v18;
      v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v13 = (unsigned int)v18 + 1LL;
      if ( v13 <= HIDWORD(v18) )
      {
        v7 = (unsigned __int64)ptr;
      }
      else
      {
        v16 = v12;
        sub_2237220(&ptr, v19, v13, 8);
        a6 = (unsigned int)v18;
        v7 = (unsigned __int64)ptr;
        v12 = v16;
      }
      *(_QWORD *)(v7 + 8 * a6) = v12;
      ++v9;
      v10 = (unsigned int)(v18 + 1);
      LODWORD(v18) = v18 + 1;
      if ( (unsigned __int16 **)v8 == v9 )
        goto LABEL_11;
    }
    v14 = 0;
  }
  if ( ptr != v19 )
    free(ptr);
  return v14;
}
