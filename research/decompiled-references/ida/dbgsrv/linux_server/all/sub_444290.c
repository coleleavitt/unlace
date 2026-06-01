/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444290
// Address: 0x0000000000444290

//----- (0000000000444290) ----------------------------------------------------
unsigned __int64 __fastcall sub_444290(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v11; // eax
  double v12; // xmm4_8
  double v13; // xmm5_8
  _QWORD *v14; // rdi
  unsigned int v15; // r13d
  const char *v16; // r14
  double v17; // xmm4_8
  double v18; // xmm5_8
  __int64 v19; // rax
  const char *v20; // r15
  double v21; // xmm4_8
  double v22; // xmm5_8
  size_t v23; // rax
  double v24; // xmm4_8
  double v25; // xmm5_8
  double v26; // xmm4_8
  double v27; // xmm5_8
  size_t v28; // rax
  size_t v29; // r14
  __int64 v30; // r14
  double v31; // xmm4_8
  double v32; // xmm5_8
  double v33; // xmm4_8
  double v34; // xmm5_8
  __int64 v35; // r12
  double v36; // xmm4_8
  double v37; // xmm5_8
  double v38; // xmm4_8
  double v39; // xmm5_8
  double v40; // xmm4_8
  double v41; // xmm5_8
  double v43; // xmm4_8
  double v44; // xmm5_8
  double v45; // xmm4_8
  double v46; // xmm5_8
  size_t v47; // [rsp+0h] [rbp-88h]
  size_t v48; // [rsp+0h] [rbp-88h]
  size_t n; // [rsp+8h] [rbp-80h]
  int v50; // [rsp+1Ch] [rbp-6Ch] BYREF
  char v51[8]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v52[2]; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v53; // [rsp+48h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v51[0] = 2;
  v50 = -1;
  memset(v52, 0, 24);
  v11 = sub_479E90();
  v14 = *(_QWORD **)(a1 + 104);
  v15 = v11;
  if ( !v14 )
  {
    sub_441540((__int64)v51, 0.0, a4, a5, a6, v12, v13, a9, a10);
    v51[0] = 7;
    memset(v52, 0, 24);
    sub_443F90(a2, "file", (__m128i *)v51, 0, 0.0, a4, a5, a6, v43, v44, a9, a10);
    sub_441540((__int64)v51, 0.0, a4, a5, a6, v45, v46, a9, a10);
LABEL_12:
    v51[0] = 7;
    memset(v52, 0, 24);
    goto LABEL_10;
  }
  v16 = sub_439560(v14, *(_DWORD *)(a1 + 112), (unsigned int *)&v50);
  v19 = *(_QWORD *)(a1 + 104);
  v20 = s1;
  if ( *(_QWORD *)(v19 + 8) )
    v20 = *(const char **)v19;
  sub_441540((__int64)v51, 0.0, a4, a5, a6, v17, v18, a9, a10);
  if ( v16 )
  {
    v23 = strlen(v16);
    v51[0] = 7;
    memset(v52, 0, 24);
    if ( v23 )
    {
      n = v23;
      v48 = v23 + 1;
      *(_QWORD *)&v52[0] = sub_481540((__int64)v52, nullptr, v23 + 1, 1u);
      *((_QWORD *)&v52[0] + 1) = v48;
      memmove(*(void **)&v52[0], v16, n);
      *(_BYTE *)(*(_QWORD *)&v52[0] + n) = 0;
    }
  }
  else
  {
    v51[0] = 7;
    memset(v52, 0, 24);
  }
  sub_443F90(a2, "file", (__m128i *)v51, 0, 0.0, a4, a5, a6, v21, v22, a9, a10);
  sub_441540((__int64)v51, 0.0, a4, a5, a6, v24, v25, a9, a10);
  if ( !v20 )
    goto LABEL_12;
  v28 = strlen(v20);
  v51[0] = 7;
  memset(v52, 0, 24);
  v29 = v28;
  if ( v28 )
  {
    v47 = v28 + 1;
    *(_QWORD *)&v52[0] = sub_481540((__int64)v52, nullptr, v28 + 1, 1u);
    *((_QWORD *)&v52[0] + 1) = v47;
    memmove(*(void **)&v52[0], v20, v29);
    *(_BYTE *)(*(_QWORD *)&v52[0] + v29) = 0;
  }
LABEL_10:
  sub_443F90(a2, "func", (__m128i *)v51, 0, 0.0, a4, a5, a6, v26, v27, a9, a10);
  v30 = v50;
  sub_441540((__int64)v51, 0.0, a4, a5, a6, v31, v32, a9, a10);
  v51[0] = 2;
  *(_QWORD *)&v52[0] = v30;
  sub_443F90(a2, "line", (__m128i *)v51, 0, 0.0, a4, a5, a6, v33, v34, a9, a10);
  v35 = *(_QWORD *)(a1 + 112);
  sub_441540((__int64)v51, 0.0, a4, a5, a6, v36, v37, a9, a10);
  v51[0] = 2;
  *(_QWORD *)&v52[0] = v35;
  sub_443F90(a2, "pc", (__m128i *)v51, 0, 0.0, a4, a5, a6, v38, v39, a9, a10);
  sub_479EB0(v15);
  sub_441540((__int64)v51, 0.0, a4, a5, a6, v40, v41, a9, a10);
  return v53 - __readfsqword(0x28u);
}
// 444322: variable 'v17' is possibly undefined
// 444322: variable 'v18' is possibly undefined
// 444367: variable 'v21' is possibly undefined
// 444367: variable 'v22' is possibly undefined
// 44436F: variable 'v24' is possibly undefined
// 44436F: variable 'v25' is possibly undefined
// 4443B7: variable 'v26' is possibly undefined
// 4443B7: variable 'v27' is possibly undefined
// 4443C4: variable 'v31' is possibly undefined
// 4443C4: variable 'v32' is possibly undefined
// 4443E2: variable 'v33' is possibly undefined
// 4443E2: variable 'v34' is possibly undefined
// 4443EF: variable 'v36' is possibly undefined
// 4443EF: variable 'v37' is possibly undefined
// 44440D: variable 'v38' is possibly undefined
// 44440D: variable 'v39' is possibly undefined
// 44441D: variable 'v40' is possibly undefined
// 44441D: variable 'v41' is possibly undefined
// 4444F3: variable 'v12' is possibly undefined
// 4444F3: variable 'v13' is possibly undefined
// 44451E: variable 'v43' is possibly undefined
// 44451E: variable 'v44' is possibly undefined
// 444526: variable 'v45' is possibly undefined
// 444526: variable 'v46' is possibly undefined
