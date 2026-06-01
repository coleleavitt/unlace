unsigned __int64 __fastcall sub_1DDB970(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        char a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r14
  _QWORD *v16; // rbp
  unsigned __int8 v17; // al
  unsigned int *v18; // rdx
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // esi
  __m128i v25; // xmm2
  unsigned int v26; // r9d
  __int64 v27; // rax
  unsigned int v28; // r12d
  unsigned __int8 v29; // al
  unsigned int v30; // [rsp+0h] [rbp-C8h]
  __m128i v31; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+20h] [rbp-A8h]
  __m128i v33; // [rsp+30h] [rbp-98h] BYREF
  __int64 v34; // [rsp+40h] [rbp-88h]
  __m128i v35; // [rsp+50h] [rbp-78h]
  __int64 v36; // [rsp+60h] [rbp-68h]
  __m128i v37; // [rsp+70h] [rbp-58h] BYREF
  __int64 v38; // [rsp+80h] [rbp-48h]

  v10 = a3;
  v11 = sub_F5E4D0(a3);
  v15 = sub_1DD8310(a1, *a4, v11, v12, v13, v14, a6, a7);
  if ( *(_DWORD *)(*(_QWORD *)a1 + 12632LL) )
  {
    sub_F5E520((__int64)&v33, v10);
    v20 = *(_QWORD *)a1;
    v21 = _mm_load_si128(&v33);
    v38 = v34;
    v37 = v21;
    LODWORD(v20) = *(_DWORD *)(v20 + 12632) - 1;
    v37 = _mm_loadu_si128((const __m128i *)(v21.m128i_i64[1] + 24LL * (unsigned int)v20));
    v38 = *(_QWORD *)(v21.m128i_i64[1] + 24LL * (unsigned int)v20 + 16);
    if ( sub_F1D570((__int64)&v37) )
    {
      sub_F1DF30((__int64)&v31, v37.m128i_i64, v22, v23);
      v37 = _mm_loadu_si128(&v31);
      v38 = v32;
    }
    v24 = *a4;
    v25 = _mm_load_si128(&v37);
    v26 = *(unsigned __int16 *)(v10 + 20);
    v36 = v38;
    v27 = *(_QWORD *)a1;
    v35 = v25;
    v28 = *(_DWORD *)(v27 + 12632);
    v30 = v26;
    if ( v28 )
      v28 = v33.m128i_i32[1] + 1 - v28;
    v29 = sub_F5E4E0(v10);
    return sub_1DB8C50(a1, a2, a5, v29, v15, v30, v28, v35.m128i_i32[0], v35.m128i_u64[1], v36, v24);
  }
  else
  {
    if ( sub_F5E4D0(v10) != v15 )
    {
      v16 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
      sub_F5E520((__int64)&v37, v10);
      v17 = sub_F5E4E0(v10);
      v10 = sub_AB6EF0(v16, v15, *(unsigned __int16 *)(v10 + 20), v17, &v37);
    }
    sub_1EA6140(a2, v10, 4, 4);
    *v18 = *a4;
    return v10;
  }
}
