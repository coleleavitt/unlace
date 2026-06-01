__m128 *__fastcall sub_188ABF0(__int64 a1, __m128i *a2, double a3, double a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r14
  int v14; // eax
  char v15; // r13
  __int64 v16; // rax
  unsigned int v17; // r14d
  char v18; // al
  __m128 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 *v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // eax
  __int64 *v41; // r13
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rbp
  __int64 v51; // rsi
  _QWORD *v52; // rcx
  _QWORD *v53; // rdx
  _QWORD *v54; // rax
  unsigned int v55; // edi
  __int64 v56; // rdx
  __int64 *v57; // rax
  __int64 **v58; // rax
  unsigned __int64 v59; // rax
  __int64 *v60; // rax
  _QWORD *v61; // rax
  unsigned __int64 v62; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+10h] [rbp-A8h] BYREF
  int v64; // [rsp+18h] [rbp-A0h]
  __int64 v65; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v66; // [rsp+28h] [rbp-90h]
  __int64 v67; // [rsp+30h] [rbp-88h] BYREF
  __int64 v68; // [rsp+40h] [rbp-78h] BYREF
  __int64 v69; // [rsp+48h] [rbp-70h]
  __int64 v70; // [rsp+50h] [rbp-68h]
  __int64 v71; // [rsp+58h] [rbp-60h]
  __int64 v72; // [rsp+60h] [rbp-58h]
  __int64 v73; // [rsp+68h] [rbp-50h]
  int v74; // [rsp+70h] [rbp-48h]
  int v75; // [rsp+74h] [rbp-44h]
  char v76; // [rsp+78h] [rbp-40h]

  sub_1839E60((__int64)&v68, a1, (__int64)a2, 2);
  if ( v76 )
  {
    v19 = nullptr;
    goto LABEL_20;
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
    v59 = sub_A7AA70(v11, (__int64)a2, v6, v7, v8, v9);
    v11 = *(_QWORD *)(a1 + 248);
    v12 = v59;
    v13 = v59 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v62 = sub_A76250(v11, 6, 0, v12, 0);
  v14 = sub_15F1720(a1);
  if ( v14 )
    v62 = sub_A70E70(*(_QWORD *)(a1 + 248), v12, v14);
  v62 = sub_A72DD0(*(_QWORD *)(a1 + 248), v62);
  v15 = sub_1888F20(a1, (__int64)a2, 2, 0, nullptr, 0);
  v16 = sub_B87BD0(
          *(_QWORD *)(a1 + 248) + 17536LL,
          *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)(v13 + 8) | (unsigned __int8)v12) & 7);
  v17 = a2[1].m128i_u32[2];
  v65 = v16;
  v66 = v17;
  sub_B85890(&v67, v16);
  v63 = 0;
  v64 = 0;
  v18 = sub_C1BE80((int *)(a1 + 224));
  v19 = sub_B98D00(*(_QWORD **)(a1 + 248), (__int64)a2, v17, &v65, 0, 0, 0, v18, 1u, 1, v15, 0, 0, (__int64)&v63);
  v19[1].m128_i8[13] &= 0x9Fu;
  v19[5].m128_i8[3] |= 2u;
  sub_183DCE0(a1, (__int64)v19, *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL), (__int64 *)&v62, 1u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
    sub_17974D0(*(__int64 **)(a1 + 664), (__int64)a2, 2u, v19, 0, 0);
  v63 = sub_B74530(*(_QWORD *)(a1 + 248), (__int64)&v19[4].m128_i64[1], v17, v17, 0, v62, 0, 0, 0);
  v20 = sub_B8C330((__int64)v19);
  sub_B7C440((__int64)v19, v20, &v63, 1u);
  sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v21, v22, v23, v24);
  if ( (*(_BYTE *)(a2[8].m128i_i64[0] + 3) & 0x40) != 0 )
  {
    v29 = (__int64)v19;
    v34 = sub_188A5F0(a1, (__int64)v19, 2, 0, 0, a3, a4);
  }
  else
  {
    v29 = a2[6].m128i_i64[1];
    sub_7052B0((__int64 *)(v29 + 96), v29, v25, v26, v27, v28);
    if ( (*(_BYTE *)(a2[8].m128i_i64[0] + 9) & 4) != 0
      || (v34 = sub_B9C060((__int64)a2, v29, v30, (__int64)v31, v32, v33), (_BYTE)v34) )
    {
      v29 = a2[6].m128i_i64[1];
      sub_7052B0((__int64 *)(v29 + 96), v29, v30, (__int64)v31, v32, v33);
      v34 = (*(_WORD *)(a2[8].m128i_i64[0] + 4) & 0x200) != 0;
    }
  }
  v35 = (unsigned int)(v34 << 7);
  v19[5].m128_i8[2] = ((_BYTE)v34 << 7) | v19[5].m128_i8[2] & 0x7F;
  if ( (a2[1].m128i_i8[13] & 1) == 0 )
    goto LABEL_12;
  v57 = sub_B8C3D0((__int64)a2, v29, v35, (__int64)v31, v32, v33);
  v35 = *v57;
  v31 = (__int64 *)(*v57 + 8LL * *((unsigned int *)v57 + 2));
  if ( *v57 < (unsigned __int64)v31 )
  {
    v60 = (__int64 *)*v57;
    while ( 1 )
    {
      v35 = *v60;
      if ( *(_WORD *)(*v60 + 36) == 381 )
        break;
      if ( v31 == ++v60 )
        goto LABEL_12;
    }
    if ( v31 == v60 )
      goto LABEL_12;
    goto LABEL_46;
  }
  if ( (__int64 *)v35 != v31 )
  {
    if ( *(_WORD *)(*v31 + 36) != 381 )
    {
      v58 = (__int64 **)(v31 + 1);
      do
      {
        v31 = (__int64 *)v58;
        if ( (__int64 **)v35 == v58 )
          goto LABEL_12;
        v31 = *v58++;
      }
      while ( *((_WORD *)v31 + 18) != 381 );
    }
LABEL_46:
    LOBYTE(v40) = 1;
    goto LABEL_14;
  }
