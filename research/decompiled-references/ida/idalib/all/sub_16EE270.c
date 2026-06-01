__int64 __fastcall sub_16EE270(__int64 a1, unsigned __int64 a2, __int64 a3, double a4)
{
  char v7; // r15
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // eax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rcx
  char v29; // al
  unsigned __int64 v30; // rsi
  unsigned int v31; // eax
  __int64 v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r9
  unsigned __int64 v38; // rsi
  _QWORD *v39; // rax
  __int64 v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // eax
  __int64 v51; // [rsp+0h] [rbp-118h]
  unsigned __int64 v52; // [rsp+0h] [rbp-118h]
  unsigned __int64 v53; // [rsp+8h] [rbp-110h]
  unsigned __int64 v54; // [rsp+8h] [rbp-110h]
  int v55; // [rsp+1Ch] [rbp-FCh] BYREF
  int v56; // [rsp+20h] [rbp-F8h] BYREF
  int v57; // [rsp+24h] [rbp-F4h] BYREF
  unsigned __int64 v58; // [rsp+28h] [rbp-F0h] BYREF
  _QWORD *v59; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v60; // [rsp+38h] [rbp-E0h]
  char v61; // [rsp+40h] [rbp-D8h]
  _BYTE v62[200]; // [rsp+50h] [rbp-C8h] BYREF

  if ( (unsigned __int8)sub_16EC930(a1, a2, 3u, a4) )
    return 1;
  v7 = 0;
  v8 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  v9 = *(_QWORD *)(a2 + v8 + 32);
  v10 = *(_QWORD *)(a2 + v8 + 40);
  v51 = *(_QWORD *)(a2 + v8 + 48);
  v11 = sub_19146F0(a1, v9);
  if ( v11 == 1 )
    return 1;
  v14 = v11 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) = v11 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_DWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL) & 0x10000) == 0 )
  {
    v15 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v16 = *(_QWORD *)v15;
    if ( *(_BYTE *)(*(_QWORD *)v15 + 16LL) != 31 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 31
        || (v53 = v14, v40 = sub_F63050(v16, v9, v12, v13), v14 = v53, (v16 = v40) == 0) )
      {
        v54 = v14;
        v7 = 1;
        v41 = sub_EEB7E0(v14, v9, a4);
        sub_168B9F0((__int64)v62, (__int64 *)(a1 + 8), v41, 0xD17u, 0);
        v55 = 1;
        v42 = sub_1587D10((__int64)v62, &v55);
        v56 = 3;
        v43 = sub_1587D10(v42, &v56);
        v57 = 0;
        v44 = sub_1587D10(v43, &v57);
        LODWORD(v58) = 0;
        v45 = sub_1587D10(v44, (int *)&v58);
        v59 = *(_QWORD **)(v54 + 8);
        sub_162B6D0(v45, (__int64 *)&v59);
        v16 = 0;
        sub_15F7200(v62);
      }
    }
    v17 = v10;
    v18 = sub_19179A0(a1, v10, 1);
    if ( v18 == 1 )
      return 1;
    v21 = v18 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40) = v18 & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(_DWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL) & 0x10000) == 0 )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v22 + 16) == 42
        || (v22 = sub_16B68B0(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL), v17, v19, v20)) != 0 )
      {
        v23 = *(_QWORD *)(v22 + 32);
        v58 = v23;
        if ( (v23 & 1) != 0 || (byte_8[v23 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
        {
          v24 = sub_EEB7E0(v21, v17, a4);
          sub_168B9F0((__int64)v62, (__int64 *)(a1 + 8), v24, 0xD20u, 0);
          v7 = 1;
          sub_15F7200(v62);
        }
        v25 = sub_6D5440(&v58);
        v26 = *(_QWORD *)&byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v25) & 7;
        v58 = v26;
        if ( !v16
          || (v27 = *(_QWORD *)&byte_8[v26 & 0xFFFFFFFFFFFFFFF0LL],
              v28 = *(_QWORD *)&byte_8[*(_QWORD *)(v16 + 32) & 0xFFFFFFFFFFFFFFF0LL],
              v29 = v27 | v26,
              v30 = v27 & 0xFFFFFFFFFFFFFFF8LL,
              (v30 | v29 & 7) == (v28 & 0xFFFFFFFFFFFFFFF8LL
                                | ((unsigned __int8)v28 | (unsigned __int8)*(_QWORD *)(v16 + 32)) & 7)) )
        {
LABEL_16:
          v34 = sub_19146F0(a1, v51);
          if ( v34 == 1 )
            return 1;
          v35 = sub_A63CE0(*(_QWORD **)(a1 + 248));
          v36 = sub_18C1BF0(a1, v34 & 0xFFFFFFFFFFFFFFFELL, v35);
          if ( v36 == 1 )
            return 1;
          *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 48) = v36 & 0xFFFFFFFFFFFFFFFELL;
          if ( v16 )
          {
            v38 = v36 & 0xFFFFFFFFFFFFFFFELL;
            v52 = v36 & 0xFFFFFFFFFFFFFFFELL;
            sub_C3EB00(
              (__int64)&v59,
              v36 & 0xFFFFFFFFFFFFFFFELL,
              *(_QWORD *)(a1 + 248),
              nullptr,
              v36 & 0xFFFFFFFFFFFFFFFELL,
              v37);
            if ( v61 )
            {
              v39 = v59;
              if ( v60 > 0x40 )
                v39 = (_QWORD *)*v59;
              if ( *(unsigned int *)(v16 + 40) > (unsigned __int64)v39 )
              {
                v50 = sub_EEB7E0(v52, v38, a4);
                sub_168B9F0((__int64)v62, (__int64 *)(a1 + 8), v50, 0xD21u, 0);
                sub_15F7200(v62);
                sub_98E4B0((__int64)&v59);
                return 1;
              }
            }
            sub_98E4B0((__int64)&v59);
          }
          if ( !v7 )
            return a3;
          return 1;
        }
        v31 = sub_EEB7E0(v21, v30, a4);
        sub_168B9F0((__int64)v62, (__int64 *)(a1 + 8), v31, 0xD1Eu, 0);
        v32 = sub_1605D30((__int64)v62, (__int64 *)&v58);
        v33 = *(_QWORD **)(v16 + 32);
      }
      else
      {
        v46 = sub_EEB7E0(v21, v17, a4);
        sub_168B9F0((__int64)v62, (__int64 *)(a1 + 8), v46, 0xD17u, 0);
        v55 = 2;
        v47 = sub_16CF160((__int64)v62, (unsigned int *)&v55);
        v56 = 0;
        v48 = sub_1587D10(v47, &v56);
        v57 = 5;
        v49 = sub_1587D10(v48, &v57);
        LODWORD(v58) = 0;
        v32 = sub_1587D10(v49, (int *)&v58);
        v33 = *(_QWORD **)(v21 + 8);
      }
      v59 = v33;
      sub_162B6D0(v32, (__int64 *)&v59);
      v7 = 1;
      sub_15F7200(v62);
      goto LABEL_16;
    }
  }
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19072LL);
  return a2;
}
