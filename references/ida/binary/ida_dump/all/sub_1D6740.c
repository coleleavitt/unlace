unsigned __int64 __fastcall sub_1D6740(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  _DWORD v9[4]; // [rsp+0h] [rbp-58h] BYREF
  _DWORD v10[6]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( (unsigned int)(a6 - 63) > 4 )
  {
    if ( !under_debugger )
      sub_383060(52260);
    BUG();
  }
  v9[2] = a4;
  v9[0] = 1;
  v9[1] = get_dtype_size();
  v10[2] = a5;
  v10[0] = 1;
  v10[1] = get_dtype_size();
  sub_1D6450(a1, a6, (unsigned __int8 *)v9, nullptr, (unsigned __int8 *)v10);
  sub_11CDA0((__int64)v10);
  sub_11CDA0((__int64)v9);
  return v11 - __readfsqword(0x28u);
}
