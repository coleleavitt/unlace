__int64 __fastcall sub_E52E60(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // edx
  bool v8; // zf
  __m128i v9; // xmm0
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdi
  _QWORD *v18; // rbx
  void *v19; // rdi
  __int64 *v20; // rbx
  unsigned __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 *v24; // rbx
  unsigned __int64 v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 *v28; // rbx
  unsigned __int64 v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // [rsp+8h] [rbp-E0h]
  __m128i v35; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+28h] [rbp-C0h]
  __int64 *v38; // [rsp+30h] [rbp-B8h]
  __int64 v39; // [rsp+38h] [rbp-B0h]
  __int64 *v40; // [rsp+40h] [rbp-A8h]
  __int64 v41; // [rsp+48h] [rbp-A0h]
  __int64 v42; // [rsp+50h] [rbp-98h]
  __int64 v43; // [rsp+58h] [rbp-90h]
  __int64 v44; // [rsp+60h] [rbp-88h]
  __int64 *v45; // [rsp+68h] [rbp-80h]
  void *s; // [rsp+70h] [rbp-78h]
  __int64 v47; // [rsp+78h] [rbp-70h]
  void *v48; // [rsp+80h] [rbp-68h]
  __int64 v49; // [rsp+88h] [rbp-60h]
  int v50; // [rsp+90h] [rbp-58h]
  __int64 v51; // [rsp+98h] [rbp-50h]
  _QWORD v52[9]; // [rsp+A0h] [rbp-48h] BYREF

  result = sub_E39670(*(_QWORD **)(a1 + 104));
  v4 = *(_QWORD *)(a1 + 632);
  v5 = *(_QWORD *)(a1 + 640);
  if ( result )
  {
    v6 = *(unsigned int *)(result + 8);
    v7 = v6 + 1;
    *(_DWORD *)(result + 8) = v6 + 1;
    if ( v4 )
    {
      v8 = (*(_DWORD *)(v4 + 8))-- == 1;
      if ( v8 )
      {
        v34 = result;
        sub_15D7BC0(v5, v4);
        result = v34;
      }
      *(_QWORD *)(a1 + 632) = result;
      v7 = *(_DWORD *)(result + 8);
    }
    else
    {
      *(_QWORD *)(a1 + 632) = result;
    }
    v9 = _mm_loadl_epi64((const __m128i *)(a1 + 96));
    v10 = *(_QWORD *)(a1 + 112);
    v11 = (unsigned int)(v7 + 1);
    *(_DWORD *)(result + 8) = v11;
    s = v52;
    v38 = nullptr;
    v40 = nullptr;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v45 = nullptr;
    v47 = 1;
    v48 = nullptr;
    v49 = 0;
    v50 = 1065353216;
    v51 = 0;
    v52[0] = 0;
    v35 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)result, v9);
    v36 = v9.m128i_i64[0];
    v37 = v9.m128i_i64[0];
    v39 = v9.m128i_i64[0];
    v44 = v9.m128i_i64[0];
    if ( v10 )
    {
      v12 = v10 + 32LL * *(unsigned int *)(v10 - 4);
      if ( v12 != v10 )
      {
        do
        {
          v13 = *(_QWORD *)(v10 + 16);
          if ( v13 )
          {
            v14 = sub_15DE060(*(_QWORD *)(a1 + 96), *(_QWORD *)(v10 + 8), v11, v6, v3);
            sub_14EA0D0(&v36, v14, v13);
          }
          v10 += 32;
        }
        while ( v12 != v10 );
        result = v35.m128i_i64[0];
      }
    }
    sub_14EA2A0(&v36, result, &v35);
    v15 = v35.m128i_i64[0];
    if ( v35.m128i_i64[0] )
      ++*(_DWORD *)(v35.m128i_i64[0] + 8);
    v16 = *(_QWORD *)(a1 + 632);
    if ( v16 )
    {
      v17 = *(_QWORD *)(a1 + 640);
      v8 = (*(_DWORD *)(v16 + 8))-- == 1;
      if ( v8 )
        sub_15D7BC0(v17, v16);
    }
    *(_QWORD *)(a1 + 632) = v15;
    v18 = v48;
    if ( v48 )
    {
      do
      {
        v19 = v18;
        v18 = (_QWORD *)*v18;
        operator delete(v19, 0x18u);
      }
      while ( v18 );
    }
    memset(s, 0, 8 * v47);
    v49 = 0;
    v48 = nullptr;
    if ( s != v52 )
      operator delete(s, 8 * v47);
    v20 = v45;
    if ( v45 )
    {
      v21 = (unsigned __int64)&v45[*((unsigned int *)v45 - 1)];
      if ( (unsigned __int64)v45 >= v21 )
        goto LABEL_29;
      do
      {
        while ( 1 )
        {
          v22 = *v20;
          if ( *v20 )
          {
            v23 = v44;
            v8 = (*(_DWORD *)(v22 + 8))-- == 1;
            if ( v8 )
              break;
          }
          if ( (unsigned __int64)++v20 >= v21 )
            goto LABEL_28;
        }
        sub_15D7BC0(v23, v22);
        ++v20;
      }
      while ( (unsigned __int64)v20 < v21 );
LABEL_28:
      v20 = v45;
      if ( v45 )
LABEL_29:
        sub_186B220(v20 - 1);
    }
    if ( v43 )
      sub_186B220((void *)(v43 - 8));
    if ( v42 )
      sub_186B220((void *)(v42 - 8));
    if ( v41 )
      sub_186B220((void *)(v41 - 8));
    v24 = v40;
    if ( v40 )
    {
      v25 = (unsigned __int64)&v40[*((unsigned int *)v40 - 1)];
      if ( (unsigned __int64)v40 >= v25 )
        goto LABEL_44;
      do
      {
        while ( 1 )
        {
          v26 = *v24;
          if ( *v24 )
          {
            v27 = v39;
            v8 = (*(_DWORD *)(v26 + 8))-- == 1;
            if ( v8 )
              break;
          }
          if ( (unsigned __int64)++v24 >= v25 )
            goto LABEL_43;
        }
        sub_15D7BC0(v27, v26);
        ++v24;
      }
      while ( (unsigned __int64)v24 < v25 );
LABEL_43:
      v24 = v40;
      if ( v40 )
LABEL_44:
        sub_186B220(v24 - 1);
    }
    v28 = v38;
    if ( v38 )
    {
      v29 = (unsigned __int64)&v38[*((unsigned int *)v38 - 1)];
      if ( (unsigned __int64)v38 >= v29 )
        goto LABEL_53;
      do
      {
        while ( 1 )
        {
          v30 = *v28;
          if ( *v28 )
          {
            v31 = v37;
            v8 = (*(_DWORD *)(v30 + 8))-- == 1;
            if ( v8 )
              break;
          }
          if ( (unsigned __int64)++v28 >= v29 )
            goto LABEL_52;
        }
        sub_15D7BC0(v31, v30);
        ++v28;
      }
      while ( (unsigned __int64)v28 < v29 );
LABEL_52:
      v28 = v38;
      if ( v38 )
LABEL_53:
        sub_186B220(v28 - 1);
    }
    v32 = v35.m128i_i64[0];
    if ( v35.m128i_i64[0] )
    {
      v33 = v35.m128i_i64[1];
      v8 = (*(_DWORD *)(v35.m128i_i64[0] + 8))-- == 1;
      if ( v8 )
        sub_15D7BC0(v33, v32);
    }
    return *(_QWORD *)(a1 + 632);
  }
  else
  {
    if ( v4 )
    {
      v8 = (*(_DWORD *)(v4 + 8))-- == 1;
      if ( v8 )
      {
        sub_15D7BC0(v5, v4);
        result = 0;
      }
    }
    *(_QWORD *)(a1 + 632) = 0;
  }
  return result;
}

