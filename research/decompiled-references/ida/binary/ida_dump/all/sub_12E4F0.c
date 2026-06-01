__int64 __fastcall sub_12E4F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned int a6)
{
  __int64 v8; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned int *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned int *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned int *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rsi
  unsigned int v31; // [rsp+0h] [rbp-B4h]
  unsigned __int8 v34[16]; // [rsp+1Ch] [rbp-98h] BYREF
  __int64 v35; // [rsp+2Ch] [rbp-88h] BYREF
  __int128 v36; // [rsp+34h] [rbp-80h]
  __int128 v37; // [rsp+4Ch] [rbp-68h] BYREF
  __m128i v38; // [rsp+5Ch] [rbp-58h]
  unsigned __int64 v39; // [rsp+74h] [rbp-40h]

  v8 = a2;
  v39 = __readfsqword(0x28u);
  v36 = 0;
  v35 = qvector_reserve();
  v10 = v35;
  v31 = (unsigned __int8)a6;
  if ( a2 == a3 )
  {
    sub_123A40((__int64)v34, a4);
    v29 = v36;
    v30 = v35;
    if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
    {
      v35 = qvector_reserve();
      v30 = v35;
      v29 = v36;
    }
    sub_123A40(v30 + 16 * v29, v34);
    *(_QWORD *)&v36 = v36 + 1;
    sub_11CDA0((__int64)v34);
    sub_123A40((__int64)v34, a5);
    v20 = v36;
    v21 = v35;
    if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
    {
      v35 = qvector_reserve();
      v21 = v35;
      v20 = v36;
    }
LABEL_24:
    sub_123A40(v21 + 16 * v20, v34);
    *(_QWORD *)&v36 = v36 + 1;
    sub_11CDA0((__int64)v34);
    goto LABEL_25;
  }
  LOBYTE(a6) = a2 != 0 && a3 != 0;
  if ( !(_BYTE)a6 )
    goto LABEL_3;
  v15 = *(_QWORD *)(a3 + 8);
  if ( !v15 )
  {
LABEL_12:
    v16 = *(_QWORD *)(a2 + 8);
    if ( !v16 )
    {
LABEL_15:
      a6 = 0;
      goto LABEL_3;
    }
    while ( a3 != v16 )
    {
      v16 = *(_QWORD *)(v16 + 8);
      if ( !v16 )
        goto LABEL_15;
    }
    sub_123A40((__int64)v34, a5);
    v17 = v36;
    v18 = v35;
    if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
    {
      v35 = qvector_reserve();
      v18 = v35;
      v17 = v36;
    }
    sub_123A40(v18 + 16 * v17, v34);
    *(_QWORD *)&v36 = v36 + 1;
    sub_11CDA0((__int64)v34);
    v19 = *(unsigned int **)(a3 + 16);
    v38 = 0u;
    v37 = 0;
    a6 = sub_12BAA0(&v35, a1, v19, (unsigned int *)v8, v31, (__int64)&v37);
    if ( v38.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v38.m128i_i64[0])(&v37, &v37, 3);
    if ( !(_BYTE)a6 )
      goto LABEL_21;
    sub_123A40((__int64)v34, a4);
    v20 = v36;
    v21 = v35;
    if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
    {
      v35 = qvector_reserve();
      v21 = v35;
      v20 = v36;
    }
    goto LABEL_24;
  }
  while ( a2 != v15 )
  {
    v15 = *(_QWORD *)(v15 + 8);
    if ( !v15 )
      goto LABEL_12;
  }
  sub_123A40((__int64)v34, a4);
  v24 = v36;
  v25 = v35;
  if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
  {
    v35 = qvector_reserve();
    v25 = v35;
    v24 = v36;
  }
  sub_123A40(v25 + 16 * v24, v34);
  *(_QWORD *)&v36 = v36 + 1;
  sub_11CDA0((__int64)v34);
  v26 = *(unsigned int **)(v8 + 16);
  v38 = 0u;
  v37 = 0;
  a6 = sub_12BAA0(&v35, a1, v26, (unsigned int *)a3, v31, (__int64)&v37);
  if ( v38.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v38.m128i_i64[0])(&v37, &v37, 3);
  if ( !(_BYTE)a6 )
    goto LABEL_21;
  sub_123A40((__int64)v34, a5);
  v27 = v36;
  v28 = v35;
  if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
  {
    v35 = qvector_reserve();
    v28 = v35;
    v27 = v36;
  }
  sub_123A40(v28 + 16 * v27, v34);
  *(_QWORD *)&v36 = v36 + 1;
  v8 = a3;
  sub_11CDA0((__int64)v34);
LABEL_25:
  v22 = *(unsigned int **)(v8 + 16);
  v23 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  DWORD2(v37) = v31;
  *(_QWORD *)&v37 = v23;
  v38 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_4DD9C0), (__m128i)(unsigned __int64)sub_125FF0);
  a6 = sub_12BAA0(&v35, a1, v22, nullptr, v31, (__int64)&v37);
  if ( !v38.m128i_i64[0] )
  {
LABEL_21:
    v10 = v35;
    goto LABEL_3;
  }
  ((void (__fastcall *)(__int128 *, __int128 *, __int64))v38.m128i_i64[0])(&v37, &v37, 3);
  v10 = v35;
LABEL_3:
  if ( v10 )
  {
    v11 = v36;
    if ( (_QWORD)v36 )
    {
      v12 = 0;
      do
      {
        v13 = v12++;
        sub_11CDA0(16 * v13 + v10);
        v10 = v35;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v36 = 0;
    qfree();
  }
  return a6;
}
