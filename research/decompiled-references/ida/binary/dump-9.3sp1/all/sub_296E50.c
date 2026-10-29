__int64 __fastcall sub_296E50(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v5; // r15
  bool v6; // zf
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r14
  int v18; // esi
  int v19; // edx
  int v20; // esi
  int v21; // edx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // esi
  int v33; // ecx
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // r15
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rsi
  __int64 v52; // rcx
  _QWORD *v53; // rcx
  _QWORD *v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // r12
  __int64 v57; // r15
  int v58; // [rsp+4h] [rbp-84h]
  __int64 v59; // [rsp+8h] [rbp-80h]
  __int64 v60; // [rsp+10h] [rbp-78h]
  __int64 v61; // [rsp+10h] [rbp-78h]
  _QWORD *v62; // [rsp+18h] [rbp-70h]
  __int64 v63; // [rsp+28h] [rbp-60h] BYREF
  _QWORD *v64; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v65; // [rsp+38h] [rbp-50h]
  unsigned __int64 v66; // [rsp+48h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 12) != -1 )
    return 0;
  sub_283C00(&v64, a1, a2);
  if ( v65 == (_QWORD *)*v64 )
    return 0;
  v5 = v65[1];
  v6 = *(_DWORD *)(v5 + 24) == 72;
  v65 = (_QWORD *)v5;
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(v5 + 40);
  if ( (unsigned int)(*(_DWORD *)(v7 + 8) - 2) > 0xD )
    return 0;
  if ( (unsigned __int8)sub_285160(*(_QWORD *)(v5 + 40), 66, 1) )
    return 0;
  if ( (unsigned __int8)sub_285230(v7) )
    return 0;
  v8 = *(_QWORD *)(a2 + 24);
  v9 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 24LL);
  if ( (unsigned __int8)sub_285230(v8) || !(unsigned __int8)sub_285090(v8, v9) && *(_DWORD *)(v8 + 8) != 61 )
    return 0;
  v10 = *(_QWORD *)(a2 + 24);
  v63 = 0;
  v11 = *(_QWORD *)(v10 + 64);
  v2 = sub_2968B0(&v63, v11, v9);
  if ( !(_BYTE)v2 )
    return 0;
  v13 = *(unsigned int *)(v5 + 28);
  v60 = v63;
  v14 = *(_DWORD *)(a2 + 12);
  v58 = v13;
  if ( (_DWORD)v13 == -1 )
  {
    *(_DWORD *)(a2 + 12) = -1;
    v58 = v14;
  }
  else
  {
    if ( v14 != -1 )
      goto LABEL_27;
    *(_DWORD *)(v5 + 28) = -1;
  }
  if ( v58 == -2 )
  {
LABEL_27:
    if ( !under_debugger )
      sub_383060(52726);
    BUG();
  }
  v59 = **(_QWORD **)(v5 + 40);
  if ( v59 == -1 )
    v59 = *(_QWORD *)(v5 + 16);
  v15 = j__qalloc_or_throw(200, v11, v12, v13);
  v16 = -1;
  *(_QWORD *)v15 = -1;
  v17 = v15;
  *(_DWORD *)(v15 + 8) = 0;
  *(_QWORD *)(v15 + 12) = -1;
  *(_QWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 48) = 0;
  *(_DWORD *)(v15 + 56) = 0;
  *(_QWORD *)(v15 + 64) = 0;
  *(_QWORD *)(v15 + 72) = -1;
  *(_DWORD *)(v15 + 80) = 0;
  *(_QWORD *)(v15 + 84) = -1;
  *(_QWORD *)(v15 + 112) = 0;
  *(_QWORD *)(v15 + 120) = 0;
  *(_DWORD *)(v15 + 128) = 0;
  *(_QWORD *)(v15 + 136) = -1;
  *(_OWORD *)(v15 + 24) = 0;
  *(_OWORD *)(v15 + 96) = 0;
  *(_QWORD *)(v15 + 144) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v15 + 152) = 0xFFFFFFFFLL;
  *(_QWORD *)(v15 + 176) = 0;
  *(_QWORD *)(v15 + 184) = 0;
  *(_DWORD *)(v15 + 192) = 0;
  *(_OWORD *)(v15 + 160) = 0;
  if ( *(_DWORD *)(v8 + 8) != 61 )
  {
    *(_QWORD *)v15 = *(_QWORD *)v8;
    v18 = *(_DWORD *)(v8 + 8);
    *(_QWORD *)v8 = -1;
    v19 = *(_DWORD *)(v15 + 8);
    *(_DWORD *)(v15 + 8) = v18;
    v20 = *(_DWORD *)(v8 + 12);
    *(_DWORD *)(v8 + 8) = v19;
    v21 = *(_DWORD *)(v15 + 12);
    *(_DWORD *)(v15 + 12) = v20;
    v22 = *(_QWORD *)(v8 + 24);
    *(_DWORD *)(v8 + 12) = v21;
    v23 = *(_QWORD *)(v15 + 24);
    *(_QWORD *)(v15 + 24) = v22;
    v24 = *(_QWORD *)(v8 + 32);
    *(_QWORD *)(v8 + 24) = v23;
    v25 = *(_QWORD *)(v15 + 32);
    *(_QWORD *)(v15 + 32) = v24;
    v26 = *(_QWORD *)(v8 + 40);
    *(_QWORD *)(v8 + 32) = v25;
    v27 = *(_QWORD *)(v15 + 40);
    *(_QWORD *)(v15 + 40) = v26;
    v28 = *(_QWORD *)(v8 + 48);
    *(_QWORD *)(v8 + 40) = v27;
    v29 = *(_QWORD *)(v15 + 48);
    *(_QWORD *)(v15 + 48) = v28;
    LODWORD(v28) = *(_DWORD *)(v8 + 56);
    *(_QWORD *)(v8 + 48) = v29;
    LODWORD(v29) = *(_DWORD *)(v15 + 56);
    *(_DWORD *)(v15 + 56) = v28;
    *(_DWORD *)(v8 + 56) = v29;
    v16 = *(_QWORD *)(v15 + 72);
  }
  v30 = *(_QWORD *)(v5 + 40);
  *(_QWORD *)(v15 + 72) = *(_QWORD *)v30;
  *(_QWORD *)v30 = v16;
  v31 = *(_DWORD *)(v15 + 80);
  *(_DWORD *)(v15 + 80) = *(_DWORD *)(v30 + 8);
  v32 = *(_DWORD *)(v30 + 12);
  *(_DWORD *)(v30 + 8) = v31;
  v33 = *(_DWORD *)(v15 + 84);
  *(_DWORD *)(v15 + 84) = v32;
  v34 = *(_QWORD *)(v30 + 24);
  *(_DWORD *)(v30 + 12) = v33;
  v35 = *(_QWORD *)(v15 + 96);
  *(_QWORD *)(v15 + 96) = v34;
  v36 = *(_QWORD *)(v30 + 32);
  *(_QWORD *)(v30 + 24) = v35;
  v37 = *(_QWORD *)(v15 + 104);
  *(_QWORD *)(v15 + 104) = v36;
  v38 = *(_QWORD *)(v30 + 40);
  *(_QWORD *)(v30 + 32) = v37;
  v39 = *(_QWORD *)(v15 + 112);
  *(_QWORD *)(v15 + 112) = v38;
  v40 = *(_QWORD *)(v30 + 48);
  *(_QWORD *)(v30 + 40) = v39;
  v41 = *(_QWORD *)(v15 + 120);
  *(_QWORD *)(v15 + 120) = v40;
  LODWORD(v40) = *(_DWORD *)(v30 + 56);
  *(_QWORD *)(v30 + 48) = v41;
  LODWORD(v41) = *(_DWORD *)(v15 + 128);
  *(_DWORD *)(v15 + 128) = v40;
  *(_DWORD *)(v30 + 56) = v41;
  v42 = v60;
  v43 = *(_QWORD *)(v15 + 136);
  v44 = *(_QWORD *)(v60 + 40);
  *(_QWORD *)(v15 + 136) = *(_QWORD *)v44;
  LODWORD(v40) = *(_DWORD *)(v44 + 8);
  *(_QWORD *)v44 = v43;
  LODWORD(v43) = *(_DWORD *)(v15 + 144);
  *(_DWORD *)(v15 + 144) = v40;
  LODWORD(v40) = *(_DWORD *)(v44 + 12);
  *(_DWORD *)(v44 + 8) = v43;
  LODWORD(v43) = *(_DWORD *)(v15 + 148);
  *(_DWORD *)(v15 + 148) = v40;
  v45 = *(_QWORD *)(v44 + 24);
  *(_DWORD *)(v44 + 12) = v43;
  v46 = *(_QWORD *)(v15 + 160);
  *(_QWORD *)(v15 + 160) = v45;
  v47 = *(_QWORD *)(v44 + 32);
  *(_QWORD *)(v44 + 24) = v46;
  v48 = *(_QWORD *)(v15 + 168);
  *(_QWORD *)(v15 + 168) = v47;
  v49 = *(_QWORD *)(v44 + 40);
  *(_QWORD *)(v44 + 32) = v48;
  v50 = *(_QWORD *)(v15 + 176);
  *(_QWORD *)(v15 + 176) = v49;
  v51 = *(_QWORD *)(v44 + 48);
  *(_QWORD *)(v44 + 40) = v50;
  v52 = *(_QWORD *)(v15 + 184);
  *(_QWORD *)(v15 + 184) = v51;
  LODWORD(v51) = *(_DWORD *)(v44 + 56);
  *(_QWORD *)(v44 + 48) = v52;
  LODWORD(v52) = *(_DWORD *)(v15 + 192);
  *(_DWORD *)(v15 + 192) = v51;
  *(_DWORD *)(v44 + 56) = v52;
  v53 = v64;
  *(_QWORD *)(v15 + 64) = v11;
  v62 = v53;
  *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL) = 0;
  v54 = v65;
  v55 = *v65;
  v61 = (__int64)v65;
  *(_QWORD *)v65[1] = *v65;
  *(_QWORD *)(v55 + 8) = v54[1];
  sub_255050((__int64)(v54 + 2));
  qfree(v61);
  --v62[2];
  sub_296C20(v11, v42);
  v56 = *(_QWORD *)(a2 + 24);
  if ( v56 )
  {
    v57 = *(_QWORD *)(v56 + 64);
    if ( v57 )
    {
      sub_255050(*(_QWORD *)(v56 + 64));
      j__qfree(v57);
    }
    sub_255630(v56);
    clear_tinfo_t();
    j__qfree(v56);
  }
  *(_QWORD *)(a2 + 24) = v17;
  *(_DWORD *)(a2 + 8) = 74;
  *(_DWORD *)(a2 + 12) = v58;
  *(_QWORD *)a2 = v59;
  return v2;
}
