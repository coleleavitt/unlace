__int64 __fastcall sub_8D60(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, const char *a5)
{
  __int64 v7; // rbx
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 *v10; // rdi
  unsigned int i; // r13d
  unsigned __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // ebx
  __int64 v16; // r10
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  size_t v19; // rax
  size_t v20; // r14
  size_t v21; // r13
  unsigned __int64 v22; // r12
  size_t v23; // r14
  __int64 v24; // r13
  size_t v25; // r15
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  __m128i v30; // xmm0
  char v32; // al
  unsigned __int64 v33; // r12
  size_t v34; // r14
  __int64 v35; // r13
  size_t v36; // r8
  struct _Unwind_Exception *v37; // rbx
  size_t v39; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v40; // [rsp+10h] [rbp-A8h]
  __int64 v41; // [rsp+18h] [rbp-A0h]
  void *v42; // [rsp+20h] [rbp-98h] BYREF
  __int128 v43; // [rsp+28h] [rbp-90h]
  __int64 v44; // [rsp+40h] [rbp-78h] BYREF
  __m128i v45; // [rsp+48h] [rbp-70h] BYREF
  void *src; // [rsp+60h] [rbp-58h] BYREF
  __int128 v47; // [rsp+68h] [rbp-50h]
  unsigned __int64 v48; // [rsp+78h] [rbp-40h]

  v7 = a1[3];
  v8 = (unsigned __int64 *)a1[2];
  v9 = *(_QWORD *)(a4 + 16);
  v10 = &v8[v7];
  v48 = __readfsqword(0x28u);
  if ( 8 * v7 )
  {
    for ( i = 0; ; ++i )
    {
      if ( v9 < *v8 )
      {
        v13 = i - 1;
        goto LABEL_7;
      }
      if ( ++v8 == v10 )
        break;
    }
    v13 = i++;
  }
  else
  {
    v13 = 0xFFFFFFFFLL;
    i = 0;
  }
LABEL_7:
  v42 = nullptr;
  v14 = *(_DWORD *)a4;
  v43 = 0;
  if ( v13 >= a1[7] )
  {
    v37 = (struct _Unwind_Exception *)sub_59F0();
    if ( src )
    {
      *(_QWORD *)&v47 = 0;
      qfree(src);
    }
    if ( v44 )
    {
      v45.m128i_i64[0] = 0;
      qfree(v44);
    }
    _Unwind_Resume(v37);
  }
  v15 = sub_8BD0((__int64)&v42, *(_QWORD *)(a1[6] + 8 * v13), v14, 0x55u);
  if ( (_BYTE)v15 )
  {
    sub_83C0(&v44, (__int64)&v42);
    v16 = v45.m128i_i64[0];
    v17 = 2;
    if ( v45.m128i_i64[0] )
    {
      v17 = v45.m128i_i64[0] + 1;
      v16 = v45.m128i_i64[0] - 1;
    }
    v18 = v44;
    if ( v45.m128i_i64[1] < v17 )
    {
      v41 = v16;
      v40 = v17;
      v44 = qvector_reserve(&v44, v44, v17, 1);
      v16 = v41;
      v18 = v44;
      v17 = v40;
    }
    v45.m128i_i64[0] = v17;
    *(_BYTE *)(v18 + v16) = 95;
    *(_BYTE *)(v44 + v16 + 1) = 0;
    if ( a5 )
    {
      src = nullptr;
      v47 = 0;
      v19 = strlen(a5);
      v20 = v19 + 1;
      v21 = v19;
      src = (void *)qvector_reserve(&src, 0, v19 + 1, 1);
      *(_QWORD *)&v47 = v20;
      memmove(src, a5, v21);
      *((_BYTE *)src + v21) = 0;
      v22 = v47;
      if ( (_QWORD)v47 )
      {
        v23 = v47 - 1;
        if ( (_QWORD)v47 != 1 )
        {
          v24 = v45.m128i_i64[0];
          v25 = v47 - 1;
          if ( v45.m128i_i64[0] )
          {
            v24 = v45.m128i_i64[0] - 1;
            v25 = v23 + v45.m128i_i64[0] - 1;
            v22 = v47 + v45.m128i_i64[0] - 1;
          }
          v26 = v44;
          if ( v45.m128i_i64[1] < v22 )
          {
            v44 = qvector_reserve(&v44, v44, v22, 1);
            v26 = v44;
          }
          v45.m128i_i64[0] = v22;
          *(_BYTE *)(v26 + v25) = 0;
          memcpy((void *)(v24 + v44), src, v23);
        }
      }
      if ( src )
      {
        *(_QWORD *)&v47 = 0;
        qfree(src);
        v27 = v44;
        goto LABEL_23;
      }
    }
    else
    {
      v32 = sub_89A0((__int64)a1, (__int64 *)&v42, i, a3);
      v28 = v44;
      v27 = v44;
      if ( !v32 )
      {
        v15 = 0;
LABEL_24:
        if ( v28 )
        {
          v45.m128i_i64[0] = 0;
          qfree(v28);
        }
        goto LABEL_26;
      }
      v33 = v43;
      if ( !(_QWORD)v43 || (v34 = v43 - 1, (_QWORD)v43 == 1) )
      {
LABEL_23:
        v28 = *(_QWORD *)a2;
        v29 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)a2 = v27;
        v30 = _mm_loadu_si128(&v45);
        v44 = v28;
        v45.m128i_i64[1] = v29;
        *(__m128i *)(a2 + 8) = v30;
        goto LABEL_24;
      }
      v35 = v45.m128i_i64[0];
      v36 = v43 - 1;
      if ( v45.m128i_i64[0] )
      {
        v35 = v45.m128i_i64[0] - 1;
        v36 = v34 + v45.m128i_i64[0] - 1;
        v33 = v43 + v45.m128i_i64[0] - 1;
      }
      if ( v45.m128i_i64[1] < v33 )
      {
        v39 = v36;
        v44 = qvector_reserve(&v44, v44, v33, 1);
        v36 = v39;
        v28 = v44;
      }
      v45.m128i_i64[0] = v33;
      *(_BYTE *)(v28 + v36) = 0;
      memcpy((void *)(v35 + v44), v42, v34);
    }
    v27 = v44;
    goto LABEL_23;
  }
LABEL_26:
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42);
  }
  return v15;
}

