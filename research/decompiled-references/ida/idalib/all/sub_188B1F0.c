__m128 *__fastcall sub_188B1F0(__int64 a1, __m128i *a2, double a3, double a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  __int64 v11; // rdi
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // r15
  int v25; // eax
  char v26; // r12
  __int64 v27; // rax
  unsigned int v28; // r13d
  char v29; // al
  __m128 *v30; // r12
  _QWORD *v31; // rdi
  _QWORD *v32; // rax
  char v33; // dl
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rsi
  int v44; // eax
  __int64 *v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // eax
  __int64 *v54; // r14
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rbx
  __int64 v70; // rsi
  _QWORD *v71; // rcx
  _QWORD *v72; // rdx
  _QWORD *v73; // rax
  unsigned int v74; // edi
  __int64 v75; // rdx
  __int64 *v76; // rax
  __int64 **v77; // rax
  unsigned __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 *v83; // rax
  _QWORD *v84; // rax
  unsigned __int64 v85; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v86; // [rsp+20h] [rbp-A8h] BYREF
  int v87; // [rsp+28h] [rbp-A0h]
  __int64 v88; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v89; // [rsp+38h] [rbp-90h]
  __int64 v90; // [rsp+40h] [rbp-88h] BYREF
  __int64 v91; // [rsp+50h] [rbp-78h] BYREF
  __int64 v92; // [rsp+58h] [rbp-70h]
  __int64 v93; // [rsp+60h] [rbp-68h]
  __int64 v94; // [rsp+68h] [rbp-60h]
  __int64 v95; // [rsp+70h] [rbp-58h]
  __int64 v96; // [rsp+78h] [rbp-50h]
  int v97; // [rsp+80h] [rbp-48h]
  int v98; // [rsp+84h] [rbp-44h]
  char v99; // [rsp+88h] [rbp-40h]

  sub_1839E60((__int64)&v91, a1, (__int64)a2, 1);
  if ( v99 )
  {
    v30 = nullptr;
    goto LABEL_25;
  }
  v10 = a2[3].m128i_i64[0];
  v11 = *(_QWORD *)(a1 + 248);
  if ( v10 )
  {
    v12 = v10 & 0xFFFFFFFFFFFFFFF0LL;
    v13 = v12;
  }
  else
  {
    v78 = sub_A7AA70(v11, (__int64)a2, v6, v7, v8, v9);
    v11 = *(_QWORD *)(a1 + 248);
    v12 = v78;
    v13 = v78 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v85 = v12;
  v14 = sub_A76250(v11, 6, 0, v12, 0);
  v15 = a2[6].m128i_i64[1];
  v85 = v14;
  sub_7052B0((__int64 *)(v15 + 96), v15, v16, v17, v18, v19);
  if ( *(char *)(a2[8].m128i_i64[0] + 9) < 0
    && ((sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v20, v21, v22, v23),
         (*(_BYTE *)(a2[8].m128i_i64[0] + 1) & 8) != 0)
     || (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v79, v80, v81, v82),
         (*(_BYTE *)(a2[8].m128i_i64[0] + 9) & 0x40) != 0)) )
  {
    v85 |= 1u;
    v24 = 1;
  }
  else
  {
    v24 = 0;
  }
  v25 = sub_15F1720(a1);
  if ( v25 )
    v85 = sub_A70E70(*(_QWORD *)(a1 + 248), v85, v25);
  v85 = sub_A73030(*(_QWORD *)(a1 + 248), v85, 1u);
  v26 = sub_1888F20(a1, (__int64)a2, 1, v24, nullptr, 0);
  v27 = sub_B87BD0(
          *(_QWORD *)(a1 + 248) + 17536LL,
          *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)(v13 + 8) | (unsigned __int8)v12) & 7);
  v28 = a2[1].m128i_u32[2];
  v88 = v27;
  v89 = v28;
  sub_B85890(&v90, v27);
  v86 = 0;
  v87 = 0;
  v29 = sub_C1BE80((int *)(a1 + 224));
  v30 = sub_B98D00(*(_QWORD **)(a1 + 248), (__int64)a2, v28, &v88, 0, 0, 0, v29, 1u, 1, v26, 0, 0, (__int64)&v86);
  v30[1].m128_i8[13] &= 0x9Fu;
  v30[5].m128_i8[3] |= 2u;
  sub_183DCE0(a1, (__int64)v30, *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL), (__int64 *)&v85, 1u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
    sub_17974D0(*(__int64 **)(a1 + 664), (__int64)a2, 1u, v30, v24, 0);
  v31 = *(_QWORD **)(a1 + 248);
  v32 = nullptr;
  if ( *(_DWORD *)(a1 + 11320) > *(_DWORD *)(a1 + 12596) )
  {
    v32 = (_QWORD *)a2[8].m128i_i64[0];
    if ( v32 )
    {
      v33 = *((_BYTE *)v32 + 10);
      v32 = nullptr;
      if ( (v33 & 0x20) != 0 )
      {
        v32 = sub_A81910(v31, v85, 0);
        v31 = *(_QWORD **)(a1 + 248);
      }
    }
  }
  v86 = sub_B74530((__int64)v31, (__int64)&v30[4].m128_i64[1], v28, v28, 0, v85, (__int64)v32, 0, 0);
  v34 = sub_B8C330((__int64)v30);
  sub_B7C440((__int64)v30, v34, &v86, 1u);
  sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v35, v36, v37, v38);
  if ( ((*(_BYTE *)a2[8].m128i_i64[0] >> 1) & 0x14) != 0
    || (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v39, v40, v41, v42),
        (*(_BYTE *)(a2[8].m128i_i64[0] + 3) & 0x20) != 0) )
  {
    v43 = (__int64)v30;
    v44 = sub_188A5F0(a1, (__int64)v30, 1, 0, 0, a3, a4);
  }
  else
  {
    v43 = a2[6].m128i_i64[1];
    sub_7052B0((__int64 *)(v43 + 96), v43, v61, v62, v63, v64);
    v44 = *(_BYTE *)(a2[8].m128i_i64[0] + 5) & 1;
  }
  v48 = (unsigned int)(v44 << 7);
  v30[5].m128_i8[2] = ((_BYTE)v44 << 7) | v30[5].m128_i8[2] & 0x7F;
  if ( (a2[1].m128i_i8[13] & 1) == 0 )
    goto LABEL_17;
  v76 = sub_B8C3D0((__int64)a2, v43, v48, (__int64)v45, v46, v47);
  v48 = *v76;
  v45 = (__int64 *)(*v76 + 8LL * *((unsigned int *)v76 + 2));
  if ( *v76 < (unsigned __int64)v45 )
  {
    v83 = (__int64 *)*v76;
    while ( 1 )
    {
      v48 = *v83;
      if ( *(_WORD *)(*v83 + 36) == 381 )
        break;
      if ( v45 == ++v83 )
        goto LABEL_17;
    }
    if ( v45 == v83 )
      goto LABEL_17;
    goto LABEL_54;
  }
  if ( (__int64 *)v48 != v45 )
  {
    if ( *(_WORD *)(*v45 + 36) != 381 )
    {
      v77 = (__int64 **)(v45 + 1);
      do
      {
        v45 = (__int64 *)v77;
        if ( (__int64 **)v48 == v77 )
          goto LABEL_17;
        v45 = *v77++;
      }
      while ( *((_WORD *)v45 + 18) != 381 );
    }
LABEL_54:
    LOBYTE(v53) = 1;
    goto LABEL_19;
  }
