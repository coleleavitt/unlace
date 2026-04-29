__int64 __fastcall sub_3FD520(__int64 a1, __int64 a2, double a3)
{
  unsigned __int8 v3; // dl
  int v4; // ecx
  int v5; // r8d
  char v6; // r9
  int v7; // ebp
  char v8; // r13
  unsigned __int64 *v9; // rcx
  unsigned int v10; // ebx
  int dtype_size; // [rsp+8h] [rbp-70h]
  _DWORD v13[4]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( !sub_3EB280(*(unsigned __int16 *)(a1 + 48)) )
  {
    if ( !under_debugger )
      sub_3835A0(0xC359u, a2, a3);
    BUG();
  }
  v7 = v5;
  v8 = v6;
  v13[2] = v4;
  v13[0] = 1;
  dtype_size = get_dtype_size(v3);
  v13[1] = dtype_size;
  v14 = 0xFFFFFFFF00000000LL;
  v15 = 0;
  if ( v7 == -1 )
  {
    v9 = nullptr;
  }
  else
  {
    sub_11C7E0((__int64)&v14);
    LOBYTE(v14) = 1;
    v9 = &v14;
    LODWORD(v15) = v7;
    HIDWORD(v14) = dtype_size;
  }
  v10 = sub_3FD2B0(a1, a2, (__int64)v13, (__int64)v9, v8, nullptr, a3);
  sub_11C7E0((__int64)&v14);
  sub_11C7E0((__int64)v13);
  return v10;
}
