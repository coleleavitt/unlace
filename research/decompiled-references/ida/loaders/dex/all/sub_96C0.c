__int64 __fastcall sub_96C0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 *v8; // rsi
  unsigned int i; // ebx
  unsigned __int64 v10; // r14
  unsigned int v11; // edx
  unsigned int v12; // r15d
  __int64 v13; // r15
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdi
  unsigned __int64 v18; // rdx
  size_t v19; // r10
  __int64 v20; // r14
  size_t v21; // r11
  __int64 v22; // rsi
  __int64 v23; // r14
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  unsigned int v26; // ecx
  unsigned __int64 v27; // rbx
  size_t v28; // r13
  __int64 v29; // rbp
  size_t v30; // r14
  __int64 v31; // rsi
  __m128i v32; // xmm0
  __int64 v33; // rax
  unsigned __int64 v34; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v35; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v37; // [rsp+20h] [rbp-88h]
  size_t v38; // [rsp+20h] [rbp-88h]
  size_t v39; // [rsp+28h] [rbp-80h]
  void *src; // [rsp+30h] [rbp-78h] BYREF
  __int128 v41; // [rsp+38h] [rbp-70h]
  __int64 v42; // [rsp+50h] [rbp-58h] BYREF
  __m128i v43; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+68h] [rbp-40h]

  v4 = (unsigned __int64 *)a1[2];
  v5 = a1[3];
  v6 = *(_QWORD *)(a3 + 8);
  v44 = __readfsqword(0x28u);
  v8 = &v4[v5];
  if ( 8 * v5 )
  {
    for ( i = 0; ; ++i )
    {
      if ( v6 < *v4 )
      {
        v10 = i - 1;
        goto LABEL_7;
      }
      if ( ++v4 == v8 )
        break;
    }
    v10 = i++;
  }
  else
  {
    v10 = 0xFFFFFFFFLL;
    i = 0;
  }
LABEL_7:
  src = nullptr;
  v11 = *(_DWORD *)(a3 + 16);
  v41 = 0;
  if ( v10 >= a1[7] )
  {
    sub_59F0();
    goto LABEL_43;
  }
  v12 = sub_8BD0((__int64)&src, *(_QWORD *)(a1[6] + 8 * v10), v11, 0x55u);
  if ( !(_BYTE)v12 )
    goto LABEL_18;
  sub_83C0(&v42, (__int64)&src);
  v13 = v43.m128i_i64[0];
  v14 = 2;
  if ( v43.m128i_i64[0] )
  {
    v14 = v43.m128i_i64[0] + 1;
    v13 = v43.m128i_i64[0] - 1;
  }
  v15 = v42;
  if ( v43.m128i_i64[1] < v14 )
  {
    v37 = v14;
    v42 = qvector_reserve(&v42, v42, v14, 1);
    v14 = v37;
    v15 = v42;
  }
  v43.m128i_i64[0] = v14;
  *(_BYTE *)(v15 + v13) = 46;
  *(_BYTE *)(v42 + v13 + 1) = 0;
  if ( v10 >= a1[7] )
LABEL_43:
    sub_59F0();
  v12 = sub_8BD0((__int64)&src, *(_QWORD *)(a1[6] + 8 * v10), *(_DWORD *)(a3 + 20), 0x4Eu);
  if ( (_BYTE)v12 )
  {
    sub_57A0(&src);
    v18 = v41;
    if ( (_QWORD)v41 )
    {
      v19 = v41 - 1;
      if ( (_QWORD)v41 != 1 )
      {
        v20 = v43.m128i_i64[0];
        v21 = v41 - 1;
        if ( v43.m128i_i64[0] )
        {
          v20 = v43.m128i_i64[0] - 1;
          v21 = v19 + v43.m128i_i64[0] - 1;
          v18 = v41 + v43.m128i_i64[0] - 1;
        }
        v22 = v42;
        if ( v43.m128i_i64[1] < v18 )
        {
          v39 = v41 - 1;
          v38 = v21;
          v35 = v18;
          v42 = qvector_reserve(&v42, v42, v18, 1);
          v19 = v39;
          v22 = v42;
          v21 = v38;
          v18 = v35;
        }
        v43.m128i_i64[0] = v18;
        *(_BYTE *)(v22 + v21) = 0;
        memcpy((void *)(v20 + v42), src, v19);
      }
    }
    v23 = v43.m128i_i64[0];
    v24 = 2;
    if ( v43.m128i_i64[0] )
    {
      v24 = v43.m128i_i64[0] + 1;
      v23 = v43.m128i_i64[0] - 1;
    }
    v25 = v42;
    if ( v43.m128i_i64[1] < v24 )
    {
      v34 = v24;
      v42 = qvector_reserve(&v42, v42, v24, 1);
      v24 = v34;
      v25 = v42;
    }
    v43.m128i_i64[0] = v24;
    *(_BYTE *)(v25 + v23) = 64;
    *(_BYTE *)(v42 + v23 + 1) = 0;
    v26 = *(_DWORD *)(a3 + 28);
    *(_QWORD *)&v41 = 0;
    sub_8910((__int64)a1, (__int64)&src, i, v26);
    v27 = v41;
    if ( (_QWORD)v41 )
    {
      v28 = v41 - 1;
      if ( (_QWORD)v41 != 1 )
      {
        v29 = v43.m128i_i64[0];
        v30 = v41 - 1;
        if ( v43.m128i_i64[0] )
        {
          v29 = v43.m128i_i64[0] - 1;
          v30 = v28 + v43.m128i_i64[0] - 1;
          v27 = v41 + v43.m128i_i64[0] - 1;
        }
        v31 = v42;
        if ( v43.m128i_i64[1] < v27 )
        {
          v42 = qvector_reserve(&v42, v42, v27, 1);
          v31 = v42;
        }
        v43.m128i_i64[0] = v27;
        *(_BYTE *)(v31 + v30) = 0;
        memcpy((void *)(v29 + v42), src, v28);
      }
    }
    v32 = _mm_loadu_si128(&v43);
    v16 = *(_QWORD *)a2;
    v33 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = v42;
    *(__m128i *)(a2 + 8) = v32;
    v42 = v16;
    v43.m128i_i64[1] = v33;
  }
  else
  {
    v16 = v42;
  }
  if ( v16 )
  {
    v43.m128i_i64[0] = 0;
    qfree(v16);
  }
LABEL_18:
  if ( src )
  {
    *(_QWORD *)&v41 = 0;
    qfree(src);
  }
  return v12;
}

