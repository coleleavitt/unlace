__int64 __fastcall sub_17B63A0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r15
  unsigned int v20; // r14d
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 *v23; // rsi
  unsigned int v24; // ecx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v31; // rsi
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r12
  size_t v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned int v75; // [rsp+8h] [rbp-F0h]
  __int64 v76; // [rsp+8h] [rbp-F0h]
  bool v77; // [rsp+1Fh] [rbp-D9h] BYREF
  __int64 v78; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v79; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v80[200]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  v4 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(a1[31], v3) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v4 + 16) != 48 )
    return 0;
  v13 = sub_F60F10(*v4, v3, v5, v6, v7, v8);
  v14 = v13[16];
  if ( !v14 )
  {
    sub_7052B0((__int64 *)(v13[13] + 96LL), v13[13], v9, v10, v11, v12);
    v14 = v13[16];
    if ( !v14 )
      return 0;
  }
  if ( !*(_QWORD *)(v14 + 88) )
    return 0;
  sub_7052B0((__int64 *)(v13[13] + 96LL), v13[13], v9, v10, v11, v12);
  if ( (*(_BYTE *)(v13[16] + 6LL) & 0x10) != 0
    || (sub_7052B0((__int64 *)(v13[13] + 96LL), v13[13], v15, v16, v17, v18), (*(_BYTE *)(v13[16] + 5LL) & 1) == 0) )
  {
    v19 = 1;
    v20 = 1;
  }
  else
  {
    sub_7052B0((__int64 *)(v13[13] + 96LL), v13[13], v44, v45, v46, v47);
    if ( (*(_BYTE *)(v13[16] + 9LL) & 1) == 0
      && ((sub_7052B0((__int64 *)(v13[13] + 96LL), v13[13], v48, v49, v50, v51), (*(_BYTE *)v13[16] & 1) != 0)
       || (sub_7052B0((__int64 *)(v13[13] + 96LL), v13[13], v48, v49, v50, v51),
           v60 = v13[16],
           (*(_BYTE *)(v60 + 9) & 1) != 0)
       || (*(_BYTE *)(v60 + 10) & 0x20) != 0 && !(unsigned __int8)sub_B96D80((__int64)v13))
      && ((sub_7052B0((__int64 *)(v13[13] + 96LL), v13[13], v48, v49, v50, v51), (*(_BYTE *)(v13[16] + 3LL) & 8) == 0)
       || (sub_7052B0((__int64 *)(v13[13] + 96LL), v13[13], v61, v62, v63, v64), (*(_BYTE *)(v13[16] + 9LL) & 1) != 0))
      || (sub_7052B0((__int64 *)(v13[13] + 96LL), v13[13], v48, v49, v50, v51), *(char *)(v13[16] + 4LL) >= 0) )
    {
      v19 = 0;
      v20 = 0;
    }
    else
    {
      sub_7052B0((__int64 *)(v13[13] + 96LL), v13[13], v52, v53, v54, v55);
      if ( (*(_BYTE *)(v13[16] + 6LL) & 0x40) != 0
        || (sub_7052B0((__int64 *)(v13[13] + 96LL), v13[13], v56, v57, v58, v59), (*(_BYTE *)(v13[16] + 5LL) & 4) == 0) )
      {
        v19 = 3;
        v20 = 3;
      }
      else
      {
        sub_7052B0((__int64 *)(v13[13] + 96LL), v13[13], v71, v72, v73, v74);
        if ( (*(_BYTE *)(v13[16] + 5LL) & 0x10) != 0 )
          return 0;
        v19 = 5;
        v20 = 5;
      }
    }
  }
  v21 = a1[29];
  v22 = *(_DWORD *)(a2 + 24);
  if ( (*(_BYTE *)(v21 + 1) & 0x10) == 0 )
  {
    if ( (*(_BYTE *)(v21 + 107) & 4) == 0 || (*((_BYTE *)v13 + 75) & 2) == 0 || !v22 )
    {
      v23 = a1 + 1;
      v24 = 3938;
      goto LABEL_8;
    }
    v31 = v22;
    v75 = *(_DWORD *)(a2 + 24);
    v32 = sub_1021680(a1[34], v22);
    if ( !v32 || v32 == 3 )
    {
      v23 = a1 + 1;
      v22 = *(_DWORD *)(a2 + 24);
      v24 = (*(_BYTE *)(a1[29] + 1LL) & 0x10) == 0 ? 3938 : 6773;
      goto LABEL_8;
    }
    v36 = v75;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      if ( sub_179B030(a2, v31, v75, v33, v34, v35) )
        return 0;
      v36 = v75;
    }
    v37 = v36 | (v36 << 32);
    v38 = j__strlen(&byte_22F0C30);
    v39 = sub_B35CE0(a1[31], &byte_22F0C30, v38, 5, v37, 0);
    sub_B8CC60(a2, v39, v40, v41, v42, v43);
    return 0;
  }
  v23 = a1 + 1;
  v24 = 6773;
LABEL_8:
  sub_168B9F0((__int64)v80, v23, v22, v24, 0);
  v25 = *(_QWORD *)(a2 + 16);
  if ( (v25 & 4) != 0 )
    v26 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v26 + 8) & 0x7Fu) - 58 > 3 )
    BUG();
  v77 = *(_BYTE *)(v26 + 9) >> 5 == 2;
  v27 = sub_1588420((__int64)v80, (unsigned __int8 *)&v77);
  v78 = *(_QWORD *)(a2 + 40);
  v28 = sub_15894B0(v27, &v78);
  v29 = v28;
  if ( *(_BYTE *)(v28 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v28 + 32), v19, 2u);
  }
  else if ( *(_BYTE *)(v28 + 132) )
  {
    v65 = sub_168B9E0((_QWORD *)v28);
    v69 = *(_QWORD *)(v29 + 16);
    if ( v69 )
    {
      v76 = v65;
      v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 32LL))(v69);
      v65 = v76;
    }
    v79 = v69;
    v70 = sub_1587BC0(v65, &v79, v65, v66, v67, v68);
    sub_AE9DF0((unsigned __int8 **)(*v70 + 32LL * *(unsigned int *)(v29 + 128) + 8), v19, 2u);
  }
  sub_15F7200(v80);
  sub_188A210(a1, v13, v20);
  return ((*(_BYTE *)(a1[29] + 1LL) >> 4) ^ 1) & 1;
}
