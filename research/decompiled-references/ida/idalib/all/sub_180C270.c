_BOOL8 __fastcall sub_180C270(__int64 a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // ecx
  _BOOL4 v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  char v10; // [rsp+1Bh] [rbp-FDh] BYREF
  int v11; // [rsp+1Ch] [rbp-FCh] BYREF
  __int64 v12; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v13; // [rsp+28h] [rbp-F0h] BYREF
  void *v14[2]; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v16[25]; // [rsp+50h] [rbp-C8h] BYREF

  v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 260LL);
  if ( v5 <= 0x1F
    && (v6 = ((0xF8000222uLL >> v5) & 1) == 0, ((0xF8000222uLL >> v5) & 1) != 0)
    && (v14[0] = nullptr,
        v14[1] = nullptr,
        v16[0] = 0,
        v16[1] = 0,
        sub_21177C0(
          (unsigned int)&v12,
          a3,
          a4,
          (unsigned int)v14,
          (unsigned int)v16,
          (unsigned int)&v11,
          (__int64)&v10,
          (__int64)&v13),
        v12) )
  {
    sub_168B9F0((__int64)v16, (__int64 *)(a1 + 8), a2, 0xC96u, 0);
    v8 = v12;
    v12 = 0;
    v13 = v8;
    sub_2221210(v14, &v13);
    v9 = sub_1682AF0((__int64)v16, (__int64)v14);
    v11 = 1;
    sub_1587D10(v9, &v11);
    if ( v14[0] != &v15 )
      operator delete(v14[0]);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    sub_15F7200(v16);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  }
  else
  {
    return 1;
  }
  return v6;
}
