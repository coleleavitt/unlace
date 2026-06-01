/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: build_plugin_options
// Address: 0x00000000000B3B50

//----- (00000000000B3B50) ----------------------------------------------------
unsigned __int64 __fastcall build_plugin_options(__m128i *a1, __int64 *a2, const char *a3)
{
  char *v4; // rdi
  __int64 i; // rbx
  void *v6; // rax
  char *v7; // r15
  __int64 v8; // r12
  char **v9; // rdi
  __int64 v10; // rbp
  size_t v11; // r13
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int64 v14; // rbp
  char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  char *v18; // rax
  unsigned __int64 *v19; // r14
  __int64 v20; // rbp
  size_t v21; // r13
  unsigned __int64 *v22; // rax
  __int64 v23; // r12
  unsigned __int64 v24; // rbp
  bool v25; // cf
  char *v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rax
  char *v29; // rbx
  void *v30; // r14
  unsigned __int64 v31; // r15
  __int64 j; // rbp
  void *v33; // rdi
  __int64 v35; // [rsp+0h] [rbp-98h]
  __int64 v37; // [rsp+18h] [rbp-80h]
  __m128i v38; // [rsp+20h] [rbp-78h] BYREF
  __int64 v39; // [rsp+30h] [rbp-68h]
  void *ptr[2]; // [rsp+40h] [rbp-58h] BYREF
  char *v41; // [rsp+50h] [rbp-48h]
  unsigned __int64 v42; // [rsp+60h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v41 = nullptr;
  if ( a3 )
  {
    ptr[0] = qvector_reserve((__int64)ptr, nullptr, 1u, 0x18u);
    v4 = (char *)ptr[0] + 24 * (__int64)ptr[1];
    *(_OWORD *)v4 = 0;
    *((_QWORD *)v4 + 2) = 0;
    ++ptr[1];
    sub_3BBA0((__int64)v4, "-O%s", a3);
  }
  v37 = 48 * a2[1];
  if ( v37 )
  {
    v35 = *a2;
    for ( i = 0; i != v37; i += 48 )
    {
      v6 = ptr[1];
      if ( v41 >= (char *)ptr[1] + 1 )
      {
        v7 = (char *)ptr[0];
      }
      else
      {
        v7 = (char *)qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)ptr[1] + 1, 0x18u);
        ptr[0] = v7;
        v6 = ptr[1];
      }
      v8 = 3LL * (_QWORD)v6;
      *(_OWORD *)&v7[8 * v8] = 0;
      *(_QWORD *)&v7[8 * v8 + 16] = 0;
      ++ptr[1];
      v9 = (char **)&v7[24 * (_QWORD)v6];
      v10 = *(_QWORD *)(v35 + i + 8);
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v10 != 1 )
        {
          v12 = *(_QWORD *)&v7[24 * (_QWORD)v6 + 8];
          v13 = v12 - 1;
          if ( !v12 )
            v13 = 0;
          v14 = v13 + v10;
          v15 = *v9;
          if ( *(_QWORD *)&v7[8 * v8 + 16] < v14 )
          {
            v15 = (char *)qvector_reserve((__int64)v9, v15, v14, 1u);
            *v9 = v15;
          }
          *(_QWORD *)&v7[8 * v8 + 8] = v14;
          v15[v13 + v11] = 0;
          memcpy(&(*v9)[v13], *(const void **)(v35 + i), v11);
        }
      }
      if ( *(_QWORD *)(v35 + i + 32) >= 2u )
      {
        v16 = *(_QWORD *)&v7[8 * v8 + 8];
        v17 = v16 - 1;
        if ( !v16 )
          v17 = 0;
        v18 = *v9;
        if ( *(_QWORD *)&v7[8 * v8 + 16] < (unsigned __int64)(v17 + 2) )
        {
          v18 = (char *)qvector_reserve((__int64)v9, *v9, v17 + 2, 1u);
          *v9 = v18;
        }
        v19 = (unsigned __int64 *)&v7[8 * v8 + 8];
        *v19 = v17 + 2;
        v18[v17] = 61;
        (*v9)[v17 + 1] = 0;
        v20 = *(_QWORD *)(v35 + i + 32);
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v20 != 1 )
          {
            v22 = (unsigned __int64 *)&v7[8 * v8 + 16];
            v23 = *v19 - 1;
            if ( !*v19 )
              v23 = 0;
            v24 = v23 + v20;
            v25 = *v22 < v24;
            v26 = *v9;
            if ( v25 )
            {
              v26 = (char *)qvector_reserve((__int64)v9, *v9, v24, 1u);
              *v9 = v26;
            }
            *v19 = v24;
            v26[v23 + v21] = 0;
            memcpy(&(*v9)[v23], *(const void **)(v35 + i + 24), v21);
          }
        }
      }
    }
  }
  sub_B3FB0((__int64)&v38, (const void ***)ptr, ":");
  v27 = _mm_loadu_si128(a1);
  v28 = a1[1].m128i_i64[0];
  *a1 = v38;
  a1[1].m128i_i64[0] = v39;
  v38 = v27;
  v39 = v28;
  if ( v27.m128i_i64[0] )
  {
    v38.m128i_i64[1] = 0;
    qfree((void *)v27.m128i_i64[0]);
    v38.m128i_i64[0] = 0;
    v39 = 0;
  }
  v29 = (char *)ptr[0];
  if ( ptr[0] )
  {
    v30 = ptr[1];
    if ( ptr[1] )
    {
      v31 = 1;
      for ( j = 0; ; j += 24 )
      {
        v33 = *(void **)&v29[j];
        if ( v33 )
        {
          *(_QWORD *)&v29[j + 8] = 0;
          qfree(v33);
          *(_QWORD *)&v29[j] = 0;
          *(_QWORD *)&v29[j + 16] = 0;
        }
        if ( v31 >= (unsigned __int64)v30 )
          break;
        v29 = (char *)ptr[0];
        ++v31;
      }
      v29 = (char *)ptr[0];
    }
    ptr[1] = nullptr;
    qfree(v29);
    ptr[0] = nullptr;
    v41 = nullptr;
  }
  return __readfsqword(0x28u);
}
