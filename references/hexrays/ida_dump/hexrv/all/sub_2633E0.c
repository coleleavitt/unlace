unsigned __int64 __fastcall sub_2633E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 module_data; // rsi
  __int64 (__fastcall **v5)(int, int, int, int, int, int, char); // [rsp+0h] [rbp-68h] BYREF
  __int64 v6; // [rsp+8h] [rbp-60h]
  __int128 v7; // [rsp+10h] [rbp-58h]
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+28h] [rbp-40h]
  char v10; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+38h] [rbp-30h]
  unsigned __int64 v12; // [rsp+48h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v8 = 0;
  v6 = 0;
  v9 = a3;
  v10 = 0;
  v5 = &off_4B29D8;
  v11 = a2;
  v7 = 0;
  if ( a3 )
    module_data = *(_QWORD *)(a3 + 216);
  else
    module_data = get_module_data((unsigned int)dword_4C1BB8);
  sub_2616B0(a1, module_data, 0, &v5, 0);
  v5 = &off_4B6058;
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  return v12 - __readfsqword(0x28u);
}
