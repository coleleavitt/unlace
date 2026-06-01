void __fastcall sub_1B22F10(__int64 a1, _QWORD *a2, double a3)
{
  __int64 v3; // rbx
  _BYTE *v4; // rbp
  signed __int64 v5; // r12
  __int64 *v6; // r13
  unsigned int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // rax
  _QWORD *v14; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v17[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v19; // [rsp+30h] [rbp-98h] BYREF
  char v20; // [rsp+88h] [rbp-40h]
  unsigned int v21; // [rsp+90h] [rbp-38h]
  char v22; // [rsp+94h] [rbp-34h]

  v3 = *(_QWORD *)(a1 + 8);
  v4 = (_BYTE *)*a2;
  v5 = a2[1];
  v6 = *(__int64 **)a1;
  if ( (*(_BYTE *)(v3 + 3) & 1) != 0 )
  {
    v7 = *(_DWORD *)(v3 + 24);
  }
  else if ( *(char *)(v3 + 2) >= 0
         || (v7 = sub_EEB7E0(*(_QWORD *)(v3 + 8 * (((*(_BYTE *)(v3 + 2) & 8) != 0) + 1LL) + 32), (__int64)a2, a3)) == 0 )
  {
    v7 = sub_EEB7E0(*(_QWORD *)(v3 + 32), (__int64)a2, a3);
    if ( !v7 )
    {
      if ( *(_DWORD *)(v3 + 16) )
      {
        v15 = *(_QWORD *)(v3 + 8 * (((*(_BYTE *)(v3 + 2) & 8) != 0) + 1LL) + 32);
        if ( v15 )
          v7 = sub_EEB7E0(v15, (__int64)a2, a3);
      }
    }
  }
  sub_168B9F0((__int64)v17, v6, v7, 0x8B4u, 0);
  if ( v20 )
  {
    sub_AEC220(&v19, v4, v5);
  }
  else if ( v22 )
  {
    v12 = sub_168B9E0(v17);
    v13 = v18;
    if ( v18 )
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18);
    v16 = v13;
    v14 = sub_1587BC0(v12, &v16, v8, v9, v10, v11);
    sub_AEC220((unsigned __int8 **)(*v14 + 32LL * v21 + 8), v4, v5);
  }
  sub_15F7200(v17);
}
