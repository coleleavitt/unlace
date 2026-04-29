__int64 __fastcall sub_297210(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v5; // r15
  bool v6; // zf
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r14
  int v16; // esi
  int v17; // edx
  int v18; // esi
  int v19; // edx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // ecx
  int v30; // esi
  int v31; // ecx
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 *v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // rcx
  _QWORD *v51; // rcx
  _QWORD *v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // r12
  __int64 v55; // r15
  int v56; // [rsp+4h] [rbp-84h]
  __int64 v57; // [rsp+8h] [rbp-80h]
  __int64 *v58; // [rsp+10h] [rbp-78h]
  _QWORD *v59; // [rsp+10h] [rbp-78h]
  _QWORD *v60; // [rsp+18h] [rbp-70h]
  __int64 *v61; // [rsp+28h] [rbp-60h] BYREF
  _QWORD *v62; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v63; // [rsp+38h] [rbp-50h]
  unsigned __int64 v64; // [rsp+48h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 12) != -1 )
    return 0;
  sub_283FC0(&v62, a1, a2);
  if ( v63 == (_QWORD *)*v62 )
    return 0;
  v5 = v63[1];
  v6 = *(_DWORD *)(v5 + 24) == 72;
  v63 = (_QWORD *)v5;
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(v5 + 40);
  if ( (unsigned int)(*(_DWORD *)(v7 + 8) - 2) > 0xD )
    return 0;
  if ( (unsigned __int8)sub_285520(*(_QWORD *)(v5 + 40), 66, 1) )
    return 0;
  if ( (unsigned __int8)sub_2855F0(v7) )
    return 0;
  v8 = *(_QWORD *)(a2 + 24);
  v9 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 24LL);
  if ( (unsigned __int8)sub_2855F0(v8) || !(unsigned __int8)sub_285450(v8, v9) && *(_DWORD *)(v8 + 8) != 61 )
    return 0;
  v10 = *(_QWORD *)(a2 + 24);
  v61 = nullptr;
  v11 = *(_QWORD *)(v10 + 64);
  v2 = sub_296C70(&v61, v11, v9);
  if ( !(_BYTE)v2 )
    return 0;
  v58 = v61;
  v12 = *(_DWORD *)(a2 + 12);
  v56 = *(_DWORD *)(v5 + 28);
  if ( v56 == -1 )
  {
    *(_DWORD *)(a2 + 12) = -1;
    v56 = v12;
  }
  else
  {
    if ( v12 != -1 )
      goto LABEL_27;
    *(_DWORD *)(v5 + 28) = -1;
  }
  if ( v56 == -2 )
  {
LABEL_27:
    if ( !under_debugger )
      sub_3835A0(52726);
    BUG();
  }
  v57 = **(_QWORD **)(v5 + 40);
  if ( v57 == -1 )
    v57 = *(_QWORD *)(v5 + 16);
  v13 = j__qalloc_or_throw(200);
  v14 = -1;
  *(_QWORD *)v13 = -1;
  v15 = v13;
  *(_DWORD *)(v13 + 8) = 0;
  *(_QWORD *)(v13 + 12) = -1;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 48) = 0;
  *(_DWORD *)(v13 + 56) = 0;
  *(_QWORD *)(v13 + 64) = 0;
  *(_QWORD *)(v13 + 72) = -1;
  *(_DWORD *)(v13 + 80) = 0;
  *(_QWORD *)(v13 + 84) = -1;
  *(_QWORD *)(v13 + 112) = 0;
  *(_QWORD *)(v13 + 120) = 0;
  *(_DWORD *)(v13 + 128) = 0;
  *(_QWORD *)(v13 + 136) = -1;
  *(_OWORD *)(v13 + 24) = 0;
  *(_OWORD *)(v13 + 96) = 0;
  *(_QWORD *)(v13 + 144) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v13 + 152) = 0xFFFFFFFFLL;
  *(_QWORD *)(v13 + 176) = 0;
  *(_QWORD *)(v13 + 184) = 0;
  *(_DWORD *)(v13 + 192) = 0;
  *(_OWORD *)(v13 + 160) = 0;
  if ( *(_DWORD *)(v8 + 8) != 61 )
  {
    *(_QWORD *)v13 = *(_QWORD *)v8;
    v16 = *(_DWORD *)(v8 + 8);
    *(_QWORD *)v8 = -1;
    v17 = *(_DWORD *)(v13 + 8);
    *(_DWORD *)(v13 + 8) = v16;
    v18 = *(_DWORD *)(v8 + 12);
    *(_DWORD *)(v8 + 8) = v17;
    v19 = *(_DWORD *)(v13 + 12);
    *(_DWORD *)(v13 + 12) = v18;
    v20 = *(_QWORD *)(v8 + 24);
    *(_DWORD *)(v8 + 12) = v19;
    v21 = *(_QWORD *)(v13 + 24);
    *(_QWORD *)(v13 + 24) = v20;
    v22 = *(_QWORD *)(v8 + 32);
    *(_QWORD *)(v8 + 24) = v21;
    v23 = *(_QWORD *)(v13 + 32);
    *(_QWORD *)(v13 + 32) = v22;
    v24 = *(_QWORD *)(v8 + 40);
    *(_QWORD *)(v8 + 32) = v23;
    v25 = *(_QWORD *)(v13 + 40);
    *(_QWORD *)(v13 + 40) = v24;
    v26 = *(_QWORD *)(v8 + 48);
    *(_QWORD *)(v8 + 40) = v25;
    v27 = *(_QWORD *)(v13 + 48);
    *(_QWORD *)(v13 + 48) = v26;
    LODWORD(v26) = *(_DWORD *)(v8 + 56);
    *(_QWORD *)(v8 + 48) = v27;
    LODWORD(v27) = *(_DWORD *)(v13 + 56);
    *(_DWORD *)(v13 + 56) = v26;
    *(_DWORD *)(v8 + 56) = v27;
    v14 = *(_QWORD *)(v13 + 72);
  }
  v28 = *(_QWORD *)(v5 + 40);
  *(_QWORD *)(v13 + 72) = *(_QWORD *)v28;
  *(_QWORD *)v28 = v14;
  v29 = *(_DWORD *)(v13 + 80);
  *(_DWORD *)(v13 + 80) = *(_DWORD *)(v28 + 8);
  v30 = *(_DWORD *)(v28 + 12);
  *(_DWORD *)(v28 + 8) = v29;
  v31 = *(_DWORD *)(v13 + 84);
  *(_DWORD *)(v13 + 84) = v30;
  v32 = *(_QWORD *)(v28 + 24);
  *(_DWORD *)(v28 + 12) = v31;
  v33 = *(_QWORD *)(v13 + 96);
  *(_QWORD *)(v13 + 96) = v32;
  v34 = *(_QWORD *)(v28 + 32);
  *(_QWORD *)(v28 + 24) = v33;
  v35 = *(_QWORD *)(v13 + 104);
  *(_QWORD *)(v13 + 104) = v34;
  v36 = *(_QWORD *)(v28 + 40);
  *(_QWORD *)(v28 + 32) = v35;
  v37 = *(_QWORD *)(v13 + 112);
  *(_QWORD *)(v13 + 112) = v36;
  v38 = *(_QWORD *)(v28 + 48);
  *(_QWORD *)(v28 + 40) = v37;
  v39 = *(_QWORD *)(v13 + 120);
  *(_QWORD *)(v13 + 120) = v38;
  LODWORD(v38) = *(_DWORD *)(v28 + 56);
  *(_QWORD *)(v28 + 48) = v39;
  LODWORD(v39) = *(_DWORD *)(v13 + 128);
  *(_DWORD *)(v13 + 128) = v38;
  *(_DWORD *)(v28 + 56) = v39;
  v40 = v58;
  v41 = *(_QWORD *)(v13 + 136);
  v42 = v58[5];
  *(_QWORD *)(v13 + 136) = *(_QWORD *)v42;
  LODWORD(v38) = *(_DWORD *)(v42 + 8);
  *(_QWORD *)v42 = v41;
  LODWORD(v41) = *(_DWORD *)(v13 + 144);
  *(_DWORD *)(v13 + 144) = v38;
  LODWORD(v38) = *(_DWORD *)(v42 + 12);
  *(_DWORD *)(v42 + 8) = v41;
  LODWORD(v41) = *(_DWORD *)(v13 + 148);
  *(_DWORD *)(v13 + 148) = v38;
  v43 = *(_QWORD *)(v42 + 24);
  *(_DWORD *)(v42 + 12) = v41;
  v44 = *(_QWORD *)(v13 + 160);
  *(_QWORD *)(v13 + 160) = v43;
  v45 = *(_QWORD *)(v42 + 32);
  *(_QWORD *)(v42 + 24) = v44;
  v46 = *(_QWORD *)(v13 + 168);
  *(_QWORD *)(v13 + 168) = v45;
  v47 = *(_QWORD *)(v42 + 40);
  *(_QWORD *)(v42 + 32) = v46;
  v48 = *(_QWORD *)(v13 + 176);
  *(_QWORD *)(v13 + 176) = v47;
  v49 = *(_QWORD *)(v42 + 48);
  *(_QWORD *)(v42 + 40) = v48;
  v50 = *(_QWORD *)(v13 + 184);
  *(_QWORD *)(v13 + 184) = v49;
  LODWORD(v49) = *(_DWORD *)(v42 + 56);
  *(_QWORD *)(v42 + 48) = v50;
  LODWORD(v50) = *(_DWORD *)(v13 + 192);
  *(_DWORD *)(v13 + 192) = v49;
  *(_DWORD *)(v42 + 56) = v50;
  v51 = v62;
  *(_QWORD *)(v13 + 64) = v11;
  v60 = v51;
  *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL) = 0;
  v52 = v63;
  v53 = *v63;
  v59 = v63;
  *(_QWORD *)v63[1] = *v63;
  *(_QWORD *)(v53 + 8) = v52[1];
  sub_255410((__int64)(v52 + 2));
  qfree(v59);
  --v60[2];
  sub_296FE0(v11, v40);
  v54 = *(_QWORD *)(a2 + 24);
  if ( v54 )
  {
    v55 = *(_QWORD *)(v54 + 64);
    if ( v55 )
    {
      sub_255410(*(_QWORD *)(v54 + 64));
      j__qfree(v55);
    }
    sub_2559F0(v54);
    clear_tinfo_t(v54 + 48);
    j__qfree(v54);
  }
  *(_QWORD *)(a2 + 24) = v15;
  *(_DWORD *)(a2 + 8) = 74;
  *(_DWORD *)(a2 + 12) = v56;
  *(_QWORD *)a2 = v57;
  return v2;
}
