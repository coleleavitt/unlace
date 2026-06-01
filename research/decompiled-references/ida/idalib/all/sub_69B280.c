unsigned __int64 __fastcall sub_69B280(__m128i *a1, __m128i *a2, char a3, __int64 a4, __m128i *a5)
{
  unsigned __int64 v5; // rdx
  __int64 *v7; // r13
  __int64 *v8; // rbx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  __m128i *v19; // rbp
  __m128i *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rbx
  char v24; // al
  __int64 v25; // rbx
  char v26; // al
  __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // [rsp+8h] [rbp-60h]
  unsigned __int64 v36; // [rsp+8h] [rbp-60h]
  __m128i v37; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]

  v5 = a3 & 3;
  v7 = (__int64 *)a1;
  v8 = (__int64 *)a2;
  v38 = __readfsqword(0x28u);
  if ( (_BYTE)v5 != 2 )
  {
    if ( (_BYTE)v5 != 3 )
    {
      if ( (_BYTE)v5 == 1 )
      {
        v11 = a2->m128i_i64[1];
        v12 = a2->m128i_i64[0];
        if ( v8[2] < (unsigned __int64)(v11 + 1) )
        {
          a1 = (__m128i *)v8;
          v30 = qvector_reserve(v8, v12, v11 + 1, 16);
          v11 = v8[1];
          *v8 = v30;
          v12 = v30;
        }
        v13 = 16 * v11;
        v14 = (__int64 *)(v12 + v13);
        *(_OWORD *)(v12 + v13) = 0;
        ++v8[1];
        if ( (unsigned __int8)is_cvt64(a1, v12, v13) )
        {
          v15 = (unsigned int)a4 + (unsigned int)unpack_dd(a5);
          if ( v15 == 0xFFFFFFFFLL )
            v15 = -1;
        }
        else
        {
          v15 = a4 + unpack_dq(a5);
        }
        v16 = *(_QWORD *)(*v7 + 1504) & v15;
        v14[1] = -1;
        *v14 = v16;
      }
      return v38 - __readfsqword(0x28u);
    }
    a2 = (__m128i *)a5->m128i_i64[1];
    a1 = a5;
    v17 = (unsigned __int16)unpack_dw(a5, a2);
    v5 = v17;
    v18 = v8[1];
    if ( v17 == v18 )
    {
      v19 = (__m128i *)*v8;
LABEL_13:
      if ( !(_DWORD)v17 )
        return v38 - __readfsqword(0x28u);
      goto LABEL_14;
    }
    v19 = (__m128i *)*v8;
    v37 = 0;
    if ( v17 < v18 )
    {
LABEL_12:
      v8[1] = v5;
      goto LABEL_13;
    }
LABEL_26:
    a2 = &v37;
    v28 = v8[2];
    if ( &v37 < v19 || (a1 = &v19[v28], &v37 >= a1) )
    {
      if ( v28 < v5 )
      {
        a2 = v19;
        a1 = (__m128i *)v8;
        v35 = v5;
        v33 = qvector_reserve(v8, v19, v5, 16);
        v5 = v35;
        *v8 = v33;
        v19 = (__m128i *)v33;
        v18 = v8[1];
      }
      if ( v18 < v5 )
      {
        v31 = _mm_load_si128(&v37);
        v32 = v18;
        do
        {
          v19[v32++] = v31;
          v19 = (__m128i *)*v8;
        }
        while ( v5 != v32 );
      }
    }
    else
    {
      if ( v28 < v5 )
      {
        a2 = v19;
        a1 = (__m128i *)v8;
        v36 = v5;
        v34 = qvector_reserve(v8, v19, v5, 16);
        v5 = v36;
        *v8 = v34;
        v19 = (__m128i *)v34;
        v18 = v8[1];
      }
      if ( v18 < v5 )
      {
        v29 = v18;
        do
        {
          v19[v29++] = 0;
          v19 = (__m128i *)*v8;
        }
        while ( v29 != v5 );
      }
    }
    goto LABEL_12;
  }
  v18 = a2->m128i_u64[1];
  if ( v18 == 1 )
  {
    v19 = (__m128i *)a2->m128i_i64[0];
    v17 = 1;
  }
  else
  {
    v19 = (__m128i *)a2->m128i_i64[0];
    v37 = 0;
    if ( v18 <= 1 )
    {
      v5 = 1;
      v17 = 1;
      goto LABEL_26;
    }
    a2->m128i_i64[1] = 1;
    v17 = 1;
  }
LABEL_14:
  v20 = &v19[v17];
  do
  {
    v26 = is_cvt64(a1, a2, v5);
    v27 = a5->m128i_i64[1];
    if ( v26 )
    {
      v22 = (unsigned int)unpack_dd(a5) + (unsigned int)a4;
      if ( v22 == 0xFFFFFFFFLL )
        v22 = -1;
    }
    else
    {
      v22 = a4 + unpack_dq(a5);
    }
    v23 = *(_QWORD *)(*v7 + 1504) & v22;
    v19->m128i_i64[0] = v23;
    v24 = is_cvt64(a5, v27, v21);
    a2 = (__m128i *)a5->m128i_i64[1];
    a1 = a5;
    if ( v24 )
    {
      v25 = (unsigned int)unpack_dd(a5) + (unsigned int)v23;
      if ( (unsigned int)v25 == 0xFFFFFFFFLL )
        v25 = -1;
    }
    else
    {
      v25 = unpack_dq(a5) + v23;
    }
    ++v19;
    v19[-1].m128i_i64[1] = *(_QWORD *)(*v7 + 1504) & v25;
  }
  while ( v19 != v20 );
  return v38 - __readfsqword(0x28u);
}
