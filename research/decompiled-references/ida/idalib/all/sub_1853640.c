unsigned __int64 __fastcall sub_1853640(
        __int64 a1,
        unsigned __int64 *a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  char v15; // dl
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  char v21; // al
  unsigned __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  char v34; // dl
  unsigned int v35; // edx
  __int64 *v36; // rsi
  unsigned int v37; // ecx
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned int v43; // ebp
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbp
  __int64 v47; // rax
  unsigned __int8 v48; // bl
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r15
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // [rsp+0h] [rbp-F8h] BYREF
  unsigned __int64 v57; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v58; // [rsp+10h] [rbp-E8h] BYREF
  unsigned __int64 v59; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v60[2]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v61[200]; // [rsp+30h] [rbp-C8h] BYREF

  v8 = (__int64)a2;
  v9 = (__int64 *)(a2[2] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (a2[2] & 4) != 0 )
    v9 = (__int64 *)*v9;
  if ( v9 )
    v9 -= 8;
  v10 = *(_QWORD *)(a2[6] & 0xFFFFFFFFFFFFFFF0LL);
  v11 = (unsigned int)*(unsigned __int8 *)(v10 + 16) - 25;
  if ( (unsigned int)v11 > 1 )
    v10 = sub_F63050(v10, a2, v11, a5);
  v12 = *(_QWORD *)(v10 + 24);
  v13 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL];
  LOBYTE(v12) = v13 | v12;
  v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  v15 = v12;
  v16 = v9[6];
  v17 = v14 | v15 & 7;
  v56 = v17;
  if ( v16 )
  {
    v18 = v16 & 0xFFFFFFFFFFFFFFF0LL;
    v19 = v18;
  }
  else
  {
    a2 = (unsigned __int64 *)v9;
    v18 = sub_A7AA70(*(_QWORD *)(a1 + 248), (__int64)v9, v17, v14, a6, a7);
    v17 = v56;
    v19 = v18 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v20 = *(_QWORD *)(v19 + 8);
  v21 = v20 | v18;
  v22 = v20 & 0xFFFFFFFFFFFFFFF8LL;
  v57 = v22 | v21 & 7;
  v23 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
  v24 = (unsigned int)*(unsigned __int8 *)(v23 + 16) - 43;
  if ( (unsigned int)v24 <= 1 || (v23 = sub_1838000(v23, (__int64)a2, v24, v22)) != 0 )
    v56 = sub_9B4870(v23, (__int64)a2, v24, v22, a6);
  if ( (!(unsigned int)sub_B77D20(v8) || (unsigned int)sub_B77D20(v8) == 2) && !(unsigned int)sub_B984E0(v8) )
  {
    v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v34 = *(_BYTE *)(v33 + 16);
    if ( v34 == 48 )
    {
      a2 = (unsigned __int64 *)*(unsigned int *)(v8 + 24);
      v39 = *(_QWORD *)(*(_QWORD *)&byte_8[v56 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
      v56 = v39;
      if ( v57 == v39 )
      {
        sub_168B9F0((__int64)v61, (__int64 *)(a1 + 8), (unsigned int)a2, 0x1A36u, 0);
        a2 = &v57;
        sub_1605D30((__int64)v61, (__int64 *)&v57);
        sub_15F7200(v61);
      }
      else if ( (unsigned __int8)sub_183BD10(a1, (__int64)a2, v57, v39, v31, v32) )
      {
        v35 = *(_DWORD *)(v8 + 24);
        v36 = (__int64 *)(a1 + 8);
        v37 = 6709;
        goto LABEL_24;
      }
    }
    else if ( v34 == 13 && ((*(_WORD *)(v33 + 18) >> 3) & 0x1FF) == 0x1B3 )
    {
      v35 = *(_DWORD *)(v8 + 24);
      v36 = (__int64 *)(a1 + 8);
      v37 = 6711;
LABEL_24:
      sub_168B9F0((__int64)v61, v36, v35, v37, 0);
      v38 = sub_1605D30((__int64)v61, (__int64 *)&v57);
      a2 = (unsigned __int64 *)&v56;
      sub_1605D30(v38, &v56);
      sub_15F7200(v61);
    }
  }
  v26 = sub_B77A30(v8);
  if ( !v26 )
    return v8;
  v27 = *(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v27 + 16) == 42 )
    goto LABEL_15;
  v29 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (_BYTE)v29 == 42 )
  {
    v27 = sub_F63050(*(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFF0LL), a2, v29, v25);
    if ( !v27 )
    {
      v28 = v56;
      goto LABEL_16;
    }
LABEL_15:
    v28 = *(_QWORD *)(v27 + 32);
    v56 = v28;
LABEL_16:
    LOBYTE(v29) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
  }
  if ( (_BYTE)v29 == 16 )
  {
    v40 = sub_B72FF0(v8);
    sub_168B9F0((__int64)v61, (__int64 *)(a1 + 8), v40, 0xCC2u, 0);
    v41 = sub_1C38110(a1, v8);
    v60[1] = v42;
    v60[0] = v41;
    v43 = sub_F6CE20(v60);
    v59 = __PAIR64__(v43, sub_F6CCB0(v60, a3));
    v46 = sub_1587DB0((__int64)v61, (__int64 *)&v59);
    v47 = *(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v47 + 16) != 16 )
      v47 = sub_F63050(*(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFF0LL), &v59, v44, v45);
    v48 = (*(_BYTE *)(v47 + 18) >> 3) & 3;
    if ( *(_BYTE *)(v46 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v46 + 32), v48, 2u);
    }
    else if ( *(_BYTE *)(v46 + 132) )
    {
      v53 = sub_168B9E0((_QWORD *)v46);
      v54 = *(_QWORD *)(v46 + 16);
      if ( v54 )
        v54 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v54 + 32LL))(*(_QWORD *)(v46 + 16));
      v58 = v54;
      v55 = sub_1587BC0(v53, &v58, v49, v50, v51, v52);
      sub_AE9DF0((unsigned __int8 **)(*v55 + 32LL * *(unsigned int *)(v46 + 128) + 8), v48, 2u);
    }
    LODWORD(v58) = 24;
    sub_1587D10(v46, (int *)&v58);
    sub_15F7200(v61);
  }
  return v26;
}
