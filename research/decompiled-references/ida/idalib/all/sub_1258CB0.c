__int64 *__fastcall sub_1258CB0(__int64 *a1, __int64 *a2)
{
  const __m128i *v3; // rsi
  void *v4; // rdi
  __int64 v5; // rax
  _QWORD *v6; // r15
  __m128i *v7; // rdi
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 *v11; // rdx
  __int64 *v12; // rax
  __int64 i; // r14
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 *v20; // rsi
  __int64 v21; // rax
  void *v22; // rdi
  void **v23; // rbx
  unsigned __int64 v24; // rbp
  void *v25; // rdi
  _QWORD **v26; // rbx
  _QWORD **v27; // rbp
  int *v29; // rax
  int *v30; // rcx
  unsigned __int64 v31; // rax
  int *v32; // rax
  int *v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // [rsp+18h] [rbp-150h] BYREF
  __int64 *v36; // [rsp+20h] [rbp-148h]
  __int64 *v37; // [rsp+28h] [rbp-140h]
  void **v38; // [rsp+30h] [rbp-138h]
  __m128i *v39; // [rsp+38h] [rbp-130h]
  __int64 v40; // [rsp+48h] [rbp-120h] BYREF
  __int64 v41; // [rsp+50h] [rbp-118h] BYREF
  int v42; // [rsp+58h] [rbp-110h] BYREF
  void *v43; // [rsp+60h] [rbp-108h]
  int *v44; // [rsp+68h] [rbp-100h]
  int *v45; // [rsp+70h] [rbp-F8h]
  __int64 v46; // [rsp+78h] [rbp-F0h]
  __m128i v47; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v48; // [rsp+90h] [rbp-D8h] BYREF
  __m128i v49[3]; // [rsp+B0h] [rbp-B8h] BYREF
  void *v50[2]; // [rsp+E0h] [rbp-88h] BYREF
  void *v51; // [rsp+F0h] [rbp-78h]
  __int64 v52; // [rsp+F8h] [rbp-70h]
  __int64 v53; // [rsp+100h] [rbp-68h]
  unsigned __int64 v54; // [rsp+108h] [rbp-60h]
  __m128 v55; // [rsp+110h] [rbp-58h]
  __m128 v56; // [rsp+120h] [rbp-48h]

  v3 = nullptr;
  v36 = a1;
  v44 = &v42;
  v45 = &v42;
  v38 = v50;
  v42 = 0;
  v43 = nullptr;
  v46 = 0;
  v50[0] = nullptr;
  v50[1] = nullptr;
  v51 = nullptr;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0u;
  v56 = 0u;
  sub_12575D0((__int64)v50, 0);
  v37 = a2 + 1;
  if ( v55.m128_u64[0] == v56.m128_u64[0] - 8 )
  {
    v3 = (const __m128i *)(a2 + 1);
    sub_1253030((__int64)v38, a2 + 1);
    v4 = (void *)v55.m128_u64[0];
  }
  else
  {
    v4 = (void *)(v55.m128_u64[0] + 8);
    *(_QWORD *)v55.m128_u64[0] = a2[1];
    v55.m128_u64[0] = (unsigned __int64)v4;
  }
  if ( v4 != v51 )
  {
    v39 = (__m128i *)&v48;
    do
    {
      if ( (void *)v55.m128_u64[1] == v4 )
      {
        v40 = *(_QWORD *)(*(_QWORD *)(v56.m128_u64[1] - 8) + 504LL);
        operator delete(v4);
        v35 = *(_QWORD *)(v56.m128_u64[1] - 8);
        v55 = _mm_loadh_ps((const double *)&v35);
        v35 = v56.m128_u64[1] - 8;
        v5 = v40;
        v56 = _mm_loadh_ps((const double *)&v35);
      }
      else
      {
        v5 = *((_QWORD *)v4 - 1);
        v55.m128_u64[0] = (unsigned __int64)v4 - 8;
        v40 = v5;
      }
      sub_12526E0(&v47, (const __m128i *)(*(_QWORD *)(*a2 + 56) + 48 * v5));
      v6 = (_QWORD *)*a2;
      sub_124FC70(v49, &v47);
      v7 = (__m128i *)v6[8];
      if ( v7 == (__m128i *)v6[9] )
      {
        v3 = (const __m128i *)v6[8];
        sub_1252750((__int64)(v6 + 7), v3, v49);
        v8 = v6[8];
      }
      else
      {
        v3 = v49;
        sub_124FC70(v7, v49);
        v8 = v6[8] + 48LL;
        v6[8] = v8;
      }
      v9 = 0xAAAAAAAAAAAAAAABLL * ((v8 - v6[7]) >> 4);
      if ( v9 > 0x186A0 )
        abort();
      v10 = v9 - 1;
      sub_124FBE0((__int64)v49);
      v11 = (__int64 *)v43;
      if ( v43 )
      {
        v12 = (__int64 *)&v42;
        do
        {
          while ( v11[4] >= v40 )
          {
            v12 = v11;
            v11 = (__int64 *)v11[2];
            if ( !v11 )
              goto LABEL_15;
          }
          v11 = (__int64 *)v11[3];
        }
        while ( v11 );
LABEL_15:
        if ( v12 != (__int64 *)&v42 && v40 >= v12[4] )
          goto LABEL_18;
      }
      else
      {
        v12 = (__int64 *)&v42;
      }
      v49[0].m128i_i64[0] = (__int64)&v40;
      v3 = (const __m128i *)v12;
      v12 = sub_1258AE0(&v41, v12, (__int64 **)v49);
LABEL_18:
      v12[5] = v10;
      if ( ((unsigned int)(v47.m128i_i32[0] - 1) <= 1 || v47.m128i_i32[0] == 7) && v48 != -1 )
      {
        v29 = (int *)v43;
        if ( !v43 )
          goto LABEL_55;
        v30 = &v42;
        do
        {
          while ( v48 <= *((_QWORD *)v29 + 4) )
          {
            v30 = v29;
            v29 = *((int **)v29 + 2);
            if ( !v29 )
              goto LABEL_53;
          }
          v29 = *((int **)v29 + 3);
        }
        while ( v29 );
LABEL_53:
        if ( v30 == &v42 || v48 < *((_QWORD *)v30 + 4) )
        {
LABEL_55:
          v31 = v55.m128_u64[0];
          if ( v55.m128_u64[0] == v56.m128_u64[0] - 8 )
          {
            v3 = v39;
            sub_1253030((__int64)v38, v39->m128i_i64);
          }
          else
          {
            *(_QWORD *)v55.m128_u64[0] = v48;
            v55.m128_u64[0] = v31 + 8;
          }
        }
      }
      if ( a2[2] != v40 && v47.m128i_i64[1] != -1 )
      {
        v32 = (int *)v43;
        if ( !v43 )
          goto LABEL_64;
        v33 = &v42;
        do
        {
          while ( v47.m128i_i64[1] <= *((_QWORD *)v32 + 4) )
          {
            v33 = v32;
            v32 = *((int **)v32 + 2);
            if ( !v32 )
              goto LABEL_62;
          }
          v32 = *((int **)v32 + 3);
        }
        while ( v32 );
LABEL_62:
        if ( v33 == &v42 || v47.m128i_i64[1] < *((_QWORD *)v33 + 4) )
        {
LABEL_64:
          v34 = v55.m128_u64[0];
          if ( v55.m128_u64[0] == v56.m128_u64[0] - 8 )
          {
            v3 = (const __m128i *)&v47.m128i_u64[1];
            sub_1253030((__int64)v38, &v47.m128i_i64[1]);
          }
          else
          {
            *(_QWORD *)v55.m128_u64[0] = v47.m128i_i64[1];
            v55.m128_u64[0] = v34 + 8;
          }
        }
      }
      sub_124FBE0((__int64)&v47);
      v4 = (void *)v55.m128_u64[0];
    }
    while ( v51 != (void *)v55.m128_u64[0] );
  }
  for ( i = (__int64)v44; (int *)i != &v42; i = std::_Rb_tree_increment(i, v3->m128i_i8) )
  {
    v14 = *(_QWORD *)(*a2 + 56) + 48LL * *(_QWORD *)(i + 40);
    v15 = *(_QWORD *)(v14 + 8);
    if ( v15 != -1 )
    {
      v16 = (__int64 *)v43;
      v17 = (__int64 *)&v42;
      if ( !v43 )
        goto LABEL_32;
      do
      {
        while ( v15 <= v16[4] )
        {
          v17 = v16;
          v16 = (__int64 *)v16[2];
          if ( !v16 )
            goto LABEL_30;
        }
        v16 = (__int64 *)v16[3];
      }
      while ( v16 );
LABEL_30:
      if ( v17 == (__int64 *)&v42 || v15 < v17[4] )
      {
LABEL_32:
        v3 = (const __m128i *)v17;
        v49[0].m128i_i64[0] = v14 + 8;
        v17 = sub_1258AE0(&v41, v17, (__int64 **)v49);
      }
      *(_QWORD *)(v14 + 8) = v17[5];
    }
    if ( ((unsigned int)(*(_DWORD *)v14 - 1) <= 1 || *(_DWORD *)v14 == 7) && *(_QWORD *)(v14 + 16) != -1 )
    {
      v3 = (const __m128i *)(v14 + 16);
      *(_QWORD *)(v14 + 16) = *sub_1258C40(&v41, (__int64 *)(v14 + 16));
    }
  }
  v18 = *sub_1258C40(&v41, a2 + 2);
  v19 = sub_1258C40(&v41, v37);
  v20 = v36;
  v21 = *v19;
  v22 = v50[0];
  *v36 = *a2;
  v20[1] = v21;
  v20[2] = v18;
  if ( v22 )
  {
    v23 = (void **)v54;
    v24 = v56.m128_u64[1] + 8;
    if ( v56.m128_u64[1] + 8 > v54 )
    {
      do
      {
        v25 = *v23++;
        operator delete(v25);
      }
      while ( v24 > (unsigned __int64)v23 );
      v22 = v50[0];
    }
    operator delete(v22);
  }
  v26 = (_QWORD **)v43;
  if ( v43 )
  {
    do
    {
      sub_1252FF0((__int64)&v41, v26[3]);
      v27 = (_QWORD **)v26[2];
      operator delete(v26);
      v26 = v27;
    }
    while ( v27 );
  }
  return v36;
}
