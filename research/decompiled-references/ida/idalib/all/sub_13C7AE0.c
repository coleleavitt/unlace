__int64 __fastcall sub_13C7AE0(__int64 a1, _QWORD *a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  int v6; // r10d
  __int64 v8; // rcx
  unsigned __int8 v9; // r13
  __int64 *v10; // r12
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edi
  unsigned __int64 v17; // rsi
  __int64 v18; // r8
  int v20; // edi
  int v21; // edi
  char v22; // r11
  bool v23; // zf
  char v24; // al
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rsi
  unsigned int v31; // esi
  __int64 v32; // r8
  unsigned int v33; // r10d
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  char v36; // cl
  __int64 v37; // rax
  char v38; // al
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // edi
  int v43; // edi
  unsigned __int64 v44; // r15
  unsigned __int64 v45; // r11
  __int64 *v46; // [rsp-8h] [rbp-80h]
  unsigned __int64 v48; // [rsp+0h] [rbp-78h]
  int v49; // [rsp+8h] [rbp-70h]
  int v50; // [rsp+10h] [rbp-68h]
  int v51; // [rsp+10h] [rbp-68h]
  int v52; // [rsp+10h] [rbp-68h]
  __int64 *v53; // [rsp+10h] [rbp-68h]
  int v54; // [rsp+10h] [rbp-68h]
  int v55; // [rsp+18h] [rbp-60h]
  int v56; // [rsp+18h] [rbp-60h]
  int v57; // [rsp+18h] [rbp-60h]
  __int64 v58; // [rsp+20h] [rbp-58h] BYREF
  char v59; // [rsp+28h] [rbp-50h]
  __m128 v60[4]; // [rsp+30h] [rbp-48h] BYREF

  v6 = a5;
  v8 = (__int64)a2;
  v9 = a3;
  v10 = (__int64 *)(a1 + 1320);
  while ( 1 )
  {
    v13 = *(_QWORD *)(v8 + 8);
    if ( !v13 )
      break;
    v13 &= 0xFFFFFFFFFFFFFFF8LL;
    v14 = *(_QWORD *)(v8 + 8) & 4LL;
    v8 = v13;
    if ( !v14 || !v13 )
      goto LABEL_5;
  }
  v8 = 0;
LABEL_5:
  v15 = *(unsigned int *)(a1 + 1336);
  v58 = v8;
  v59 = 1;
  if ( !(_DWORD)v15 )
  {
    v60[0].m128_u64[0] = 0;
LABEL_33:
    v56 = a6;
    v51 = v6;
    sub_13C70D0(v10, 2 * v15, a3, v8, a5, a6);
    sub_13C2B30(v10, &v58, v60);
    v8 = v58;
    v22 = v59;
    a3 = *(_QWORD *)(a1 + 1320);
    v15 = *(unsigned int *)(a1 + 1336);
    v21 = *(_DWORD *)(a1 + 1328) + 1;
    v17 = v60[0].m128_u64[0];
    v6 = v51;
    LODWORD(a6) = v56;
    goto LABEL_13;
  }
  a3 = *(_QWORD *)(a1 + 1320);
  v16 = (v15 - 1) & (((unsigned int)v13 >> 4) ^ ((unsigned int)v13 >> 9));
  v17 = a3 + 16LL * v16;
  v18 = *(_QWORD *)v17;
  if ( *(_QWORD *)v17 == v8 )
  {
LABEL_7:
    sub_13C5300(v60, (_QWORD *)v17, (_QWORD *)(16 * v15 + a3), (__int64)v10, 1);
    return *(_BYTE *)(v60[0].m128_u64[0] + 8) == 0 ? 3 : 0;
  }
  if ( v18 != -4096 )
  {
    v49 = 1;
    v44 = 0;
    while ( 1 )
    {
      if ( !v44 && v18 == -8192 )
        v44 = v17;
      v16 = (v15 - 1) & (v49 + v16);
      v17 = a3 + 16LL * v16;
      v18 = *(_QWORD *)v17;
      if ( *(_QWORD *)v17 == v8 )
        goto LABEL_7;
      if ( v18 == -4096 )
      {
        if ( v44 )
          v17 = v44;
        break;
      }
      ++v49;
    }
  }
  v20 = *(_DWORD *)(a1 + 1328);
  a5 = (unsigned int)(3 * v15);
  v60[0].m128_u64[0] = v17;
  v21 = v20 + 1;
  if ( 4 * v21 >= (unsigned int)a5 )
    goto LABEL_33;
  v22 = 1;
  if ( (int)v15 - *(_DWORD *)(a1 + 1332) - v21 <= (unsigned int)v15 >> 3 )
  {
    v57 = a6;
    v52 = v6;
    sub_13C70D0(v10, v15, a3, v8, (__int64)v60, a6);
    sub_13C2B30(v10, &v58, v60);
    v8 = v58;
    v22 = v59;
    a3 = *(_QWORD *)(a1 + 1320);
    v15 = *(unsigned int *)(a1 + 1336);
    v21 = *(_DWORD *)(a1 + 1328) + 1;
    v17 = v60[0].m128_u64[0];
    LODWORD(a6) = v57;
    v6 = v52;
  }
LABEL_13:
  v23 = *(_QWORD *)v17 == -4096;
  *(_DWORD *)(a1 + 1328) = v21;
  if ( !v23 )
    --*(_DWORD *)(a1 + 1332);
  *(_QWORD *)v17 = v8;
  *(_BYTE *)(v17 + 8) = v22;
  v55 = a6;
  v50 = v6;
  sub_13C5300(v60, (_QWORD *)v17, (_QWORD *)(16 * v15 + a3), (__int64)v10, 1);
  v24 = sub_1405000((int)a1 + 632, (_DWORD)a2, v9, a4, v50, v55, 0);
  v27 = (__int64 *)(a1 + 1344);
  v28 = (__int64)a2;
  if ( v24 )
  {
    v39 = (unsigned __int64)a2;
    while ( 1 )
    {
      v40 = *(_QWORD *)(v39 + 8);
      if ( !v40 )
        goto LABEL_34;
      v39 = v40 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v40 & 4) == 0 || !v39 )
      {
LABEL_30:
        v48 = v39;
        goto LABEL_31;
      }
    }
  }
  while ( 1 )
  {
    v29 = *(_QWORD *)(v28 + 8);
    if ( !v29 )
      break;
    v29 &= 0xFFFFFFFFFFFFFFF8LL;
    v30 = *(_QWORD *)(v28 + 8) & 4LL;
    v28 = v29;
    if ( !v30 || !v29 )
      goto LABEL_19;
  }
  v28 = 0;
