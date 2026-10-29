__int64 __fastcall sub_1C03D10(
        __m128 *a1,
        __int64 a2,
        __int64 a3,
        __m128i *a4,
        unsigned __int64 a5,
        int a6,
        __m128 a7,
        __m128 a8,
        __int64 a9)
{
  unsigned int v9; // r15d
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // rbp
  __int64 *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r12
  unsigned __int64 v19; // rbp
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rbx
  size_t v24; // r14
  size_t v25; // r14
  unsigned int v26; // r13d
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int16 *v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int16 *v36; // rax
  __int64 v37; // [rsp-8h] [rbp-1FB0h]
  unsigned int v40; // [rsp+10h] [rbp-1F98h]
  __int64 v42; // [rsp+30h] [rbp-1F78h]
  unsigned int v43; // [rsp+4Ch] [rbp-1F5Ch]
  char v44; // [rsp+57h] [rbp-1F51h] BYREF
  __int64 *v45; // [rsp+58h] [rbp-1F50h] BYREF
  _BYTE *v46; // [rsp+60h] [rbp-1F48h] BYREF
  unsigned __int64 v47; // [rsp+68h] [rbp-1F40h]
  __int64 v48; // [rsp+80h] [rbp-1F28h] BYREF
  unsigned __int64 v49; // [rsp+88h] [rbp-1F20h] BYREF
  unsigned __int64 v50; // [rsp+90h] [rbp-1F18h]
  _QWORD *v51; // [rsp+B0h] [rbp-1EF8h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-1EF0h]
  _QWORD v53[338]; // [rsp+C0h] [rbp-1EE8h] BYREF
  int v54; // [rsp+B50h] [rbp-1458h]
  char v55; // [rsp+B54h] [rbp-1454h]
  _QWORD v56[17]; // [rsp+B58h] [rbp-1450h] BYREF
  int v57; // [rsp+BE0h] [rbp-13C8h]
  __int64 v58; // [rsp+BE8h] [rbp-13C0h]
  __int64 v59; // [rsp+BF0h] [rbp-13B8h]
  _QWORD *v60; // [rsp+BF8h] [rbp-13B0h]
  __int64 v61; // [rsp+C00h] [rbp-13A8h]
  _QWORD v62[6]; // [rsp+C08h] [rbp-13A0h] BYREF
  _QWORD v63[2]; // [rsp+C38h] [rbp-1370h] BYREF
  unsigned int v64; // [rsp+C48h] [rbp-1360h]
  int v65; // [rsp+C4Ch] [rbp-135Ch]
  __int64 v66; // [rsp+C50h] [rbp-1358h]
  char v67; // [rsp+C58h] [rbp-1350h]
  int v68; // [rsp+C5Ch] [rbp-134Ch]
  int v69; // [rsp+1F60h] [rbp-48h]

  v9 = 0;
  if ( (*(_QWORD *)a3 & 7) == 7 && *(_DWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFF8LL) == 1 )
    v9 = *(_DWORD *)(a3 + 16);
  v53[337] = 16;
  v54 = 0;
  v51 = v53;
  v52 = 0x1000000000LL;
  v53[336] = v56;
  v60 = v62;
  v61 = 0x400000000LL;
  v62[4] = v63;
  v55 = 1;
  v56[16] = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v62[5] = 0;
  v63[0] = 0;
  v63[1] = 1;
  v64 = v9;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  sub_1BF4A50((__int64 *)a1, a2 + 8, a4, a5, (__int64)&v51, a9, a7, a8);
  v11 = v57 & 0x3FFFFFFF;
  v40 = v52;
  v12 = sub_1BF27B0((__int64)&v51, a1, v9, &v45, *(double *)a7.m128_u64, a8);
  if ( v12 == 1 )
  {
    v25 = j__strlen(&byte_22F0C30);
    sub_168B9B0((__int64)&v46, (__int64)&a1->m128_i64[1], 4762);
    sub_AE9DF0(&v46, *(_QWORD *)(a2 + 120), 9u);
    LODWORD(v48) = v9;
    sub_1582CA0((__int64)&v49, &v46);
    sub_1C022A0(
      (__int64)&v51,
      (unsigned int *)&v48,
      a1,
      0,
      (__int64)a4,
      a5,
      a7,
      a8,
      &byte_22F0C30,
      v25,
      0,
      (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620,
      (__int64)&v44);
LABEL_14:
    if ( v49 && v50 )
      sub_1580C40(v50, v49);
    if ( v46 && v47 )
      sub_1580C40(v47, (unsigned __int64)v46);
    goto LABEL_11;
  }
  if ( v12 == 2 )
  {
    v24 = j__strlen(&byte_22F0C30);
    sub_168B9B0((__int64)&v46, (__int64)&a1->m128_i64[1], 4742);
    sub_AE9DF0(&v46, *(_QWORD *)(a2 + 120), 9u);
    LODWORD(v48) = *(_DWORD *)(a2 + 128);
    sub_1582CA0((__int64)&v49, &v46);
    sub_1C022A0(
      (__int64)&v51,
      (unsigned int *)&v48,
      a1,
      2,
      (__int64)a4,
      a5,
      a7,
      a8,
      &byte_22F0C30,
      v24,
      0,
      (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620,
      (__int64)&v44);
    goto LABEL_14;
  }
  v13 = *v45;
  v14 = (__int64 *)*v45;
  v42 = sub_1BC7390(
          a1,
          *v45,
          v45[1] & 0xFFFFFFFFFFFFFFF8LL,
          0,
          (unsigned __int64)v40 + v11 > 1,
          *(_DWORD *)(a3 + 8),
          a7,
          a8,
          (_QWORD *)(a3 + 16));
  v17 = v37;
  if ( v42 != 1 )
  {
    if ( (_DWORD)a5 )
    {
      v18 = v13;
      v19 = 0;
      v43 = v9;
      while ( 1 )
      {
        v20 = a4->m128i_i64[v19 / 8];
        sub_19CF970(
          (__int64)&v48,
          (_QWORD *)a1[15].m128_u64[1],
          *(_QWORD *)(*(_QWORD *)(v18 + 120) + v19),
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 120) + v19) + 48LL),
          v15,
          v16);
        v14 = &v48;
        v21 = sub_1A24E20((__int64)a1, (__int64)&v48, 0, v20, 0, 0, a7, a8);
        if ( v21 == 1 )
          break;
        (&v46)[v19 / 8] = (_BYTE *)(v21 & 0xFFFFFFFFFFFFFFFELL);
        v19 += 8LL;
        if ( v19 == 8LL * (unsigned int)(a5 - 1) + 8 )
        {
          v13 = v18;
          v9 = v43;
          goto LABEL_22;
        }
      }
    }
    else
    {
LABEL_22:
      v48 = sub_C1D490(v13, (__int64)v14, (__int64)&v46, v17);
      v26 = sub_18C0240(v48, (__int64)v14);
      v48 = sub_F67970(&v48, a1[15].m128_i64[1]);
      v27 = a1[122].m128_u32[0];
      if ( a1[121].m128_i32[2] == (_DWORD)v27 )
      {
        v28 = a1[122].m128_u32[1];
        if ( a1[121].m128_i32[3] == (_DWORD)v28 )
        {
          v28 = 0;
          v27 = 0;
        }
      }
      else
      {
        v28 = a1[122].m128_u32[1];
      }
      v29 = (unsigned __int16 *)sub_C99120(
                                  (_QWORD *)a1[15].m128_u64[1],
                                  v42 & 0xFFFFFFFFFFFFFFFELL,
                                  &v46,
                                  a5,
                                  v48,
                                  v26,
                                  a6,
                                  v9,
                                  (v28 << 32) | v27);
      v32 = sub_C1D490(v13, v42 & 0xFFFFFFFFFFFFFFFELL, v30, v31);
      if ( !(unsigned __int8)sub_18C4140((__int64)a1, v32, v9, (__int64)v29, v13)
        && !(unsigned __int8)sub_16F8E60(
                               (__int64 *)a1,
                               v13,
                               (unsigned __int64)v29,
                               0,
                               (__m128i)a7,
                               *(double *)a8.m128_u64) )
      {
        v36 = sub_19A3E40((__int64)a1, v29, v33, v34, v35, a7, a8);
        v22 = sub_18C3A50((__int64)a1, (unsigned __int64)v36, v13);
        goto LABEL_12;
      }
    }
  }
LABEL_11:
  v22 = 1;
LABEL_12:
  sub_17A20D0((__int64)&v51);
  return v22;
}
