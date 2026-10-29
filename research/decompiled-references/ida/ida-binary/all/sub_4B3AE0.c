__int64 __fastcall sub_4B3AE0(
        __int64 a1,
        const char *a2,
        __int64 a3,
        const char *a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // r13
  size_t v14; // r12
  __int16 v16; // ax
  __int64 v17; // r12
  char v18; // dl
  __m128 v19; // xmm0
  unsigned int v20; // ebx
  _BYTE *v22; // rsi
  __int64 *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // r12
  __int16 v29; // r12
  double v30; // xmm4_8
  double v31; // xmm5_8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 i; // rbx
  __int64 v37; // rdi
  void *v38; // rax
  char v39; // r12
  _BYTE *v40; // rsi
  __int16 v41; // bx
  double v42; // xmm4_8
  double v43; // xmm5_8
  __int64 v44; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+8h] [rbp-A0h]
  __int64 v46; // [rsp+20h] [rbp-88h] BYREF
  __int128 v47; // [rsp+28h] [rbp-80h]
  __int16 v48; // [rsp+38h] [rbp-70h]
  __int64 v49; // [rsp+40h] [rbp-68h]
  char v50; // [rsp+48h] [rbp-60h]
  __m128 v51; // [rsp+50h] [rbp-58h]
  unsigned __int64 v52; // [rsp+68h] [rbp-40h]

  v12 = (__int64)a2;
  v14 = *(_QWORD *)(a3 + 8);
  v52 = __readfsqword(0x28u);
  v47 = 0;
  v46 = 0;
  if ( v14 )
  {
    v38 = (void *)qalloc_or_throw(v14);
    a2 = *(const char **)a3;
    *((_QWORD *)&v47 + 1) = v14;
    v46 = (__int64)v38;
    memcpy(v38, a2, v14);
    *(_QWORD *)&v47 = v14;
  }
  v16 = *(_WORD *)(a3 + 24);
  v17 = *(_QWORD *)(a3 + 32);
  v18 = *(_BYTE *)(a3 + 40);
  v19 = (__m128)_mm_loadu_si128((const __m128i *)(a3 + 48));
  v48 = v16;
  v49 = v17;
  v50 = v18;
  v51 = v19;
  if ( v16 != 4 )
  {
    if ( v16 != 5 )
    {
      if ( v16 != 3 )
      {
        a2 = a4;
        sub_4B0C20(v12, a4, 1, v19, a6, a7, a8, a9, a10, a11, a12);
        v20 = 0;
        goto LABEL_7;
      }
      if ( v17 > 0 )
      {
        v39 = v17 + 48;
        v40 = (_BYTE *)v46;
        *(_QWORD *)&v47 = 0;
        if ( *((_QWORD *)&v47 + 1) <= 1u )
        {
          v46 = qvector_reserve(&v46, v46, 2, 1);
          v40 = (_BYTE *)v46;
        }
        *(_QWORD *)&v47 = 2;
        *v40 = v39;
        a2 = &s1;
        *(_BYTE *)(v46 + 1) = 0;
        if ( (_QWORD)v47 )
          a2 = (const char *)v46;
        sub_5360B0(&v44, a2, 0);
        v41 = sub_4B31A0((__int64)&v44, *(double *)v19.m128_u64, a6);
        if ( v44 )
        {
          *(_QWORD *)&v45 = 0;
          *(double *)v19.m128_u64 = qfree(v44, a2);
        }
        if ( !v41 )
        {
          a2 = "Illegal hotkey";
          sub_4B0C20(v12, "Illegal hotkey", 0, v19, a6, a7, a8, v42, v43, a11, a12);
        }
      }
      goto LABEL_23;
    }
    v22 = (_BYTE *)v46;
    *(_QWORD *)&v47 = 0;
    if ( *((_QWORD *)&v47 + 1) <= 1u )
    {
      v46 = qvector_reserve(&v46, v46, 2, 1);
      v22 = (_BYTE *)v46;
    }
    *(_QWORD *)&v47 = 2;
    *v22 = v17;
    *(_BYTE *)(v46 + 1) = 0;
  }
  v44 = 0;
  a2 = &s1;
  v45 = 0;
  if ( (_QWORD)v47 )
    a2 = (const char *)v46;
  sub_536F00(&v44, a2, 0);
  if ( (_QWORD)v45 )
  {
    v27 = 0;
    do
    {
      v29 = sub_4B31A0(v44 + 24 * v27, 0.0, a6);
      if ( !v29 )
        sub_4B0C20(v12, "Illegal hotkey", 0, (__m128)0LL, a6, a7, a8, v30, v31, a11, a12);
      v32 = *(_QWORD *)(a1 + 8);
      a2 = *(const char **)a1;
      v23 = (__int64 *)(v32 + 1);
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v32 + 1) )
      {
        v33 = qvector_reserve(a1, a2, v23, 2);
        *(_QWORD *)a1 = v33;
        a2 = (const char *)v33;
        v32 = *(_QWORD *)(a1 + 8);
      }
      *(_WORD *)&a2[2 * v32] = v29;
      v28 = v45;
      ++v27;
      ++*(_QWORD *)(a1 + 8);
    }
    while ( v27 < v28 );
    v34 = v44;
    v35 = v44;
    if ( v44 )
    {
      if ( v28 )
      {
        for ( i = 0; i != v28; ++i )
        {
          v23 = (__int64 *)(v34 + 24 * i);
          v37 = *v23;
          if ( *v23 )
          {
            v23[1] = 0;
            qfree(v37, a2);
            v34 = v44;
          }
          v35 = v34;
        }
      }
      goto LABEL_30;
    }
LABEL_23:
    v20 = 1;
    goto LABEL_7;
  }
  v35 = v44;
  if ( !v44 )
    goto LABEL_23;
LABEL_30:
  v20 = 1;
  qfree(v35, a2, v23, v24, v25, v26, v44, 0, *((_QWORD *)&v45 + 1));
LABEL_7:
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46, a2);
  }
  return v20;
}
