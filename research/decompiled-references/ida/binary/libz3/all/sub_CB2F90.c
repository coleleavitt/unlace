__int64 __fastcall sub_CB2F90(__int64 a1, __int64 a2, void *a3, __int64 *a4)
{
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r13
  char v8; // al
  __int64 v9; // rbp
  unsigned int v10; // r12d
  __int64 v11; // r14
  void *v12; // rbx
  bool v13; // zf
  void *v14; // rbx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // r12
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  void *v33; // rsi
  __int64 v34; // rdi
  void *v35; // [rsp+8h] [rbp-E0h] BYREF
  __int64 *v36; // [rsp+10h] [rbp-D8h]
  __int64 v37; // [rsp+18h] [rbp-D0h]
  __int64 v38; // [rsp+20h] [rbp-C8h]
  __int64 *v39; // [rsp+28h] [rbp-C0h]
  __m128i v40; // [rsp+30h] [rbp-B8h] BYREF
  char v41; // [rsp+4Fh] [rbp-99h] BYREF
  int v42[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v43; // [rsp+58h] [rbp-90h]
  int v44[2]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v45; // [rsp+68h] [rbp-80h]
  __int64 v46; // [rsp+70h] [rbp-78h] BYREF
  __int64 v47; // [rsp+78h] [rbp-70h]
  __m128i v48; // [rsp+80h] [rbp-68h] BYREF
  int v49[2]; // [rsp+90h] [rbp-58h] BYREF
  __int64 v50; // [rsp+98h] [rbp-50h]
  _QWORD v51[9]; // [rsp+A0h] [rbp-48h] BYREF

  v5 = a1 + 40;
  v6 = *(_QWORD *)(v5 - 40);
  v35 = a3;
  v36 = a4;
  *(_QWORD *)v49 = 0;
  v50 = 0;
  v51[0] = 1;
  v51[1] = 0;
  if ( !(unsigned __int8)sub_1666AE0(v5, a3, v49, &v41) || v49[0] <= 0 )
  {
    v10 = 5;
    v14 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v49);
    sub_182CBA0(v14, v51);
    return v10;
  }
  v43 = v6;
  *(_QWORD *)v42 = 0;
  if ( (unsigned __int8)sub_CB1F80(a1, a2, (__int64 *)v42) )
  {
    v46 = 0;
    v47 = v6;
    v38 = v43;
    v39 = &v46;
    if ( (unsigned __int8)sub_CB1F80(a1, (__int64)v35, &v46) )
    {
      sub_CB2B60(a1, (__int64 *)v42, v39, 0);
      v16 = *(_QWORD *)(a1 + 24);
      v9 = *(_QWORD *)v42;
      v7 = v46;
      v37 = v47;
      v38 = v43;
      v17 = sub_15E1B70(v16);
      v18 = sub_16747F0(a1 + 16, v17);
      v19 = v18;
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      sub_CB1660(*v36, v36[1]);
      v11 = 0;
      v10 = 4;
      *v36 = v19;
      goto LABEL_6;
    }
    v7 = v46;
    v37 = v47;
  }
  else
  {
    v37 = v6;
    v7 = 0;
  }
  v45 = v6;
  *(_QWORD *)v44 = 0;
  v40.m128i_i64[0] = (__int64)v44;
  v8 = sub_CB2220(a1, a2, (__int64 *)v42, (__int64 *)v44);
  v9 = *(_QWORD *)v42;
  v10 = 5;
  v11 = *(_QWORD *)v44;
  v6 = v45;
  v38 = v43;
  if ( v8 )
  {
    v46 = v7;
    v47 = v37;
    v39 = &v46;
    if ( (unsigned __int8)sub_CB1F80(a1, (__int64)v35, &v46) )
    {
      v35 = *(void **)a1;
      sub_CB2B60(a1, (__int64 *)v40.m128i_i64[0], v39, 0);
      v11 = *(_QWORD *)v44;
      v20 = *(_QWORD *)(a1 + 24);
      v6 = v45;
      v37 = v47;
      v21 = sub_15E1B70(v20);
      v40.m128i_i64[0] = v21;
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      v22 = sub_15E1B70(*(_QWORD *)(a1 + 24));
      v23 = v22;
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
      sub_CB1660(v40.m128i_i64[0], (__int64)v35);
      v26 = sub_CB2CA0(a1, v9, v23, 0, v24, v25);
      v27 = (__m128i)_mm_loadh_ps((const double *)&v35);
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
      v40 = v27;
      sub_CB1660(v23, (__int64)v35);
      v48 = _mm_load_si128(&v40);
      sub_CB2B60(a1, v48.m128i_i64, v39, 0);
      v28 = v48.m128i_i64[0];
      v7 = v46;
      v37 = v47;
      v29 = *(_QWORD *)(a1 + 24);
      v35 = (void *)v48.m128i_i64[1];
      v39 = (__int64 *)(a1 + 16);
      v30 = sub_15E1B70(v29);
      v31 = sub_16747F0(v39, v30);
      v32 = v31;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      sub_CB1660(*v36, v36[1]);
      v33 = v35;
      v34 = v28;
      v10 = 4;
      *v36 = v32;
      sub_CB1660(v34, (__int64)v33);
    }
    else
    {
      v7 = v46;
      v10 = 5;
      v37 = v47;
    }
  }
LABEL_6:
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v49);
  sub_182CBA0(v12, v51);
  if ( v7 )
  {
    v13 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v37, v7);
  }
  if ( v11 )
  {
    v13 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v6, v11);
  }
  if ( v9 )
  {
    v13 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v38, v9);
  }
  return v10;
}