LABEL_17:
  sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v48, (__int64)v45, v46, v47);
  if ( ((*(_BYTE *)a2[8].m128i_i64[0] >> 1) & 0x14) != 0
    || (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v49, v50, v51, v52),
        (*(_BYTE *)(a2[8].m128i_i64[0] + 3) & 0x20) != 0) )
  {
    LOBYTE(v53) = sub_188A5F0(a1, (__int64)v30, 1, 1u, 0, a3, a4);
  }
  else
  {
    sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v65, v66, v67, v68);
    v53 = (*(_DWORD *)(a2[8].m128i_i64[0] + 4) >> 14) & 1;
  }
LABEL_19:
  v30[5].m128_i8[3] = v53 & 1 | v30[5].m128_i8[3] & 0xFE;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 248) + 22940LL);
  v54 = sub_15F18E0(a1, (__int64)a2[4].m128i_i64, v53 & 1, (__int64)v45, v46, v47);
  sub_183D9E0(a1, (__int64)v54, (__int64)v30, a3, a4);
  if ( v30[1].m128_i8[12] >= 0 && (unsigned __int8)sub_18886C0(a1, (__int64)v30, 1u, 0, 0) )
  {
    sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v55, v56, v57, v58);
    *(_BYTE *)(a2[8].m128i_i64[0] + 4) |= 4u;
    sub_1869020(a1, (__int64)v30, v28, 0);
  }
  if ( v54 )
    sub_17B7670(a1, (__int64)v30, (__int64)v54, 0, v57, v58);
  sub_B94AD0(a2 + 4, (__int64)v30, v55, v56, v57, v58);
  if ( !v99 )
  {
    v69 = v91;
    v70 = v92;
    if ( *(_BYTE *)(v91 + 4276) )
    {
      v71 = *(_QWORD **)(v91 + 4256);
      v72 = &v71[*(unsigned int *)(v91 + 4268)];
      if ( v71 == v72 )
      {
LABEL_36:
        sub_1DBAAE0(v69, v70);
        goto LABEL_25;
      }
      v73 = *(_QWORD **)(v91 + 4256);
      if ( v92 == *v71 )
      {
LABEL_35:
        v74 = *(_DWORD *)(v91 + 4268) - 1;
        v75 = v71[v74];
        *(_DWORD *)(v91 + 4268) = v74;
        *v73 = v75;
        v69 = v91;
        goto LABEL_36;
      }
      while ( v72 != ++v73 )
      {
        if ( v92 == *v73 )
          goto LABEL_35;
      }
    }
    else
    {
      v84 = (_QWORD *)sub_2236570(v91 + 4256, v92);
      if ( v84 )
      {
        *v84 = -2;
        ++*(_DWORD *)(v69 + 4272);
      }
    }
    sub_1DBAAE0(v91, v70);
  }
LABEL_25:
  if ( v94 )
  {
    v59 = v93;
    *(_QWORD *)(v93 + 544) = v94;
    *(_QWORD *)(v59 + 512) = v95;
    *(_QWORD *)(v59 + 9944) = v96;
    *(_DWORD *)(v59 + 80) = v97;
    *(_DWORD *)(v59 + 2632) = v98;
  }
  return v30;
}
