__m128i *__fastcall sub_18A81F0(
        __int64 *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6,
        __m128 a7,
        __m128i a8,
        unsigned int a9,
        __int64 *a10,
        unsigned int a11,
        const void *a12,
        int a13,
        __int64 a14)
{
  __int64 *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __m128i *v38; // rbp
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *v43; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v64; // [rsp+8h] [rbp-100h]
  __int64 v65; // [rsp+8h] [rbp-100h]
  __int64 v66; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v67; // [rsp+28h] [rbp-E0h] BYREF
  bool v68; // [rsp+37h] [rbp-D1h] BYREF
  __int64 v69; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall **v70)(); // [rsp+40h] [rbp-C8h] BYREF
  int v71; // [rsp+48h] [rbp-C0h]
  __int64 *v72; // [rsp+50h] [rbp-B8h]

  v67 = a3;
  v66 = a6;
  v17 = (__int64 *)sub_168B6C0((__int64)a1);
  v18 = sub_1897000(a1, &v67, a4, 1);
  if ( !v18 )
  {
    v38 = (__m128i *)sub_BAB010(v17, *(_QWORD *)(*a1 + 544), a2, a4, a9, v66, 0, (__int64)a5, 0, 0);
    sub_B88650((__int64)v38, 1);
    sub_B94AD0(*(__m128i **)(*a1 + 544), (__int64)v38, v59, v60, v61, v62);
    sub_168B9F0((__int64)&v70, a1, a4, 0x14E8u, 0);
    sub_17AE460((__int64)&v70, &v67);
    sub_15F7200(&v70);
    goto LABEL_11;
  }
  v22 = (__int64 *)v18;
  v23 = *a1;
  LOBYTE(v69) = v66 == 0;
  v64 = v23;
  v24 = sub_A82070((__int64)v17, (__int64)v22, 0, v19, v20, v21);
  v72 = &v69;
  v71 = 3427;
  v70 = off_2BC6A58;
  if ( (unsigned __int8)sub_1E63C20(v64, a4, v24, 1, &v70) )
  {
    v38 = (__m128i *)sub_BAB010(v17, *(_QWORD *)(*a1 + 544), a2, a4, a9, v66, (__int64)v22, (__int64)a5, 0, 0);
    sub_B88650((__int64)v38, 1);
    sub_B94AD0(*(__m128i **)(*a1 + 544), (__int64)v38, v47, v48, v49, v50);
    goto LABEL_11;
  }
  v29 = v66;
  if ( v66 )
  {
    v65 = sub_BADD00((__int64)v22, v66, v25, v26, v27, v28);
    if ( v65 )
    {
      sub_168B9F0((__int64)&v70, a1, a9, 0x88u, 0);
      v34 = sub_17AE460((__int64)&v70, &v67);
      sub_17AE460(v34, &v66);
      sub_15F7200(&v70);
      v29 = (__int64)a1;
      sub_168B9F0((__int64)&v70, a1, *(_DWORD *)(v65 + 24), 0x71u, 0);
      sub_15F7200(&v70);
    }
  }
  else
  {
    if ( sub_BAC6C0((__int64)v22, 0, v25, v26, v27, v28) )
    {
      sub_168B9F0((__int64)&v70, a1, a4, 0xD6Au, 0);
      sub_17AE460((__int64)&v70, &v67);
      sub_15F7200(&v70);
      v55 = sub_BAC6C0((__int64)v22, (__int64)&v67, v51, v52, v53, v54);
      sub_168B9F0((__int64)&v70, a1, *(_DWORD *)(v55 + 24), 0x1788u, 0);
      sub_15F7200(&v70);
    }
    v29 = v66;
  }
  if ( a5 )
  {
    v35 = sub_BAE550(v22, v29, v30, v31, v32, v33);
    if ( v35 )
    {
      if ( !(unsigned __int8)sub_18A64C0(*a1, v35, (__int64)a5, 3 - (unsigned int)(v66 != 0), v36, v37, a7, a8) )
        goto LABEL_9;
    }
    else
    {
      sub_168B9F0((__int64)&v70, a1, *a5, 0x1116u, 0);
      v68 = v66 != 0;
      v45 = sub_1588420((__int64)&v70, (unsigned __int8 *)&v68);
      v46 = sub_17AE460(v45, &v67);
      v69 = *(_QWORD *)a5;
      sub_1587DB0(v46, &v69);
      sub_15F7200(&v70);
    }
  }
  a5 = nullptr;
LABEL_9:
  v38 = (__m128i *)sub_BAB010(v17, *(_QWORD *)(*a1 + 544), a2, a4, a9, v66, (__int64)v22, (__int64)a5, 0, 0);
  sub_B94AD0(*(__m128i **)(*a1 + 544), (__int64)v38, v39, v40, v41, v42);
  v43 = (__int64 *)*a1;
  LOWORD(v70) = 1;
  sub_1836B60(v43, v43[24], v38, a14, &v70, a7, a8);
  sub_16660F0(*a1, *(_QWORD *)(*a1 + 192), (__int64)v38);
  if ( a11 )
  {
    sub_1893F00(*a1, (__int64)v38, a10, a11, (__int64)a12);
    sub_BA9FB0((__int64)&v38[6].m128i_i64[1], a10, a11, a12, (__int64)v17);
    v58 = v38[2].m128i_i64[1];
    if ( (v58 & 7) != 0 || (v58 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      sub_BABE50((__int64)v22, (__int64)a10, a11, v17, v56, v57);
  }
  sub_18954B0(a1, (__int64)v38);
LABEL_11:
  sub_1A865C0(a1, v38);
  return v38;
}
