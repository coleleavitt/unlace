__int64 __fastcall Z3_substitute(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // r13
  __int8 v6; // al
  __int64 v7; // rax
  _QWORD *v8; // rbp
  _QWORD *v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r12
  __m128i v13; // xmm0
  _QWORD *v14; // rbx
  _QWORD *v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  _QWORD *v19; // rbp
  void *v20; // rdi
  __int64 *v21; // rbx
  unsigned __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 *v25; // rbx
  unsigned __int64 v26; // rbp
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 *v29; // rbx
  unsigned __int64 v30; // rbp
  __int64 v31; // rsi
  __int64 v32; // rdi
  __m128i v35; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v36; // [rsp+20h] [rbp-E8h]
  _QWORD *v37; // [rsp+28h] [rbp-E0h]
  __int64 v38; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v39; // [rsp+38h] [rbp-D0h]
  __m128i v40; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v41; // [rsp+50h] [rbp-B8h]
  __int64 v42; // [rsp+58h] [rbp-B0h]
  __int64 *v43; // [rsp+60h] [rbp-A8h]
  __int64 v44; // [rsp+68h] [rbp-A0h]
  __int64 v45; // [rsp+70h] [rbp-98h]
  __int64 v46; // [rsp+78h] [rbp-90h]
  __int64 v47; // [rsp+80h] [rbp-88h]
  __int64 *v48; // [rsp+88h] [rbp-80h]
  void *s; // [rsp+90h] [rbp-78h]
  __int64 v50; // [rsp+98h] [rbp-70h]
  void *v51; // [rsp+A0h] [rbp-68h]
  __int64 v52; // [rsp+A8h] [rbp-60h]
  int v53; // [rsp+B0h] [rbp-58h]
  __int64 v54; // [rsp+B8h] [rbp-50h]
  _QWORD v55[9]; // [rsp+C0h] [rbp-48h] BYREF

  v5 = a3;
  v36 = a2;
  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v35.m128i_i8[15] = v6;
  if ( v6 )
    sub_29B1B0(a1, v36, a3, a4, a5);
  v7 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  v35.m128i_i64[0] = v7;
  if ( !(_DWORD)v5 )
  {
LABEL_9:
    v13 = _mm_loadl_epi64(&v35);
    v41 = nullptr;
    v43 = nullptr;
    v42 = v35.m128i_i64[0];
    v47 = v35.m128i_i64[0];
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v48 = nullptr;
    v37 = v55;
    s = v55;
    v50 = 1;
    v51 = nullptr;
    v52 = 0;
    v53 = 1065353216;
    v54 = 0;
    v55[0] = 0;
    v40 = _mm_unpacklo_epi64(v13, v13);
    if ( (_DWORD)v5 )
    {
      v14 = a5;
      v15 = a4;
      do
        sub_14EA0D0(&v40, *v15++, *v14++);
      while ( &a5[v5] != v14 );
    }
    v38 = 0;
    v39 = v35.m128i_i64[0];
    sub_14EA2A0(&v40, v36, &v38);
    sub_251FD0(a1, v38);
    v11 = v38;
    v16 = v38;
    if ( v35.m128i_i8[15] )
    {
      sub_2BB620(v38);
      v16 = v38;
    }
    if ( v16 && (v17 = v39, v18 = *(_DWORD *)(v16 + 8) == 1, --*(_DWORD *)(v16 + 8), v18) )
    {
      sub_15D7BC0(v17, v16);
      v19 = v51;
      if ( v51 )
      {
        do
        {
LABEL_17:
          v20 = v19;
          v19 = (_QWORD *)*v19;
          operator delete(v20, 0x18u);
        }
        while ( v19 );
      }
    }
    else
    {
      v19 = v51;
      if ( v51 )
        goto LABEL_17;
    }
    memset(s, 0, 8 * v50);
    v52 = 0;
    v51 = nullptr;
    if ( s != v37 )
      operator delete(s, 8 * v50);
    v21 = v48;
    if ( v48 )
    {
      v22 = (unsigned __int64)&v48[*((unsigned int *)v48 - 1)];
      if ( (unsigned __int64)v48 >= v22 )
        goto LABEL_28;
      do
      {
        while ( 1 )
        {
          v23 = *v21;
          if ( *v21 )
          {
            v24 = v47;
            v18 = (*(_DWORD *)(v23 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v21 >= v22 )
            goto LABEL_27;
        }
        sub_15D7BC0(v24, v23);
        ++v21;
      }
      while ( (unsigned __int64)v21 < v22 );
LABEL_27:
      v21 = v48;
      if ( v48 )
LABEL_28:
        sub_186B220(v21 - 1);
    }
    if ( v46 )
      sub_186B220((void *)(v46 - 8));
    if ( v45 )
      sub_186B220((void *)(v45 - 8));
    if ( v44 )
      sub_186B220((void *)(v44 - 8));
    v25 = v43;
    if ( v43 )
    {
      v26 = (unsigned __int64)&v43[*((unsigned int *)v43 - 1)];
      if ( (unsigned __int64)v43 >= v26 )
        goto LABEL_43;
      do
      {
        while ( 1 )
        {
          v27 = *v25;
          if ( *v25 )
          {
            v28 = v42;
            v18 = (*(_DWORD *)(v27 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v25 >= v26 )
            goto LABEL_42;
        }
        sub_15D7BC0(v28, v27);
        ++v25;
      }
      while ( (unsigned __int64)v25 < v26 );
LABEL_42:
      v25 = v43;
      if ( v43 )
LABEL_43:
        sub_186B220(v25 - 1);
    }
    v29 = v41;
    if ( v41 )
    {
      v30 = (unsigned __int64)&v41[*((unsigned int *)v41 - 1)];
      if ( (unsigned __int64)v41 >= v30 )
        goto LABEL_52;
      do
      {
        while ( 1 )
        {
          v31 = *v29;
          if ( *v29 )
          {
            v32 = v40.m128i_i64[1];
            v18 = (*(_DWORD *)(v31 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v29 >= v30 )
            goto LABEL_51;
        }
        sub_15D7BC0(v32, v31);
        ++v29;
      }
      while ( (unsigned __int64)v29 < v30 );
LABEL_51:
      v29 = v41;
      if ( v41 )
LABEL_52:
        sub_186B220(v29 - 1);
    }
    if ( !v35.m128i_i8[15] )
      return v11;
LABEL_54:
    byte_1C7EBA0 = 1;
    return v11;
  }
  v8 = a5;
  v9 = a4;
  while ( 1 )
  {
    v10 = sub_15D1F10(*v9);
    if ( v10 != sub_15D1F10(*v8) )
      break;
    ++v9;
    ++v8;
    if ( &a4[(unsigned int)v5] == v9 )
      goto LABEL_9;
  }
  sub_24EA30(a1, 1u, nullptr);
  v11 = 0;
  if ( v35.m128i_i8[15] )
  {
    sub_2BB620(0);
    v11 = 0;
    goto LABEL_54;
  }
  return v11;
}

