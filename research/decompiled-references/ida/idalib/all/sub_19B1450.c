__int64 __fastcall sub_19B1450(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // rax
  _QWORD *v14; // rax
  char v15; // al
  __int64 v16; // rdx
  unsigned __int8 *v17; // rax
  __int64 v18; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+10h] [rbp-B8h] BYREF
  int v20; // [rsp+18h] [rbp-B0h]
  int v21; // [rsp+1Ch] [rbp-ACh]
  __int64 v22; // [rsp+20h] [rbp-A8h]
  char v23; // [rsp+28h] [rbp-A0h]
  unsigned __int8 *v24[10]; // [rsp+30h] [rbp-98h] BYREF
  int v25; // [rsp+80h] [rbp-48h]
  char v26; // [rsp+88h] [rbp-40h]
  __int64 v27; // [rsp+90h] [rbp-38h]

  sub_168B9F0((__int64)&v19, (__int64 *)(a3 + 8), *(_DWORD *)(a4 + 24), 0x170Cu, 0);
  if ( v26 )
  {
    sub_AE9DF0(v24, a5, 8u);
    v15 = v26;
  }
  else
  {
    if ( !BYTE4(v27) )
    {
      v6 = v19;
      *(_BYTE *)(a1 + 120) = 0;
      *(_QWORD *)a1 = v6;
      *(_DWORD *)(a1 + 8) = v20;
      *(_DWORD *)(a1 + 12) = v21;
      *(_QWORD *)(a1 + 16) = v22;
      *(_BYTE *)(a1 + 24) = v23;
      goto LABEL_4;
    }
    v12 = sub_168B9E0(&v19);
    v13 = v22;
    if ( v22 )
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
    v18 = v13;
    v14 = sub_1587BC0(v12, &v18, v8, v9, v10, v11);
    sub_AE9DF0((unsigned __int8 **)(*v14 + 32LL * (unsigned int)v27 + 8), a5, 8u);
    v15 = v26;
  }
  v16 = v19;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)a1 = v16;
  *(_DWORD *)(a1 + 8) = v20;
  *(_DWORD *)(a1 + 12) = v21;
  *(_QWORD *)(a1 + 16) = v22;
  *(_BYTE *)(a1 + 24) = v23;
  if ( v15 )
  {
    sub_FC70F0(a1 + 32, (__int64)v24);
    v17 = v24[9];
    *(_BYTE *)(a1 + 120) = 1;
    *(_QWORD *)(a1 + 104) = v17;
    *(_DWORD *)(a1 + 112) = v25;
  }
LABEL_4:
  *(_QWORD *)(a1 + 128) = v27;
  sub_15F7200(&v19);
  return a1;
}
