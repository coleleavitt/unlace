unsigned __int64 __fastcall sub_6D7BA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  const char **v3; // r14
  const char **v4; // rdx
  const char *v5; // r12
  const char *v6; // rbp
  size_t v7; // rsi
  const char *v8; // rax
  const char *v9; // r15
  char *v10; // r13
  size_t v11; // rax
  __int64 v12; // r8
  size_t v13; // r15
  size_t v14; // r10
  __int64 v15; // rdx
  char *v16; // rax
  char *v17; // rbx
  size_t v18; // r10
  __int64 v19; // r9
  size_t v20; // r11
  __int64 v21; // rdx
  __int64 v22; // rax
  __m128i v23; // xmm0
  char *v24; // rdi
  __int64 v25; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  size_t v29; // rax
  size_t v30; // rbp
  size_t v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-A0h]
  __int64 v35; // [rsp+8h] [rbp-A0h]
  __int64 v36; // [rsp+10h] [rbp-98h]
  size_t v37; // [rsp+10h] [rbp-98h]
  size_t v38; // [rsp+18h] [rbp-90h]
  __int64 v39; // [rsp+18h] [rbp-90h]
  const char **v40; // [rsp+28h] [rbp-80h]
  const char *v41; // [rsp+30h] [rbp-78h]
  size_t v43; // [rsp+40h] [rbp-68h]
  const char **v44; // [rsp+48h] [rbp-60h]
  char *v45; // [rsp+50h] [rbp-58h] BYREF
  __m128i v46; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v47; // [rsp+68h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 568);
  v47 = __readfsqword(0x28u);
  v3 = *(const char ***)(a1 + 560);
  v4 = &v3[7 * v2];
  if ( v4 != v3 )
  {
    v44 = v4;
    do
    {
      v5 = v3[3];
      v6 = *v3;
      v45 = nullptr;
      v46 = 0;
      v7 = strlen(v5);
      v8 = haystack;
      if ( *(_QWORD *)(a2 + 8) )
        v8 = *(const char **)a2;
      v40 = v3;
      v9 = v8;
      v10 = nullptr;
      v41 = v8;
      while ( 1 )
      {
        v16 = strstr(v9, v5);
        v17 = v16;
        if ( !v16 )
          break;
        v18 = v16 - v9;
        if ( v16 != v9 )
        {
          v19 = v46.m128i_i64[0];
          v20 = v16 - v9;
          if ( v46.m128i_i64[0] )
          {
            v19 = v46.m128i_i64[0] - 1;
            v20 = v18 + v46.m128i_i64[0] - 1;
          }
          v21 = v20 + 1;
          if ( v46.m128i_i64[1] < v20 + 1 )
          {
            v43 = v20;
            v39 = v19;
            v37 = v16 - v9;
            v35 = v20 + 1;
            v27 = qvector_reserve(&v45, v10, v21, 1);
            v20 = v43;
            v19 = v39;
            v45 = (char *)v27;
            v18 = v37;
            v10 = (char *)v27;
            v21 = v35;
          }
          v46.m128i_i64[0] = v21;
          v10[v20] = 0;
          memmove(&v45[v19], v9, v18);
          v10 = v45;
        }
        if ( v6 )
        {
          v11 = strlen(v6);
          v12 = v46.m128i_i64[0];
          v13 = v11;
          v14 = v11;
          if ( v46.m128i_i64[0] )
          {
            v12 = v46.m128i_i64[0] - 1;
            v14 = v11 + v46.m128i_i64[0] - 1;
          }
          v15 = v14 + 1;
          if ( v46.m128i_i64[1] < v14 + 1 )
          {
            v38 = v14;
            v36 = v12;
            v34 = v14 + 1;
            v22 = qvector_reserve(&v45, v10, v15, 1);
            v14 = v38;
            v12 = v36;
            v45 = (char *)v22;
            v15 = v34;
            v10 = (char *)v22;
          }
          v46.m128i_i64[0] = v15;
          v10[v14] = 0;
          memmove(&v45[v12], v6, v13);
          v10 = v45;
        }
        v9 = &v17[v7];
      }
      if ( v9 == v41 )
      {
        v24 = v10;
      }
      else
      {
        if ( *v9 && v9 )
        {
          v28 = v46.m128i_i64[0];
          v29 = strlen(v9);
          v30 = v29;
          v31 = v29;
          if ( v28 )
          {
            --v28;
            v31 = v29 + v28;
          }
          v32 = v31 + 1;
          if ( v46.m128i_i64[1] < v31 + 1 )
          {
            v33 = qvector_reserve(&v45, v10, v32, 1);
            v32 = v31 + 1;
            v45 = (char *)v33;
            v10 = (char *)v33;
          }
          v46.m128i_i64[0] = v32;
          v10[v31] = 0;
          memmove(&v45[v28], v9, v30);
          v10 = v45;
        }
        v23 = _mm_loadu_si128(&v46);
        v24 = *(char **)a2;
        v25 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)a2 = v10;
        *(__m128i *)(a2 + 8) = v23;
        v45 = v24;
        v46.m128i_i64[1] = v25;
      }
      if ( v24 )
      {
        v46.m128i_i64[0] = 0;
        qfree(v24);
      }
      v3 += 7;
    }
    while ( v44 != v40 + 7 );
  }
  return v47 - __readfsqword(0x28u);
}

