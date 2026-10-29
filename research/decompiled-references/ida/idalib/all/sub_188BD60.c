_BYTE *__fastcall sub_188BD60(__int64 a1, __m128i *a2, double a3, double a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // r15
  unsigned int v17; // r13d
  char v18; // bp
  __int64 v19; // rax
  char v20; // al
  unsigned __int64 v21; // rax
  _BYTE *v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int16 v32; // ax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 *v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rbx
  __int64 v49; // rsi
  _QWORD *v50; // rcx
  _QWORD *v51; // rdx
  _QWORD *v52; // rax
  unsigned int v53; // edi
  __int64 v54; // rdx
  unsigned __int64 v55; // rax
  _QWORD *v56; // rax
  unsigned __int64 v57; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v58; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+20h] [rbp-A8h] BYREF
  int v60; // [rsp+28h] [rbp-A0h]
  __int64 v61; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v62; // [rsp+38h] [rbp-90h]
  __int64 v63; // [rsp+40h] [rbp-88h] BYREF
  __int64 v64; // [rsp+50h] [rbp-78h] BYREF
  __int64 v65; // [rsp+58h] [rbp-70h]
  __int64 v66; // [rsp+60h] [rbp-68h]
  __int64 v67; // [rsp+68h] [rbp-60h]
  __int64 v68; // [rsp+70h] [rbp-58h]
  __int64 v69; // [rsp+78h] [rbp-50h]
  int v70; // [rsp+80h] [rbp-48h]
  int v71; // [rsp+84h] [rbp-44h]
  char v72; // [rsp+88h] [rbp-40h]

  sub_1839E60((__int64)&v64, a1, (__int64)a2, 3);
  if ( v72 )
  {
    v22 = nullptr;
    goto LABEL_17;
  }
  v8 = a2[3].m128i_i64[0];
  v9 = *(_QWORD *)(a1 + 248);
  if ( v8 )
  {
    v10 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v55 = sub_A7AA70(v9, (__int64)a2, v5, 0, v6, v7);
    v9 = *(_QWORD *)(a1 + 248);
    v10 = v55;
  }
  v58 = sub_A76250(v9, 6, 0, v10, 0);
  v11 = sub_15F1720(a1);
  if ( v11 )
    v58 = sub_A70E70(*(_QWORD *)(a1 + 248), v58, v11);
  v57 = sub_A73030(*(_QWORD *)(a1 + 248), v58, 1u);
  sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v12, v13, v14, v15);
  v16 = *(_BYTE *)(a2[8].m128i_i64[0] + 10) & 1;
  if ( v16 )
    v58 |= 1u;
  v58 = sub_A73030(*(_QWORD *)(a1 + 248), v58, 1u);
  v18 = sub_1888F20(a1, (__int64)a2, 3, v16, nullptr, 0);
  v19 = *(_QWORD *)(a1 + 248);
  v62 = a2[1].m128i_u32[2];
  v17 = v62;
  v61 = (v19 + 17832) | 6;
  sub_B85890(&v63, v61);
  v59 = 0;
  v60 = 0;
  v20 = sub_C1BE80((int *)(a1 + 224));
  v21 = sub_B97D00(*(_QWORD **)(a1 + 248), (__int64)a2, v17, &v61, 0, 0, 0, v20, 1, v18, 0, (__int64)&v59);
  *(_BYTE *)(v21 + 83) |= 2u;
  v22 = (_BYTE *)v21;
  *(_BYTE *)(v21 + 29) = *(_BYTE *)(v21 + 29) & 0x9D | 2;
  sub_183DCE0(a1, v21, v57, (__int64 *)&v58, 1u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
    sub_17974D0(*(__int64 **)(a1 + 664), (__int64)a2, 3u, v22, v16, 0);
  v59 = sub_B74530(*(_QWORD *)(a1 + 248), (__int64)(v22 + 72), v17, v17, 0, v58, 0, 0, 0);
  v23 = sub_B8C330((__int64)v22);
  sub_B7C440((__int64)v22, v23, &v59, 1u);
  sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v24, v25, v26, v27);
  if ( ((*(_BYTE *)a2[8].m128i_i64[0] >> 1) & 0x14) != 0
    || (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v28, v29, v30, v31),
        *(char *)(a2[8].m128i_i64[0] + 3) < 0) )
  {
    LOBYTE(v32) = sub_188A5F0(a1, (__int64)v22, 3, 0, 0, a3, a4);
  }
  else
  {
    sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v44, v45, v46, v47);
    v32 = (*(_WORD *)(a2[8].m128i_i64[0] + 4) >> 10) & 1;
  }
  v36 = v22[82] & 0x7F;
  v22[82] = v36 | ((_BYTE)v32 << 7);
  ++*(_DWORD *)(*(_QWORD *)(a1 + 248) + 22956LL);
  v37 = sub_15F18E0(a1, (__int64)a2[4].m128i_i64, v36, v33, v34, v35);
  sub_183D9E0(a1, (__int64)v37, (__int64)v22, a3, a4);
  if ( (char)v22[28] >= 0 && (unsigned __int8)sub_1887DE0(a1, (__int64)v22, 3u, 0, 0) )
  {
    sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v38, v39, v40, v41);
    *(_BYTE *)(a2[8].m128i_i64[0] + 4) |= 0x10u;
    sub_1869020(a1, (__int64)v22, v17, 0);
    if ( !v37 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( v37 )
LABEL_15:
    sub_17B7670(a1, (__int64)v22, (__int64)v37, 0, v40, v41);
LABEL_16:
  sub_B94AD0(a2 + 4, (__int64)v22, v38, v39, v40, v41);
  if ( v72 )
    goto LABEL_17;
  v48 = v64;
  v49 = v65;
  if ( *(_BYTE *)(v64 + 4276) )
  {
    v50 = *(_QWORD **)(v64 + 4256);
    v51 = &v50[*(unsigned int *)(v64 + 4268)];
    if ( v50 == v51 )
    {
LABEL_26:
      sub_1DBAAE0(v48, v49);
      goto LABEL_17;
    }
    v52 = *(_QWORD **)(v64 + 4256);
    if ( v65 == *v50 )
    {
LABEL_25:
      v53 = *(_DWORD *)(v64 + 4268) - 1;
      v54 = v50[v53];
      *(_DWORD *)(v64 + 4268) = v53;
      *v52 = v54;
      v48 = v64;
      goto LABEL_26;
    }
    while ( v51 != ++v52 )
    {
      if ( v65 == *v52 )
        goto LABEL_25;
    }
  }
  else
  {
    v56 = (_QWORD *)sub_2236570(v64 + 4256, v65);
    if ( v56 )
    {
      *v56 = -2;
      ++*(_DWORD *)(v48 + 4272);
    }
  }
  sub_1DBAAE0(v64, v49);
LABEL_17:
  if ( v67 )
  {
    v42 = v66;
    *(_QWORD *)(v66 + 544) = v67;
    *(_QWORD *)(v42 + 512) = v68;
    *(_QWORD *)(v42 + 9944) = v69;
    *(_DWORD *)(v42 + 80) = v70;
    *(_DWORD *)(v42 + 2632) = v71;
  }
  return v22;
}
