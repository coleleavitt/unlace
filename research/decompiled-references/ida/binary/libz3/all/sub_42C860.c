__int64 __fastcall sub_42C860(__int64 a1, __int64 a2, __int64 *a3, unsigned __int8 a4)
{
  __int64 v4; // r9
  __int64 v8; // r14
  _DWORD *v9; // rax
  int v10; // ecx
  int v11; // r8d
  unsigned int v12; // r12d
  void *v13; // rbx
  int v15; // edi
  int v16; // edx
  int v17; // r9d
  __m128i v18; // xmm0
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v26; // r12
  unsigned int v27; // r13d
  void *v28; // r14
  int v29; // eax
  unsigned int v30; // eax
  void *v31; // rbx
  int v32; // [rsp+0h] [rbp-A8h]
  int v33; // [rsp+8h] [rbp-A0h]
  int v34; // [rsp+18h] [rbp-90h]
  int v35; // [rsp+20h] [rbp-88h]
  unsigned __int8 v36; // [rsp+27h] [rbp-81h] BYREF
  __m128i v37; // [rsp+28h] [rbp-80h] BYREF
  __int64 v38; // [rsp+38h] [rbp-70h]
  int v39[4]; // [rsp+40h] [rbp-68h] BYREF
  int v40[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v41; // [rsp+58h] [rbp-50h]
  __int64 v42; // [rsp+60h] [rbp-48h] BYREF
  __int64 v43; // [rsp+68h] [rbp-40h]

  v4 = a2;
  v8 = a3[1];
  if ( !*(_WORD *)(a1 + 4)
    && (v9 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 24LL)) != nullptr
    && !*v9
    && v9[1] == 8
    && *(_DWORD *)(a1 + 24) == 1 )
  {
    *(_QWORD *)v40 = 0;
    v41 = 0;
    v26 = *(_QWORD *)(a1 + 32);
    v27 = a4 ^ 1;
    v42 = 1;
    v28 = qword_1C7F2C0;
    v43 = 0;
    if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v40, a2);
      v4 = a2;
    }
    else
    {
      v40[0] = *(_DWORD *)a2;
    }
    if ( (*(_BYTE *)(v4 + 20) & 1) != 0 )
    {
      sub_182C690(v28, &v42, v4 + 16);
    }
    else
    {
      v29 = *(_DWORD *)(v4 + 16);
      BYTE4(v42) &= ~1u;
      LODWORD(v42) = v29;
    }
    v30 = sub_42C860(v26, v40, a3, v27);
    v31 = qword_1C7F2C0;
    v12 = v30;
    sub_182CBA0(qword_1C7F2C0, v40);
    sub_182CBA0(v31, &v42);
  }
  else
  {
    v33 = a2;
    sub_16669D0(&v37.m128i_u64[1], v8);
    *(_QWORD *)v40 = 0;
    v41 = 0;
    v42 = 1;
    v43 = 0;
    v12 = sub_42C790(a1, &v37, (__int64)v40, (__int64)&v36, v8);
    if ( (_BYTE)v12 )
    {
      v15 = v38;
      v16 = v36;
      v17 = a2;
      if ( !v38 )
      {
        v34 = a2;
        LOBYTE(v33) = v36;
        sub_16669E0(&v37.m128i_u64[1]);
        v15 = v38;
        v17 = a2;
        v16 = (unsigned __int8)v33;
      }
      v18 = _mm_unpacklo_epi64(
              _mm_loadl_epi64(&v37),
              (__m128i)(unsigned __int64)sub_166A700(v15, v17, v16, v10, v11, v17));
      v21 = sub_15DC610(
              v8,
              *(_QWORD *)(a1 + 16),
              2,
              (int)v39,
              v19,
              v20,
              v32,
              v33,
              (int)&v37.m128i_i32[2],
              v34,
              v35,
              v37.m128i_i8[0],
              v37.m128i_i32[2],
              v38,
              v18.m128i_i32[0],
              (void *)v18.m128i_i64[1]);
      v22 = v21;
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      v23 = *a3;
      if ( *a3 )
      {
        v24 = a3[1];
        if ( (*(_DWORD *)(v23 + 8))-- == 1 )
          sub_15D7BC0(v24, v23);
      }
      *a3 = v22;
      if ( a4 )
        sub_15E1A70(v8);
    }
    v13 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v40);
    sub_182CBA0(v13, &v42);
  }
  return v12;
}