LABEL_12:
  sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v35, (__int64)v31, v32, v33);
  if ( (*(_BYTE *)(a2[8].m128i_i64[0] + 3) & 0x40) != 0 )
  {
    LOBYTE(v40) = sub_188A5F0(a1, (__int64)v19, 2, 1u, 0, a3, a4);
  }
  else
  {
    v48 = a2[6].m128i_i64[1];
    sub_7052B0((__int64 *)(v48 + 96), v48, v36, v37, v38, v39);
    if ( (*(_BYTE *)(a2[8].m128i_i64[0] + 9) & 4) != 0
      || (LOBYTE(v40) = sub_B9C060((__int64)a2, v48, v49, (__int64)v31, v32, v33), (_BYTE)v40) )
    {
      sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v49, (__int64)v31, v32, v33);
      v40 = (*(_DWORD *)(a2[8].m128i_i64[0] + 4) >> 15) & 1;
    }
  }
LABEL_14:
  v19[5].m128_i8[3] = v40 & 1 | v19[5].m128_i8[3] & 0xFE;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 248) + 22948LL);
  v41 = sub_15F18E0(a1, (__int64)a2[4].m128i_i64, v40 & 1, (__int64)v31, v32, v33);
  sub_183D9E0(a1, (__int64)v41, (__int64)v19, a3, a4);
  if ( v19[1].m128_i8[12] >= 0 && (unsigned __int8)sub_18886C0(a1, (__int64)v19, 2u, 0, 0) )
  {
    sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v42, v43, v44, v45);
    *(_BYTE *)(a2[8].m128i_i64[0] + 4) |= 8u;
    sub_1869020(a1, (__int64)v19, v17, 0);
  }
  if ( v41 )
    sub_17B7670(a1, (__int64)v19, (__int64)v41, 0, v44, v45);
  sub_B94AD0(a2 + 4, (__int64)v19, v42, v43, v44, v45);
  if ( !v76 )
  {
    v50 = v68;
    v51 = v69;
    if ( *(_BYTE *)(v68 + 4276) )
    {
      v52 = *(_QWORD **)(v68 + 4256);
      v53 = &v52[*(unsigned int *)(v68 + 4268)];
      if ( v52 == v53 )
      {
LABEL_30:
        sub_1DBAAE0(v50, v51);
        goto LABEL_20;
      }
      v54 = *(_QWORD **)(v68 + 4256);
      if ( v69 == *v52 )
      {
LABEL_29:
        v55 = *(_DWORD *)(v68 + 4268) - 1;
        v56 = v52[v55];
        *(_DWORD *)(v68 + 4268) = v55;
        *v54 = v56;
        v50 = v68;
        goto LABEL_30;
      }
      while ( v53 != ++v54 )
      {
        if ( v69 == *v54 )
          goto LABEL_29;
      }
    }
    else
    {
      v61 = (_QWORD *)sub_2236570(v68 + 4256, v69);
      if ( v61 )
      {
        *v61 = -2;
        ++*(_DWORD *)(v50 + 4272);
      }
    }
    sub_1DBAAE0(v68, v51);
  }
LABEL_20:
  if ( v71 )
  {
    v46 = v70;
    *(_QWORD *)(v70 + 544) = v71;
    *(_QWORD *)(v46 + 512) = v72;
    *(_QWORD *)(v46 + 9944) = v73;
    *(_DWORD *)(v46 + 80) = v74;
    *(_DWORD *)(v46 + 2632) = v75;
  }
  return v19;
}
