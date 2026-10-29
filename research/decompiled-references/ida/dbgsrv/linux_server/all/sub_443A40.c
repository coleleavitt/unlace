/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_443A40
// Address: 0x0000000000443A40

//----- (0000000000443A40) ----------------------------------------------------
__int64 __fastcall sub_443A40(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __m128i *a5,
        char a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v20; // rax
  __int64 v21; // r8
  void *v22; // rsi
  __int64 v23; // rax
  char *v24; // rsi
  char *v25; // rdi
  double v26; // xmm4_8
  double v27; // xmm5_8
  signed __int64 v28; // rdx
  __int64 v29; // rax
  char *v30; // rsi
  char *v31; // rdi
  double v32; // xmm4_8
  double v33; // xmm5_8
  double v34; // xmm4_8
  double v35; // xmm5_8
  double v36; // xmm4_8
  double v37; // xmm5_8
  __int64 v38; // rax
  char *v39; // rsi
  char *v40; // rdi
  double v41; // xmm4_8
  double v42; // xmm5_8
  double v43; // xmm4_8
  double v44; // xmm5_8
  double v45; // xmm4_8
  double v46; // xmm5_8
  unsigned int v47; // eax
  double v48; // xmm4_8
  double v49; // xmm5_8
  unsigned int v50; // ebx
  double v51; // xmm4_8
  double v52; // xmm5_8
  double v54; // xmm4_8
  double v55; // xmm5_8
  char *v56; // rax
  void *v57; // rax
  const void *v58; // rsi
  char *v59; // rax
  void *v60; // rax
  char *v61; // rax
  _QWORD *v62; // [rsp+0h] [rbp-D8h]
  int v63[2]; // [rsp+0h] [rbp-D8h]
  size_t n; // [rsp+8h] [rbp-D0h]
  __m128i v65; // [rsp+10h] [rbp-C8h] BYREF
  int v66[4]; // [rsp+20h] [rbp-B8h]
  __m128i v67; // [rsp+30h] [rbp-A8h] BYREF
  int v68[4]; // [rsp+40h] [rbp-98h]
  __int64 v69; // [rsp+50h] [rbp-88h] BYREF
  __int128 v70; // [rsp+58h] [rbp-80h]
  __int64 v71; // [rsp+68h] [rbp-70h]
  unsigned __int8 v72[8]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v73; // [rsp+78h] [rbp-60h]
  __int64 v74; // [rsp+88h] [rbp-50h]
  unsigned __int64 v75; // [rsp+98h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  if ( a3 < 0 )
  {
    if ( a3 != -1 && (unsigned __int64)-a3 < qword_4C56E0[0] )
      goto LABEL_3;
LABEL_20:
    v50 = 0;
    sub_479F30(0, "?");
    sub_479EB0(0x58u);
    sub_4446F0(a1, a7, a8, a9, a10, v54, v55, a13, a14);
    return v50;
  }
  if ( (unsigned __int64)a3 >= *(_QWORD *)(a1[1] + 8LL) )
    goto LABEL_20;
LABEL_3:
  v20 = a1[10];
  v21 = a1[4];
  v22 = (void *)a1[9];
  if ( a1[11] < (unsigned __int64)(v20 + 1) )
  {
    *(_QWORD *)v63 = a1[4];
    v60 = sub_481540((__int64)(a1 + 9), v22, v20 + 1, 4u);
    LODWORD(v21) = v63[0];
    a1[9] = v60;
    v22 = v60;
    v20 = a1[10];
  }
  *((_DWORD *)v22 + v20) = v21;
  ++a1[10];
  v62 = a1 + 3;
  ++*(_DWORD *)(a2 + 48);
  v23 = a1[4];
  v65.m128i_i8[0] = 5;
  v24 = (char *)a1[3];
  v65.m128i_i64[1] = a2;
  *(_OWORD *)v66 = 0;
  if ( a1[5] < (unsigned __int64)(v23 + 1) )
  {
    v56 = (char *)sub_481540((__int64)v62, v24, v23 + 1, 0x20u);
    a1[3] = v56;
    v24 = v56;
    v23 = a1[4];
  }
  v25 = &v24[32 * v23];
  *v25 = 2;
  *((_QWORD *)v25 + 3) = 0;
  *(_OWORD *)(v25 + 8) = 0;
  ++a1[4];
  sub_442230((__m128i *)v25, &v65, 0.0, a8, a9, a10, a11, a12, a13, a14);
  v28 = *(_QWORD *)(a4 + 8);
  v67 = (__m128i)7uLL;
  *(_OWORD *)v68 = 0;
  if ( v28 )
  {
    n = v28;
    v57 = sub_4814F0(v28);
    v58 = *(const void **)a4;
    v67.m128i_i64[1] = (__int64)v57;
    *(_QWORD *)&v68[2] = n;
    memcpy(v57, v58, n);
    *(_QWORD *)v68 = n;
  }
  v29 = a1[4];
  v30 = (char *)a1[3];
  if ( a1[5] < (unsigned __int64)(v29 + 1) )
  {
    v59 = (char *)sub_481540((__int64)v62, v30, v29 + 1, 0x20u);
    a1[3] = v59;
    v30 = v59;
    v29 = a1[4];
  }
  v31 = &v30[32 * v29];
  *v31 = 2;
  *((_QWORD *)v31 + 3) = 0;
  *(_OWORD *)(v31 + 8) = 0;
  ++a1[4];
  sub_442230((__m128i *)v31, &v67, 0.0, a8, a9, a10, v26, v27, a13, a14);
  if ( a6 )
  {
    v47 = sub_4411E0(a1, a5, nullptr, a3, 0.0, a8, a9, a10, v32, v33, a13, a14);
  }
  else
  {
    LOBYTE(v69) = 2;
    v70 = 0;
    v71 = 0;
    sub_4418C0((unsigned __int8 *)&v69, (unsigned __int8 *)a5, 0.0, a8, a9, a10, v32, v33, a13, a14);
    v72[0] = 2;
    v73 = 0;
    v74 = 0;
    sub_4418C0(v72, (unsigned __int8 *)&v69, 0.0, a8, a9, a10, v34, v35, a13, a14);
    v38 = a1[4];
    v39 = (char *)a1[3];
    if ( a1[5] < (unsigned __int64)(v38 + 1) )
    {
      v61 = (char *)sub_481540((__int64)v62, v39, v38 + 1, 0x20u);
      a1[3] = v61;
      v39 = v61;
      v38 = a1[4];
    }
    v40 = &v39[32 * v38];
    *v40 = 2;
    *((_QWORD *)v40 + 3) = 0;
    *(_OWORD *)(v40 + 8) = 0;
    sub_4418C0((unsigned __int8 *)v40, v72, 0.0, a8, a9, a10, v36, v37, a13, a14);
    ++a1[4];
    sub_441540((__int64)v72, 0.0, a8, a9, a10, v41, v42, a13, a14);
    sub_441540((__int64)&v69, 0.0, a8, a9, a10, v43, v44, a13, a14);
    v47 = sub_4411E0(a1, nullptr, nullptr, a3, 0.0, a8, a9, a10, v45, v46, a13, a14);
  }
  v50 = v47;
  sub_441540((__int64)&v67, 0.0, a8, a9, a10, v48, v49, a13, a14);
  sub_441540((__int64)&v65, 0.0, a8, a9, a10, v51, v52, a13, a14);
  return v50;
}
// 443B0D: variable 'a11' is possibly undefined
// 443B0D: variable 'a12' is possibly undefined
// 443B78: variable 'v26' is possibly undefined
// 443B78: variable 'v27' is possibly undefined
// 443BA8: variable 'v32' is possibly undefined
// 443BA8: variable 'v33' is possibly undefined
// 443BD2: variable 'v34' is possibly undefined
// 443BD2: variable 'v35' is possibly undefined
// 443C0B: variable 'v36' is possibly undefined
// 443C0B: variable 'v37' is possibly undefined
// 443C18: variable 'v41' is possibly undefined
// 443C18: variable 'v42' is possibly undefined
// 443C20: variable 'v43' is possibly undefined
// 443C20: variable 'v44' is possibly undefined
// 443C2E: variable 'v45' is possibly undefined
// 443C2E: variable 'v46' is possibly undefined
// 443C4C: variable 'v48' is possibly undefined
// 443C4C: variable 'v49' is possibly undefined
// 443C54: variable 'v51' is possibly undefined
// 443C54: variable 'v52' is possibly undefined
// 443CC0: variable 'v54' is possibly undefined
// 443CC0: variable 'v55' is possibly undefined
// 4C56E0: using guessed type __int64 qword_4C56E0[3];
