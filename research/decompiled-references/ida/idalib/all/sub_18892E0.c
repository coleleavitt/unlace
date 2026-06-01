_BYTE *__fastcall sub_18892E0(__int64 a1, __m128i *a2, double a3, double a4)
{
  _BYTE *v6; // rbx
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
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rdx
  _BOOL8 v30; // rdx
  __int64 *v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbp
  __int64 v37; // rsi
  _QWORD *v38; // rcx
  _QWORD *v39; // rdx
  _QWORD *v40; // rax
  unsigned int v41; // edi
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 *v45; // rax
  __int64 **v46; // rax
  __int64 *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // [rsp+0h] [rbp-A8h] BYREF
  int v50; // [rsp+8h] [rbp-A0h]
  __int64 v51; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v52; // [rsp+18h] [rbp-90h]
  __int64 v53; // [rsp+20h] [rbp-88h] BYREF
  __int64 v54; // [rsp+30h] [rbp-78h] BYREF
  __int64 v55; // [rsp+38h] [rbp-70h]
  __int64 v56; // [rsp+40h] [rbp-68h]
  __int64 v57; // [rsp+48h] [rbp-60h]
  __int64 v58; // [rsp+50h] [rbp-58h]
  __int64 v59; // [rsp+58h] [rbp-50h]
  int v60; // [rsp+60h] [rbp-48h]
  int v61; // [rsp+64h] [rbp-44h]
  char v62; // [rsp+68h] [rbp-40h]

  v6 = nullptr;
  sub_1839E60((__int64)&v54, a1, (__int64)a2, 5);
  if ( v62 )
    goto LABEL_20;
  v7 = sub_1888F20(a1, (__int64)a2, 5, 0, nullptr, 0);
  v12 = *(_QWORD *)(a1 + 248);
  v13 = v7;
  v14 = a2[3].m128i_i64[0];
  if ( v14 )
  {
    v15 = v14 & 0xFFFFFFFFFFFFFFF0LL;
    v16 = v15;
  }
  else
  {
    v15 = sub_A7AA70(v12, (__int64)a2, v8, v9, v10, v11);
    v12 = *(_QWORD *)(a1 + 248);
    v16 = v15 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v17 = a2[1].m128i_u32[2];
  v18 = sub_B87700(
          v12 + 17536,
          *(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)(v16 + 8) | (unsigned __int8)v15) & 7);
  v52 = v17;
  v51 = v18;
  sub_B85890(&v53, v18);
  v49 = 0;
  v50 = 0;
  v19 = sub_C1BE80((int *)(a1 + 224));
  v6 = (_BYTE *)sub_B99340(*(_QWORD **)(a1 + 248), (__int64)a2, v17, &v51, 0, 0, v19, 1, 1, v13, (__int64)&v49);
  v6[29] &= 0x9Fu;
  v6[83] |= 2u;
  sub_183DCE0(a1, (__int64)v6, *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL), nullptr, 0);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
    sub_17974D0(*(__int64 **)(a1 + 664), (__int64)a2, 5u, v6, 0, 0);
  v24 = a2[6].m128i_i64[1];
  sub_7052B0((__int64 *)(v24 + 96), v24, v20, v21, v22, v23);
  v28 = *(unsigned __int16 *)(a2[8].m128i_i64[0] + 4);
  LOWORD(v28) = (unsigned __int16)v28 >> 12;
  v29 = (unsigned int)(v28 << 7);
  v6[82] = ((_BYTE)v28 << 7) | v6[82] & 0x7F;
  if ( (a2[1].m128i_i8[13] & 1) == 0 )
    goto LABEL_7;
  v45 = sub_B8C3D0((__int64)a2, v24, v29, (__int64)v25, v26, v27);
  v29 = *v45;
  v25 = (__int64 *)(*v45 + 8LL * *((unsigned int *)v45 + 2));
  if ( *v45 < (unsigned __int64)v25 )
  {
    v47 = (__int64 *)*v45;
    while ( 1 )
    {
      v29 = *v47;
      if ( *(_WORD *)(*v47 + 36) == 381 )
        break;
      if ( v25 == ++v47 )
        goto LABEL_7;
    }
    if ( v25 == v47 )
      goto LABEL_7;
    goto LABEL_38;
  }
  if ( (__int64 *)v29 != v25 )
  {
    if ( *(_WORD *)(*v25 + 36) != 381 )
    {
      v46 = (__int64 **)(v25 + 1);
      do
      {
        v25 = (__int64 *)v46;
        if ( (__int64 **)v29 == v46 )
          goto LABEL_7;
        v25 = *v46++;
      }
      while ( *((_WORD *)v25 + 18) != 381 );
    }
LABEL_38:
    v30 = 1;
    goto LABEL_8;
  }
LABEL_7:
  sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v29, (__int64)v25, v26, v27);
  v30 = (*(_DWORD *)(a2[8].m128i_i64[0] + 4) & 0x40000) != 0;
LABEL_8:
  v6[83] = v30 | v6[83] & 0xFE;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 248) + 22972LL);
  v31 = sub_15F18E0(a1, (__int64)a2[4].m128i_i64, v30, (__int64)v25, v26, v27);
  sub_183D9E0(a1, (__int64)v31, (__int64)v6, a3, a4);
  if ( (a2[4].m128i_i8[10] & 1) != 0 && (char)v6[28] >= 0 && (unsigned __int8)sub_1887DE0(a1, (__int64)v6, 5u, 0, 0) )
    sub_1869020(a1, (__int64)v6, v17, 0);
  if ( v31 )
    sub_17B7670(a1, (__int64)v6, (__int64)v31, 0, v34, v35);
  sub_B94AD0(a2 + 4, (__int64)v6, v32, v33, v34, v35);
  if ( !v62 )
  {
    v36 = v54;
    v37 = v55;
    if ( *(_BYTE *)(v54 + 4276) )
    {
      v38 = *(_QWORD **)(v54 + 4256);
      v39 = &v38[*(unsigned int *)(v54 + 4268)];
      if ( v38 == v39 )
      {
LABEL_19:
        sub_1DBAAE0(v36, v37);
        goto LABEL_20;
      }
      v40 = *(_QWORD **)(v54 + 4256);
      if ( v55 == *v38 )
      {
LABEL_18:
        v41 = *(_DWORD *)(v54 + 4268) - 1;
        v42 = v38[v41];
        *(_DWORD *)(v54 + 4268) = v41;
        *v40 = v42;
        v36 = v54;
        goto LABEL_19;
      }
      while ( v39 != ++v40 )
      {
        if ( v55 == *v40 )
          goto LABEL_18;
      }
    }
    else
    {
      v48 = (_QWORD *)sub_2236570(v54 + 4256, v55);
      if ( v48 )
      {
        *v48 = -2;
        ++*(_DWORD *)(v36 + 4272);
      }
    }
    sub_1DBAAE0(v54, v37);
  }
LABEL_20:
  if ( v57 )
  {
    v43 = v56;
    *(_QWORD *)(v56 + 544) = v57;
    *(_QWORD *)(v43 + 512) = v58;
    *(_QWORD *)(v43 + 9944) = v59;
    *(_DWORD *)(v43 + 80) = v60;
    *(_DWORD *)(v43 + 2632) = v61;
  }
  return v6;
}
