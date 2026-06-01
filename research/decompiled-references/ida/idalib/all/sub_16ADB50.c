void __fastcall sub_16ADB50(
        __int64 a1,
        unsigned int a2,
        signed int a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int64 a6,
        double a7,
        __int64 a8,
        char a9)
{
  __int64 *v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r13
  __int64 v20; // rax
  int v21; // r15d
  __int64 v22; // rcx
  __int64 v23; // r12
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // r12
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r13
  _QWORD *v35; // rax
  __int64 v36; // r12
  char v37; // al
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r13
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r15
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rbp
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r15
  __int64 v64; // rax
  _QWORD *v65; // rax
  unsigned int v66; // [rsp+Ch] [rbp-ECh]
  __int64 v67; // [rsp+10h] [rbp-E8h] BYREF
  unsigned int v68; // [rsp+18h] [rbp-E0h]
  __int64 v69; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v70[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v71; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v72[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v73; // [rsp+A8h] [rbp-50h]
  unsigned int v74; // [rsp+B0h] [rbp-48h]
  char v75; // [rsp+B4h] [rbp-44h]

  v67 = a4;
  v68 = a5;
  if ( a2 == 3283 && (unsigned __int8)sub_16A9770(a1, a3, a4, v68, a6, a8, a7, a9) )
    return;
  v11 = (__int64 *)(a1 + 8);
  sub_168B9F0((__int64)v70, (__int64 *)(a1 + 8), v67, a2, 0);
  if ( v73 )
  {
    sub_AE9DF0(v72, a3, 2u);
    v37 = v73;
  }
  else
  {
    if ( !v75 )
    {
      v12 = *(_QWORD *)(a6 + 8);
      goto LABEL_5;
    }
    v42 = sub_168B9E0(v70);
    v43 = v71;
    if ( v71 )
      v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v71 + 32LL))(v71);
    v69 = v43;
    v44 = sub_1587BC0(v42, &v69, v38, v39, v40, v41);
    sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v74 + 8), a3, 2u);
    v37 = v73;
  }
  v12 = *(_QWORD *)(a6 + 8);
  if ( !v37 )
  {
LABEL_5:
    if ( v75 )
    {
      v49 = sub_168B9E0(v70);
      v50 = v71;
      if ( v71 )
        v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v71 + 32LL))(v71);
      v69 = v50;
      v51 = sub_1587BC0(v49, &v69, v45, v46, v47, v48);
      sub_AE9DF0((unsigned __int8 **)(*v51 + 32LL * v74 + 8), v12, 8u);
    }
    goto LABEL_6;
  }
  sub_AE9DF0(v72, *(_QWORD *)(a6 + 8), 8u);
LABEL_6:
  v13 = sub_1605D30((__int64)v70, &a8);
  v14 = sub_16AAEC0(v13, (unsigned int *)&v67);
  v15 = &v69;
  v69 = sub_EEC8C0(a6, (__int64)&v67, a7);
  sub_1587DB0(v14, &v69);
  sub_15F7200(v70);
  v19 = a8;
  v20 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v20 + 16) == 42
    || (v22 = 0, v21 = -1, v16 = *(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v16 + 16) == 42)
    && (v20 = sub_F63050(*(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL), &v69, v16, 0), v22 = 0, v20) )
  {
    v19 = *(_QWORD *)(v20 + 32);
    v21 = 0;
    v22 = 1;
  }
  v23 = *(_QWORD *)(a6 + 8);
  v24 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v24 + 16) == 42
    || (v16 = *(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v16 + 16) == 42)
    && (v66 = v22, v24 = sub_F63050(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL), &v69, v16, v22), v22 = v66, v24) )
  {
    v23 = *(_QWORD *)(v24 + 32);
  }
  else
  {
    v21 = v22;
  }
  if ( !v21 )
  {
    v25 = *(_QWORD *)(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v26 = *(_QWORD *)v25;
    if ( *(_BYTE *)(*(_QWORD *)v25 + 16LL) == 48 )
    {
      v27 = *(_QWORD *)(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v28 = *(_QWORD *)v27;
      if ( *(_BYTE *)(*(_QWORD *)v27 + 16LL) == 48 )
      {
        v29 = sub_F63270(v26, (__int64)&v69, v16, v22, v17, v18);
        v34 = (__int64)v29;
        if ( (*((_BYTE *)v29 + 74) & 1) == 0 )
        {
          v15 = v11;
          sub_168B9F0((__int64)v70, v11, *((_DWORD *)v29 + 6), 0x1916u, 0);
          if ( v73 )
          {
            v15 = (__int64 *)v34;
            sub_AE9DF0(v72, v34, 0xAu);
          }
          else if ( v75 )
          {
            v63 = sub_168B9E0(v70);
            v64 = v71;
            if ( v71 )
              v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v71 + 32LL))(v71);
            v69 = v64;
            v65 = sub_1587BC0(v63, &v69, v59, v60, v61, v62);
            v15 = (__int64 *)v34;
            sub_AE9DF0((unsigned __int8 **)(*v65 + 32LL * v74 + 8), v34, 0xAu);
          }
          sub_15F7200(v70);
        }
        v35 = sub_F63270(v28, (__int64)v15, v30, v31, v32, v33);
        v36 = (__int64)v35;
        if ( (*((_BYTE *)v35 + 74) & 1) == 0 )
        {
          sub_168B9F0((__int64)v70, v11, *((_DWORD *)v35 + 6), 0x1916u, 0);
          if ( v73 )
          {
            sub_AE9DF0(v72, v36, 0xAu);
          }
          else if ( v75 )
          {
            v54 = sub_168B9E0(v70);
            v57 = v71;
            if ( v71 )
              v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v71 + 32LL))(v71);
            v69 = v57;
            v58 = sub_1587BC0(v54, &v69, v52, v53, v55, v56);
            sub_AE9DF0((unsigned __int8 **)(*v58 + 32LL * v74 + 8), v36, 0xAu);
          }
          sub_15F7200(v70);
        }
      }
    }
  }
}
