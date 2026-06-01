__int64 *__fastcall sub_F5F3E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 *v14; // rcx
  __m128i si128; // xmm0
  void **v16; // r8
  __int64 v17; // r15
  __int64 v18; // rbx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // dl
  __int64 v22; // r15
  unsigned __int8 v23; // si
  __int64 v24; // rdx
  unsigned __int8 v25; // al
  __int64 v26; // rbx
  unsigned __int8 v27; // al
  unsigned __int8 v28; // dl
  __int64 v29; // rbx
  __int64 v30; // r15
  unsigned __int8 v31; // si
  unsigned __int64 v32; // rdx
  unsigned __int8 v33; // al
  unsigned __int64 v34; // rdi
  __int64 *v35; // [rsp+8h] [rbp-90h]
  __int64 *v36; // [rsp+10h] [rbp-88h]
  __int64 *v37; // [rsp+10h] [rbp-88h]
  __int64 *v38; // [rsp+10h] [rbp-88h]
  __int64 *v39; // [rsp+10h] [rbp-88h]
  void **v40; // [rsp+18h] [rbp-80h]
  void **v41; // [rsp+18h] [rbp-80h]
  void **v42; // [rsp+18h] [rbp-80h]
  void **v43; // [rsp+18h] [rbp-80h]
  __m128i v44; // [rsp+20h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v46; // [rsp+40h] [rbp-58h] BYREF

  v14 = (__int64 *)a1;
  *(_QWORD *)a1 = a1 + 24;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  *(_QWORD *)(a1 + 64) = a1 + 80;
  v16 = ptr;
  *(_QWORD *)(a1 + 72) = 0x600000000LL;
  ptr[0] = &v46;
  *(__m128i *)(a1 + 8) = si128;
  ptr[1] = (void *)0x100000000LL;
  if ( a12 && a8 )
  {
    v17 = a10;
    v18 = a14;
    if ( a10 )
    {
      if ( a14 )
      {
        v29 = 0;
        v30 = 0;
        do
        {
          v31 = *(_BYTE *)(a11 + v29);
          v32 = *(_QWORD *)(a9 + 8 * v30);
          v33 = *(_BYTE *)(a7 + v30);
          v34 = *(_QWORD *)(a13 + 8 * v29);
          v44.m128i_i8[0] = v33;
          v44.m128i_i64[1] = v32;
          if ( v33 < v31 || v33 == v31 && v34 > v32 )
          {
            ++v30;
          }
          else
          {
            ++v29;
            if ( v34 >= v32 && v33 <= v31 )
            {
              v42 = v16;
              v38 = v14;
              ++v30;
              sub_F5EEE0(v14, &v44, (__int64)v16);
              v16 = v42;
              v14 = v38;
            }
          }
        }
        while ( v30 != a8 && a12 != v29 );
      }
      else
      {
        v22 = 0;
        do
        {
          v23 = *(_BYTE *)(a11 + v22);
          v24 = *(_QWORD *)(a9 + 8 * v18);
          v25 = *(_BYTE *)(a7 + v18);
          v44.m128i_i64[1] = v24;
          v44.m128i_i8[0] = v25;
          if ( v25 < v23 )
          {
            ++v18;
          }
          else
          {
            ++v22;
            if ( !v24 && v25 <= v23 )
            {
              v40 = v16;
              v36 = v14;
              ++v18;
              sub_F5EEE0(v14, &v44, (__int64)v16);
              v16 = v40;
              v14 = v36;
            }
          }
        }
        while ( a12 != v22 && a8 != v18 );
      }
    }
    else
    {
      if ( !a14 )
      {
        while ( 1 )
        {
          v19 = *(_BYTE *)(a7 + v18);
          v20 = *(_BYTE *)(a11 + v17);
          v44.m128i_i64[1] = 0;
          v44.m128i_i8[0] = v19;
          if ( v19 >= v20 )
          {
            ++v17;
            if ( v19 <= v20 )
            {
              v43 = v16;
              v39 = v14;
              ++v18;
              sub_F5EEE0(v14, &v44, (__int64)v16);
              v14 = v39;
              v16 = v43;
            }
            if ( a12 == v17 )
              goto LABEL_12;
          }
          else
          {
            ++v18;
            if ( a12 == v17 )
              goto LABEL_12;
          }
          if ( a8 == v18 )
            goto LABEL_12;
        }
      }
      v26 = 0;
      do
      {
        v27 = *(_BYTE *)(a7 + v17);
        v28 = *(_BYTE *)(a11 + v26);
        v44.m128i_i64[1] = 0;
        v44.m128i_i8[0] = v27;
        if ( v27 < v28 || *(_QWORD *)(a13 + 8 * v26) && v27 == v28 )
        {
          ++v17;
        }
        else
        {
          ++v26;
          if ( v27 <= v28 )
          {
            v41 = v16;
            v37 = v14;
            ++v17;
            sub_F5EEE0(v14, &v44, (__int64)v16);
            v14 = v37;
            v16 = v41;
          }
        }
      }
      while ( a12 != v26 && a8 != v17 );
    }
LABEL_12:
    if ( ptr[0] != v16 + 2 )
    {
      v35 = v14;
      free(ptr[0]);
      return v35;
    }
  }
  return v14;
}
