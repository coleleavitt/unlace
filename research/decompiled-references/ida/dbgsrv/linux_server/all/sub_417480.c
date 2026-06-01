/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417480
// Address: 0x0000000000417480

//----- (0000000000417480) ----------------------------------------------------
unsigned __int64 __fastcall sub_417480(__int64 a1, __m128i **a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  const char *v6; // rsi
  const char *v7; // rdi
  int v8; // eax
  void *v9; // rdx
  int v10; // edx
  char v11; // al
  void *v12; // rax
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  __m128i *v15; // r8
  __m128i *v16; // r15
  __m128i *v17; // r15
  char *v18; // r9
  size_t v20; // r10
  const void *v21; // r11
  void *v22; // rax
  __m128i *v23; // rax
  __m128i *v24; // rdx
  __m128i *v25; // r8
  __m128i *v26; // rdi
  __int64 v27; // rdx
  __int32 v28; // ecx
  __int64 v29; // rcx
  __m128i v30; // xmm0
  void *v32; // [rsp+8h] [rbp-70h]
  char *v33; // [rsp+8h] [rbp-70h]
  __m128i *v34; // [rsp+8h] [rbp-70h]
  __m128i *v35; // [rsp+8h] [rbp-70h]
  char *v36; // [rsp+8h] [rbp-70h]
  size_t v37; // [rsp+10h] [rbp-68h]
  const void *v38; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128 v40; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-40h]

  v2 = a1 + 1216;
  v41 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 1232);
  if ( v3 != a1 + 1216 )
  {
    do
    {
      v10 = *(_DWORD *)(v3 + 40);
      ptr = nullptr;
      v40 = 0;
      v11 = sub_417370(a1, (char **)&ptr, v10);
      v9 = ptr;
      if ( !v11 )
        goto LABEL_6;
      if ( *(_QWORD *)(v3 + 80) )
      {
        v6 = *(const char **)(v3 + 72);
        v7 = s1;
        if ( !v40.m128_u64[0] )
          goto LABEL_5;
      }
      else
      {
        v6 = s1;
        if ( !v40.m128_u64[0] )
          goto LABEL_6;
      }
      v7 = (const char *)ptr;
LABEL_5:
      v32 = ptr;
      v8 = strcmp(v7, v6);
      v9 = v32;
      if ( v8 )
      {
        v12 = *(void **)(v3 + 72);
        *(_QWORD *)(v3 + 72) = v32;
        v13 = _mm_loadh_ps((const double *)(v3 + 88));
        ptr = v12;
        v14 = _mm_loadh_ps((const double *)&v40.m128_u64[1]);
        v40 = v13;
        *(__m128 *)(v3 + 80) = v14;
        v15 = a2[1];
        if ( a2[2] < (__m128i *)&v15->m128i_i8[1] )
        {
          v34 = a2[2];
          v23 = (__m128i *)sub_481540((__int64)a2, nullptr, (unsigned __int64)v15->m128i_u64 + 1, 0x20u);
          v24 = a2[1];
          v16 = v23;
          v25 = a2[2];
          v26 = *a2;
          a2[2] = v34;
          v27 = (__int64)&v24[-1].m128i_i64[1] + 7;
          if ( v27 >= 0 )
          {
            do
            {
              v28 = v26->m128i_i32[0];
              v23 += 2;
              v26 += 2;
              v23[-2].m128i_i32[0] = v28;
              v29 = v26[-2].m128i_i64[1];
              v30 = _mm_loadu_si128(v26 - 1);
              v26[-2].m128i_i64[1] = 0;
              v23[-2].m128i_i64[1] = v29;
              v23[-1] = v30;
              v26[-1].m128i_i64[1] = 0;
            }
            while ( v27-- != 0 );
            v26 = *a2;
          }
          v35 = v25;
          j__free(v26);
          *a2 = v16;
          a2[2] = v35;
          v15 = a2[1];
        }
        else
        {
          v16 = *a2;
        }
        v17 = &v16[2 * (_QWORD)v15];
        v17->m128i_i64[1] = 0;
        v17[1] = 0;
        a2[1] = (__m128i *)((char *)a2[1] + 1);
        v17->m128i_i32[0] = *(_DWORD *)(v3 + 40);
        if ( &v17->m128i_u64[1] != (unsigned __int64 *)(v3 + 72) )
        {
          v18 = *(char **)(v3 + 80);
          if ( v18 )
          {
            v20 = (size_t)(v18 - 1);
            if ( v18 != (char *)1 )
            {
              v21 = *(const void **)(v3 + 72);
              v22 = (void *)v17->m128i_i64[1];
              if ( v17[1].m128i_i64[1] < (unsigned __int64)v18 )
              {
                v38 = *(const void **)(v3 + 72);
                v37 = (size_t)(v18 - 1);
                v36 = *(char **)(v3 + 80);
                v22 = sub_481540((__int64)&v17->m128i_i64[1], (void *)v17->m128i_i64[1], (unsigned __int64)v36, 1u);
                v21 = v38;
                v20 = v37;
                v17->m128i_i64[1] = (__int64)v22;
                v18 = v36;
              }
              v17[1].m128i_i64[0] = (__int64)v18;
              v33 = v18;
              memmove(v22, v21, v20);
              v33[v17->m128i_i64[1] - 1] = 0;
              v9 = ptr;
              goto LABEL_6;
            }
          }
          v17[1].m128i_i64[0] = 0;
        }
        v9 = ptr;
      }
LABEL_6:
      if ( v9 )
      {
        v40.m128_u64[0] = 0;
        j__free(v9);
      }
      v3 = std::_Rb_tree_increment(v3);
    }
    while ( v3 != v2 );
  }
  return v41 - __readfsqword(0x28u);
}
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
