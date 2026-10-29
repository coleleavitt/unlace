void __fastcall sub_1B2FC60(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  unsigned int v3; // r13d
  _BYTE *v4; // rax
  signed __int64 v5; // rdx
  _BYTE *v6; // r12
  signed __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // [rsp+0h] [rbp-C0h] BYREF
  _QWORD v16[2]; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+18h] [rbp-A8h]
  unsigned __int8 *v18; // [rsp+28h] [rbp-98h] BYREF
  char v19; // [rsp+80h] [rbp-40h]
  unsigned int v20; // [rsp+88h] [rbp-38h]
  char v21; // [rsp+8Ch] [rbp-34h]

  v1 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v1 )
  {
    v2 = *(_QWORD *)(a1 + 16) + 56 * v1 - 56;
    v3 = *(_DWORD *)(sub_168B6E0(a1) + 64);
    sub_168B9F0((__int64)v16, (__int64 *)a1, *(_DWORD *)(v2 + 48), 0x1C3Au, 0);
    v4 = (_BYTE *)sub_20EAB70(*(unsigned int *)(v2 + 28), v3);
    v6 = v4;
    v7 = v5;
    if ( v19 )
    {
      sub_AEC220(&v18, v4, v5);
    }
    else if ( v21 )
    {
      v12 = sub_168B9E0(v16);
      v13 = v17;
      if ( v17 )
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17);
      v15 = v13;
      v14 = sub_1587BC0(v12, &v15, v8, v9, v10, v11);
      sub_AEC220((unsigned __int8 **)(*v14 + 32LL * v20 + 8), v6, v7);
    }
    sub_15F7200(v16);
  }
}
