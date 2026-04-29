unsigned __int64 __fastcall sub_263810(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // r14
  int v13; // ebx
  __int64 v14; // r13
  __int64 v15; // rbx
  char v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __m128i v24; // xmm0
  size_t v26; // r15
  char *v27; // rax
  const void *v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rbx
  unsigned __int64 v31; // r13
  __int64 v32; // r14
  __int64 v33; // rsi
  __int64 v34; // rbx
  __int64 v35; // rax
  char v36; // [rsp+0h] [rbp-A0h]
  __int64 v37; // [rsp+0h] [rbp-A0h]
  unsigned __int64 v38; // [rsp+8h] [rbp-98h]
  unsigned __int64 v39; // [rsp+8h] [rbp-98h]
  unsigned int v40; // [rsp+14h] [rbp-8Ch]
  unsigned __int8 v41; // [rsp+18h] [rbp-88h]
  __int64 v42; // [rsp+28h] [rbp-78h] BYREF
  char *v43; // [rsp+30h] [rbp-70h] BYREF
  __int128 v44; // [rsp+38h] [rbp-68h]
  __int64 v45; // [rsp+50h] [rbp-50h] BYREF
  __m128i v46; // [rsp+58h] [rbp-48h] BYREF
  unsigned __int64 v47; // [rsp+68h] [rbp-38h]

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 8);
  v47 = __readfsqword(0x28u);
  v43 = nullptr;
  v7 = *(_QWORD *)(v5 + 416);
  v44 = 0;
  if ( v7 )
  {
    v26 = v7;
    v27 = (char *)qalloc_or_throw(v7, (__int64)a2, a3, a4);
    v28 = *(const void **)(v5 + 408);
    *((_QWORD *)&v44 + 1) = v26;
    v43 = v27;
    memcpy(v27, v28, v26);
    *(_QWORD *)&v44 = v26;
    if ( v26 - 1 <= 7 || (v29 = (__int64)v43, strcmp(&v43[v26 - 7], " const")) )
    {
      v5 = *(_QWORD *)(a1 + 8);
      v4 = 0;
      goto LABEL_2;
    }
    if ( (__int64)(v26 - 6) <= 1 )
    {
      if ( v43 )
      {
        v44 = 0u;
        qfree((__int64)v43);
        v43 = nullptr;
        v5 = *(_QWORD *)(a1 + 8);
        v4 = 1;
        goto LABEL_2;
      }
    }
    else
    {
      if ( *((_QWORD *)&v44 + 1) < v26 - 6 )
      {
        v43 = (char *)qvector_reserve((__int64)&v43, (__int64)v43, v26 - 6, 1);
        v29 = (__int64)v43;
      }
      *(_QWORD *)&v44 = v26 - 6;
      *(_BYTE *)(v29 + v26 - 7) = 0;
    }
    v5 = *(_QWORD *)(a1 + 8);
    v4 = 1;
  }
LABEL_2:
  v41 = 23;
  if ( *(_BYTE *)(v5 + 320) )
    v41 = 33;
  v42 = 0;
  if ( (unsigned __int8)sub_3767A0(v5, &v42) && (unsigned __int8)print_tinfo() )
  {
    if ( v4 )
    {
      v30 = a2[1];
      if ( v30 )
      {
        v32 = v30 + 5;
        v31 = v30 + 6;
        --v30;
      }
      else
      {
        v31 = 7;
        v32 = 6;
      }
      v33 = *a2;
      if ( a2[2] < v31 )
      {
        v35 = qvector_reserve((__int64)a2, v33, v31, 1);
        *a2 = v35;
        v33 = v35;
      }
      a2[1] = v31;
      v9 = 29811;
      *(_BYTE *)(v33 + v32) = 0;
      v34 = *a2 + v30;
      *(_DWORD *)v34 = 1852793632;
      *(_WORD *)(v34 + 4) = 29811;
    }
    v40 = v41;
  }
  else
  {
    sub_6B870(a2);
    v40 = 18;
  }
  v45 = 0;
  v46 = 0;
  sub_32AA00(&v45, v40, v8, v9);
  if ( a2[1] )
  {
    v12 = (char *)*a2;
    v13 = *(unsigned __int8 *)*a2;
    if ( (_BYTE)v13 )
    {
      v14 = 0x28000000000003LL;
      do
      {
        while ( (unsigned __int8)(v13 - 40) <= 0x35u && _bittest64(&v14, (unsigned int)(v13 - 40)) )
        {
          sub_32AA00(&v45, 9, v10, v11);
          v15 = v46.m128i_i64[0];
          v16 = *v12;
          v17 = 2;
          if ( v46.m128i_i64[0] )
          {
            v17 = v46.m128i_i64[0] + 1;
            v15 = v46.m128i_i64[0] - 1;
          }
          v18 = v45;
          if ( v46.m128i_i64[1] < v17 )
          {
            v36 = *v12;
            v38 = v17;
            v45 = qvector_reserve((__int64)&v45, v45, v17, 1);
            v16 = v36;
            v18 = v45;
            v17 = v38;
          }
          v46.m128i_i64[0] = v17;
          *(_BYTE *)(v18 + v15) = v16;
          *(_BYTE *)(v45 + v15 + 1) = 0;
          sub_32AAE0(&v45, 9);
          v13 = (unsigned __int8)*++v12;
          if ( !(_BYTE)v13 )
            goto LABEL_22;
        }
        v19 = v46.m128i_i64[0];
        v10 = 2;
        if ( v46.m128i_i64[0] )
        {
          v10 = v46.m128i_i64[0] + 1;
          v19 = v46.m128i_i64[0] - 1;
        }
        v20 = v45;
        if ( v46.m128i_i64[1] < v10 )
        {
          v37 = v19;
          v39 = v10;
          v45 = qvector_reserve((__int64)&v45, v45, v10, 1);
          v19 = v37;
          v20 = v45;
          v10 = v39;
        }
        v46.m128i_i64[0] = v10;
        ++v12;
        *(_BYTE *)(v20 + v19) = v13;
        *(_BYTE *)(v45 + v19 + 1) = 0;
        v13 = (unsigned __int8)*v12;
      }
      while ( (_BYTE)v13 );
    }
  }
LABEL_22:
  sub_32AAE0(&v45, v40);
  v22 = a2[2];
  v23 = v45;
  v24 = _mm_loadu_si128(&v46);
  v45 = *a2;
  v21 = v45;
  *a2 = v23;
  v46.m128i_i64[1] = v22;
  *(__m128i *)(a2 + 1) = v24;
  if ( v21 )
  {
    v46.m128i_i64[0] = 0;
    qfree(v21);
  }
  clear_tinfo_t();
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree((__int64)v43);
  }
  return v47 - __readfsqword(0x28u);
}
