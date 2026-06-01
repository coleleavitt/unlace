__int64 __fastcall sub_203FB60(__int64 a1, _DWORD *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r14
  char v7; // r13
  __m128 *v9; // rax
  __m128i v10; // xmm0
  __m128 *v11; // rbx
  __m128 v12; // xmm1
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v19; // [rsp+0h] [rbp-178h] BYREF
  __int64 v20; // [rsp+10h] [rbp-168h] BYREF
  __m128i *v21; // [rsp+18h] [rbp-160h]
  __int64 (__fastcall **v22)(); // [rsp+20h] [rbp-158h] BYREF
  int v23; // [rsp+28h] [rbp-150h]
  __int128 v24; // [rsp+30h] [rbp-148h]
  __int64 v25; // [rsp+40h] [rbp-138h]
  char v26; // [rsp+48h] [rbp-130h]
  int v27; // [rsp+4Ch] [rbp-12Ch]
  __int64 v28; // [rsp+50h] [rbp-128h]
  __int64 v29; // [rsp+58h] [rbp-120h]
  _BYTE *v30; // [rsp+68h] [rbp-110h]
  __m128i si128; // [rsp+70h] [rbp-108h]
  _BYTE v32[16]; // [rsp+80h] [rbp-F8h] BYREF
  _QWORD v33[3]; // [rsp+90h] [rbp-E8h] BYREF
  int v34; // [rsp+A8h] [rbp-D0h]
  __int64 v35; // [rsp+B0h] [rbp-C8h]
  __int64 v36; // [rsp+B8h] [rbp-C0h]
  int v37; // [rsp+C0h] [rbp-B8h]
  __int64 v38; // [rsp+C8h] [rbp-B0h]
  __int64 v39; // [rsp+D0h] [rbp-A8h]
  int v40; // [rsp+D8h] [rbp-A0h]
  __int64 v41; // [rsp+E0h] [rbp-98h]
  __int64 v42; // [rsp+E8h] [rbp-90h]
  int v43; // [rsp+F0h] [rbp-88h]
  __int128 v44; // [rsp+F8h] [rbp-80h]
  __int64 v45; // [rsp+108h] [rbp-70h]
  char v46; // [rsp+110h] [rbp-68h]
  __int64 v47; // [rsp+118h] [rbp-60h]
  __int64 v48; // [rsp+120h] [rbp-58h]
  int v49; // [rsp+128h] [rbp-50h]
  __int128 v50; // [rsp+130h] [rbp-48h]
  __int64 v51; // [rsp+140h] [rbp-38h]

  v6 = a5;
  v7 = a6;
  v24 = 0;
  v20 = a4;
  v22 = &off_2C75A88;
  v30 = v32;
  v23 = 0;
  v26 = 0;
  v27 = 1;
  v25 = 0;
  v28 = 0;
  v29 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8870);
  v32[8] = 0;
  sub_202EDF0((__int64)&v22, a1, (__int64)a3, a4, a5, a6);
  v33[1] = 0;
  v33[2] = 0;
  v33[0] = v20;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  if ( v6 == 1 || !v7 )
  {
    if ( a3[1].m128i_i8[0] )
      v21 = sub_2032850(a3);
    else
      v21 = (__m128i *)a3[2].m128i_i64[1];
    v19.m128_u64[0] = (unsigned __int64)v33;
    v19 = _mm_loadh_ps((const double *)v19.m128_u64);
    v11 = (__m128 *)operator new(0x20u);
    *(__m128i *)v11 = _mm_load_si128((const __m128i *)&v19);
    v11[1] = _mm_loadh_ps((const double *)&v20);
  }
  else
  {
    if ( a3[1].m128i_i8[0] )
      v21 = sub_2032850(a3);
    else
      v21 = (__m128i *)a3[2].m128i_i64[1];
    v19.m128_u64[0] = (unsigned __int64)v33;
    v19 = _mm_loadh_ps((const double *)v19.m128_u64);
    v9 = (__m128 *)operator new(0x118u);
    v10 = _mm_load_si128((const __m128i *)&v19);
    v11 = v9;
    v9[2].m128_i32[0] = 0;
    v9 = (__m128 *)((char *)v9 + 56);
    v12 = _mm_loadh_ps((const double *)&v20);
    *(__m128i *)((char *)v9 - 56) = v10;
    *(__m128 *)((char *)v9 - 40) = v12;
    v11[2].m128_u64[1] = (unsigned __int64)v9;
    v11[3].m128_u64[0] = 0x400000000LL;
    v11[13].m128_u64[1] = (unsigned __int64)&v11[15];
    v11[14].m128_u64[0] = 0x100000004LL;
    v11[14].m128_i32[2] = 0;
    v11[14].m128_i8[12] = 1;
    v11[15].m128_u64[0] = (unsigned __int64)a2;
    v11[17].m128_u64[0] = (unsigned __int64)&v22;
  }
  sub_20399E0((__int64)&v22, (__int64)a2, (__int64 *)v11);
  v13 = *(unsigned __int8 *)a2;
  if ( (unsigned int)(v13 - 5) <= 0x20 && (_BYTE)v13 != 7 && !v6 )
  {
    sub_995540((__int64)&v22, " = ");
    sub_203F7C0((__int64)&v22, a2, (__int64 *)v11);
  }
  (*(void (__fastcall **)(__m128 *, _DWORD *, __int64))(v11->m128_u64[0] + 16))(v11, a2, v13);
  sub_202ECB0((__int64)v33);
  return sub_20322F0((__int64)&v22, (__int64)a2, v14, v15, v16, v17);
}
