__int64 __fastcall sub_19B4FF0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 v16; // rax
  _QWORD *v17; // rax
  bool v18; // r13
  char v19; // al
  __int64 v20; // rdx
  unsigned __int8 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r13
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r14
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+10h] [rbp-C8h] BYREF
  int v38; // [rsp+18h] [rbp-C0h]
  int v39; // [rsp+1Ch] [rbp-BCh]
  __int64 v40; // [rsp+20h] [rbp-B8h]
  char v41; // [rsp+28h] [rbp-B0h]
  unsigned __int8 *v42[10]; // [rsp+30h] [rbp-A8h] BYREF
  int v43; // [rsp+80h] [rbp-58h]
  char v44; // [rsp+88h] [rbp-50h]
  __int64 v45; // [rsp+90h] [rbp-48h]

  v8 = a6 & 0xFFFFFFFFFFFFFFF0LL;
  sub_168B9F0(
    (__int64)&v37,
    (__int64 *)(a3 + 8),
    a4,
    (*(_BYTE *)(*(_QWORD *)(a3 + 232) + 1LL) & 0x10) == 0 ? 5498 : 6758,
    0);
  if ( v44 )
  {
    sub_AE9DF0(v42, a5, 8u);
  }
  else
  {
    if ( !BYTE4(v45) )
    {
LABEL_3:
      v9 = v37;
      *(_BYTE *)(a1 + 120) = 0;
      *(_QWORD *)a1 = v9;
      *(_DWORD *)(a1 + 8) = v38;
      *(_DWORD *)(a1 + 12) = v39;
      *(_QWORD *)(a1 + 16) = v40;
      *(_BYTE *)(a1 + 24) = v41;
      goto LABEL_4;
    }
    v15 = sub_168B9E0(&v37);
    v16 = v40;
    if ( v40 )
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 32LL))(v40);
    v36 = v16;
    v17 = sub_1587BC0(v15, &v36, v11, v12, v13, v14);
    sub_AE9DF0((unsigned __int8 **)(*v17 + 32LL * (unsigned int)v45 + 8), a5, 8u);
  }
  v18 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47;
  if ( v44 )
  {
    sub_AE9DF0(v42, v18, 2u);
  }
  else
  {
    if ( !BYTE4(v45) )
      goto LABEL_3;
    v33 = sub_168B9E0(&v37);
    v34 = v40;
    if ( v40 )
      v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 32LL))(v40);
    v36 = v34;
    v35 = sub_1587BC0(v33, &v36, v29, v30, v31, v32);
    sub_AE9DF0((unsigned __int8 **)(*v35 + 32LL * (unsigned int)v45 + 8), v18, 2u);
  }
  if ( v44 )
  {
    sub_AE9DF0(v42, a6, 8u);
    v19 = v44;
  }
  else
  {
    if ( !BYTE4(v45) )
      goto LABEL_3;
    v26 = sub_168B9E0(&v37);
    v27 = v40;
    if ( v40 )
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 32LL))(v40);
    v36 = v27;
    v28 = sub_1587BC0(v26, &v36, v22, v23, v24, v25);
    sub_AE9DF0((unsigned __int8 **)(*v28 + 32LL * (unsigned int)v45 + 8), a6, 8u);
    v19 = v44;
  }
  v20 = v37;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)a1 = v20;
  *(_DWORD *)(a1 + 8) = v38;
  *(_DWORD *)(a1 + 12) = v39;
  *(_QWORD *)(a1 + 16) = v40;
  *(_BYTE *)(a1 + 24) = v41;
  if ( v19 )
  {
    sub_FC70F0(a1 + 32, (__int64)v42);
    v21 = v42[9];
    *(_BYTE *)(a1 + 120) = 1;
    *(_QWORD *)(a1 + 104) = v21;
    *(_DWORD *)(a1 + 112) = v43;
  }
LABEL_4:
  *(_QWORD *)(a1 + 128) = v45;
  sub_15F7200(&v37);
  return a1;
}
