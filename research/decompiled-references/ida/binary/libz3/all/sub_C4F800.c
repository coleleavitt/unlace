__int64 __fastcall sub_C4F800(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  int v8; // r8d
  int v9; // r9d
  char v10; // al
  void *v11; // r15
  __m128 v12; // xmm0
  unsigned __int64 v13; // r13
  __m128 v14; // kr00_16
  unsigned __int64 v15; // r14
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // r12
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // r13
  void *v27; // [rsp+0h] [rbp-78h]
  void *v28; // [rsp+0h] [rbp-78h]
  __int64 v29; // [rsp+0h] [rbp-78h]
  __int64 v30; // [rsp+0h] [rbp-78h]
  __m128 v31; // [rsp+10h] [rbp-68h] BYREF
  __m128 v32; // [rsp+20h] [rbp-58h] BYREF
  __int64 v33; // [rsp+30h] [rbp-48h] BYREF
  __int64 v34; // [rsp+38h] [rbp-40h]

  v32 = 0u;
  v33 = 1;
  v34 = 0;
  if ( !(unsigned __int8)sub_1673B50((int)a1 + 24, a2, (unsigned int)&v32, (unsigned int)&v31, a5, a6)
    || v32.m128_i32[0] )
  {
    v28 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v32);
    sub_182CBA0(v28, &v33);
    v32 = 0u;
    v33 = 1;
    v34 = 0;
    v10 = sub_1673B50((int)a1 + 24, a3, (unsigned int)&v32, (unsigned int)&v31, v8, v9);
    v11 = qword_1C7F2C0;
    if ( !v10 || v32.m128_i32[0] )
    {
      sub_182CBA0(qword_1C7F2C0, &v32);
      sub_182CBA0(v11, &v33);
      v12 = _mm_loadh_ps((const double *)a1);
      if ( a2 )
        ++*(_DWORD *)(a2 + 8);
      if ( a3 )
        ++*(_DWORD *)(a3 + 8);
      v31 = v12;
      v32 = v12;
      sub_C4F590(a1, (__int64 *)&v31, (__int64 *)&v32);
      v13 = v31.m128_u64[0];
      v14 = v32;
      v15 = v31.m128_u64[1];
      v19 = sub_C4F2A0(a1, 1, v31.m128_i64[0], v16, v17, v18);
      v23 = v19;
      if ( v19 )
        ++*(_DWORD *)(v19 + 8);
      if ( v13 )
      {
        v24 = (*(_DWORD *)(v13 + 8))-- == 1;
        if ( v24 )
          sub_15D7BC0(v15, v13);
      }
      v25 = sub_C4F2A0(a1, 1, v14.m128_i64[0], v20, v21, v22);
      v26 = v25;
      if ( v25 )
        ++*(_DWORD *)(v25 + 8);
      if ( v14.m128_u64[0] )
      {
        v24 = (*(_DWORD *)(v14.m128_u64[0] + 8))-- == 1;
        if ( v24 )
          sub_15D7BC0(v14.m128_u64[1], v14.m128_u64[0]);
      }
      result = sub_15E1B70(*(_QWORD *)(a1 + 32));
      if ( v26 )
      {
        v24 = (*(_DWORD *)(v26 + 8))-- == 1;
        if ( v24 )
        {
          v30 = result;
          sub_15D7BC0(v14.m128_u64[1], v26);
          result = v30;
        }
      }
      if ( v23 )
      {
        v24 = (*(_DWORD *)(v23 + 8))-- == 1;
        if ( v24 )
        {
          v29 = result;
          sub_15D7BC0(v15, v23);
          return v29;
        }
      }
    }
    else
    {
      sub_182CBA0(qword_1C7F2C0, &v32);
      sub_182CBA0(v11, &v33);
      return a2;
    }
  }
  else
  {
    v27 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v32);
    sub_182CBA0(v27, &v33);
    return a3;
  }
  return result;
}

