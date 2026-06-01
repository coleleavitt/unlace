__int64 __fastcall sub_1DBB5E0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  _BYTE *v3; // rax
  signed __int64 v4; // rdx
  _BYTE *v5; // r12
  signed __int64 v6; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v16[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v18; // [rsp+30h] [rbp-98h] BYREF
  char v19; // [rsp+88h] [rbp-40h]
  unsigned int v20; // [rsp+90h] [rbp-38h]
  char v21; // [rsp+94h] [rbp-34h]

  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 64LL);
  sub_168B9F0((__int64)v16, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(a2 + 12), 0x119Cu, 0);
  v3 = (_BYTE *)sub_20EAB70(*(unsigned int *)(a2 + 8), v2);
  v5 = v3;
  v6 = v4;
  if ( v19 )
  {
    sub_AEC220(&v18, v3, v4);
  }
  else if ( v21 )
  {
    v12 = sub_168B9E0(v16);
    v13 = v17;
    if ( v17 )
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17);
    v15 = v13;
    v14 = sub_1587BC0(v12, &v15, v8, v9, v10, v11);
    sub_AEC220((unsigned __int8 **)(*v14 + 32LL * v20 + 8), v5, v6);
  }
  sub_15F7200(v16);
  return 1;
}
