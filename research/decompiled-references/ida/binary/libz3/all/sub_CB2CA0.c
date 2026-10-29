__int64 __fastcall sub_CB2CA0(__int64 a1, __int64 a2, __int64 a3, char a4, int a5, int a6)
{
  __int64 result; // rax
  int v8; // r8d
  int v9; // r9d
  char v10; // al
  void *v11; // r15
  __m128 v12; // xmm0
  unsigned __int64 v13; // r13
  __m128 v14; // kr00_16
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r12
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // r13
  void *v24; // [rsp+8h] [rbp-80h]
  void *v25; // [rsp+8h] [rbp-80h]
  unsigned __int64 v26; // [rsp+8h] [rbp-80h]
  __int64 v28; // [rsp+10h] [rbp-78h]
  __int64 v29; // [rsp+10h] [rbp-78h]
  __m128 v30; // [rsp+20h] [rbp-68h] BYREF
  __m128 v31; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+40h] [rbp-48h] BYREF
  __int64 v33; // [rsp+48h] [rbp-40h]

  v31 = 0u;
  v32 = 1;
  v33 = 0;
  if ( !(unsigned __int8)sub_1673B50((int)a1 + 16, a2, (unsigned int)&v31, (unsigned int)&v30, a5, a6)
    || v31.m128_i32[0] )
  {
    v25 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v31);
    sub_182CBA0(v25, &v32);
    v31 = 0u;
    v32 = 1;
    v33 = 0;
    v10 = sub_1673B50((int)a1 + 16, a3, (unsigned int)&v31, (unsigned int)&v30, v8, v9);
    v11 = qword_1C7F2C0;
    if ( !v10 || v31.m128_i32[0] )
    {
      sub_182CBA0(qword_1C7F2C0, &v31);
      sub_182CBA0(v11, &v32);
      v12 = _mm_loadh_ps((const double *)a1);
      if ( a2 )
        ++*(_DWORD *)(a2 + 8);
      if ( a3 )
        ++*(_DWORD *)(a3 + 8);
      v30 = v12;
      v31 = v12;
      sub_CB2B60(a1, (__int64 *)&v30, (__int64 *)&v31, a4);
      v13 = v30.m128_u64[0];
      v14 = v31;
      v26 = v30.m128_u64[1];
      v17 = sub_CB29F0(a1, 1u, v30.m128_i64[0], a4, v15, v16);
      v20 = v17;
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      if ( v13 )
      {
        v21 = (*(_DWORD *)(v13 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v26, v13);
      }
      v22 = sub_CB29F0(a1, 1u, v14.m128_i64[0], a4, v18, v19);
      v23 = v22;
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
      if ( v14.m128_u64[0] )
      {
        v21 = (*(_DWORD *)(v14.m128_u64[0] + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v14.m128_u64[1], v14.m128_u64[0]);
      }
      result = sub_15E1B70(*(_QWORD *)(a1 + 24));
      if ( v23 )
      {
        v21 = (*(_DWORD *)(v23 + 8))-- == 1;
        if ( v21 )
        {
          v29 = result;
          sub_15D7BC0(v14.m128_u64[1], v23);
          result = v29;
        }
      }
      if ( v20 )
      {
        v21 = (*(_DWORD *)(v20 + 8))-- == 1;
        if ( v21 )
        {
          v28 = result;
          sub_15D7BC0(v26, v20);
          return v28;
        }
      }
    }
    else
    {
      sub_182CBA0(qword_1C7F2C0, &v31);
      sub_182CBA0(v11, &v32);
      return a2;
    }
  }
  else
  {
    v24 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v31);
    sub_182CBA0(v24, &v32);
    return a3;
  }
  return result;
}

