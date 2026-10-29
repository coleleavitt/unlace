__int64 __fastcall sub_6F3B20(const __m128i *a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // r15
  __int64 v9; // r14
  _QWORD *v10; // r12
  _QWORD *v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rsi
  char v15; // bl
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  __int64 *v18; // r12
  unsigned __int64 v19; // r13
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // rdi
  unsigned __int64 v23; // r12
  __int64 *v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v28; // rdi
  __int64 *v29; // rbx
  __int64 v30; // rsi
  __m128i v31; // xmm0
  __int64 v32; // rsi
  __int64 v33; // rdi
  _QWORD *v34; // [rsp+8h] [rbp-180h]
  int v38[2]; // [rsp+30h] [rbp-158h]
  unsigned int v39; // [rsp+4Ch] [rbp-13Ch]
  char v40[8]; // [rsp+58h] [rbp-130h] BYREF
  _QWORD v41[2]; // [rsp+60h] [rbp-128h] BYREF
  __int64 v42; // [rsp+70h] [rbp-118h] BYREF
  _QWORD *v43; // [rsp+78h] [rbp-110h]
  __int64 v44; // [rsp+80h] [rbp-108h] BYREF
  __int64 v45; // [rsp+88h] [rbp-100h]
  int v46[2]; // [rsp+90h] [rbp-F8h] BYREF
  char v47[16]; // [rsp+98h] [rbp-F0h] BYREF
  __m128 v48; // [rsp+A8h] [rbp-E0h]
  __int64 *v49; // [rsp+B8h] [rbp-D0h]
  int v50[4]; // [rsp+C0h] [rbp-C8h] BYREF
  void *ptr; // [rsp+D0h] [rbp-B8h]
  __int64 v52; // [rsp+D8h] [rbp-B0h]
  __int64 v53; // [rsp+E0h] [rbp-A8h]
  __int64 v54; // [rsp+E8h] [rbp-A0h]
  __int64 v55; // [rsp+F0h] [rbp-98h]
  __int64 v56; // [rsp+F8h] [rbp-90h]
  __int64 v57; // [rsp+100h] [rbp-88h]
  __int64 v58; // [rsp+108h] [rbp-80h]
  __int64 *v59; // [rsp+110h] [rbp-78h]
  __int64 v60; // [rsp+118h] [rbp-70h]
  __int64 v61; // [rsp+120h] [rbp-68h]
  __int64 v62; // [rsp+128h] [rbp-60h]
  int v63; // [rsp+130h] [rbp-58h]
  __int64 v64; // [rsp+138h] [rbp-50h]
  __int64 v65; // [rsp+140h] [rbp-48h] BYREF

  *(_QWORD *)v50 = 0;
  sub_1360C00(v40, a2, v50);
  sub_18572D0(v50);
  sub_1360B80(v40, 0);
  sub_13615B0(v50, v40, *a4);
  v5 = *(_QWORD *)v50;
  if ( *(_QWORD *)v50 )
  {
    v6 = *(_QWORD *)&v50[2];
    v7 = (*(_DWORD *)(*(_QWORD *)v50 + 8LL))-- == 1;
    if ( v7 )
      sub_15D7BC0(v6, v5);
  }
  v8 = a3[1];
  if ( v8 )
  {
    *(_QWORD *)v38 = v8 + 8LL * *(unsigned int *)(v8 - 4);
    if ( *(_QWORD *)v38 == v8 )
    {
      v39 = 0;
LABEL_47:
      *(_DWORD *)(v8 - 4) = v39;
      return sub_13606C0(v40);
    }
    v34 = (_QWORD *)a3[1];
    v39 = 0;
    do
    {
      v9 = *v34;
      sub_13615B0(v41, v40, *v34);
      v43 = nullptr;
      v42 = a1->m128i_i64[0];
      *(_QWORD *)v46 = v42;
      sub_1684300(v47, v42);
      v48 = _mm_loadh_ps((const double *)v46);
      if ( v9 )
        ++*(_DWORD *)(v9 + 8);
      *(_QWORD *)&v50[2] = 0;
      v49 = &v42;
      ptr = nullptr;
      sub_6F3480((__int64)v46, (__int64)v50, (_DWORD *)*a4);
      if ( ptr )
        sub_186B220(ptr);
      if ( v43 )
      {
        v10 = &v43[*((unsigned int *)v43 - 1)];
        if ( v43 != v10 )
        {
          v11 = v43;
          while ( 1 )
          {
            v13 = *v11;
            sub_13615B0(&v44, v40, *v11);
            v14 = v44;
            if ( v44 == v41[0] )
            {
              if ( !(unsigned __int8)sub_167C200(v9, v13) )
              {
                ptr = nullptr;
                v31 = _mm_loadl_epi64(a1);
                v53 = 0;
                v54 = 0;
                v55 = 0;
                v59 = &v65;
                v56 = 0;
                v58 = 0;
                v60 = 1;
                v61 = 0;
                v62 = 0;
                v63 = 1065353216;
                v64 = 0;
                v65 = 0;
                *(__m128i *)v50 = _mm_unpacklo_epi64(v31, v31);
                v52 = v31.m128i_i64[0];
                v57 = v31.m128i_i64[0];
                sub_14EA0D0(v50, v9, v13);
                sub_14EA2A0(v50, *a4, a4);
                sub_268600((__int64)v50);
                v32 = v44;
                if ( v44 )
                {
                  v33 = v45;
                  v7 = (*(_DWORD *)(v44 + 8))-- == 1;
                  if ( v7 )
                    sub_15D7BC0(v33, v32);
                }
                v15 = 1;
                goto LABEL_22;
              }
              v14 = v44;
            }
            if ( v14 && (v12 = v45, v7 = *(_DWORD *)(v14 + 8) == 1, --*(_DWORD *)(v14 + 8), v7) )
            {
              sub_15D7BC0(v12, v14);
              if ( v10 == ++v11 )
                break;
            }
            else if ( v10 == ++v11 )
            {
              break;
            }
          }
        }
      }
      v15 = 0;
LABEL_22:
      v16 = v48.m128_u64[0];
      if ( v48.m128_u64[0] )
      {
        v17 = v48.m128_u64[1];
        v7 = (*(_DWORD *)(v48.m128_u64[0] + 8))-- == 1;
        if ( v7 )
          sub_15D7BC0(v17, v16);
      }
      v18 = v43;
      if ( v43 )
      {
        v19 = (unsigned __int64)&v43[*((unsigned int *)v43 - 1)];
        if ( (unsigned __int64)v43 >= v19 )
          goto LABEL_33;
        do
        {
          while ( 1 )
          {
            v20 = *v18;
            if ( *v18 )
            {
              v7 = (*(_DWORD *)(v20 + 8))-- == 1;
              if ( v7 )
                break;
            }
            if ( (unsigned __int64)++v18 >= v19 )
              goto LABEL_32;
          }
          sub_15D7BC0(v42, v20);
          ++v18;
        }
        while ( (unsigned __int64)v18 < v19 );
LABEL_32:
        v18 = v43;
        if ( v43 )
LABEL_33:
          sub_186B220(v18 - 1);
      }
      v21 = v41[0];
      if ( v41[0] )
      {
        v22 = v41[1];
        v7 = (*(_DWORD *)(v41[0] + 8LL))-- == 1;
        if ( v7 )
          sub_15D7BC0(v22, v21);
      }
      if ( !v15 )
      {
        v28 = *a3;
        v29 = (__int64 *)(a3[1] + 8LL * v39);
        if ( v9 )
          ++*(_DWORD *)(v9 + 8);
        v30 = *v29;
        if ( *v29 )
        {
          v7 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v28, v30);
        }
        *v29 = v9;
        ++v39;
      }
      ++v34;
    }
    while ( *(_QWORD **)v38 != v34 );
    v8 = a3[1];
    if ( v8 )
    {
      v23 = v8 + 8LL * *(unsigned int *)(v8 - 4);
      v24 = (__int64 *)(v8 + 8LL * v39);
      if ( (unsigned __int64)v24 >= v23 )
        goto LABEL_47;
      do
      {
        while ( 1 )
        {
          v25 = *v24;
          if ( *v24 )
          {
            v26 = *a3;
            v7 = (*(_DWORD *)(v25 + 8))-- == 1;
            if ( v7 )
              break;
          }
          if ( (unsigned __int64)++v24 >= v23 )
            goto LABEL_46;
        }
        sub_15D7BC0(v26, v25);
        ++v24;
      }
      while ( (unsigned __int64)v24 < v23 );
LABEL_46:
      v8 = a3[1];
      if ( v8 )
        goto LABEL_47;
    }
  }
  return sub_13606C0(v40);
}

