void __fastcall sub_16F0550(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  char *v7; // rdi
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // [rsp-18h] [rbp-178h]
  bool v43; // [rsp+7h] [rbp-159h]
  __int64 *v44; // [rsp+8h] [rbp-158h]
  __int64 v45; // [rsp+8h] [rbp-158h]
  __int64 v46; // [rsp+8h] [rbp-158h]
  __int64 v47; // [rsp+8h] [rbp-158h]
  void **v48; // [rsp+8h] [rbp-158h]
  __int64 *v49; // [rsp+8h] [rbp-158h]
  __int64 v50; // [rsp+18h] [rbp-148h]
  unsigned __int8 *v51; // [rsp+18h] [rbp-148h]
  __int64 v52; // [rsp+18h] [rbp-148h]
  __int64 v53; // [rsp+20h] [rbp-140h]
  _QWORD *v54; // [rsp+28h] [rbp-138h] BYREF
  __int64 v55; // [rsp+30h] [rbp-130h] BYREF
  void *v56[2]; // [rsp+38h] [rbp-128h] BYREF
  _BYTE v57[16]; // [rsp+48h] [rbp-118h] BYREF
  __int64 (__fastcall **v58)(); // [rsp+58h] [rbp-108h] BYREF
  int v59; // [rsp+60h] [rbp-100h]
  __int128 v60; // [rsp+68h] [rbp-F8h]
  __int64 v61; // [rsp+78h] [rbp-E8h]
  char v62; // [rsp+80h] [rbp-E0h]
  int v63; // [rsp+84h] [rbp-DCh]
  void **v64; // [rsp+88h] [rbp-D8h]
  __m128i v65; // [rsp+98h] [rbp-C8h] BYREF
  _QWORD *v66; // [rsp+A8h] [rbp-B8h]
  unsigned __int8 *v67[11]; // [rsp+B8h] [rbp-A8h] BYREF
  char v68; // [rsp+110h] [rbp-50h]
  unsigned int v69; // [rsp+118h] [rbp-48h]
  char v70; // [rsp+11Ch] [rbp-44h]

  v43 = *(_WORD *)(a2 + 36) == 100;
  v56[0] = v57;
  v60 = 0;
  v57[0] = 0;
  v58 = &off_2BEBE68;
  v56[1] = nullptr;
  v59 = 0;
  v62 = 0;
  v63 = 1;
  v61 = 0;
  v64 = v56;
  sub_227B8B0(&v58, 0, 0, 0);
  v7 = **(char ***)a1;
  v8 = 6659;
  v65.m128i_i64[0] = sub_16043A0(
                       *(_QWORD **)(*(_QWORD *)(a1 + 8) + 248LL),
                       *(_QWORD **)(*(_QWORD *)(a1 + 8) + 240LL),
                       v4,
                       v5,
                       v6,
                       (__int64 *)"\n");
  v65.m128i_i64[1] = v9;
  sub_F07C00(v7, (__int64)&v58, 0, &v65, 0, 0, "\n", 1);
  if ( **(_BYTE **)(a1 + 16) )
    v8 = 7145;
  v44 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
  v11 = sub_C00A40(**(_QWORD **)a1, (__int64)v44, v42, 7145, v10);
  v12 = (__int64)v44;
  sub_168B9F0((__int64)&v65, v44, v11, v8, 0);
  if ( v68 )
  {
    v12 = v43;
    sub_16B71B0(v67, v43);
  }
  else
  {
    if ( !v70 )
      goto LABEL_5;
    v29 = sub_168B9E0(&v65);
    v33 = (__int64)v66;
    if ( v66 )
    {
      v47 = v29;
      v33 = (*(__int64 (__fastcall **)(_QWORD *))(*v66 + 32LL))(v66);
      v29 = v47;
    }
    v55 = v33;
    v34 = sub_1587BC0(v29, &v55, v29, v30, v31, v32);
    v12 = v43;
    sub_16B71B0((unsigned __int8 **)(*v34 + 32LL * v69 + 8), v43);
  }
  if ( v68 )
  {
    v12 = (__int64)*v64;
    sub_AEC220(v67, *v64, (signed __int64)v64[1]);
  }
  else
  {
    v48 = v64;
    if ( v70 )
    {
      v35 = sub_168B9E0(&v65);
      v38 = (__int64)v48;
      v39 = v35;
      v40 = (__int64)v66;
      if ( v66 )
      {
        v52 = v39;
        v40 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, void **))(*v66 + 32LL))(v66, *v66, v39, v48);
        v39 = v52;
        v38 = (__int64)v48;
      }
      v49 = (__int64 *)v38;
      v55 = v40;
      v41 = sub_1587BC0(v39, &v55, v39, v38, v36, v37);
      v12 = *v49;
      sub_AEC220((unsigned __int8 **)(*v41 + 32LL * v69 + 8), (_BYTE *)*v49, v49[1]);
    }
  }
LABEL_5:
  v55 = sub_EEC8C0(**(_QWORD **)a1, v12, 0.0);
  v13 = sub_1587DB0((__int64)&v65, &v55);
  v14 = sub_15884C0(v13, *(__int64 **)(a1 + 24));
  if ( *(_BYTE *)(v14 + 120) )
  {
    sub_16B71B0((unsigned __int8 **)(v14 + 32), **(unsigned __int8 **)(a1 + 32));
  }
  else if ( *(_BYTE *)(v14 + 132) )
  {
    v50 = *(_QWORD *)(a1 + 32);
    v45 = v14;
    v22 = sub_168B9E0((_QWORD *)v14);
    v24 = v45;
    v25 = v50;
    v26 = v22;
    v27 = *(_QWORD **)(v45 + 16);
    if ( v27 )
    {
      v53 = v26;
      v27 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64))(*v27 + 32LL))(v27, *v27, v45, v50);
      v26 = v53;
      v25 = v50;
      v24 = v45;
    }
    v51 = (unsigned __int8 *)v25;
    v46 = v24;
    v54 = v27;
    v28 = sub_1587BC0(v26, (__int64 *)&v54, v24, v25, v26, v23);
    sub_16B71B0((unsigned __int8 **)(*v28 + 32LL * *(unsigned int *)(v46 + 128) + 8), *v51);
  }
  sub_15F7200(&v65);
  sub_168B9F0((__int64)&v65, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL), *(_DWORD *)(a2 + 24), 0x16F1u, 0);
  if ( v68 )
  {
    sub_16B71B0(v67, v43);
  }
  else if ( v70 )
  {
    v17 = sub_168B9E0(&v65);
    v20 = (__int64)v66;
    if ( v66 )
      v20 = (*(__int64 (__fastcall **)(_QWORD *))(*v66 + 32LL))(v66);
    v55 = v20;
    v21 = sub_1587BC0(v17, &v55, v15, v16, v18, v19);
    sub_16B71B0((unsigned __int8 **)(*v21 + 32LL * v69 + 8), v43);
  }
  sub_15F7200(&v65);
  v58 = &off_2BEBE68;
  sub_227B7A0(&v58);
  if ( v56[0] != v57 )
    operator delete(v56[0]);
}
