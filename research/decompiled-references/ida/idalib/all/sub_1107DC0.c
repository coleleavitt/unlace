void __fastcall sub_1107DC0(__int64 a1, __int64 a2)
{
  const char **v2; // r12
  __int64 v3; // rax
  const char *v4; // rbp
  size_t v5; // r13
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r8d
  _QWORD *v12; // r9
  _QWORD *v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rax
  const char **v19; // r12
  const char *v20; // rbp
  size_t v21; // r13
  unsigned int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  char *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rbp
  _QWORD *v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rbp
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // [rsp+8h] [rbp-90h]
  __int64 *v35; // [rsp+8h] [rbp-90h]
  char *v36; // [rsp+10h] [rbp-88h]
  const char **v37; // [rsp+10h] [rbp-88h]
  const char **v38; // [rsp+18h] [rbp-80h]
  char v39; // [rsp+18h] [rbp-80h]
  _QWORD *v40; // [rsp+28h] [rbp-70h]
  __int64 *v41; // [rsp+38h] [rbp-60h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __m128i si128; // [rsp+48h] [rbp-50h]

  v2 = *(const char ***)(a1 + 256);
  v3 = *(unsigned int *)(a1 + 264);
  ptr = nullptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
  v38 = &v2[v3];
  if ( v2 != v38 )
  {
    while ( 1 )
    {
      v4 = *v2;
      v5 = 0;
      if ( *v2 )
        v5 = strlen(*v2);
      v6 = sub_2244B30(v4, v5);
      v7 = (unsigned int)sub_2244CB0(&ptr, v4, v5, v6);
      v9 = (__int64 *)((char *)ptr + 8 * v7);
      if ( !*v9 )
        goto LABEL_9;
      if ( *v9 == -8 )
      {
        --si128.m128i_i32[2];
LABEL_9:
        v36 = (char *)ptr + 8 * v7;
        v34 = v7;
        v10 = sub_22300B0(v5 + 9, 8, v7, v8, v7, v9);
        v11 = v34;
        v12 = v36;
        v13 = (_QWORD *)v10;
        if ( v5 )
        {
          v40 = (_QWORD *)v10;
          memcpy((void *)(v10 + 8), v4, v5);
          v13 = v40;
          v12 = v36;
          v11 = v34;
        }
        *((_BYTE *)v13 + v5 + 8) = 0;
        ++v2;
        *v13 = v5;
        *v12 = v13;
        ++si128.m128i_i32[1];
        v14 = sub_22450D0(&ptr, v11);
        sub_A45C10(&v41, (__int64 *)ptr + v14, 0);
        if ( v38 == v2 )
          break;
      }
      else
      {
        ++v2;
        sub_A45C10(&v41, v9, 0);
        if ( v38 == v2 )
          break;
      }
    }
  }
  v15 = *(_QWORD *)(a1 + 40);
  v16 = *(unsigned int *)(a2 + 8);
  if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, v16 + 1, 8);
    v16 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v16) = v15;
  v17 = *(_QWORD *)(a1 + 48);
  v18 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v18;
  if ( v17 )
  {
    if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      sub_2237220(a2, a2 + 16, v18 + 1, 8);
      v18 = *(unsigned int *)(a2 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a2 + 8 * v18) = v17;
    ++*(_DWORD *)(a2 + 8);
  }
  v19 = *(const char ***)(a1 + 56);
  v37 = &v19[*(unsigned int *)(a1 + 64)];
  if ( v19 != v37 )
  {
    v39 = 1;
    do
    {
      while ( 1 )
      {
        v20 = *v19;
        v21 = 0;
        if ( *v19 )
          v21 = strlen(*v19);
        sub_105CB60(&v41, (__int64 *)ptr + si128.m128i_u32[0], 1);
        v35 = v41;
        v22 = sub_2244B30(v20, v21);
        v23 = sub_2244E60(&ptr, v20, v21, v22);
        if ( v23 == -1 )
          sub_105CB60(&v41, (__int64 *)ptr + si128.m128i_u32[0], 1);
        else
          sub_105CB60(&v41, (__int64 *)ptr + v23, 1);
        if ( v35 != v41 )
          break;
        v24 = *(unsigned int *)(a2 + 8);
        if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          sub_2237220(a2, a2 + 16, v24 + 1, 8);
          v24 = *(unsigned int *)(a2 + 8);
        }
        ++v19;
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v24) = v20;
        ++*(_DWORD *)(a2 + 8);
        if ( v37 == v19 )
          goto LABEL_30;
      }
      if ( v39 )
      {
        v29 = *(_QWORD *)(a1 + 32);
        v30 = *(unsigned int *)(a2 + 8);
        if ( v30 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          sub_2237220(a2, a2 + 16, v30 + 1, 8);
          v30 = *(unsigned int *)(a2 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v30) = v29;
        v31 = *(_QWORD *)(a1 + 248);
        v32 = *(unsigned int *)(a2 + 12);
        v33 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v33;
        if ( v33 + 1 > v32 )
        {
          sub_2237220(a2, a2 + 16, v33 + 1, 8);
          v33 = *(unsigned int *)(a2 + 8);
        }
        v39 = 0;
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v33) = v31;
        ++*(_DWORD *)(a2 + 8);
      }
      ++v19;
    }
    while ( v37 != v19 );
  }
LABEL_30:
  v25 = (char *)ptr;
  if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
  {
    v26 = 0;
    v27 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    do
    {
      v28 = *(_QWORD **)&v25[v26];
      if ( v28 && v28 != (_QWORD *)-8LL )
      {
        operator delete(*(_QWORD *)&v25[v26], *v28 + 9LL, 8);
        v25 = (char *)ptr;
      }
      v26 += 8;
    }
    while ( v26 != v27 );
  }
  free(v25);
}
