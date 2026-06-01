char __fastcall sub_1B2A750(__int64 *a1, int a2, unsigned int a3)
{
  char result; // al
  bool v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v14[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v16; // [rsp+30h] [rbp-98h] BYREF
  char v17; // [rsp+88h] [rbp-40h]
  unsigned int v18; // [rsp+90h] [rbp-38h]
  char v19; // [rsp+94h] [rbp-34h]

  result = (a2 != 0) & ((*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) >> 3) ^ 1);
  if ( result || (unsigned int)(a2 - 3) <= 1 )
  {
    sub_168B9F0((__int64)v14, a1, a3, 0x122Cu, 0);
    v5 = (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) != 0;
    if ( v17 )
    {
      sub_AE9DF0(&v16, v5, 3u);
      sub_15F7200(v14);
      return 1;
    }
    else
    {
      if ( v19 )
      {
        v8 = sub_168B9E0(v14);
        v11 = v15;
        if ( v15 )
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15);
        v13 = v11;
        v12 = sub_1587BC0(v8, &v13, v6, v7, v9, v10);
        sub_AE9DF0((unsigned __int8 **)(*v12 + 32LL * v18 + 8), v5, 3u);
      }
      sub_15F7200(v14);
      return 1;
    }
  }
  return result;
}
