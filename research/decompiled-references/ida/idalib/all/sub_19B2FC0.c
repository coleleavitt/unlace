__int64 __fastcall sub_19B2FC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v6; // r13
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // rax
  char v16; // al
  __int64 v17; // rdx
  unsigned __int8 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r13
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+10h] [rbp-B8h] BYREF
  int v28; // [rsp+18h] [rbp-B0h]
  int v29; // [rsp+1Ch] [rbp-ACh]
  __int64 v30; // [rsp+20h] [rbp-A8h]
  char v31; // [rsp+28h] [rbp-A0h]
  unsigned __int8 *v32[10]; // [rsp+30h] [rbp-98h] BYREF
  int v33; // [rsp+80h] [rbp-48h]
  char v34; // [rsp+88h] [rbp-40h]
  __int64 v35; // [rsp+90h] [rbp-38h]

  sub_168B9F0((__int64)&v27, (__int64 *)(a3 + 8), *(_DWORD *)(a4 + 24), 0x169Fu, 0);
  v6 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47;
  if ( v34 )
  {
    sub_AE9DF0(v32, v6, 2u);
    if ( v34 )
    {
LABEL_8:
      sub_AE9DF0(v32, a5, 8u);
      v16 = v34;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !BYTE4(v35) )
    {
LABEL_3:
      v7 = v27;
      *(_BYTE *)(a1 + 120) = 0;
      *(_QWORD *)a1 = v7;
      *(_DWORD *)(a1 + 8) = v28;
      *(_DWORD *)(a1 + 12) = v29;
      *(_QWORD *)(a1 + 16) = v30;
      *(_BYTE *)(a1 + 24) = v31;
      goto LABEL_4;
    }
    v13 = sub_168B9E0(&v27);
    v14 = v30;
    if ( v30 )
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
    v26 = v14;
    v15 = sub_1587BC0(v13, &v26, v9, v10, v11, v12);
    sub_AE9DF0((unsigned __int8 **)(*v15 + 32LL * (unsigned int)v35 + 8), v6, 2u);
    if ( v34 )
      goto LABEL_8;
  }
  if ( !BYTE4(v35) )
    goto LABEL_3;
  v23 = sub_168B9E0(&v27);
  v24 = v30;
  if ( v30 )
    v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
  v26 = v24;
  v25 = sub_1587BC0(v23, &v26, v19, v20, v21, v22);
  sub_AE9DF0((unsigned __int8 **)(*v25 + 32LL * (unsigned int)v35 + 8), a5, 8u);
  v16 = v34;
LABEL_9:
  v17 = v27;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)a1 = v17;
  *(_DWORD *)(a1 + 8) = v28;
  *(_DWORD *)(a1 + 12) = v29;
  *(_QWORD *)(a1 + 16) = v30;
  *(_BYTE *)(a1 + 24) = v31;
  if ( v16 )
  {
    sub_FC70F0(a1 + 32, (__int64)v32);
    v18 = v32[9];
    *(_BYTE *)(a1 + 120) = 1;
    *(_QWORD *)(a1 + 104) = v18;
    *(_DWORD *)(a1 + 112) = v33;
  }
LABEL_4:
  *(_QWORD *)(a1 + 128) = v35;
  sub_15F7200(&v27);
  return a1;
}
