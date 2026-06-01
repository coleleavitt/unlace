__int64 __fastcall undesired_chooser_t__::vfunc_12(
        __int64 a1,
        _QWORD *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        size_t a13,
        __int64 a14)
{
  __int64 v14; // rax
  __int64 v17; // rbx
  unsigned int v18; // r15d
  _QWORD *v19; // rcx
  __int64 v20; // rax
  size_t v21; // r11
  const char *v22; // rsi
  void **v23; // r12
  void *v24; // r15
  const void *v26; // r9
  void *v27; // rdi
  const char *v28; // r11
  void *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-78h]
  size_t v32; // [rsp+8h] [rbp-70h]
  size_t v33; // [rsp+8h] [rbp-70h]
  size_t v34; // [rsp+8h] [rbp-70h]
  size_t v35; // [rsp+10h] [rbp-68h]
  const char *v36; // [rsp+10h] [rbp-68h]
  const void *v37; // [rsp+18h] [rbp-60h]
  void *dest; // [rsp+20h] [rbp-58h] BYREF
  __int128 v39; // [rsp+28h] [rbp-50h]
  unsigned __int64 v40; // [rsp+38h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v14 = a2[1];
  v39 = 0;
  dest = nullptr;
  LOBYTE(v31) = v14;
  if ( v14 )
  {
    v17 = 0;
    v18 = 0;
    do
    {
      while ( 1 )
      {
        v19 = *(_QWORD **)(a1 + 184);
        v20 = *v19 + 24LL * *(_QWORD *)(*a2 + 8 * v17);
        if ( (void **)v20 != &dest )
        {
          a13 = *(_QWORD *)(v20 + 8);
          if ( a13 && (v21 = a13 - 1, a13 != 1) )
          {
            v26 = *(const void **)v20;
            v27 = dest;
            if ( *((_QWORD *)&v39 + 1) < a13 )
            {
              v37 = *(const void **)v20;
              v35 = a13 - 1;
              v33 = *(_QWORD *)(v20 + 8);
              dest = (void *)qvector_reserve(&dest, dest, v33, 1);
              v26 = v37;
              v27 = dest;
              v21 = v35;
              a13 = v33;
            }
            *(_QWORD *)&v39 = a13;
            v32 = a13;
            memmove(v27, v26, v21);
            a13 = v32;
            *((char *)dest + v32 - 1) = 0;
          }
          else
          {
            *(_QWORD *)&v39 = 0;
          }
        }
        v22 = &byte_5;
        if ( (unsigned __int8)sub_196F50(
                                (int)&dest,
                                5,
                                (int)"Please enter file path",
                                (__int64)v19,
                                a13,
                                a14,
                                (__m128)0LL,
                                a4,
                                a5,
                                a6,
                                a7,
                                a8,
                                a9,
                                a10,
                                v31) )
          break;
        if ( v31 == ++v17 )
          goto LABEL_14;
      }
      v23 = (void **)(**(_QWORD **)(a1 + 184) + 24LL * *(_QWORD *)(*a2 + 8 * v17));
      if ( v23 != &dest )
      {
        v24 = (void *)v39;
        if ( (_QWORD)v39 && (a13 = v39 - 1, (_QWORD)v39 != 1) )
        {
          v28 = (const char *)dest;
          v29 = *v23;
          if ( (unsigned __int64)v23[2] < (unsigned __int64)v39 )
          {
            v36 = (const char *)dest;
            v34 = v39 - 1;
            v30 = qvector_reserve(v23, *v23, v39, 1);
            *v23 = (void *)v30;
            v28 = v36;
            v29 = (void *)v30;
            a13 = v34;
          }
          v23[1] = v24;
          v22 = v28;
          memmove(v29, v28, a13);
          *((_BYTE *)v24 + (_QWORD)*v23 - 1) = 0;
        }
        else
        {
          v23[1] = nullptr;
        }
      }
      v18 = 1;
      ++v17;
    }
    while ( v31 != v17 );
LABEL_14:
    if ( dest )
    {
      *(_QWORD *)&v39 = 0;
      qfree(dest, v22);
    }
  }
  else
  {
    return 0;
  }
  return v18;
}