LABEL_19:
  v31 = *(_DWORD *)(a1 + 1360);
  v58 = v28;
  if ( !v31 )
  {
    v60[0].m128_u64[0] = 0;
    goto LABEL_47;
  }
  v32 = *(_QWORD *)(a1 + 1344);
  v33 = (v31 - 1) & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
  v34 = v32 + 16LL * v33;
  v35 = *(_QWORD *)v34;
  if ( *(_QWORD *)v34 != v28 )
  {
    if ( v35 != -4096 )
    {
      v54 = 1;
      v45 = 0;
      while ( 1 )
      {
        if ( !v45 && v35 == -8192 )
          v45 = v34;
        v33 = (v31 - 1) & (v54 + v33);
        v34 = v32 + 16LL * v33;
        v35 = *(_QWORD *)v34;
        if ( *(_QWORD *)v34 == v28 )
          goto LABEL_21;
        if ( v35 == -4096 )
        {
          v27 = (__int64 *)(a1 + 1344);
          if ( v45 )
            v34 = v45;
          break;
        }
        ++v54;
      }
    }
    v42 = *(_DWORD *)(a1 + 1352);
    v25 = 3 * v31;
    v60[0].m128_u64[0] = v34;
    v43 = v42 + 1;
    v26 = (unsigned int)(4 * v43);
    if ( (unsigned int)v26 < (unsigned int)v25 )
    {
      v25 = v31 - *(_DWORD *)(a1 + 1356) - v43;
      v26 = v31 >> 3;
      if ( (unsigned int)v25 > (unsigned int)v26 )
      {
LABEL_43:
        v23 = *(_QWORD *)v34 == -4096;
        *(_DWORD *)(a1 + 1352) = v43;
        if ( !v23 )
          --*(_DWORD *)(a1 + 1356);
        *(_QWORD *)v34 = v28;
        v36 = 1;
        *(_BYTE *)(v34 + 8) = 0;
        goto LABEL_22;
      }
LABEL_48:
      v53 = v27;
      sub_13C70D0(v27, v31, v28, (__int64)v27, v25, v26);
      sub_13C2B30(v53, &v58, v60);
      v28 = v58;
      v43 = *(_DWORD *)(a1 + 1352) + 1;
      v34 = v60[0].m128_u64[0];
      goto LABEL_43;
    }
LABEL_47:
    v31 *= 2;
    goto LABEL_48;
  }
LABEL_21:
  v36 = *(_BYTE *)(v34 + 8) ^ 1;
LABEL_22:
  v37 = sub_13C3750(a2, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 32), v36);
  if ( !v37 )
    return 1;
  v38 = sub_1405000((int)a1 + 632, v37, v9, a4, 0, 0, 0);
  v27 = v46;
  if ( !v38 )
    return 1;
  v39 = (unsigned __int64)a2;
  while ( 1 )
  {
    v41 = *(_QWORD *)(v39 + 8);
    if ( !v41 )
      break;
    v39 = v41 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v41 & 4) == 0 || !v39 )
      goto LABEL_30;
  }
LABEL_34:
  v48 = 0;
LABEL_31:
  v60[0].m128_u64[0] = v48;
  *(_BYTE *)sub_13C72E0((__int64)v10, (__int64 *)v60, v39, (__int64)v27, v25, v26) = 0;
  return 3;
}
