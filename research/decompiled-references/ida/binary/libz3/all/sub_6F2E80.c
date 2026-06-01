void __fastcall sub_6F2E80(const __m128i *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __m128i v6; // xmm0
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // r15
  unsigned int v15; // edx
  __int64 v16; // rdi
  __int64 *v17; // rbp
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 *v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  _QWORD *v24; // r13
  _QWORD *v25; // r14
  __int64 v26; // rbx
  __int64 v27; // rdx
  unsigned int v28; // r8d
  __int64 v29; // rdi
  __int64 *v30; // rbx
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rdi
  unsigned __int64 v35; // [rsp+20h] [rbp-108h]
  unsigned int v36; // [rsp+20h] [rbp-108h]
  __int64 v37; // [rsp+28h] [rbp-100h]
  unsigned int v38; // [rsp+28h] [rbp-100h]
  char v39[8]; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v40; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v41; // [rsp+48h] [rbp-E0h]
  _QWORD v42[2]; // [rsp+50h] [rbp-D8h] BYREF
  __m128i v43; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+70h] [rbp-B8h]
  __int64 v45; // [rsp+78h] [rbp-B0h]
  __int64 v46; // [rsp+80h] [rbp-A8h]
  __int64 v47; // [rsp+88h] [rbp-A0h]
  __int64 v48; // [rsp+90h] [rbp-98h]
  __int64 v49; // [rsp+98h] [rbp-90h]
  __int64 v50; // [rsp+A0h] [rbp-88h]
  __int64 v51; // [rsp+A8h] [rbp-80h]
  __int64 *v52; // [rsp+B0h] [rbp-78h]
  __int64 v53; // [rsp+B8h] [rbp-70h]
  __int64 v54; // [rsp+C0h] [rbp-68h]
  __int64 v55; // [rsp+C8h] [rbp-60h]
  int v56; // [rsp+D0h] [rbp-58h]
  __int64 v57; // [rsp+D8h] [rbp-50h]
  __int64 v58; // [rsp+E0h] [rbp-48h] BYREF

  v6 = _mm_loadl_epi64(a1);
  v44 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v51 = 0;
  v52 = &v58;
  v53 = 1;
  v54 = 0;
  v55 = 0;
  v56 = 1065353216;
  v57 = 0;
  v58 = 0;
  v43 = _mm_unpacklo_epi64(v6, v6);
  v45 = v6.m128i_i64[0];
  v50 = v6.m128i_i64[0];
  v40 = 0;
  v41 = v6.m128i_i64[0];
  sub_1360C00(v39, a2, &a1->m128i_u64[1]);
  sub_1360B80(v39, 1);
  v7 = (_QWORD *)a3[1];
  if ( !v7 )
    goto LABEL_42;
  v8 = &v7[*((unsigned int *)v7 - 1)];
  v9 = *((unsigned int *)v7 - 1);
  if ( v7 == v8 )
  {
    LODWORD(v10) = 0;
LABEL_17:
    if ( (_DWORD)v9 != (_DWORD)v10 )
    {
      v19 = (unsigned __int64)&v8[v9];
      v20 = &v8[(unsigned int)v10];
      if ( (unsigned __int64)v20 >= v19 )
        goto LABEL_25;
      do
      {
        while ( 1 )
        {
          v21 = *v20;
          if ( *v20 )
          {
            v22 = *a3;
            v13 = (*(_DWORD *)(v21 + 8))-- == 1;
            if ( v13 )
              break;
          }
          if ( (unsigned __int64)++v20 >= v19 )
            goto LABEL_24;
        }
        v35 = v19;
        sub_15D7BC0(v22, v21);
        v19 = v35;
        ++v20;
      }
      while ( (unsigned __int64)v20 < v35 );
LABEL_24:
      v8 = (_QWORD *)a3[1];
      if ( v8 )
LABEL_25:
        *((_DWORD *)v8 - 1) = v10;
      goto LABEL_26;
    }
LABEL_42:
    sub_13606C0(v39);
    sub_6EF400(v40, v41);
    sub_268600((__int64)&v43);
    return;
  }
  v10 = 0;
  do
  {
    while ( 1 )
    {
      v14 = *v7;
      if ( (unsigned __int8)sub_15D2CB0(a1->m128i_i64[0], *v7) )
        break;
      v15 = v10 + 1;
      v16 = *a3;
      v17 = (__int64 *)(a3[1] + 8 * v10);
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
      v18 = *v17;
      if ( *v17 )
      {
        v13 = (*(_DWORD *)(v18 + 8))-- == 1;
        if ( v13 )
        {
          v38 = v15;
          sub_15D7BC0(v16, v18);
          v15 = v38;
        }
      }
      ++v7;
      *v17 = v14;
      v10 = v15;
      if ( v8 == v7 )
        goto LABEL_15;
    }
    sub_13615B0(v42, v39, v14);
    sub_14EA0D0(&v43, v14, v42[0]);
    v11 = v42[0];
    if ( v42[0] )
    {
      v12 = v42[1];
      v13 = (*(_DWORD *)(v42[0] + 8LL))-- == 1;
      if ( v13 )
        sub_15D7BC0(v12, v11);
    }
    ++v7;
  }
  while ( v8 != v7 );
LABEL_15:
  v8 = (_QWORD *)a3[1];
  if ( v8 )
  {
    v9 = *((unsigned int *)v8 - 1);
    goto LABEL_17;
  }
  if ( !(_DWORD)v10 )
    goto LABEL_42;
LABEL_26:
  v23 = a4[1];
  if ( !v23 || (v24 = (_QWORD *)(v23 + 8LL * *(unsigned int *)(v23 - 4)), v24 == (_QWORD *)v23) )
  {
    LODWORD(v26) = 0;
  }
  else
  {
    v25 = (_QWORD *)a4[1];
    v26 = 0;
    do
    {
      sub_14EA2A0(&v43, *v25, &v40);
      sub_14B9B80(&a1[1], &v40);
      v27 = v40;
      if ( *(_QWORD *)(a1->m128i_i64[0] + 856) != v40 )
      {
        v28 = v26 + 1;
        v29 = *a4;
        v30 = (__int64 *)(a4[1] + 8 * v26);
        if ( v40 )
          ++*(_DWORD *)(v40 + 8);
        v31 = *v30;
        if ( *v30 )
        {
          v13 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v13 )
          {
            v37 = v27;
            v36 = v28;
            sub_15D7BC0(v29, v31);
            v27 = v37;
            v28 = v36;
          }
        }
        *v30 = v27;
        v26 = v28;
      }
      ++v25;
    }
    while ( v24 != v25 );
  }
  sub_39BEE0(a4, v26);
  sub_13606C0(v39);
  v32 = v40;
  if ( v40 )
  {
    v33 = v41;
    v13 = (*(_DWORD *)(v40 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v33, v32);
  }
  sub_268600((__int64)&v43);
}

