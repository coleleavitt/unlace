__int64 __fastcall sub_8A26C0(__int64 a1, const char *a2, __int64 *a3, _QWORD *a4, __int64 *a5, int a6)
{
  char *v7; // rbp
  __int64 v9; // r12
  __int64 v10; // rax
  size_t v11; // r15
  size_t v12; // r15
  _QWORD *v13; // r12
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // r13d
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __m128i v20; // xmm0
  void *v22; // rax
  const void *v23; // rsi
  void *v24; // rax
  __int64 v26; // rax
  __int64 v27; // r9
  __int128 v28; // xmm0
  __int64 v29; // r13
  __int64 v30; // rdx
  void *v31; // rax
  char v32; // [rsp+Bh] [rbp-E5h]
  size_t n; // [rsp+10h] [rbp-E0h]
  const void **v35; // [rsp+18h] [rbp-D8h]
  __int64 v36; // [rsp+20h] [rbp-D0h]
  __int64 (__fastcall **v37)(); // [rsp+28h] [rbp-C8h] BYREF
  char v38; // [rsp+30h] [rbp-C0h]
  __int64 i; // [rsp+38h] [rbp-B8h]
  __int128 v40; // [rsp+40h] [rbp-B0h]
  __int64 v41; // [rsp+50h] [rbp-A0h]
  __m128i v42; // [rsp+58h] [rbp-98h]
  void *ptr; // [rsp+68h] [rbp-88h]
  __int128 v44; // [rsp+70h] [rbp-80h]
  void *v45; // [rsp+80h] [rbp-70h]
  __int128 v46; // [rsp+88h] [rbp-68h]
  __int64 v47; // [rsp+98h] [rbp-58h]
  int v48; // [rsp+A0h] [rbp-50h]
  char v49; // [rsp+A4h] [rbp-4Ch]
  unsigned __int64 v50; // [rsp+B0h] [rbp-40h]

  v7 = (char *)a2;
  v50 = __readfsqword(0x28u);
  v38 = 45;
  v40 = 0;
  i = 0;
  v32 = (a2 != nullptr) | (2 * (a3 != nullptr));
  v9 = a4[1];
  v37 = &off_2B147B8;
  if ( v9 )
  {
    v26 = qalloc_or_throw(24 * v9, a2);
    *((_QWORD *)&v40 + 1) = v9;
    v27 = 0;
    v28 = 0;
    for ( i = v26; ; v26 = i )
    {
      v29 = v26 + 24 * v27;
      v30 = *a4 + 24 * v27;
      *(_QWORD *)v29 = 0;
      *(_OWORD *)(v29 + 8) = v28;
      if ( *(_QWORD *)(v30 + 8) )
      {
        v36 = v27;
        v35 = (const void **)v30;
        n = *(_QWORD *)(v30 + 8);
        v31 = (void *)qalloc_or_throw(n, a2);
        *(_QWORD *)v29 = v31;
        *(_QWORD *)(v29 + 16) = n;
        a2 = (const char *)*v35;
        memcpy(v31, *v35, n);
        v28 = 0;
        v27 = v36 + 1;
        *(_QWORD *)(v29 + 8) = n;
        if ( v9 == v36 + 1 )
        {
LABEL_19:
          *(_QWORD *)&v40 = v9;
          break;
        }
      }
      else if ( v9 == ++v27 )
      {
        goto LABEL_19;
      }
    }
  }
  v10 = *a5;
  ptr = nullptr;
  v11 = a5[4];
  v42 = _mm_loadu_si128((const __m128i *)(a5 + 1));
  v41 = v10;
  v44 = 0;
  if ( v11 )
  {
    v24 = (void *)qalloc_or_throw(v11, a2);
    a2 = (const char *)a5[3];
    ptr = v24;
    *((_QWORD *)&v44 + 1) = v11;
    memcpy(v24, a2, v11);
    *(_QWORD *)&v44 = v11;
  }
  v12 = a5[7];
  v45 = nullptr;
  v46 = 0;
  if ( v12 )
  {
    v22 = (void *)qalloc_or_throw(v12, a2);
    v23 = (const void *)a5[6];
    v45 = v22;
    *((_QWORD *)&v46 + 1) = v12;
    memcpy(v22, v23, v12);
    *(_QWORD *)&v46 = v12;
  }
  v47 = a5[9];
  v48 = a6;
  v49 = v32;
  v13 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(
                    a1 + 40,
                    &v37);
  v16 = sub_89A5C0((_QWORD *)(a1 + 40), (__int64)v13, 46, nullptr, v14, v15);
  if ( !v16 )
  {
    if ( v7 )
    {
      v17 = *(_QWORD *)v7;
      v18 = _mm_loadu_si128((const __m128i *)(v7 + 8));
      *(_QWORD *)v7 = v13[2];
      *((_QWORD *)v7 + 1) = v13[3];
      *((_QWORD *)v7 + 2) = v13[4];
      v13[2] = v17;
      *(__m128i *)(v13 + 3) = v18;
    }
    if ( a3 )
    {
      v19 = *a3;
      v20 = _mm_loadu_si128((const __m128i *)(a3 + 1));
      *a3 = v13[5];
      a3[1] = v13[6];
      a3[2] = v13[7];
      v13[5] = v19;
      *((__m128i *)v13 + 3) = v20;
    }
  }
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *))(*v13 + 8LL))(v13);
  sub_8B6050(&v37);
  return v16;
}

