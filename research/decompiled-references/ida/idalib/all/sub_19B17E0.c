__int64 __fastcall sub_19B17E0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // rax
  _QWORD *v16; // rax
  char v17; // al
  __int64 v18; // rdx
  unsigned __int8 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r13
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+10h] [rbp-B8h] BYREF
  int v29; // [rsp+18h] [rbp-B0h]
  int v30; // [rsp+1Ch] [rbp-ACh]
  __int64 v31; // [rsp+20h] [rbp-A8h]
  char v32; // [rsp+28h] [rbp-A0h]
  unsigned __int8 *v33[10]; // [rsp+30h] [rbp-98h] BYREF
  int v34; // [rsp+80h] [rbp-48h]
  char v35; // [rsp+88h] [rbp-40h]
  __int64 v36; // [rsp+90h] [rbp-38h]

  sub_168B9F0((__int64)&v28, (__int64 *)(a3 + 8), a4, 0xE49u, 0);
  if ( v35 )
  {
    sub_AE9DF0(v33, a5, 8u);
    if ( v35 )
    {
LABEL_8:
      sub_AE9DF0(v33, a6, 8u);
      v17 = v35;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !BYTE4(v36) )
    {
LABEL_3:
      v8 = v28;
      *(_BYTE *)(a1 + 120) = 0;
      *(_QWORD *)a1 = v8;
      *(_DWORD *)(a1 + 8) = v29;
      *(_DWORD *)(a1 + 12) = v30;
      *(_QWORD *)(a1 + 16) = v31;
      *(_BYTE *)(a1 + 24) = v32;
      goto LABEL_4;
    }
    v14 = sub_168B9E0(&v28);
    v15 = v31;
    if ( v31 )
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
    v27 = v15;
    v16 = sub_1587BC0(v14, &v27, v10, v11, v12, v13);
    sub_AE9DF0((unsigned __int8 **)(*v16 + 32LL * (unsigned int)v36 + 8), a5, 8u);
    if ( v35 )
      goto LABEL_8;
  }
  if ( !BYTE4(v36) )
    goto LABEL_3;
  v24 = sub_168B9E0(&v28);
  v25 = v31;
  if ( v31 )
    v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
  v27 = v25;
  v26 = sub_1587BC0(v24, &v27, v20, v21, v22, v23);
  sub_AE9DF0((unsigned __int8 **)(*v26 + 32LL * (unsigned int)v36 + 8), a6, 8u);
  v17 = v35;
LABEL_9:
  v18 = v28;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)a1 = v18;
  *(_DWORD *)(a1 + 8) = v29;
  *(_DWORD *)(a1 + 12) = v30;
  *(_QWORD *)(a1 + 16) = v31;
  *(_BYTE *)(a1 + 24) = v32;
  if ( v17 )
  {
    sub_FC70F0(a1 + 32, (__int64)v33);
    v19 = v33[9];
    *(_BYTE *)(a1 + 120) = 1;
    *(_QWORD *)(a1 + 104) = v19;
    *(_DWORD *)(a1 + 112) = v34;
  }
LABEL_4:
  *(_QWORD *)(a1 + 128) = v36;
  sub_15F7200(&v28);
  return a1;
}
