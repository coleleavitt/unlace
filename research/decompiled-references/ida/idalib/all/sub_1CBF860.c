__int64 __fastcall sub_1CBF860(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // r13
  unsigned int v5; // r14d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v16[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v18; // [rsp+30h] [rbp-98h] BYREF
  char v19; // [rsp+88h] [rbp-40h]
  unsigned int v20; // [rsp+90h] [rbp-38h]
  char v21; // [rsp+94h] [rbp-34h]

  sub_F22A90(v16, *(_QWORD *)(a2 + 24));
  v14 = v16[0];
  v2 = sub_F22BD0(&v14, 0);
  v3 = *(_DWORD *)(a2 + 4);
  v4 = v2;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 56) + 24LL) + 28LL) & 0x7F) == 0x43 )
  {
    v5 = sub_1CBF760(a1, v2, v3);
    if ( !(_BYTE)v5 && !*(_DWORD *)(a2 + 36) && (unsigned int)sub_BBD6F0(*(_QWORD *)(v4 + 56)) > 1 )
    {
      sub_168B9F0((__int64)v16, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 4), 0x1449u, 0);
      if ( v19 )
      {
        sub_AE9DF0(&v18, v4, 0xAu);
      }
      else if ( v21 )
      {
        v9 = sub_168B9E0(v16);
        v12 = v17;
        if ( v17 )
          v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17);
        v15 = v12;
        v13 = sub_1587BC0(v9, &v15, v7, v8, v10, v11);
        sub_AE9DF0((unsigned __int8 **)(*v13 + 32LL * v20 + 8), v4, 0xAu);
      }
      v5 = 1;
      sub_15F7200(v16);
    }
  }
  else
  {
    sub_168B9F0((__int64)v16, (__int64 *)(a1 + 8), v3, 0x144Au, 0);
    v5 = 1;
    sub_15F7200(v16);
  }
  return v5;
}
