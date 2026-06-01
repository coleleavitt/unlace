__int64 __fastcall sub_1D311F0(
        __int64 *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128i a9,
        __m128i a10,
        double a11,
        double a12,
        __m128 a13,
        __m128i a14)
{
  __int64 v14; // r14
  void **p_ptr; // r9
  __int64 *v16; // rbx
  _BYTE *v17; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rbp
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  const __m128i **v24; // rbx
  __int64 v26; // r12
  int v27; // ebp
  char v28; // al
  unsigned __int64 v29; // rax
  void **v30; // [rsp+8h] [rbp-70h]
  __int64 *v31; // [rsp+8h] [rbp-70h]
  _BYTE *v32; // [rsp+10h] [rbp-68h]
  __int64 v33; // [rsp+10h] [rbp-68h]
  unsigned __int64 v34; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int64 v36; // [rsp+28h] [rbp-50h]
  _BYTE v37[72]; // [rsp+30h] [rbp-48h] BYREF

  v14 = sub_1D2FA60(a1, *(unsigned __int16 **)(a2 + 8), a3, a7, a8, a9, a10, a11, a12, a13, a14, a4, a5, a6);
  if ( v14 == 1 )
    return v14;
  p_ptr = &ptr;
  v16 = (__int64 *)(a2 + 16);
  v17 = v37;
  v18 = v14 & 0xFFFFFFFFFFFFFFFELL;
  v19 = *(_DWORD *)a2 >> 9;
  ptr = v37;
  v20 = a2 + 16 + 8 * v19;
  v36 = 0x100000000LL;
  if ( a2 + 16 == v20 )
  {
    v24 = (const __m128i **)v37;
    if ( *(_QWORD *)(a2 + 8) != v18 )
      goto LABEL_10;
  }
  else
  {
    do
    {
      v21 = *v16;
      if ( *v16 )
      {
        v22 = (unsigned int)v36;
        v23 = (unsigned int)v36 + 1LL;
        if ( v23 > HIDWORD(v36) )
        {
          v34 = v18;
          v32 = v17;
          v30 = p_ptr;
          sub_2237220(p_ptr, v17, v23, 8);
          v22 = (unsigned int)v36;
          v18 = v34;
          v17 = v32;
          p_ptr = v30;
        }
        *((_QWORD *)ptr + v22) = v21;
        LODWORD(v36) = v36 + 1;
      }
      ++v16;
    }
    while ( (__int64 *)v20 != v16 );
    v24 = (const __m128i **)ptr;
    if ( *(_QWORD *)(a2 + 8) != v18 )
    {
      if ( (_DWORD)v36 )
      {
        v26 = (unsigned int)v36;
        v33 = (__int64)p_ptr;
        v31 = (__int64 *)v18;
        v27 = *(_DWORD *)(a2 + 4);
        v14 = 1;
        v28 = sub_1C5F970(*a1, ptr, (unsigned int)v36);
        p_ptr = (void **)v33;
        if ( !v28 )
        {
          v29 = sub_1C497E0(*a1, v27, v24, v26, v31, v33, *(double *)a7.m128_u64);
          p_ptr = (void **)v33;
          v14 = v29;
        }
        v24 = (const __m128i **)ptr;
      }
      goto LABEL_10;
    }
  }
  v14 = a2;
LABEL_10:
  if ( v24 != (const __m128i **)(p_ptr + 2) )
    free(v24);
  return v14;
}
