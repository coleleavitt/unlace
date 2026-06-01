__int64 __fastcall sub_1214670(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const __m128i a7,
        int a8,
        int a9,
        int a10,
        __m128i a11)
{
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  size_t v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned __int8 (__fastcall *v29)(__int64, __m128i *); // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v41; // [rsp+18h] [rbp-1F0h]
  void *v42; // [rsp+50h] [rbp-1B8h] BYREF
  size_t v43; // [rsp+58h] [rbp-1B0h]
  __int64 v44; // [rsp+60h] [rbp-1A8h] BYREF
  void *v45[2]; // [rsp+70h] [rbp-198h] BYREF
  __int64 v46; // [rsp+80h] [rbp-188h] BYREF
  void *v47[2]; // [rsp+90h] [rbp-178h] BYREF
  _BYTE v48[16]; // [rsp+A0h] [rbp-168h] BYREF
  __m128i v49; // [rsp+B0h] [rbp-158h] BYREF
  char *v50; // [rsp+C0h] [rbp-148h]
  __int16 v51; // [rsp+D0h] [rbp-138h]
  __m128i v52[2]; // [rsp+E0h] [rbp-128h] BYREF
  __int16 v53; // [rsp+100h] [rbp-108h]
  __m128i v54[3]; // [rsp+110h] [rbp-F8h] BYREF
  __m128i v55[2]; // [rsp+140h] [rbp-C8h] BYREF
  __int16 v56; // [rsp+160h] [rbp-A8h]
  __m128i v57[2]; // [rsp+170h] [rbp-98h] BYREF
  __int16 v58; // [rsp+190h] [rbp-78h]
  __m128i v59[2]; // [rsp+1A0h] [rbp-68h] BYREF
  __int16 v60; // [rsp+1C0h] [rbp-48h]

  v13 = sub_112C5D0(a1);
  v14 = (*(__int64 (__fastcall **)(__int64, const __m128i *))(*(_QWORD *)v13 + 96LL))(v13, &a7);
  if ( !(_BYTE)v14 )
    return v14;
  sub_2253560(&v42, &a7);
  v16 = sub_228A4B0(v42, v43, 0);
  v18 = sub_228A4B0(v16, v17, 0);
  v20 = v19;
  if ( v19 > v43 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::substr",
      v19,
      v43);
  v41 = v18;
  v47[0] = v48;
  sub_1213C40(v47, (_BYTE *)v42 + v19, (__int64)v42 + v43);
  v49.m128i_i64[1] = v20;
  v52[0].m128i_i64[0] = a2;
  v56 = 260;
  v52[0].m128i_i64[1] = a3;
  v53 = 261;
  v49.m128i_i64[0] = v41;
  v50 = "/";
  v55[0].m128i_i64[0] = (__int64)v47;
  v51 = 773;
  sub_A41580(v54, &v49, v52, v21, 260, 261);
  sub_A41580(v57, v54, v55, v22, v23, v24);
  sub_A41580(v59, v57, &a11, v25, v26, v27);
  sub_2253560(v45, v59);
  if ( v47[0] != v48 )
    operator delete(v47[0]);
  if ( a6 )
  {
    v28 = sub_112C5D0(a1);
    v29 = *(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v28 + 96LL);
    v60 = 260;
    v59[0].m128i_i64[0] = (__int64)v45;
    if ( !v29(v28, v59) )
    {
      v14 = 0;
      goto LABEL_10;
    }
    sub_112FA80(a4, a5, (__int64)&a7);
    v60 = 260;
    v59[0].m128i_i64[0] = (__int64)v45;
    sub_112FA80(a4, a5, (__int64)v59);
  }
  else
  {
    sub_112FA80(a4, a5, (__int64)&a7);
    if ( a3 )
    {
      v53 = 259;
      v55[0].m128i_i64[0] = a2;
      v56 = 261;
      v55[0].m128i_i64[1] = a3;
      v52[0].m128i_i64[0] = (__int64)"/";
      sub_A41580(v54, &a7, v52, 261, v31, v32);
      sub_A41580(v57, v54, v55, v33, v34, v35);
      sub_A41580(v59, v57, &a11, v36, v37, v38);
      sub_112FA80(a4, a5, (__int64)v59);
    }
  }
  v58 = 259;
  v57[0].m128i_i64[0] = (__int64)"/backward";
  sub_A41580(v59, &a7, v57, v30, v31, v32);
  sub_112FA80(a4, a5, (__int64)v59);
LABEL_10:
  if ( v45[0] != &v46 )
    operator delete(v45[0]);
  if ( v42 != &v44 )
    operator delete(v42);
  return v14;
}
