__int64 __fastcall sub_C524A0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  char v7; // al
  void *v8; // r14
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  __m128 v14; // xmm0
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // r15
  unsigned int *v19; // rax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rcx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  bool v34; // zf
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rax
  int v40; // [rsp+8h] [rbp-80h]
  __int64 v41; // [rsp+8h] [rbp-80h]
  int v42; // [rsp+8h] [rbp-80h]
  __int64 v43; // [rsp+8h] [rbp-80h]
  __int64 v44; // [rsp+10h] [rbp-78h] BYREF
  __int64 v45; // [rsp+18h] [rbp-70h] BYREF
  __m128 v46; // [rsp+20h] [rbp-68h] BYREF
  __m128 v47; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v48[9]; // [rsp+40h] [rbp-48h] BYREF

  v47 = 0u;
  v48[0] = 1;
  v48[1] = 0;
  v7 = sub_1673B50((int)a1 + 24, a2, (unsigned int)&v47, (unsigned int)&v46, a5, a6);
  v8 = qword_1C7F2C0;
  if ( v7 && !v47.m128_i32[0] )
  {
    sub_182CBA0(qword_1C7F2C0, &v47);
    sub_182CBA0(v8, v48);
    return a2;
  }
  sub_182CBA0(qword_1C7F2C0, &v47);
  sub_182CBA0(v8, v48);
  if ( (unsigned __int8)sub_C4F210(a1, a3, v10, v11, v12, v13) )
    return a3;
  v14 = _mm_loadh_ps((const double *)a1);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v46 = v14;
  v47 = v14;
  sub_C4F590(a1, (__int64 *)&v46, (__int64 *)&v47);
  v15 = v47.m128_u64[0];
  v16 = v46.m128_u64[0];
  v17 = v47.m128_i64[1];
  v18 = v46.m128_i64[1];
  v19 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(v47.m128_u64[0]) + 24) + 8LL);
  if ( *((_BYTE *)v19 + 8) )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  v22 = *v19;
  v23 = *(_DWORD *)(a1 + 256);
  v24 = 2 * v22;
  if ( (unsigned int)v22 < v23 )
  {
    if ( v23 >= v24 )
    {
      v42 = v22;
      v35 = sub_C4F2A0(a1, v22, v16, v22, v20, v21);
      v26 = v35;
      if ( v35 )
        ++*(_DWORD *)(v35 + 8);
      sub_C4E2C0(v16, v18);
      v39 = sub_C4F2A0(a1, v42, v15, v36, v37, v38);
      v31 = v39;
      if ( v39 )
        ++*(_DWORD *)(v39 + 8);
      sub_C4E2C0(v15, v17);
      goto LABEL_22;
    }
    v40 = v23 - v22;
    v25 = sub_C4F2A0(a1, v23 - (unsigned int)v22, v16, v22, v20, v21);
    v26 = v25;
    if ( v25 )
      ++*(_DWORD *)(v25 + 8);
    sub_C4E2C0(v16, v18);
    v30 = sub_C4F2A0(a1, v40, v15, v27, v28, v29);
    v31 = v30;
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    sub_C4E2C0(v15, v17);
    goto LABEL_17;
  }
  v26 = v16;
  v31 = v15;
  if ( v23 < v24 )
  {
LABEL_17:
    v32 = sub_15E1B70(*(_QWORD *)(a1 + 32));
    v44 = v32;
    if ( v32 )
      ++*(_DWORD *)(v32 + 8);
    sub_C516F0((_QWORD *)(a1 + 104), &v44);
    v33 = sub_15E1B70(*(_QWORD *)(a1 + 32));
    v45 = v33;
    if ( v33 )
      ++*(_DWORD *)(v33 + 8);
    sub_C516F0((_QWORD *)(a1 + 104), &v45);
  }
LABEL_22:
  result = sub_15E1B70(*(_QWORD *)(a1 + 32));
  if ( v31 )
  {
    v34 = (*(_DWORD *)(v31 + 8))-- == 1;
    if ( v34 )
    {
      v43 = result;
      sub_15D7BC0(v17, v31);
      result = v43;
    }
  }
  if ( v26 )
  {
    v34 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v34 )
    {
      v41 = result;
      sub_15D7BC0(v18, v26);
      return v41;
    }
  }
  return result;
}

