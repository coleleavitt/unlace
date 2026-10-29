__int64 __fastcall sub_8C6400(__int64 a1, __int64 *a2, __int64 *a3, _QWORD *a4, __int64 *a5, int a6)
{
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
  const void *v25; // rsi
  __int64 v27; // rax
  __int64 v28; // r9
  __int128 v29; // xmm0
  __int64 v30; // r13
  __int64 v31; // rdx
  void *v32; // rax
  char v33; // [rsp+Bh] [rbp-E5h]
  size_t n; // [rsp+10h] [rbp-E0h]
  const void **v36; // [rsp+18h] [rbp-D8h]
  __int64 v37; // [rsp+20h] [rbp-D0h]
  __int64 (__fastcall **v38)(); // [rsp+28h] [rbp-C8h] BYREF
  char v39; // [rsp+30h] [rbp-C0h]
  __int64 i; // [rsp+38h] [rbp-B8h]
  __int128 v41; // [rsp+40h] [rbp-B0h]
  __int64 v42; // [rsp+50h] [rbp-A0h]
  __m128i v43; // [rsp+58h] [rbp-98h]
  void *ptr; // [rsp+68h] [rbp-88h]
  __int128 v45; // [rsp+70h] [rbp-80h]
  void *v46; // [rsp+80h] [rbp-70h]
  __int128 v47; // [rsp+88h] [rbp-68h]
  __int64 v48; // [rsp+98h] [rbp-58h]
  int v49; // [rsp+A0h] [rbp-50h]
  char v50; // [rsp+A4h] [rbp-4Ch]
  unsigned __int64 v51; // [rsp+B0h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v39 = 45;
  v41 = 0;
  i = 0;
  v33 = (a2 != nullptr) | (2 * (a3 != nullptr));
  v9 = a4[1];
  v38 = &off_2B3E758;
  if ( v9 )
  {
    v27 = qalloc_or_throw(24 * v9);
    *((_QWORD *)&v41 + 1) = v9;
    v28 = 0;
    v29 = 0;
    for ( i = v27; ; v27 = i )
    {
      v30 = v27 + 24 * v28;
      v31 = *a4 + 24 * v28;
      *(_QWORD *)v30 = 0;
      *(_OWORD *)(v30 + 8) = v29;
      if ( *(_QWORD *)(v31 + 8) )
      {
        v37 = v28;
        v36 = (const void **)v31;
        n = *(_QWORD *)(v31 + 8);
        v32 = (void *)qalloc_or_throw(n);
        *(_QWORD *)v30 = v32;
        *(_QWORD *)(v30 + 16) = n;
        memcpy(v32, *v36, n);
        v29 = 0;
        v28 = v37 + 1;
        *(_QWORD *)(v30 + 8) = n;
        if ( v9 == v37 + 1 )
        {
LABEL_19:
          *(_QWORD *)&v41 = v9;
          break;
        }
      }
      else if ( v9 == ++v28 )
      {
        goto LABEL_19;
      }
    }
  }
  v10 = *a5;
  ptr = nullptr;
  v11 = a5[4];
  v43 = _mm_loadu_si128((const __m128i *)(a5 + 1));
  v42 = v10;
  v45 = 0;
  if ( v11 )
  {
    v24 = (void *)qalloc_or_throw(v11);
    v25 = (const void *)a5[3];
    ptr = v24;
    *((_QWORD *)&v45 + 1) = v11;
    memcpy(v24, v25, v11);
    *(_QWORD *)&v45 = v11;
  }
  v12 = a5[7];
  v46 = nullptr;
  v47 = 0;
  if ( v12 )
  {
    v22 = (void *)qalloc_or_throw(v12);
    v23 = (const void *)a5[6];
    v46 = v22;
    *((_QWORD *)&v47 + 1) = v12;
    memcpy(v22, v23, v12);
    *(_QWORD *)&v47 = v12;
  }
  v48 = a5[9];
  v49 = a6;
  v50 = v33;
  v13 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(
                    a1 + 40,
                    &v38);
  v16 = sub_8BE300((_QWORD *)(a1 + 40), (__int64)v13, 46, nullptr, v14, v15);
  if ( !v16 )
  {
    if ( a2 )
    {
      v17 = *a2;
      v18 = _mm_loadu_si128((const __m128i *)(a2 + 1));
      *a2 = v13[2];
      a2[1] = v13[3];
      a2[2] = v13[4];
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
  sub_8D9D90(&v38);
  return v16;
}
