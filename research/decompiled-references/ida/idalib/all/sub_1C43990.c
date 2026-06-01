__int64 __fastcall sub_1C43990(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  signed __int64 v7; // r14
  __int64 *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // ebx
  _BYTE *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r12
  __int64 v25; // rax
  _QWORD *v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r12
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r12
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r13
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r13
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // r15
  __int64 v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // [rsp+8h] [rbp-F0h]
  __int64 v84; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v85; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int8 v86; // [rsp+27h] [rbp-D1h] BYREF
  __int64 v87; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v88[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v89; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v90[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v91; // [rsp+A8h] [rbp-50h]
  unsigned int v92; // [rsp+B0h] [rbp-48h]
  char v93; // [rsp+B4h] [rbp-44h]

  v85 = a5;
  v84 = a6;
  if ( !a3 )
    return 0;
  v7 = *(unsigned int *)(a3 + 40);
  v11 = (__int64 *)(a1 + 8);
  if ( *(_DWORD *)(a3 + 40) )
  {
    v16 = *(_BYTE **)(a3 + 48);
    if ( !a2 )
    {
      v27 = 7521;
      if ( !a7 )
        v27 = 7534;
      sub_168B9F0((__int64)v88, v11, a4, v27, 0);
      if ( v91 )
      {
        sub_AE9DF0(v90, a3, 0xEu);
      }
      else if ( v93 )
      {
        v32 = sub_168B9E0(v88);
        v33 = v89;
        if ( v89 )
          v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v89 + 32LL))(v89);
        v87 = v33;
        v34 = sub_1587BC0(v32, &v87, v28, v29, v30, v31);
        sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * v92 + 8), a3, 0xEu);
      }
      goto LABEL_12;
    }
    sub_168B9F0((__int64)v88, v11, a4, 0x1D70u, 0);
    if ( v91 )
    {
      sub_1C2FE50(v90, a7);
    }
    else
    {
      if ( !v93 )
      {
LABEL_12:
        v86 = 1;
        v17 = sub_1588420((__int64)v88, &v86);
        v18 = v17;
        if ( *(_BYTE *)(v17 + 120) )
        {
          sub_AEC220((unsigned __int8 **)(v17 + 32), v16, v7);
        }
        else if ( *(_BYTE *)(v17 + 132) )
        {
          v39 = sub_168B9E0((_QWORD *)v17);
          v40 = *(_QWORD *)(v18 + 16);
          if ( v40 )
            v40 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v40 + 32LL))(*(_QWORD *)(v18 + 16));
          v87 = v40;
          v41 = sub_1587BC0(v39, &v87, v35, v36, v37, v38);
          sub_AEC220((unsigned __int8 **)(*v41 + 32LL * *(unsigned int *)(v18 + 128) + 8), v16, v7);
        }
        v12 = v18;
        goto LABEL_7;
      }
      v70 = sub_168B9E0(v88);
      v74 = v89;
      if ( v89 )
      {
        v83 = v70;
        v74 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v89 + 32LL))(v89);
        v70 = v83;
      }
      v87 = v74;
      v75 = sub_1587BC0(v70, &v87, v70, v71, v72, v73);
      sub_1C2FE50((unsigned __int8 **)(*v75 + 32LL * v92 + 8), a7);
    }
    if ( v91 )
    {
      sub_AE9DF0(v90, a3, 0xEu);
    }
    else
    {
      if ( !v93 )
        goto LABEL_12;
      v67 = sub_168B9E0(v88);
      v68 = v89;
      if ( v89 )
        v68 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v89 + 32LL))(v89);
      v87 = v68;
      v69 = sub_1587BC0(v67, &v87, v63, v64, v65, v66);
      sub_AE9DF0((unsigned __int8 **)(*v69 + 32LL * v92 + 8), a3, 0xEu);
    }
    if ( v91 )
    {
      sub_AE9DF0(v90, a2, 0xAu);
    }
    else if ( v93 )
    {
      v58 = sub_168B9E0(v88);
      v61 = v89;
      if ( v89 )
        v61 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v89 + 32LL))(v89);
      v87 = v61;
      v62 = sub_1587BC0(v58, &v87, v56, v57, v59, v60);
      sub_AE9DF0((unsigned __int8 **)(*v62 + 32LL * v92 + 8), a2, 0xAu);
    }
    goto LABEL_12;
  }
  if ( !a2 )
  {
    v19 = 7521;
    if ( !a7 )
      v19 = 7534;
    sub_168B9F0((__int64)v88, v11, a4, v19, 0);
    if ( v91 )
    {
      sub_AE9DF0(v90, a3, 0xEu);
    }
    else if ( v93 )
    {
      v24 = sub_168B9E0(v88);
      v25 = v89;
      if ( v89 )
        v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v89 + 32LL))(v89);
      v87 = v25;
      v26 = sub_1587BC0(v24, &v87, v20, v21, v22, v23);
      sub_AE9DF0((unsigned __int8 **)(*v26 + 32LL * v92 + 8), a3, 0xEu);
    }
    goto LABEL_6;
  }
  sub_168B9F0((__int64)v88, v11, a4, 0x1D70u, 0);
  if ( v91 )
  {
    sub_1C2FE50(v90, a7);
    goto LABEL_21;
  }
  if ( v93 )
  {
    v80 = sub_168B9E0(v88);
    v81 = v89;
    if ( v89 )
      v81 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v89 + 32LL))(v89);
    v87 = v81;
    v82 = sub_1587BC0(v80, &v87, v76, v77, v78, v79);
    sub_1C2FE50((unsigned __int8 **)(*v82 + 32LL * v92 + 8), a7);
LABEL_21:
    if ( v91 )
    {
      sub_AE9DF0(v90, a3, 0xEu);
    }
    else
    {
      if ( !v93 )
        goto LABEL_6;
      v53 = sub_168B9E0(v88);
      v54 = v89;
      if ( v89 )
        v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v89 + 32LL))(v89);
      v87 = v54;
      v55 = sub_1587BC0(v53, &v87, v49, v50, v51, v52);
      sub_AE9DF0((unsigned __int8 **)(*v55 + 32LL * v92 + 8), a3, 0xEu);
    }
    if ( v91 )
    {
      sub_AE9DF0(v90, a2, 0xAu);
    }
    else if ( v93 )
    {
      v44 = sub_168B9E0(v88);
      v47 = v89;
      if ( v89 )
        v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v89 + 32LL))(v89);
      v87 = v47;
      v48 = sub_1587BC0(v44, &v87, v42, v43, v45, v46);
      sub_AE9DF0((unsigned __int8 **)(*v48 + 32LL * v92 + 8), a2, 0xAu);
    }
  }
LABEL_6:
  LOBYTE(v87) = 0;
  v12 = sub_1588420((__int64)v88, (unsigned __int8 *)&v87);
LABEL_7:
  v13 = sub_15884C0(v12, &v85);
  v14 = *(unsigned __int8 *)(sub_15884C0(v13, &v84) + 120);
  sub_15F7200(v88);
  return v14;
}
