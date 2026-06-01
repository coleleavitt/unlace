__m128 *__fastcall sub_1889700(__int64 a1, __int64 a2, double a3, double a4)
{
  __m128 *v6; // rbx
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  char v13; // bl
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned int v17; // r13d
  __int64 v18; // rax
  unsigned int v19; // edx
  char v20; // cl
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char v30; // al
  __m128i *v31; // rbp
  __int64 v32; // rdx
  __int64 *v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbp
  __int64 v39; // rsi
  _QWORD *v40; // rcx
  _QWORD *v41; // rdx
  _QWORD *v42; // rax
  unsigned int v43; // edi
  __int64 v44; // rdx
  __int64 v45; // rax
  int v47; // edx
  _QWORD *v48; // rax
  __int64 v49; // [rsp+0h] [rbp-98h] BYREF
  int v50; // [rsp+8h] [rbp-90h]
  __int64 v51; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v52; // [rsp+18h] [rbp-80h]
  __int64 v53; // [rsp+20h] [rbp-78h] BYREF
  __int64 v54; // [rsp+30h] [rbp-68h] BYREF
  __int64 v55; // [rsp+38h] [rbp-60h]
  __int64 v56; // [rsp+40h] [rbp-58h]
  __int64 v57; // [rsp+48h] [rbp-50h]
  __int64 v58; // [rsp+50h] [rbp-48h]
  __int64 v59; // [rsp+58h] [rbp-40h]
  int v60; // [rsp+60h] [rbp-38h]
  int v61; // [rsp+64h] [rbp-34h]
  char v62; // [rsp+68h] [rbp-30h]

  v6 = nullptr;
  sub_1839E60((__int64)&v54, a1, a2, 0);
  if ( v62 )
    goto LABEL_21;
  v7 = sub_1888F20(a1, a2, 0, 0, nullptr, 0);
  v12 = *(_QWORD *)(a1 + 248);
  v13 = v7;
  v14 = *(_QWORD *)(a2 + 48);
  if ( v14 )
  {
    v15 = v14 & 0xFFFFFFFFFFFFFFF0LL;
    v16 = v15;
  }
  else
  {
    v15 = sub_A7AA70(v12, a2, v8, v9, v10, v11);
    v12 = *(_QWORD *)(a1 + 248);
    v16 = v15 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v17 = *(_DWORD *)(a2 + 24);
  v18 = sub_B87BD0(
          v12 + 17536,
          *(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)(v16 + 8) | (unsigned __int8)v15) & 7);
  v52 = v17;
  v51 = v18;
  sub_B85890(&v53, v18);
  v19 = *(_DWORD *)(a1 + 224);
  v49 = 0;
  v50 = 0;
  if ( ((v19 >> 3) & 7) == 7 )
  {
    v20 = 1;
    if ( (v19 & 0x104) != 0 )
      goto LABEL_6;
  }
  else
  {
    v20 = 1;
    if ( ((v19 >> 3) & 7) != 1 )
      goto LABEL_6;
  }
  v20 = 1;
  if ( (unsigned __int8)v19 >> 6 != 3 )
  {
    if ( (unsigned __int8)v19 >> 6 )
      goto LABEL_6;
    v47 = v19 & 0x100;
    goto LABEL_32;
  }
  v47 = v19 & 0x100;
  if ( !v47 )
LABEL_32:
    v20 = v47 != 0;
LABEL_6:
  v6 = sub_B98D00(*(_QWORD **)(a1 + 248), a2, v17, &v51, 0, 0, 0, v20, 1u, 1, v13, 0, 0, (__int64)&v49);
  v6[1].m128_i8[13] &= 0x9Fu;
  v6[5].m128_i8[3] |= 2u;
  sub_183DCE0(a1, (__int64)v6, *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL), nullptr, 0);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
    sub_17974D0(*(__int64 **)(a1 + 664), a2, 0, v6, 0, 0);
  v25 = *(_QWORD *)(a2 + 104);
  sub_7052B0((__int64 *)(v25 + 96), v25, v21, v22, v23, v24);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 1) != 0 || (v30 = sub_B9BFC0(a2, v25, v26, v27, v28, v29)) != 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v26, v27, v28, v29);
    v30 = (unsigned __int8)*(_WORD *)(*(_QWORD *)(a2 + 128) + 4LL) >> 7;
  }
  v31 = (__m128i *)(a2 + 64);
  v32 = v6[5].m128_i8[2] & 0x7F;
  v6[5].m128_i8[2] = v32 | (v30 << 7);
  ++*(_DWORD *)(*(_QWORD *)(a1 + 248) + 22932LL);
  v33 = sub_15F18E0(a1, (__int64)v31, v32, v27, v28, v29);
  sub_183D9E0(a1, (__int64)v33, (__int64)v6, a3, a4);
  if ( v6[1].m128_i8[12] >= 0 && (unsigned __int8)sub_18886C0(a1, (__int64)v6, 0, 0, 0) )
    sub_1869020(a1, (__int64)v6, v17, 0);
  if ( v33 )
    sub_17B7670(a1, (__int64)v6, (__int64)v33, 0, v36, v37);
  sub_B94AD0(v31, (__int64)v6, v34, v35, v36, v37);
  if ( !v62 )
  {
    v38 = v54;
    v39 = v55;
    if ( *(_BYTE *)(v54 + 4276) )
    {
      v40 = *(_QWORD **)(v54 + 4256);
      v41 = &v40[*(unsigned int *)(v54 + 4268)];
      if ( v40 == v41 )
      {
LABEL_20:
        sub_1DBAAE0(v38, v39);
        goto LABEL_21;
      }
      v42 = *(_QWORD **)(v54 + 4256);
      if ( v55 == *v40 )
      {
LABEL_19:
        v43 = *(_DWORD *)(v54 + 4268) - 1;
        v44 = v40[v43];
        *(_DWORD *)(v54 + 4268) = v43;
        *v42 = v44;
        v38 = v54;
        goto LABEL_20;
      }
      while ( v41 != ++v42 )
      {
        if ( v55 == *v42 )
          goto LABEL_19;
      }
    }
    else
    {
      v48 = (_QWORD *)sub_2236570(v54 + 4256, v55);
      if ( v48 )
      {
        *v48 = -2;
        ++*(_DWORD *)(v38 + 4272);
      }
    }
    sub_1DBAAE0(v54, v39);
  }
LABEL_21:
  if ( v57 )
  {
    v45 = v56;
    *(_QWORD *)(v56 + 544) = v57;
    *(_QWORD *)(v45 + 512) = v58;
    *(_QWORD *)(v45 + 9944) = v59;
    *(_DWORD *)(v45 + 80) = v60;
    *(_DWORD *)(v45 + 2632) = v61;
  }
  return v6;
}
