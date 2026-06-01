__int64 __fastcall sub_6FFF20(__int64 *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  _DWORD *v6; // rax
  unsigned int v7; // r12d
  void *v8; // rbx
  void *v9; // rbx
  _QWORD *v11; // r12
  _DWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  int v15; // r10d
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __m128i si128; // xmm2
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // ecx
  __m128i *v32; // rdx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // r12
  int v38; // [rsp-10h] [rbp-100h]
  int v39; // [rsp-8h] [rbp-F8h]
  int v40[4]; // [rsp+0h] [rbp-F0h] BYREF
  __m128i v41; // [rsp+10h] [rbp-E0h] BYREF
  int v42; // [rsp+20h] [rbp-D0h]
  __int64 *v43; // [rsp+28h] [rbp-C8h]
  __m128i v44; // [rsp+30h] [rbp-C0h] BYREF
  int v45; // [rsp+40h] [rbp-B0h]
  void *v46; // [rsp+48h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+50h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+58h] [rbp-98h]
  __int64 v49; // [rsp+60h] [rbp-90h] BYREF
  __int64 v50; // [rsp+68h] [rbp-88h]
  __int64 v51; // [rsp+70h] [rbp-80h] BYREF
  __int64 v52; // [rsp+78h] [rbp-78h]
  __int64 v53; // [rsp+80h] [rbp-70h] BYREF
  __int64 v54; // [rsp+88h] [rbp-68h]
  int v55[4]; // [rsp+90h] [rbp-60h] BYREF
  __m128i v56; // [rsp+A0h] [rbp-50h]
  __m128i v57; // [rsp+B0h] [rbp-40h]

  v43 = a1;
  v44.m128i_i64[0] = a4;
  v41.m128i_i64[0] = a5;
  v47 = 0;
  v48 = 0;
  v49 = 1;
  v50 = 0;
  v51 = 1;
  v52 = 0;
  v53 = 1;
  v54 = 0;
  sub_182CBA0(qword_1C7F2C0, &v53);
  v6 = *(_DWORD **)(a2 + 24);
  BYTE4(v53) &= ~1u;
  LODWORD(v53) = 1;
  if ( v6 && *v6 == 5 && v6[1] == 10 && a3 == 2 )
  {
    v11 = v43 + 1;
    if ( (unsigned __int8)sub_1666AE0(v43 + 1, *(_QWORD *)v44.m128i_i64[0], &v47, (char *)&v46 + 7)
      && (unsigned __int8)sub_1666AE0(v11, *(_QWORD *)(v44.m128i_i64[0] + 8), &v51, (char *)&v46 + 6)
      && (_DWORD)v51 )
    {
      sub_27B620((__int64)v55, (__int64)&v47, (__int64)&v51);
      if ( !v43[2] )
        sub_16669E0(v11);
      v36 = sub_166A700(v43[2], (unsigned int)v55, 0, v33, v34, v35);
      v37 = v36;
      if ( v36 )
        ++*(_DWORD *)(v36 + 8);
      sub_6FFC80(*(_QWORD *)v41.m128i_i64[0], *(_QWORD *)(v41.m128i_i64[0] + 8));
      *(_QWORD *)v41.m128i_i64[0] = v37;
      sub_25A130((char *)v55);
LABEL_26:
      v7 = 4;
      goto LABEL_4;
    }
    v12 = *(_DWORD **)(a2 + 24);
    if ( v12 )
    {
      if ( *v12 == 5
        && v12[1] == 10
        && !*(_WORD *)(*(_QWORD *)v44.m128i_i64[0] + 4LL)
        && (*(_BYTE *)(*(_QWORD *)v44.m128i_i64[0] + 30LL) & 1) != 0 )
      {
        v13 = *(_QWORD *)(v44.m128i_i64[0] + 8);
        if ( !*(_WORD *)(v13 + 4) && (*(_BYTE *)(v13 + 30) & 1) != 0 )
        {
          v14 = *v43;
          v40[0] = sub_15D2CD0(v43[1], 5, 0, 0, 0);
          sub_180C5A0(v55, "div");
          v16 = sub_15E3D10(
                  v14,
                  (int)v55,
                  (int)&qword_18D6CD0,
                  0,
                  0,
                  v40[0],
                  1,
                  v15,
                  v40[0],
                  v40[2],
                  v41.m128i_i32[0],
                  v41.m128i_i32[2],
                  v42,
                  (int)v43,
                  v44.m128i_i8[0],
                  v44.m128i_i32[2],
                  v45,
                  (int)v46,
                  v47,
                  v48,
                  v49,
                  v50,
                  v51,
                  v52,
                  v53,
                  v54,
                  v55[0],
                  v55[2],
                  v56.m128i_i32[0],
                  (void *)v56.m128i_i64[1],
                  v57.m128i_i32[0],
                  v57.m128i_i64[1]);
          v17 = sub_15DC610(
                  v14,
                  v16,
                  0,
                  0,
                  v38,
                  v39,
                  v40[0],
                  v40[2],
                  v41.m128i_i32[0],
                  v41.m128i_i32[2],
                  v42,
                  (char)v43,
                  v44.m128i_i32[0],
                  v44.m128i_i32[2],
                  v45,
                  v46);
          v18 = v17;
          if ( v17 )
            ++*(_DWORD *)(v17 + 8);
          v19 = *(_QWORD *)(v41.m128i_i64[0] + 8);
          sub_6FFC80(*(_QWORD *)v41.m128i_i64[0], v19);
          v22 = (__int64 *)v44.m128i_i64[0];
          *(_QWORD *)v41.m128i_i64[0] = v18;
          v23 = v22[1];
          v24 = *v22;
          v25 = *v43;
          v44.m128i_i64[0] = *v43;
          v26 = (__m128i)_mm_loadh_ps((const double *)v44.m128i_i64);
          v27 = v26;
          si128 = v26;
          *(__m128i *)v55 = v26;
          if ( v24 )
            ++*(_DWORD *)(v24 + 8);
          v56 = v26;
          if ( v23 )
            ++*(_DWORD *)(v23 + 8);
          v57 = v26;
          if ( v18 )
            ++*(_DWORD *)(v18 + 8);
          v29 = v43[5];
          if ( !v29 || (v25 = *(unsigned int *)(v29 - 8), *(_DWORD *)(v29 - 4) == (_DWORD)v25) )
          {
            v44 = v26;
            sub_7063E0(
              v43 + 5,
              v19,
              v24,
              v25,
              v20,
              v21,
              v26.m128i_i64[0],
              v26.m128i_i64[1],
              v26.m128i_i64[0],
              v26.m128i_i64[1]);
            v29 = v43[5];
            v26 = _mm_load_si128(&v44);
            v27 = _mm_load_si128(&v41);
            si128 = _mm_load_si128((const __m128i *)v40);
          }
          v30 = *(unsigned int *)(v29 - 4);
          v56.m128i_i64[0] = 0;
          v31 = v30;
          *(_QWORD *)v55 = 0;
          v32 = (__m128i *)(v29 + 48 * v30);
          *v32 = v26;
          v32[1] = v27;
          v32[2] = si128;
          v57.m128i_i64[0] = 0;
          *(_DWORD *)(v29 - 4) = v31 + 1;
          sub_701CE0(v55);
          goto LABEL_26;
        }
      }
    }
  }
  v7 = 5;
LABEL_4:
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v51);
  sub_182CBA0(v8, &v53);
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v47);
  sub_182CBA0(v9, &v49);
  return v7;
}

