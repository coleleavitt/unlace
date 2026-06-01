__int64 __fastcall sub_1E67DC0(__int64 a1, unsigned int a2, __int64 a3, unsigned __int8 a4)
{
  unsigned int v5; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v15[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v17; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int8 v18; // [rsp+88h] [rbp-30h]
  unsigned int v19; // [rsp+90h] [rbp-28h]
  unsigned __int8 v20; // [rsp+94h] [rbp-24h]

  if ( ((*(_DWORD *)(a3 + 32) >> 1) & 0xFFFFFF) == 0
    || (v5 = 0, ((*(_DWORD *)(a3 + 32) >> 1) & 0xFFFFFF & (((*(_DWORD *)(a3 + 32) >> 1) & 0xFFFFFF) - 1)) != 0) )
  {
    sub_168B9F0((__int64)v15, (__int64 *)(a1 + 8), a2, 0xC72u, 0);
    if ( v18 )
    {
      sub_1E5E160(&v17, a4);
      v5 = v18;
      sub_15F7200(v15);
    }
    else
    {
      v5 = v20;
      if ( v20 )
      {
        v9 = sub_168B9E0(v15);
        v12 = v16;
        if ( v16 )
          v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
        v14 = v12;
        v13 = sub_1587BC0(v9, &v14, v7, v8, v10, v11);
        sub_1E5E160((unsigned __int8 **)(*v13 + 32LL * v19 + 8), a4);
        v5 = v18;
        sub_15F7200(v15);
      }
      else
      {
        sub_15F7200(v15);
      }
    }
  }
  return v5;
}
