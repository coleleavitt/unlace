__int64 __fastcall sub_111A410(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rbx
  char **v4; // rax
  size_t v5; // r14
  char *v6; // rbp
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r15d
  __int64 *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rax
  size_t v17; // rdx
  unsigned int v18; // ebp
  char *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // r12
  _QWORD *v22; // rcx
  __int64 v24; // rdx
  __int64 v25; // r12
  unsigned int v26; // eax
  __int64 v27; // [rsp+0h] [rbp-88h]
  __int64 v28; // [rsp+18h] [rbp-70h]
  __int64 *v29; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __m128i si128; // [rsp+38h] [rbp-50h]

  v1 = *(_QWORD *)(a1 + 96);
  v27 = *(_QWORD *)(a1 + 104);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  ptr = nullptr;
  v2 = (v27 - v1) >> 5;
  if ( !(_DWORD)v2 )
  {
    v19 = nullptr;
    v18 = 1;
    goto LABEL_16;
  }
  v3 = 0;
  v28 = (unsigned int)(v2 - 1);
  while ( 1 )
  {
    v4 = (char **)(32 * v3 + v1);
    v5 = (size_t)v4[1];
    v6 = *v4;
    if ( v5 )
    {
      --v5;
      ++v6;
    }
    v7 = sub_2244B30(v6, v5);
    v8 = sub_2244CB0(&ptr, v6, v5, v7);
    v12 = v8;
    v13 = (__int64 *)((char *)ptr + 8 * v8);
    if ( *v13 )
      break;
LABEL_22:
    v25 = sub_22300B0(v5 + 17, 8, v8, v9, v10, v11);
    if ( v5 )
      memcpy((void *)(v25 + 16), v6, v5);
    *(_BYTE *)(v25 + v5 + 16) = 0;
    *(_QWORD *)v25 = v5;
    *(_DWORD *)(v25 + 8) = v3;
    *v13 = v25;
    ++si128.m128i_i32[1];
    v26 = sub_22450D0(&ptr, v12);
    sub_111A3D0(&v29, (__int64 *)ptr + v26, 0);
    v24 = v3 + 1;
    if ( v28 == v3 )
      goto LABEL_25;
LABEL_20:
    v3 = v24;
    v1 = *(_QWORD *)(a1 + 96);
  }
  if ( *v13 == -8 )
  {
    --si128.m128i_i32[2];
    goto LABEL_22;
  }
  sub_111A3D0(&v29, v13, 0);
  v14 = *(_QWORD *)(a1 + 96);
  v15 = v14 + 32 * v3;
  v16 = v14 + 32LL * *(int *)(*v29 + 8);
  v17 = *(_QWORD *)(v15 + 8);
  if ( v17 != *(_QWORD *)(v16 + 8) || v17 && memcmp(*(const void **)v15, *(const void **)v16, v17) )
  {
    v18 = 0;
    goto LABEL_9;
  }
  v24 = v3 + 1;
  if ( v28 != v3 )
    goto LABEL_20;
LABEL_25:
  v18 = 1;
LABEL_9:
  v19 = (char *)ptr;
  if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
  {
    v20 = 0;
    v21 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    do
    {
      v22 = *(_QWORD **)&v19[v20];
      if ( v22 != (_QWORD *)-8LL && v22 )
      {
        operator delete(*(_QWORD *)&v19[v20], *v22 + 17LL, 8);
        v19 = (char *)ptr;
      }
      v20 += 8;
    }
    while ( v20 != v21 );
  }
LABEL_16:
  free(v19);
  return v18;
}
