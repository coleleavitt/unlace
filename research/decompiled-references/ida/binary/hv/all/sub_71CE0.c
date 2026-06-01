__int64 __fastcall sub_71CE0(__int64 a1, const char *a2, const char *a3)
{
  size_t v4; // r14
  const char *v5; // r15
  char *v6; // rbp
  size_t v7; // rax
  __int64 v8; // r8
  size_t v9; // r15
  size_t v10; // r10
  __int64 v11; // rdx
  char *v12; // rax
  char *v13; // rbx
  size_t v14; // r10
  __int64 v15; // r9
  size_t v16; // r11
  __int64 v17; // rdx
  __m128i v18; // xmm0
  unsigned int v19; // ebx
  char *v20; // rdi
  __int64 v21; // rax
  __int64 v23; // rbx
  size_t v24; // rax
  size_t v25; // r12
  size_t v26; // r13
  char *haystack; // [rsp+0h] [rbp-90h]
  __int64 v28; // [rsp+8h] [rbp-88h]
  __int64 v29; // [rsp+8h] [rbp-88h]
  __int64 v30; // [rsp+10h] [rbp-80h]
  size_t v31; // [rsp+10h] [rbp-80h]
  size_t v32; // [rsp+18h] [rbp-78h]
  __int64 v33; // [rsp+18h] [rbp-78h]
  size_t v35; // [rsp+30h] [rbp-60h]
  void *ptr; // [rsp+38h] [rbp-58h] BYREF
  __m128i v37; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v37 = 0;
  ptr = nullptr;
  v4 = strlen(a2);
  haystack = (char *)::haystack;
  if ( *(_QWORD *)(a1 + 8) )
    haystack = *(char **)a1;
  v5 = haystack;
  v6 = nullptr;
  while ( 1 )
  {
    v12 = strstr(v5, a2);
    v13 = v12;
    if ( !v12 )
      break;
    v14 = v12 - v5;
    if ( v12 != v5 )
    {
      v15 = v37.m128i_i64[0];
      v16 = v12 - v5;
      if ( v37.m128i_i64[0] )
      {
        v15 = v37.m128i_i64[0] - 1;
        v16 = v14 + v37.m128i_i64[0] - 1;
      }
      v17 = v16 + 1;
      if ( v37.m128i_i64[1] < v16 + 1 )
      {
        v35 = v16;
        v33 = v15;
        v31 = v12 - v5;
        v29 = v16 + 1;
        ptr = (void *)sub_96080(&ptr, v6, v17, 1);
        v16 = v35;
        v6 = (char *)ptr;
        v15 = v33;
        v14 = v31;
        v17 = v29;
      }
      v37.m128i_i64[0] = v17;
      v6[v16] = 0;
      memmove((char *)ptr + v15, v5, v14);
      v6 = (char *)ptr;
    }
    if ( a3 )
    {
      v7 = strlen(a3);
      v8 = v37.m128i_i64[0];
      v9 = v7;
      v10 = v7;
      if ( v37.m128i_i64[0] )
      {
        v8 = v37.m128i_i64[0] - 1;
        v10 = v7 + v37.m128i_i64[0] - 1;
      }
      v11 = v10 + 1;
      if ( v37.m128i_i64[1] < v10 + 1 )
      {
        v32 = v10;
        v30 = v8;
        v28 = v10 + 1;
        ptr = (void *)sub_96080(&ptr, v6, v11, 1);
        v10 = v32;
        v6 = (char *)ptr;
        v8 = v30;
        v11 = v28;
      }
      v37.m128i_i64[0] = v11;
      v6[v10] = 0;
      memmove((char *)ptr + v8, a3, v9);
      v6 = (char *)ptr;
    }
    v5 = &v13[v4];
  }
  if ( v5 == haystack )
  {
    v20 = v6;
    v19 = 0;
  }
  else
  {
    if ( *v5 && v5 )
    {
      v23 = v37.m128i_i64[0];
      v24 = strlen(v5);
      v25 = v24;
      v26 = v24;
      if ( v23 )
      {
        --v23;
        v26 = v24 + v23;
      }
      if ( v37.m128i_i64[1] < v26 + 1 )
      {
        ptr = (void *)sub_96080(&ptr, v6, v26 + 1, 1);
        v6 = (char *)ptr;
      }
      v37.m128i_i64[0] = v26 + 1;
      v6[v26] = 0;
      memmove((char *)ptr + v23, v5, v25);
      v6 = (char *)ptr;
    }
    v18 = _mm_loadu_si128(&v37);
    v19 = 1;
    v20 = *(char **)a1;
    v21 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v6;
    *(__m128i *)(a1 + 8) = v18;
    ptr = v20;
    v37.m128i_i64[1] = v21;
  }
  if ( v20 )
  {
    v37.m128i_i64[0] = 0;
    j__free(v20);
  }
  return v19;
}

