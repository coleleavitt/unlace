unsigned __int64 __fastcall sub_1BF87F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int v33; // ecx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  __int64 *v42; // r12
  bool v43; // r14
  unsigned int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  char v49; // dl
  unsigned __int8 v50; // dl
  __int64 v51; // rax
  int v52; // r14d
  unsigned int v53; // eax
  __int64 v54; // rax
  unsigned __int64 v55; // rdi
  __int64 v56; // r12
  __int64 v57; // rax
  unsigned int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r14
  __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  _QWORD *v68; // rax
  unsigned __int16 v69; // [rsp+8h] [rbp-1C0h]
  __int64 v70; // [rsp+8h] [rbp-1C0h]
  __int64 v71; // [rsp+8h] [rbp-1C0h]
  __int64 v72; // [rsp+10h] [rbp-1B8h]
  __int64 v73; // [rsp+10h] [rbp-1B8h]
  __int64 v74; // [rsp+18h] [rbp-1B0h]
  int v77; // [rsp+3Ch] [rbp-18Ch] BYREF
  __int64 v78; // [rsp+40h] [rbp-188h] BYREF
  unsigned __int64 v79; // [rsp+48h] [rbp-180h] BYREF
  __int64 v80; // [rsp+50h] [rbp-178h] BYREF
  __int64 v81; // [rsp+58h] [rbp-170h] BYREF
  _BYTE v82[144]; // [rsp+60h] [rbp-168h] BYREF
  __m128i v83; // [rsp+F0h] [rbp-D8h] BYREF
  char v84; // [rsp+101h] [rbp-C7h]
  unsigned int v85; // [rsp+108h] [rbp-C0h]
  void *ptr; // [rsp+110h] [rbp-B8h]
  __int64 v87; // [rsp+120h] [rbp-A8h] BYREF

  v9 = a2;
  v78 = 0;
  v83.m128i_i64[0] = sub_B987D0((_QWORD *)a5, a2);
  v79 = sub_C1BEF0((__int64)&v83, a2, v10, v11);
  v14 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v14 + 16) == 42
    || (v14 = sub_1BC7590(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v12, v13)) != 0 )
  {
    v78 = *(_QWORD *)(v14 + 32);
    v69 = 0;
    v15 = sub_B98760(a5, a2);
  }
  else
  {
    v15 = v79;
    v38 = *(_QWORD *)(a1 + 248);
    v78 = *(_QWORD *)(v9 + 8);
    v69 = sub_C0EB40(a2, v38, nullptr, v35, v36);
    if ( (*(_BYTE *)(v9 + 1) & 6) == 0 )
    {
      v41 = sub_1703830(a5, v38, v39, v40);
      v9 = sub_1A0BDC0(a1, v78, v9, v41 != 2);
    }
  }
  v16 = *(_QWORD *)(sub_B8C1B0(a5 + 72) + 16);
  if ( (v16 & 4) != 0 )
    v17 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v17 )
    v17 -= 64LL;
  v72 = *(_QWORD *)(v9 + 8);
  v74 = v17;
  v18 = sub_EEB7E0(v9, v17, *(double *)a6.m128_u64);
  v19 = a1;
  sub_1BEC760(&v83, a1, v18, v72, v69, a5, a6, a7, v74, 0, 0);
  if ( (v83.m128i_i32[0] & 0x7FFFFFFF) == 5 )
  {
    v42 = (__int64 *)(a1 + 8);
    if ( v85 == 2 )
    {
      v47 = *(_QWORD *)&byte_8[v78 & 0xFFFFFFFFFFFFFFF0LL];
      LOBYTE(v48) = 0;
      if ( (v47 & 8) != 0 )
        v48 = *(__int64 *)((char *)&qword_18 + (v47 & 0xFFFFFFFFFFFFFFF0LL));
      v49 = v47 | v78;
      LOBYTE(v47) = 0;
      v50 = v48 | v49 & 7;
      v51 = *(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v51 & 8) != 0 )
        v47 = *(__int64 *)((char *)&qword_18 + (v51 & 0xFFFFFFFFFFFFFFF0LL));
      v52 = v50 & (unsigned __int8)~(v47 & 7 | (v15 | v51) & 7) & 7;
      if ( v52 )
      {
        v58 = sub_EEB7E0(v9, v19, *(double *)a6.m128_u64);
        sub_168B9F0((__int64)v82, v42, v58, 0x1034u, 0);
        v80 = *(_QWORD *)(a5 + 40);
        v59 = sub_15894B0((__int64)v82, &v80);
        v60 = sub_1605D30(v59, &v78);
        v77 = v52 - 1;
        v61 = sub_16CF160(v60, (unsigned int *)&v77);
        v81 = sub_EEC8C0(v9, (__int64)&v77, *(double *)a6.m128_u64);
        sub_1587DB0(v61, &v81);
        sub_15F7200(v82);
        sub_168B9F0((__int64)v82, v42, *(_DWORD *)(a5 + 24), 0x188Bu, 0);
        v9 = 1;
        v81 = *(_QWORD *)(a5 + 40);
        sub_15894B0((__int64)v82, &v81);
        sub_15F7200(v82);
        goto LABEL_17;
      }
    }
    else if ( v85 >= 2 && v85 <= 4 )
    {
      v43 = (unsigned int)sub_1703830(a5, v19, v20, v21) == 2;
      v44 = sub_EEB7E0(v9, v19, *(double *)a6.m128_u64);
      sub_168B9F0((__int64)v82, v42, v44, 0x1035u, 0);
      v80 = *(_QWORD *)(a5 + 40);
      v45 = sub_15894B0((__int64)v82, &v80);
      LOBYTE(v77) = v69 != 0;
      v46 = sub_1588420(v45, (unsigned __int8 *)&v77);
      if ( *(_BYTE *)(v46 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v46 + 32), v43, 2u);
      }
      else if ( *(_BYTE *)(v46 + 132) )
      {
        v70 = v46;
        v62 = sub_168B9E0((_QWORD *)v46);
        v65 = v70;
        v66 = v62;
        v67 = *(_QWORD *)(v70 + 16);
        if ( v67 )
        {
          v73 = v66;
          v67 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 32LL))(v67);
          v66 = v73;
          v65 = v70;
        }
        v71 = v65;
        v81 = v67;
        v68 = sub_1587BC0(v66, &v81, v65, v66, v63, v64);
        sub_AE9DF0((unsigned __int8 **)(*v68 + 32LL * *(unsigned int *)(v71 + 128) + 8), v43, 2u);
      }
      sub_15F7200(v82);
      sub_168B9F0((__int64)v82, v42, *(_DWORD *)(a5 + 24), 0x188Bu, 0);
      v81 = *(_QWORD *)(a5 + 40);
      sub_15894B0((__int64)v82, &v81);
      v9 = 1;
      sub_15F7200(v82);
      goto LABEL_17;
    }
    v53 = sub_EEB7E0(v9, v19, *(double *)a6.m128_u64);
    sub_168B9F0((__int64)v82, v42, v53, 0x1036u, 0);
    v54 = sub_1605D30((__int64)v82, (__int64 *)&v79);
    v55 = v9;
    v9 = 1;
    v56 = sub_1605D30(v54, &v78);
    v81 = sub_EEC8C0(v55, (__int64)&v78, *(double *)a6.m128_u64);
    sub_1587DB0(v56, &v81);
    sub_15F7200(v82);
    goto LABEL_17;
  }
  if ( v84 == 17 )
  {
    v19 = v9;
    v57 = sub_18C1370(a1, v9, a3, *(double *)a6.m128_u64, *(double *)a7.m128_u64, a4, a5, v23);
    v9 = v57 & 0xFFFFFFFFFFFFFFFELL;
    if ( v57 == 1 )
    {
      v9 = 1;
      goto LABEL_17;
    }
  }
  v24 = *(_QWORD *)&byte_8[*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL];
  v25 = v24 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v24 | (unsigned __int8)*(_QWORD *)(v9 + 8)) & 7;
  v26 = *(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
  v27 = v26 | ((unsigned __int8)v15 | (unsigned __int8)*(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
  if ( v25 != v27 )
  {
    v28 = sub_F68450(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL), v19, v27, v26, v22) & 0xFFFFFFFFFFFFFFF0LL;
    if ( v28 )
    {
      v29 = *(_QWORD *)(v28 + 8);
      LODWORD(v28) = 0;
      if ( (v29 & 8) == 0 )
      {
LABEL_12:
        v30 = (unsigned int)v28 >> 9;
        v31 = *(_QWORD *)&byte_8[v78 & 0xFFFFFFFFFFFFFFF0LL];
        LODWORD(v32) = 0;
        if ( (v31 & 8) != 0 )
          v32 = *(__int64 *)((char *)&qword_18 + (v31 & 0xFFFFFFFFFFFFFFF0LL));
        v33 = 63;
        if ( v30 == (unsigned int)v32 >> 9 )
          v33 = 5;
        v9 = sub_160A600(
               a1,
               v9,
               v15,
               v33,
               (*(_BYTE *)(v9 + 1) >> 1) & 3,
               0,
               *(double *)a6.m128_u64,
               *(double *)a7.m128_u64,
               0)
           & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_17;
      }
    }
    else
    {
      v29 = *(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v29 & 8) == 0 )
        goto LABEL_12;
    }
    v28 = *(__int64 *)((char *)&qword_18 + (v29 & 0xFFFFFFFFFFFFFFF0LL));
    goto LABEL_12;
  }
LABEL_17:
  if ( (v83.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v87 )
    free(ptr);
  return v9;
}
