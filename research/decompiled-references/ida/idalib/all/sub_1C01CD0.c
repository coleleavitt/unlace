__int64 __fastcall sub_1C01CD0(
        __m128 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  int v7; // eax
  unsigned int v8; // r12d
  unsigned __int64 v10; // r15
  unsigned int v11; // eax
  size_t v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // [rsp-8h] [rbp-2180h]
  __int64 v21; // [rsp+10h] [rbp-2168h] BYREF
  unsigned __int64 v22[2]; // [rsp+18h] [rbp-2160h] BYREF
  unsigned __int8 v23; // [rsp+2Fh] [rbp-2149h] BYREF
  __int64 v24; // [rsp+30h] [rbp-2148h] BYREF
  __int64 v25; // [rsp+38h] [rbp-2140h] BYREF
  __int64 (__fastcall **v26)(); // [rsp+40h] [rbp-2138h] BYREF
  int v27; // [rsp+48h] [rbp-2130h]
  __int64 *v28; // [rsp+50h] [rbp-2128h]
  __int64 *v29; // [rsp+58h] [rbp-2120h]
  int v30; // [rsp+D0h] [rbp-20A8h]
  __int64 v31; // [rsp+D8h] [rbp-20A0h]
  __m128i v32; // [rsp+E0h] [rbp-2098h] BYREF
  void *v33; // [rsp+F0h] [rbp-2088h]
  _QWORD v34[14]; // [rsp+100h] [rbp-2078h] BYREF
  void *ptr; // [rsp+170h] [rbp-2008h] BYREF
  unsigned int v36; // [rsp+178h] [rbp-2000h]
  __int64 v37; // [rsp+180h] [rbp-1FF8h] BYREF
  _QWORD *v38; // [rsp+280h] [rbp-1EF8h] BYREF
  __int64 v39; // [rsp+288h] [rbp-1EF0h]
  _QWORD v40[338]; // [rsp+290h] [rbp-1EE8h] BYREF
  int v41; // [rsp+D20h] [rbp-1458h]
  char v42; // [rsp+D24h] [rbp-1454h]
  _QWORD v43[17]; // [rsp+D28h] [rbp-1450h] BYREF
  int v44; // [rsp+DB0h] [rbp-13C8h]
  __int64 v45; // [rsp+DB8h] [rbp-13C0h]
  __int64 v46; // [rsp+DC0h] [rbp-13B8h]
  _QWORD *v47; // [rsp+DC8h] [rbp-13B0h]
  __int64 v48; // [rsp+DD0h] [rbp-13A8h]
  _QWORD v49[6]; // [rsp+DD8h] [rbp-13A0h] BYREF
  _QWORD v50[2]; // [rsp+E08h] [rbp-1370h] BYREF
  int v51; // [rsp+E18h] [rbp-1360h]
  int v52; // [rsp+E1Ch] [rbp-135Ch]
  __int64 v53; // [rsp+E20h] [rbp-1358h]
  char v54; // [rsp+E28h] [rbp-1350h]
  int v55; // [rsp+E2Ch] [rbp-134Ch]
  int v56; // [rsp+2130h] [rbp-48h]

  v22[0] = a2;
  v21 = a3;
  v30 = 6;
  v31 = 0;
  v32.m128i_i64[0] = v32.m128i_i64[0] & 0xFFFFF80400000000LL | 0x2000000000LL;
  v34[1] = 0;
  v38 = v40;
  v40[336] = v43;
  v39 = 0x1000000000LL;
  v47 = v49;
  v48 = 0x400000000LL;
  v40[337] = 16;
  v41 = 0;
  v42 = 1;
  v43[16] = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v49[4] = v50;
  v49[5] = 0;
  v50[0] = 0;
  v50[1] = 1;
  v51 = sub_C00A40(a2, a2, a3, a4, a5);
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v7 = sub_1BF54C0(a1, a2, v21, &v32, (__int64)&v38, 0, a6, a7, 0);
  if ( v7 == 2 )
  {
    sub_1C004B0(
      (__int64)&ptr,
      (__int64)&v38,
      a1,
      2,
      (__int64)v22,
      1u,
      a6,
      a7,
      (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1837230,
      (__int64)&v26);
    v13 = sub_EEB7E0(v22[0], (__int64)&v38, *(double *)a6.m128_u64);
    sub_168B9F0((__int64)&v26, &a1->m128_i64[1], v13, 0x145Au, 0);
    v24 = *(_QWORD *)(v22[0] + 8);
    v14 = sub_162B6D0((__int64)&v26, &v24);
    v15 = sub_1605D30(v14, &v21);
    v25 = sub_EEC8C0(v22[0], (__int64)&v21, *(double *)a6.m128_u64);
    sub_1587DB0(v15, &v25);
    sub_15F7200(&v26);
  }
  else
  {
    v8 = 0;
    if ( v7 != 1 || !((unsigned int)v39 | v44 & 0x3FFFFFFF) )
      goto LABEL_3;
    sub_1C004B0(
      (__int64)&ptr,
      (__int64)&v38,
      a1,
      0,
      (__int64)v22,
      1u,
      a6,
      a7,
      (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1837230,
      (__int64)&v26);
    v10 = v22[0];
    v25 = sub_EEC8C0(v22[0], (__int64)&v38, *(double *)a6.m128_u64);
    v24 = *(_QWORD *)(v10 + 8);
    v11 = sub_EEB7E0(v10, (__int64)&v38, *(double *)a6.m128_u64);
    v28 = &v25;
    v27 = 5302;
    v26 = off_2BC71E8;
    v29 = &v24;
    if ( !(unsigned __int8)sub_1E63C20(a1, v11, v21, 1, &v26) )
    {
      v16 = sub_EEB7E0(v22[0], v20, *(double *)a6.m128_u64);
      sub_168B9F0((__int64)&v26, &a1->m128_i64[1], v16, 0x14B5u, 0);
      v23 = 0;
      v17 = sub_1588420((__int64)&v26, &v23);
      v24 = *(_QWORD *)(v22[0] + 8);
      v18 = sub_162B6D0(v17, &v24);
      v25 = sub_EEC8C0(v22[0], (__int64)&v24, *(double *)a6.m128_u64);
      v19 = sub_1587DB0(v18, &v25);
      sub_1605D30(v19, &v21);
      sub_15F7200(&v26);
    }
  }
  v12 = j__strlen(&byte_22F0C30);
  sub_1C007F0((__int64)&v38, a1, (__int64)v22, 1u, (__int64 *)ptr, v36, a6, a7, &byte_22F0C30, v12, 0);
  if ( ptr != &v37 )
    free(ptr);
  v8 = 1;
LABEL_3:
  sub_17A20D0((__int64)&v38);
  if ( (v30 & 0x7FFFFFFF) == 3 && v33 != v34 )
    free(v33);
  return v8;
}
