__int64 __fastcall sub_1DC8510(
        __int64 *a1,
        __int64 a2,
        void *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 *v8; // rbx
  unsigned __int64 *v9; // r12
  unsigned __int16 *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  _BYTE *v15; // rcx
  unsigned int v16; // r8d
  unsigned __int64 v17; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int64 v19; // [rsp+18h] [rbp-70h]
  _BYTE v20[104]; // [rsp+20h] [rbp-68h] BYREF

  v8 = *(unsigned __int64 **)(a2 + 64);
  v19 = 0x600000000LL;
  v9 = &v8[*(unsigned int *)(a2 + 56)];
  ptr = v20;
  if ( v9 == v8 )
  {
    v15 = v20;
    v16 = 0;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v10 = sub_1DC71F0(a1, *v8, (unsigned __int64)a3, a4, a5, a6, a7, a8);
        if ( (unsigned __int64)v10 > 1 )
          break;
        if ( v9 == ++v8 )
          goto LABEL_8;
      }
      a4 = (unsigned int)v19;
      v11 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL;
      v12 = (unsigned int)v19 + 1LL;
      if ( v12 > HIDWORD(v19) )
      {
        v17 = v11;
        sub_2237220(&ptr, v20, v12, 8);
        a4 = (unsigned int)v19;
        v11 = v17;
      }
      a3 = ptr;
      ++v8;
      *((_QWORD *)ptr + a4) = v11;
      LODWORD(v19) = v19 + 1;
    }
    while ( v9 != v8 );
LABEL_8:
    v16 = v19;
    v15 = ptr;
  }
  v13 = sub_B30C60(
          *(_QWORD *)(*a1 + 248),
          *(const void **)(a2 + 48),
          *(unsigned int *)(a2 + 40),
          v15,
          v16,
          *(_QWORD *)(a2 + 24),
          0);
  if ( ptr != v20 )
    free(ptr);
  return v13;
}
