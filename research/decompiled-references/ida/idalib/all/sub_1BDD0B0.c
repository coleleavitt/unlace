void __fastcall sub_1BDD0B0(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 *v8; // r13
  __int64 *v9; // r12
  bool v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r13
  void *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  void *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r12
  __int64 v32; // rax
  _QWORD *v33; // rax
  size_t v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r12
  void *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r12
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 *v49; // [rsp+0h] [rbp-118h]
  bool v50; // [rsp+8h] [rbp-110h]
  __int64 *v51; // [rsp+8h] [rbp-110h]
  __int64 v52; // [rsp+10h] [rbp-108h]
  __int64 v53; // [rsp+10h] [rbp-108h]
  __int64 v54; // [rsp+28h] [rbp-F0h] BYREF
  void *v55; // [rsp+30h] [rbp-E8h] BYREF
  signed __int64 v56; // [rsp+38h] [rbp-E0h]
  _BYTE v57[16]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v58[2]; // [rsp+50h] [rbp-C8h] BYREF
  void *v59; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v60[11]; // [rsp+70h] [rbp-A8h] BYREF
  char v61; // [rsp+C8h] [rbp-50h]
  unsigned int v62; // [rsp+D0h] [rbp-48h]
  char v63; // [rsp+D4h] [rbp-44h]

  v49 = (__int64 *)(a1 + 8);
  sub_168B9F0((__int64)v58, (__int64 *)(a1 + 8), a2, 0x15A9u, 0);
  if ( v61 )
  {
    sub_AE9DF0(v60, a3, 0xAu);
LABEL_3:
    sub_15F7200(v58);
    if ( *(char *)(a3 + 29) >= 0 )
      goto LABEL_4;
    goto LABEL_33;
  }
  if ( !v63 )
    goto LABEL_3;
  v18 = sub_168B9E0(v58);
  v19 = v59;
  if ( v59 )
    v19 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v59 + 32LL))(v59);
  v55 = v19;
  v20 = sub_1587BC0(v18, (__int64 *)&v55, v14, v15, v16, v17);
  sub_AE9DF0((unsigned __int8 **)(*v20 + 32LL * v62 + 8), a3, 0xAu);
  sub_15F7200(v58);
  if ( *(char *)(a3 + 29) >= 0 )
  {
LABEL_4:
    if ( (*(_BYTE *)(a3 + 8) & 7) != 0 )
    {
      v8 = *(__int64 **)(a3 - 8);
      v50 = v8 == nullptr;
      goto LABEL_6;
    }
    goto LABEL_35;
  }
LABEL_33:
  if ( (*(_BYTE *)(a3 + 8) & 7) != 0 )
  {
    v8 = (__int64 *)sub_B8C660(a3);
    v50 = v8 == nullptr;
    goto LABEL_6;
  }
LABEL_35:
  v50 = 1;
  v8 = nullptr;
LABEL_6:
  sub_168B9F0((__int64)v58, v49, *(_DWORD *)(a3 + 24), 0x1733u, 0);
  if ( v61 )
  {
    sub_AE9DF0(v60, v50, 2u);
    if ( v8 )
    {
LABEL_9:
      sub_FEEE60((__int64)&v55, v8, 0);
      goto LABEL_10;
    }
  }
  else
  {
    if ( v63 )
    {
      v39 = sub_168B9E0(v58);
      v40 = v59;
      if ( v59 )
        v40 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v59 + 32LL))(v59);
      v55 = v40;
      v41 = sub_1587BC0(v39, (__int64 *)&v55, v35, v36, v37, v38);
      sub_AE9DF0((unsigned __int8 **)(*v41 + 32LL * v62 + 8), v50, 2u);
    }
    if ( v8 )
      goto LABEL_9;
  }
  v55 = v57;
  v34 = j__strlen(&byte_22F0C30);
  sub_1BC95E0(&v55, &byte_22F0C30, (__int64)(&byte_22F0C30 + v34));
LABEL_10:
  if ( v61 )
  {
    sub_AEC220(v60, v55, v56);
  }
  else if ( v63 )
  {
    v46 = sub_168B9E0(v58);
    v47 = (__int64)v59;
    if ( v59 )
      v47 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v59 + 32LL))(v59);
    v54 = v47;
    v48 = sub_1587BC0(v46, &v54, v42, v43, v44, v45);
    sub_AEC220((unsigned __int8 **)(*v48 + 32LL * v62 + 8), v55, v56);
  }
  if ( v55 != v57 )
    operator delete(v55);
  sub_15F7200(v58);
  v51 = &a4[a5];
  while ( v51 != a4 )
  {
    v11 = *a4;
    v12 = *(_QWORD *)(*a4 + 8) & 7LL;
    if ( *(char *)(*a4 + 29) >= 0 )
    {
      if ( v12 )
      {
        v9 = *(__int64 **)(v11 - 8);
        v10 = v9 == nullptr;
        goto LABEL_18;
      }
    }
    else if ( v12 )
    {
      v52 = *a4;
      v13 = sub_B8C660(*a4);
      v11 = v52;
      v9 = (__int64 *)v13;
      v10 = v13 == 0;
      goto LABEL_18;
    }
    v10 = 1;
    v9 = nullptr;
LABEL_18:
    sub_168B9F0((__int64)v58, v49, *(_DWORD *)(v11 + 24), 0x1733u, 0);
    if ( v61 )
    {
      sub_AE9DF0(v60, v10, 2u);
      if ( !v9 )
        goto LABEL_38;
    }
    else
    {
      if ( v63 )
      {
        v21 = sub_168B9E0(v58);
        v25 = v59;
        if ( v59 )
        {
          v53 = v21;
          v25 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v59 + 32LL))(v59);
          v21 = v53;
        }
        v55 = v25;
        v26 = sub_1587BC0(v21, (__int64 *)&v55, v21, v22, v23, v24);
        sub_AE9DF0((unsigned __int8 **)(*v26 + 32LL * v62 + 8), v10, 2u);
      }
      if ( !v9 )
      {
LABEL_38:
        v55 = v57;
        sub_1BC95E0(&v55, &byte_22F0C30, (__int64)&byte_22F0C30);
        goto LABEL_22;
      }
    }
    sub_FEEE60((__int64)&v55, v9, 0);
LABEL_22:
    if ( v61 )
    {
      sub_AEC220(v60, v55, v56);
    }
    else if ( v63 )
    {
      v31 = sub_168B9E0(v58);
      v32 = (__int64)v59;
      if ( v59 )
        v32 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v59 + 32LL))(v59);
      v54 = v32;
      v33 = sub_1587BC0(v31, &v54, v27, v28, v29, v30);
      sub_AEC220((unsigned __int8 **)(*v33 + 32LL * v62 + 8), v55, v56);
    }
    if ( v55 != v57 )
      operator delete(v55);
    ++a4;
    sub_15F7200(v58);
  }
}
