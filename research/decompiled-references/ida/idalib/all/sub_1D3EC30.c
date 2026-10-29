__int64 __fastcall sub_1D3EC30(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rdi
  char v7; // al
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 result; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int16 v37; // bp
  __int64 *v38; // rax
  __int64 v39; // rsi
  unsigned __int64 v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rcx
  unsigned __int64 v48; // rbp
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r13
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 *v65; // [rsp+8h] [rbp-E0h] BYREF
  unsigned int v66; // [rsp+14h] [rbp-D4h]
  unsigned __int64 v67; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v68; // [rsp+28h] [rbp-C0h] BYREF
  __m128 v69; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v70; // [rsp+40h] [rbp-A8h]
  unsigned __int8 *v71[11]; // [rsp+50h] [rbp-98h] BYREF
  char v72; // [rsp+A8h] [rbp-40h]
  unsigned int v73; // [rsp+B0h] [rbp-38h]
  char v74; // [rsp+B4h] [rbp-34h]

  v4 = a4;
  v6 = a2;
  v67 = a2;
  v66 = a3;
  if ( !a2 )
    goto LABEL_28;
  v7 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v7 == 37 )
  {
    v8 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
    if ( (v8 & 4) != 0 )
      v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v9 )
      BUG();
    goto LABEL_6;
  }
  if ( v7 != 71 || (v22 = *(_QWORD *)(a2 + 48)) == 0 || (a3 = *(_BYTE *)(v22 + 28) & 0x7F, (_BYTE)a3 != 37) )
  {
LABEL_28:
    v24 = 1;
    if ( sub_B7D580(v6, 1, a3, a4) )
    {
      v24 = v66;
      v65 = (__int64 *)&v67;
      v70 = a1;
      v69 = _mm_loadh_ps((const double *)&v65);
      sub_15F0FC0(a1, v66, (__int64 (__fastcall *)(__int64))sub_1D36DB0, (__int64)&v69);
    }
    v27 = sub_C1D490(v67, v24, v25, v26);
    v28 = sub_F57E80(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v28 || (*(_QWORD *)(v28 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v28 + 17) & 4) != 0 )
      return 0;
    if ( !(_BYTE)v4 )
      return 1;
    result = v4;
    if ( *(char *)(v67 + 28) >= 0 )
    {
      v29 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)&v69, v29, v66, 0xCB9u, 0);
      if ( v72 )
      {
        sub_AE9DF0(v71, v67, 0xAu);
      }
      else if ( v74 )
      {
        v55 = sub_168B9E0(&v69);
        v56 = v70;
        if ( v70 )
          v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 32LL))(v70);
        v68 = v56;
        v57 = sub_1587BC0(v55, &v68, v51, v52, v53, v54);
        sub_AE9DF0((unsigned __int8 **)(*v57 + 32LL * v73 + 8), v67, 0xAu);
      }
      sub_15F7200(&v69);
      sub_168B9F0((__int64)&v69, v29, *(_DWORD *)(v67 + 24), 0x16B7u, 0);
      if ( v72 )
      {
        sub_AE9DF0(v71, v67, 0xAu);
      }
      else if ( v74 )
      {
        v60 = sub_168B9E0(&v69);
        v63 = v70;
        if ( v70 )
          v63 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 32LL))(v70);
        v68 = v63;
        v64 = sub_1587BC0(v60, &v68, v58, v59, v61, v62);
        sub_AE9DF0((unsigned __int8 **)(*v64 + 32LL * v73 + 8), v67, 0xAu);
      }
      sub_15F7200(&v69);
      return v4;
    }
    return result;
  }
  v23 = *(_QWORD *)(sub_B8C1B0(v22 + 72) + 16);
  if ( (v23 & 4) != 0 )
    v9 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v9 = v23 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v9 )
    BUG();
LABEL_6:
  v10 = *(_QWORD *)(v9 + 64);
  v6 = v67;
  if ( !v10 || (*(_BYTE *)(v10 + 10) & 0x20) == 0 )
    goto LABEL_28;
  v11 = *(_QWORD *)(sub_B8C1B0(v67 + 72) + 16);
  if ( (v11 & 4) != 0 )
    v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v12 )
    v12 -= 64LL;
  v68 = sub_B96F60(v12);
  v15 = sub_B77B50(v67);
  if ( v15 )
  {
    a2 = sub_B77A30(v68);
    v16 = sub_1E04120(a1, a2, v15, v66, 3);
    v68 = v16;
    if ( !v16 || *(char *)(v16 + 28) < 0 )
      return 1;
    v19 = sub_C1D490(v16, a2, v17, v18);
    v20 = sub_F57E80(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v20 && (*(_QWORD *)(v20 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v20 + 17) & 4) == 0 )
    {
      a2 = v66;
      v65 = &v68;
      v70 = a1;
      v69 = _mm_loadh_ps((const double *)&v65);
      sub_15F0FC0(a1, v66, (__int64 (__fastcall *)(__int64))sub_1D36D90, (__int64)&v69);
    }
  }
  if ( *(char *)(v68 + 28) < 0 )
    return 1;
  v30 = sub_C1D490(v67, a2, v13, v14);
  v34 = *(_QWORD *)(sub_F68450(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL), a2, v31, v32, v33) & 0xFFFFFFFFFFFFFFF0LL);
  v36 = (unsigned int)*(unsigned __int8 *)(v34 + 16) - 25;
  if ( (unsigned int)v36 > 1 )
    v34 = sub_F63050(v34, a2, v36, v35);
  v37 = (*(_WORD *)(v34 + 20) >> 2) & 0x3F;
  v38 = (__int64 *)(*(_QWORD *)(v68 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v39 = *v38;
  if ( *(_BYTE *)(*v38 + 16) != 26 )
    v39 = sub_F63050(*v38, v39, v36, v35);
  v40 = sub_1A2DFC0(a1, v39, v37);
  v43 = sub_C1D490(v67, v39, v41, v42) & 0xFFFFFFFFFFFFFFF0LL;
  v46 = *(_QWORD *)v43;
  if ( *(_BYTE *)(*(_QWORD *)v43 + 16LL) == 42
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
    && sub_F63050(v46, v39, v44, v45) )
  {
    v48 = sub_A70010(*(_QWORD *)(a1 + 248), v40);
  }
  else
  {
    v48 = sub_A74B00(*(_QWORD *)(a1 + 248), v40);
  }
  sub_A82820(*(_QWORD *)(a1 + 248), v67, v48, v47, v49, v50);
  return 0;
}
