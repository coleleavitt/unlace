__int64 __fastcall sub_CB56B0(__int64 a1, __int64 a2, __int64 a3, char a4, int a5, int a6)
{
  int v6; // r14d
  __int64 v9; // rbx
  int v11; // r8d
  int v12; // r9d
  int v13; // r8d
  int v14; // r9d
  int v15; // r8d
  int v16; // r9d
  __m128 v17; // xmm0
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rax
  int v22; // r9d
  __int64 v23; // r13
  unsigned int v24; // r8d
  unsigned int v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // r14
  bool v33; // zf
  void *v34; // rbp
  unsigned int v35; // r13d
  __int64 v36; // rax
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // rax
  void *v45; // [rsp+8h] [rbp-C0h]
  void *v46; // [rsp+8h] [rbp-C0h]
  void *v47; // [rsp+8h] [rbp-C0h]
  char v48; // [rsp+8h] [rbp-C0h]
  void *v49; // [rsp+8h] [rbp-C0h]
  __int64 v50; // [rsp+8h] [rbp-C0h]
  unsigned int v52; // [rsp+1Ch] [rbp-ACh]
  __int64 v53; // [rsp+20h] [rbp-A8h]
  __int64 v54; // [rsp+28h] [rbp-A0h]
  _BYTE v55[4]; // [rsp+34h] [rbp-94h] BYREF
  __int64 v56; // [rsp+38h] [rbp-90h] BYREF
  __int64 v57; // [rsp+40h] [rbp-88h] BYREF
  __int64 v58; // [rsp+48h] [rbp-80h] BYREF
  __m128 v59; // [rsp+50h] [rbp-78h] BYREF
  __m128 v60; // [rsp+60h] [rbp-68h] BYREF
  __int64 v61; // [rsp+70h] [rbp-58h] BYREF
  __int64 v62; // [rsp+78h] [rbp-50h]
  __int64 v63; // [rsp+80h] [rbp-48h] BYREF
  __int64 v64; // [rsp+88h] [rbp-40h]

  v6 = a1 + 16;
  v9 = a2;
  v61 = 0;
  v62 = 0;
  v63 = 1;
  v64 = 0;
  if ( !(unsigned __int8)sub_1673B50((int)a1 + 16, a2, (unsigned int)&v61, (unsigned int)&v60, a5, a6) || (_DWORD)v61 )
  {
    v46 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v61);
    sub_182CBA0(v46, &v63);
    v61 = 0;
    v62 = 0;
    v63 = 1;
    v64 = 0;
    if ( (unsigned __int8)sub_1673B50(v6, a3, (unsigned int)&v61, (unsigned int)&v60, v11, v12) && !(_DWORD)v61 )
    {
      v49 = qword_1C7F2C0;
      v9 = a3;
      sub_182CBA0(qword_1C7F2C0, &v61);
      sub_182CBA0(v49, &v63);
      return v9;
    }
    v47 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v61);
    sub_182CBA0(v47, &v63);
    v61 = 0;
    v62 = 0;
    v63 = 1;
    v64 = 0;
    if ( (unsigned __int8)sub_1673B50(v6, a2, (unsigned int)&v61, (unsigned int)v55, v13, v14)
      && (v61 & 0x100000000LL) == 0
      && (_DWORD)v61 == 1
      && (v63 & 0x100000000LL) == 0
      && (_DWORD)v63 == 1 )
    {
      v9 = a3;
LABEL_31:
      v34 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v61);
      sub_182CBA0(v34, &v63);
      return v9;
    }
    if ( (unsigned __int8)sub_1673B50(v6, a3, (unsigned int)&v61, (unsigned int)v55, v15, v16)
      && (v61 & 0x100000000LL) == 0
      && (_DWORD)v61 == 1
      && (v63 & 0x100000000LL) == 0
      && (_DWORD)v63 == 1 )
    {
      goto LABEL_31;
    }
    v17 = _mm_loadh_ps((const double *)a1);
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    if ( a3 )
      ++*(_DWORD *)(a3 + 8);
    v59 = v17;
    v48 = a4;
    v60 = v17;
    sub_CB2B60(a1, (__int64 *)&v59, (__int64 *)&v60, a4);
    v18 = v60.m128_u64[0];
    v20 = v59.m128_i64[1];
    v19 = v59.m128_u64[0];
    v53 = v60.m128_i64[1];
    v21 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v60.m128_u64[0]) + 24) + 8LL);
    if ( *(_BYTE *)(v21 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    v23 = *(_QWORD *)(a1 + 8);
    v24 = *(_DWORD *)v21;
    v25 = *(_DWORD *)v23;
    v26 = 2 * v24;
    if ( v24 < *(_DWORD *)v23 )
    {
      if ( v25 >= v26 )
      {
        v52 = v24;
        v41 = sub_CB29F0(a1, v24, v19, v48, v24, v22);
        v31 = v41;
        if ( v41 )
          ++*(_DWORD *)(v41 + 8);
        sub_CB1660(v19, v20);
        v44 = sub_CB29F0(a1, v52, v18, v48, v42, v43);
        v32 = v44;
        if ( v44 )
          ++*(_DWORD *)(v44 + 8);
        sub_CB1660(v18, v53);
        goto LABEL_25;
      }
      v35 = v25 - v24;
      v36 = sub_CB29F0(a1, v25 - v24, v19, a4, v24, v22);
      v54 = v36;
      if ( v36 )
        ++*(_DWORD *)(v36 + 8);
      sub_CB1660(v19, v20);
      v39 = sub_CB29F0(a1, v35, v18, a4, v37, v38);
      if ( v39 )
        ++*(_DWORD *)(v39 + 8);
      v50 = v39;
      sub_CB1660(v18, v53);
      v23 = *(_QWORD *)(a1 + 8);
      v19 = v54;
      v18 = v50;
    }
    else if ( v25 >= v26 )
    {
LABEL_24:
      v31 = v19;
      v32 = v18;
LABEL_25:
      v9 = sub_15E1B70(*(_QWORD *)(a1 + 24));
      if ( v32 )
      {
        v33 = (*(_DWORD *)(v32 + 8))-- == 1;
        if ( v33 )
          sub_15D7BC0(v53, v32);
      }
      if ( v31 )
      {
        v33 = (*(_DWORD *)(v31 + 8))-- == 1;
        if ( v33 )
          sub_15D7BC0(v20, v31);
      }
      goto LABEL_31;
    }
    v27 = *(_QWORD *)(a1 + 24);
    if ( a4 )
    {
      v28 = sub_15E1B70(v27);
      v56 = v28;
      if ( v28 )
        ++*(_DWORD *)(v28 + 8);
      sub_CB55F0((_QWORD *)(v23 + 16), &v56);
      v29 = *(_QWORD *)(a1 + 8);
      v30 = sub_15E1B70(*(_QWORD *)(a1 + 24));
      v57 = v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      sub_CB55F0((_QWORD *)(v29 + 16), &v57);
    }
    else
    {
      v40 = sub_15E1B70(v27);
      v58 = v40;
      if ( v40 )
        ++*(_DWORD *)(v40 + 8);
      sub_CB55F0((_QWORD *)(v23 + 16), &v58);
    }
    goto LABEL_24;
  }
  v45 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v61);
  sub_182CBA0(v45, &v63);
  return v9;
}

