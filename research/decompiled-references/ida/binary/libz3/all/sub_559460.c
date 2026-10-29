void __fastcall sub_559460(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v4; // edi
  __int64 v6; // r15
  __int64 v7; // r8
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r8
  int v14; // eax
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // r12
  bool v19; // zf
  _QWORD *v20; // rbx
  void *v21; // rdi
  __int64 *v22; // rbx
  unsigned __int64 v23; // rbp
  __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  __int64 *v26; // rbx
  unsigned __int64 v27; // rbp
  __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  __int64 *v30; // rbx
  unsigned __int64 v31; // rbp
  __int64 v32; // rsi
  __int64 v33; // rdi
  int v34; // [rsp+0h] [rbp-108h]
  int v35; // [rsp+0h] [rbp-108h]
  int v36; // [rsp+8h] [rbp-100h]
  __int64 v37; // [rsp+8h] [rbp-100h]
  __m128i *v38; // [rsp+10h] [rbp-F8h]
  int v39; // [rsp+10h] [rbp-F8h]
  __int64 v40; // [rsp+18h] [rbp-F0h]
  int v41; // [rsp+18h] [rbp-F0h]
  _QWORD *v42; // [rsp+20h] [rbp-E8h]
  int v43; // [rsp+20h] [rbp-E8h]
  _QWORD *v44; // [rsp+28h] [rbp-E0h]
  char v45; // [rsp+28h] [rbp-E0h]
  int v46; // [rsp+30h] [rbp-D8h]
  int v47; // [rsp+30h] [rbp-D8h]
  int v48[2]; // [rsp+38h] [rbp-D0h] BYREF
  __m128i v49; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v50; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v51; // [rsp+58h] [rbp-B0h]
  __int64 *v52; // [rsp+60h] [rbp-A8h]
  __int64 v53; // [rsp+68h] [rbp-A0h]
  __int64 v54; // [rsp+70h] [rbp-98h]
  __int64 v55; // [rsp+78h] [rbp-90h]
  unsigned __int64 v56; // [rsp+80h] [rbp-88h]
  __int64 *v57; // [rsp+88h] [rbp-80h]
  void *s; // [rsp+90h] [rbp-78h]
  __int64 v59; // [rsp+98h] [rbp-70h]
  void *v60; // [rsp+A0h] [rbp-68h]
  __int64 v61; // [rsp+A8h] [rbp-60h]
  int v62; // [rsp+B0h] [rbp-58h]
  __int64 v63; // [rsp+B8h] [rbp-50h]
  _QWORD v64[9]; // [rsp+C0h] [rbp-48h] BYREF

  v3 = a2[1];
  LODWORD(v40) = a1;
  v44 = v64;
  v42 = a2;
  s = v64;
  v50 = nullptr;
  v51 = v3;
  v52 = nullptr;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = v3;
  v57 = nullptr;
  v59 = 1;
  v60 = nullptr;
  v61 = 0;
  v62 = 1065353216;
  v49 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  v63 = 0;
  v4 = *(_DWORD *)(a1 + 520);
  v38 = &v49;
  v64[0] = 0;
  if ( v4 >> 1 )
  {
    v6 = 0;
    do
    {
      while ( (*(_DWORD *)(*(_QWORD *)(a3 + 8) + 4LL * ((unsigned int)v6 >> 5)) & (1 << v6)) != 0 )
      {
        if ( (unsigned int)++v6 >= v4 >> 1 )
          goto LABEL_14;
      }
      v7 = *(_QWORD *)(v3 + 840);
      *(_QWORD *)v48 = 8 * v6 + 1;
      v8 = sub_15E3510(v3, v48, 0, 0, v7, 0);
      v11 = sub_15DC610(
              v3,
              v8,
              0,
              0,
              v9,
              v10,
              v34,
              v36,
              (int)v38,
              v40,
              (int)v42,
              (char)v44,
              v46,
              v48[0],
              v49.m128i_i32[0],
              (void *)v49.m128i_i64[1]);
      v12 = v11;
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
      v13 = *(_QWORD *)(v3 + 840);
      *(_QWORD *)v48 = 8LL * HIDWORD(v37) + 1;
      v14 = sub_15E3510(v3, v48, 0, 0, v13, 0);
      v17 = sub_15DC610(
              v3,
              v14,
              0,
              0,
              v15,
              v16,
              v35,
              v37,
              v39,
              v41,
              v43,
              v45,
              v47,
              v48[0],
              v49.m128i_i32[0],
              (void *)v49.m128i_i64[1]);
      v18 = v17;
      if ( v17 )
      {
        ++*(_DWORD *)(v17 + 8);
        sub_14EA0D0(v38, v17, v12);
        v19 = (*(_DWORD *)(v18 + 8))-- == 1;
        if ( v19 )
          sub_15D7BC0(v3, v18);
      }
      else
      {
        sub_14EA0D0(v38, 0, v12);
      }
      if ( v12 )
      {
        v19 = (*(_DWORD *)(v12 + 8))-- == 1;
        if ( v19 )
          sub_15D7BC0(v3, v12);
      }
      ++v6;
      v4 = *(_DWORD *)(v40 + 520);
    }
    while ( (unsigned int)v6 < v4 >> 1 );
  }
LABEL_14:
  sub_14EA2A0(v38, *v42, v42);
  v20 = v60;
  if ( v60 )
  {
    do
    {
      v21 = v20;
      v20 = (_QWORD *)*v20;
      operator delete(v21, 0x18u);
    }
    while ( v20 );
  }
  memset(s, 0, 8 * v59);
  v61 = 0;
  v60 = nullptr;
  if ( s != v44 )
    operator delete(s, 8 * v59);
  v22 = v57;
  if ( v57 )
  {
    v23 = (unsigned __int64)&v57[*((unsigned int *)v57 - 1)];
    if ( (unsigned __int64)v57 >= v23 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = v56;
          v19 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( (unsigned __int64)++v22 >= v23 )
          goto LABEL_25;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( (unsigned __int64)v22 < v23 );
LABEL_25:
    v22 = v57;
    if ( v57 )
LABEL_26:
      sub_186B220(v22 - 1);
  }
  if ( v55 )
    sub_186B220((void *)(v55 - 8));
  if ( v54 )
    sub_186B220((void *)(v54 - 8));
  if ( v53 )
    sub_186B220((void *)(v53 - 8));
  v26 = v52;
  if ( v52 )
  {
    v27 = (unsigned __int64)&v52[*((unsigned int *)v52 - 1)];
    if ( (unsigned __int64)v52 >= v27 )
      goto LABEL_41;
    do
    {
      while ( 1 )
      {
        v28 = *v26;
        if ( *v26 )
        {
          v29 = v51;
          v19 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( (unsigned __int64)++v26 >= v27 )
          goto LABEL_40;
      }
      sub_15D7BC0(v29, v28);
      ++v26;
    }
    while ( (unsigned __int64)v26 < v27 );
LABEL_40:
    v26 = v52;
    if ( v52 )
LABEL_41:
      sub_186B220(v26 - 1);
  }
  v30 = v50;
  if ( v50 )
  {
    v31 = (unsigned __int64)&v50[*((unsigned int *)v50 - 1)];
    if ( (unsigned __int64)v50 >= v31 )
      goto LABEL_50;
    do
    {
      while ( 1 )
      {
        v32 = *v30;
        if ( *v30 )
        {
          v33 = v49.m128i_i64[1];
          v19 = (*(_DWORD *)(v32 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( (unsigned __int64)++v30 >= v31 )
          goto LABEL_49;
      }
      sub_15D7BC0(v33, v32);
      ++v30;
    }
    while ( (unsigned __int64)v30 < v31 );
LABEL_49:
    v30 = v50;
    if ( v50 )
LABEL_50:
      sub_186B220(v30 - 1);
  }
}

