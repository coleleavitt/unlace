__int64 __fastcall sub_4D6790(__int64 a1, const char *a2, int a3, char a4, __m128 a5, __m128 a6)
{
  const char *v6; // rbx
  char v8; // r15
  int v10; // eax
  __int64 **v11; // rdi
  __int64 v12; // rsi
  size_t v14; // r14
  int *v15; // rbx
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r13
  __int64 v18; // rax
  int v19; // r8d
  int v20; // r9d
  size_t v21; // rax
  size_t v22; // r13
  void *v23; // rbx
  void *v24; // rbx
  __int64 v25; // r14
  const void *v26; // rbx
  const void *v27; // r8
  __int64 v28; // rdx
  int v29; // [rsp-8h] [rbp-C8h]
  __m128i v30; // [rsp+0h] [rbp-C0h] BYREF
  int v31; // [rsp+1Ch] [rbp-A4h]
  void *v32; // [rsp+20h] [rbp-A0h] BYREF
  __m128 v33; // [rsp+28h] [rbp-98h]
  void *dest; // [rsp+38h] [rbp-88h] BYREF
  __m128 v35; // [rsp+40h] [rbp-80h]
  void *v36; // [rsp+50h] [rbp-70h] BYREF
  __m128i v37; // [rsp+58h] [rbp-68h] BYREF
  void *ptr; // [rsp+68h] [rbp-58h] BYREF
  __m128i v39; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+88h] [rbp-38h]

  v31 = a3;
  v40 = __readfsqword(0x28u);
  if ( a2 )
  {
    v6 = a2;
    v8 = a3;
    v10 = strcmp(a2, "idapython");
    v11 = *(__int64 ***)(a1 + 8);
    if ( !v10 )
      v6 = "idapython3";
    v12 = (__int64)sub_4CDC20(v11, v6);
    if ( v12 )
      return sub_4D64E0(a1, v12, v31, *(double *)a5.m128_u64, a6);
    if ( !v8 )
      return sub_4D64E0(a1, v12, v31, *(double *)a5.m128_u64, a6);
    v12 = sub_4D5C60(a1, v6, 0, a5);
    if ( v12 )
      return sub_4D64E0(a1, v12, v31, *(double *)a5.m128_u64, a6);
    v32 = nullptr;
    dest = nullptr;
    v33 = 0;
    v35 = 0;
    a5.m128_u64[0] = 0;
    v36 = nullptr;
    v37 = 0;
    if ( (unsigned __int8)qisabspath(v6) )
    {
      ptr = nullptr;
      v39 = 0;
      v21 = strlen(v6);
      v22 = v21;
      if ( v21 )
      {
        v25 = v21 + 1;
        v36 = (void *)qvector_reserve(&v36, 0, v21 + 1, 1);
        v37.m128i_i64[0] = v25;
        memmove(v36, v6, v22);
        *((_BYTE *)v36 + v22) = 0;
      }
      plugin_name_from_path_or_name(&ptr, v6);
      v23 = v36;
      v36 = nullptr;
      a5 = (__m128)_mm_loadu_si128(&v37);
      v37 = 0;
      if ( v32 )
      {
        v30 = (__m128i)a5;
        v33.m128_u64[0] = 0;
        qfree(v32);
        a5 = (__m128)_mm_load_si128(&v30);
      }
      v33 = a5;
      a5.m128_u64[0] = 0;
      a6 = (__m128)_mm_load_si128(&v39);
      v32 = v23;
      v24 = ptr;
      v39 = 0;
      ptr = nullptr;
      if ( dest )
      {
        v30 = (__m128i)a6;
        v35.m128_u64[0] = 0;
        qfree(dest);
        a6 = (__m128)_mm_load_si128(&v30);
        dest = v24;
        v35 = a6;
        if ( ptr )
        {
          v39.m128i_i64[0] = 0;
          qfree(ptr);
        }
      }
      else
      {
        dest = v24;
        v35 = a6;
      }
      if ( v36 )
      {
        v37.m128i_i64[0] = 0;
        qfree(v36);
      }
      goto LABEL_18;
    }
    v14 = strlen(v6);
    v30.m128i_i64[0] = v14 + 1;
    v36 = (void *)qvector_reserve(&v36, 0, v14 + 1, 1);
    v37.m128i_i64[0] = v14 + 1;
    memmove(v36, v6, v14);
    *((_BYTE *)v36 + v14) = 0;
    v15 = (int *)sub_4D3210((__int64)&unk_2CA1FE0, (__int64)&v36);
    if ( v15 != &dword_2CA1FE8 )
    {
      if ( &v32 != (void **)(v15 + 14) )
      {
        v16 = *((_QWORD *)v15 + 8);
        if ( v16 > 1 )
        {
          v27 = *((const void **)v15 + 7);
          if ( v33.m128_u64[1] < v16 )
          {
            v28 = *((_QWORD *)v15 + 8);
            v30.m128i_i64[0] = *((_QWORD *)v15 + 7);
            v32 = (void *)qvector_reserve(&v32, v32, v28, 1);
            v27 = (const void *)v30.m128i_i64[0];
          }
          v33.m128_u64[0] = v16;
          memmove(v32, v27, v16 - 1);
          *((char *)v32 + v16 - 1) = 0;
        }
        else
        {
          v33.m128_u64[0] = 0;
        }
      }
      if ( &dest != (void **)(v15 + 20) )
      {
        v17 = *((_QWORD *)v15 + 11);
        if ( v17 > 1 )
        {
          v26 = *((const void **)v15 + 10);
          if ( v35.m128_u64[1] < v17 )
            dest = (void *)qvector_reserve(&dest, dest, v17, 1);
          v35.m128_u64[0] = v17;
          memmove(dest, v26, v17 - 1);
          *((char *)dest + v17 - 1) = 0;
        }
        else
        {
          v35.m128_u64[0] = 0;
        }
      }
      if ( v36 )
      {
        v37.m128i_i64[0] = 0;
        qfree(v36);
      }
LABEL_18:
      v18 = sub_4D4980(0, a1, (__int64)&v32, nullptr, 0, 0, 0.0, a6, 0);
      v12 = v18;
      if ( v18 && (*(_BYTE *)(v18 + 144) & 0x10) == 0 )
      {
        v30.m128i_i64[0] = v18;
        callui(51, v18, (int)&callui, v29, v19, v20);
      }
      if ( dest )
      {
        v30.m128i_i64[0] = v18;
        v35.m128_u64[0] = 0;
        qfree(dest);
        v12 = v30.m128i_i64[0];
      }
      if ( v32 )
      {
        v30.m128i_i64[0] = v12;
        v33.m128_u64[0] = 0;
        qfree(v32);
        v12 = v30.m128i_i64[0];
      }
      return sub_4D64E0(a1, v12, v31, *(double *)a5.m128_u64, a6);
    }
    if ( !a4 )
      sub_365330();
    if ( v36 )
    {
      v37.m128i_i64[0] = 0;
      qfree(v36);
    }
    if ( dest )
    {
      v35.m128_u64[0] = 0;
      qfree(dest);
    }
    if ( v32 )
    {
      v33.m128_u64[0] = 0;
      qfree(v32);
    }
  }
  return 0;
}

