__int64 __fastcall sub_186B4C0(__int64 a1, unsigned int a2, _BYTE *a3, signed __int64 a4, unsigned int *a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rax
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v35; // [rsp+8h] [rbp-160h]
  __int64 v36; // [rsp+8h] [rbp-160h]
  __int64 v37; // [rsp+8h] [rbp-160h]
  __int64 v38; // [rsp+10h] [rbp-158h] BYREF
  int v39; // [rsp+18h] [rbp-150h]
  int v40; // [rsp+1Ch] [rbp-14Ch]
  __int64 v41; // [rsp+20h] [rbp-148h]
  char v42; // [rsp+28h] [rbp-140h]
  unsigned __int8 *v43[10]; // [rsp+30h] [rbp-138h] BYREF
  int v44; // [rsp+80h] [rbp-E8h]
  char v45; // [rsp+88h] [rbp-E0h]
  __int64 v46; // [rsp+90h] [rbp-D8h]
  __int64 v47; // [rsp+A0h] [rbp-C8h] BYREF
  int v48; // [rsp+A8h] [rbp-C0h]
  int v49; // [rsp+ACh] [rbp-BCh]
  __int64 v50; // [rsp+B0h] [rbp-B8h]
  char v51; // [rsp+B8h] [rbp-B0h]
  unsigned __int8 *v52[10]; // [rsp+C0h] [rbp-A8h] BYREF
  int v53; // [rsp+110h] [rbp-58h]
  char v54; // [rsp+118h] [rbp-50h]
  __int64 v55; // [rsp+120h] [rbp-48h]

  sub_168B9F0((__int64)&v47, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(a1 + 8), 0x13A4u, 0);
  if ( v54 )
  {
    sub_AE9DF0(v52, *(_QWORD *)(a1 + 16), 8u);
    if ( v54 )
    {
LABEL_10:
      sub_AE9DF0(v52, a2, 2u);
      v14 = v54;
      goto LABEL_11;
    }
  }
  else
  {
    if ( !BYTE4(v55) )
    {
LABEL_3:
      v45 = 0;
      v38 = v47;
      v39 = v48;
      v40 = v49;
      v41 = v50;
      v42 = v51;
      goto LABEL_4;
    }
    v8 = sub_168B9E0(&v47);
    v12 = v50;
    if ( v50 )
    {
      v35 = v8;
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 32LL))(v50);
      v8 = v35;
    }
    v38 = v12;
    v13 = sub_1587BC0(v8, &v38, v8, v9, v10, v11);
    sub_AE9DF0((unsigned __int8 **)(*v13 + 32LL * (unsigned int)v55 + 8), *(_QWORD *)(a1 + 16), 8u);
    if ( v54 )
      goto LABEL_10;
  }
  if ( !BYTE4(v55) )
    goto LABEL_3;
  v15 = sub_168B9E0(&v47);
  v19 = v50;
  if ( v50 )
  {
    v36 = v15;
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 32LL))(v50);
    v15 = v36;
  }
  v38 = v19;
  v20 = sub_1587BC0(v15, &v38, v15, v16, v17, v18);
  sub_AE9DF0((unsigned __int8 **)(*v20 + 32LL * (unsigned int)v55 + 8), a2, 2u);
  v14 = v54;
LABEL_11:
  v45 = 0;
  v38 = v47;
  v39 = v48;
  v40 = v49;
  v41 = v50;
  v42 = v51;
  if ( v14 )
  {
    sub_FC70F0((__int64)v43, (__int64)v52);
    v45 = 1;
    v43[9] = v52[9];
    v44 = v53;
  }
LABEL_4:
  v46 = v55;
  sub_15F7200(&v47);
  if ( a2 <= 1 )
  {
    if ( v45 )
    {
      sub_AEC220(v43, a3, a4);
    }
    else if ( BYTE4(v46) )
    {
      v28 = sub_168B9E0(&v38);
      v32 = v41;
      if ( v41 )
      {
        v37 = v28;
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 32LL))(v41);
        v28 = v37;
      }
      v47 = v32;
      v33 = sub_1587BC0(v28, &v47, v28, v29, v30, v31);
      sub_AEC220((unsigned __int8 **)(*v33 + 32LL * (unsigned int)v46 + 8), a3, a4);
    }
    sub_15F7200(&v38);
    if ( !a2 )
    {
      sub_168B9F0((__int64)&v47, (__int64 *)(*(_QWORD *)a1 + 8LL), a5[6], 0x193Eu, 0);
      if ( v54 )
      {
        sub_AE9DF0(v52, (__int64)a5, 0xAu);
      }
      else if ( BYTE4(v55) )
      {
        v23 = sub_168B9E0(&v47);
        v26 = v50;
        if ( v50 )
          v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 32LL))(v50);
        v38 = v26;
        v27 = sub_1587BC0(v23, &v38, v21, v22, v24, v25);
        sub_AE9DF0((unsigned __int8 **)(*v27 + 32LL * (unsigned int)v55 + 8), (__int64)a5, 0xAu);
      }
      v38 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a5 + 16LL))(a5);
      sub_1587DB0((__int64)&v47, &v38);
      sub_15F7200(&v47);
    }
  }
  else
  {
    sub_15F7200(&v38);
  }
  return 0;
}
