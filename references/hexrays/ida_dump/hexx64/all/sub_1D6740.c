unsigned __int64 __fastcall sub_1D6740(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5, int a6)
{
  _DWORD v10[4]; // [rsp+0h] [rbp-58h] BYREF
  _DWORD v11[6]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( (unsigned int)(a6 - 63) > 4 )
  {
    if ( !under_debugger )
      sub_383060(52260);
    BUG();
  }
  v10[2] = a4;
  v10[0] = 1;
  v10[1] = get_dtype_size(a2);
  v11[2] = a5;
  v11[0] = 1;
  v11[1] = get_dtype_size(a3);
  sub_1D6450(a1, a6, (unsigned __int8 *)v10, nullptr, (unsigned __int8 *)v11);
  sub_11CDA0((__int64)v11);
  sub_11CDA0((__int64)v10);
  return v12 - __readfsqword(0x28u);
}
