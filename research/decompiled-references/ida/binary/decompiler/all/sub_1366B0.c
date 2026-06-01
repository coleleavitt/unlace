unsigned __int64 __fastcall sub_1366B0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int *v22; // rbx
  __int64 v23; // rax
  int v24; // eax
  int v25; // edx
  unsigned __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // rbx
  __m128i v29; // [rsp+0h] [rbp-C8h] BYREF
  __int64 *v30; // [rsp+10h] [rbp-B8h]
  __int64 v31; // [rsp+18h] [rbp-B0h]
  __int64 v32; // [rsp+20h] [rbp-A8h]
  int v33; // [rsp+2Ch] [rbp-9Ch]
  __int64 v34[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v35; // [rsp+40h] [rbp-88h] BYREF
  __m128i v36; // [rsp+48h] [rbp-80h] BYREF
  __int64 v37; // [rsp+60h] [rbp-68h] BYREF
  __int64 v38; // [rsp+68h] [rbp-60h]
  __int64 v39; // [rsp+70h] [rbp-58h] BYREF
  __m128i v40; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp-40h]

  v31 = a1;
  v32 = a5;
  v33 = a6;
  v41 = __readfsqword(0x28u);
  if ( !a3 )
  {
    sub_21F370(&v37, v31, a4, v32, (unsigned __int8)v33);
    goto LABEL_10;
  }
  v7 = *(_QWORD *)(a1 + 1496);
  v34[0] = 0;
  v34[1] = 0;
  v35 = 0;
  v36 = 0;
  if ( !a4 )
  {
    v28 = *(_QWORD *)(v7 + 112);
    sub_63980(v34, (__int64 *)(v28 + 264));
    v29.m128i_i64[0] = (__int64)&v35;
    sub_313730(&v35, v28 + 280);
    goto LABEL_5;
  }
  if ( (*(_BYTE *)(a4 + 24) & 1) != 0 )
  {
    v22 = *(unsigned int **)(a4 + 64);
    v23 = *(_QWORD *)(a4 + 72);
    v30 = &v37;
    for ( v29.m128i_i64[0] = (__int64)&v22[2 * v23]; (unsigned int *)v29.m128i_i64[0] != v22; v22 += 2 )
    {
      v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 112) + 168LL))(*(_QWORD *)(v7 + 112), *v22);
      if ( v24 != -1 )
      {
        v25 = v22[1];
        v37 = 0;
        v38 = 0;
        sub_63580(v30, v24, v25);
        v39 = 0;
        v40 = 0;
        sub_63980(v34, v30);
        sub_313730(&v35, &v39);
        if ( v39 )
        {
          v40.m128i_i64[0] = 0;
          qfree();
        }
        qfree();
      }
    }
    v37 = 0;
    v38 = 0;
    v26 = xmmword_4ED7D0;
    v27 = *((_QWORD *)&xmmword_4ED7D0 + 1);
    v40 = 0;
    v39 = 0;
    if ( (__int64)xmmword_4ED7D0 + v27 - 1 >= (unsigned __int64)xmmword_4ED7D0 )
    {
      v29.m128i_i64[0] = v27;
      v39 = qvector_reserve();
      *(__m128i *)(v39 + 16 * v40.m128i_i64[0]++) = _mm_unpacklo_epi64((__m128i)v26, (__m128i)v29.m128i_u64[0]);
    }
    sub_63980(v34, &v37);
    v29.m128i_i64[0] = (__int64)&v35;
    sub_313730(&v35, &v39);
    if ( v39 )
    {
      v40.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
    if ( (*(_BYTE *)(a4 + 24) & 4) == 0 )
      goto LABEL_5;
    goto LABEL_26;
  }
  v9 = *(_QWORD *)(v7 + 112);
  sub_63980(v34, (__int64 *)(v9 + 264));
  v29.m128i_i64[0] = (__int64)&v35;
  sub_313730(&v35, v9 + 280);
  if ( (*(_BYTE *)(a4 + 24) & 4) != 0 )
  {
LABEL_26:
    if ( v35 )
    {
      v36.m128i_i64[0] = 0;
      qfree();
      v35 = 0;
      v36.m128i_i64[1] = 0;
    }
  }
LABEL_5:
  if ( (*(_BYTE *)(v7 + 605) & 0x20) != 0 )
  {
    v37 = 0;
    v38 = 0;
    sub_63580(&v37, 0, 5);
    v39 = 0;
    v40 = 0;
    sub_63980(v34, &v37);
    sub_313730(v29.m128i_i64[0], &v39);
    if ( v39 )
    {
      v40.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
  }
  sub_63FD0(a3, v34);
  v10 = a3[2];
  v11 = v35;
  v35 = 0;
  v12 = _mm_loadu_si128(&v36);
  v36 = 0;
  if ( v10 )
  {
    a3[3] = 0;
    v29 = v12;
    qfree();
    v13 = _mm_load_si128(&v29);
    v14 = v35;
    a3[2] = v11;
    *(__m128i *)(a3 + 3) = v13;
    if ( v14 )
    {
      v36.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    a3[2] = v11;
    *(__m128i *)(a3 + 3) = v12;
  }
  qfree();
  sub_21F370(&v37, v31, a4, v32, (unsigned __int8)v33);
  sub_63980(a3, &v37);
  sub_313730(a3 + 2, &v39);
LABEL_10:
  v15 = v39;
  if ( a2 )
  {
    v16 = *(_QWORD *)a2;
    v17 = _mm_loadu_si128(&v40);
    *(_QWORD *)a2 = v37;
    v37 = v16;
    v18 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = v38;
    v19 = *(_QWORD *)(a2 + 32);
    v38 = v18;
    v20 = *(_QWORD *)(a2 + 16);
    v40.m128i_i64[1] = v19;
    v39 = v20;
    *(_QWORD *)(a2 + 16) = v15;
    v15 = v20;
    *(__m128i *)(a2 + 24) = v17;
  }
  if ( v15 )
  {
    v40.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  return v41 - __readfsqword(0x28u);
}
