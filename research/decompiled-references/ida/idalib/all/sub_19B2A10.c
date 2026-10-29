__int64 __fastcall sub_19B2A10(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v9; // r15
  unsigned int v10; // eax
  unsigned int *v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r12
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  void *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int *v45; // rax
  _QWORD *v46; // rax
  unsigned int v47; // [rsp+8h] [rbp-170h]
  __int64 v48; // [rsp+8h] [rbp-170h]
  __int64 v49; // [rsp+20h] [rbp-158h]
  __int64 v50; // [rsp+20h] [rbp-158h]
  __int64 v51; // [rsp+20h] [rbp-158h]
  unsigned int v52; // [rsp+2Ch] [rbp-14Ch]
  void *v53[2]; // [rsp+30h] [rbp-148h] BYREF
  __int64 v54; // [rsp+40h] [rbp-138h] BYREF
  void *v55[2]; // [rsp+50h] [rbp-128h] BYREF
  _BYTE v56[16]; // [rsp+60h] [rbp-118h] BYREF
  __int64 v57; // [rsp+70h] [rbp-108h] BYREF
  char v58; // [rsp+78h] [rbp-100h]
  __int64 v59; // [rsp+7Ch] [rbp-FCh]
  char v60; // [rsp+84h] [rbp-F4h]
  void *v61[2]; // [rsp+88h] [rbp-F0h] BYREF
  _BYTE v62[24]; // [rsp+98h] [rbp-E0h] BYREF
  _QWORD v63[2]; // [rsp+B0h] [rbp-C8h] BYREF
  unsigned int *v64; // [rsp+C0h] [rbp-B8h]
  __int64 v65; // [rsp+C8h] [rbp-B0h]
  unsigned __int8 *v66[11]; // [rsp+D0h] [rbp-A8h] BYREF
  char v67; // [rsp+128h] [rbp-50h]
  unsigned int v68; // [rsp+130h] [rbp-48h]
  char v69; // [rsp+134h] [rbp-44h]

  if ( a4 )
    goto LABEL_2;
  v9 = *(_QWORD *)(a3 + 8);
  v10 = sub_FDE0D0(v9, *(_QWORD *)(*(_QWORD *)(a1 + 240) + 56LL));
  v11 = *(unsigned int **)(v9 + 16);
  v47 = v10;
  v12 = *v11;
  v52 = *(_DWORD *)(a3 + 28);
  v64 = v11 + 4;
  LOWORD(v66[0]) = 1285;
  v63[0] = "operator\"\"";
  v65 = v12;
  v63[1] = j__strlen("operator\"\"");
  sub_2253560(v53, v63);
  v13 = *(_QWORD *)(a3 + 24);
  v61[0] = v62;
  v57 = v13;
  v55[0] = v56;
  v59 = 0;
  v60 = 0;
  v61[1] = nullptr;
  v62[0] = 0;
  v62[16] = 0;
  v58 = 1;
  sub_19A0BE0(v55, (_BYTE *)v53[0], (__int64)v53[0] + (unsigned __int64)v53[1]);
  sub_A0AAD0((__int64)v61, v55);
  if ( v55[0] != v56 )
    operator delete(v55[0]);
  if ( v53[0] != &v54 )
    operator delete(v53[0]);
  if ( (unsigned int)sub_FDE160(v9) == 1 )
  {
    if ( v47 <= 2 )
      goto LABEL_14;
LABEL_19:
    sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), v52, 0x1CA4u, 0);
    if ( v67 )
    {
      sub_AE9DF0(v66, v9, 5u);
    }
    else if ( v69 )
    {
      v29 = sub_168B9E0(v63);
      v33 = v64;
      if ( v64 )
      {
        v49 = v29;
        v33 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v64 + 32LL))(v64);
        v29 = v49;
      }
      v55[0] = v33;
      v34 = sub_1587BC0(v29, (__int64 *)v55, v29, v30, v31, v32);
      sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * v68 + 8), v9, 5u);
    }
    LODWORD(v53[0]) = v47;
    v14 = sub_1587D10((__int64)v63, (int *)v53);
    v15 = v14;
    if ( *(_BYTE *)(v14 + 120) )
    {
      if ( (_DWORD)v57 && HIDWORD(v57) )
        sub_19A6C40((__int64 *)(v14 + 32), (unsigned __int64)&v57);
    }
    else if ( *(_BYTE *)(v14 + 132) )
    {
      v23 = sub_168B9E0((_QWORD *)v14);
      v27 = *(void **)(v15 + 16);
      if ( v27 )
      {
        v48 = v23;
        v27 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v27 + 32LL))(v27);
        v23 = v48;
      }
      v55[0] = v27;
      v28 = sub_1587BC0(v23, (__int64 *)v55, v23, v24, v25, v26);
      if ( (_DWORD)v57 && HIDWORD(v57) )
        sub_19A6C40((__int64 *)(*v28 + 32LL * *(unsigned int *)(v15 + 128) + 8), (unsigned __int64)&v57);
    }
    sub_15F7200(v63);
    goto LABEL_14;
  }
  sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), v52, 0x1AB3u, 0);
  if ( v67 )
  {
    sub_AE9DF0(v66, v9, 5u);
  }
  else
  {
    if ( !v69 )
      goto LABEL_18;
    v35 = sub_168B9E0(v63);
    v39 = v64;
    if ( v64 )
    {
      v50 = v35;
      v39 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v64 + 32LL))(v64);
      v35 = v50;
    }
    v55[0] = v39;
    v40 = sub_1587BC0(v35, (__int64 *)v55, v35, v36, v37, v38);
    sub_AE9DF0((unsigned __int8 **)(*v40 + 32LL * v68 + 8), v9, 5u);
  }
  if ( v67 )
  {
    if ( (_DWORD)v57 && HIDWORD(v57) )
      sub_19A6C40((__int64 *)v66, (unsigned __int64)&v57);
  }
  else if ( v69 )
  {
    v41 = sub_168B9E0(v63);
    v45 = v64;
    if ( v64 )
    {
      v51 = v41;
      v45 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v64 + 32LL))(v64);
      v41 = v51;
    }
    v55[0] = v45;
    v46 = sub_1587BC0(v41, (__int64 *)v55, v41, v42, v43, v44);
    if ( (_DWORD)v57 && HIDWORD(v57) )
      sub_19A6C40((__int64 *)(*v46 + 32LL * v68 + 8), (unsigned __int64)&v57);
  }
LABEL_18:
  sub_15F7200(v63);
  if ( v47 > 2 )
    goto LABEL_19;
LABEL_14:
  if ( v61[0] != v62 )
    operator delete(v61[0]);
LABEL_2:
  v6 = *(_QWORD *)(a2 + 8);
  if ( !v6 || ((1LL << sub_E90000(v6)) & 0x36) != 0 )
    return 0;
  sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x100Cu, 0);
  v7 = *(_QWORD *)(a2 + 8);
  if ( v67 )
  {
    sub_AE9DF0(v66, *(_QWORD *)(a2 + 8), 0xBu);
    sub_15F7200(v63);
    return 1;
  }
  else
  {
    if ( v69 )
    {
      v20 = sub_168B9E0(v63);
      v21 = (__int64)v64;
      if ( v64 )
        v21 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v64 + 32LL))(v64);
      v57 = v21;
      v22 = sub_1587BC0(v20, &v57, v16, v17, v18, v19);
      sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v68 + 8), v7, 0xBu);
    }
    sub_15F7200(v63);
    return 1;
  }
}
