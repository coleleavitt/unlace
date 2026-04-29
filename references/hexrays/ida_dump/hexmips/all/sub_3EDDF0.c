unsigned __int64 __fastcall sub_3EDDF0(_QWORD *a1, int a2, int a3, int a4, int a5, unsigned __int8 a6)
{
  int v6; // eax
  _DWORD v8[4]; // [rsp+0h] [rbp-48h] BYREF
  _DWORD v9[6]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v8[0] = 1;
  v6 = 4;
  v9[0] = 1;
  v8[1] = a2;
  v8[2] = a4;
  v9[1] = a3;
  v9[2] = a5;
  if ( a2 != a3 )
    v6 = 9 - a6;
  sub_3EB6F0(a1, v6, (unsigned __int8 *)v8, nullptr, (unsigned __int8 *)v9);
  sub_118BA0((__int64)v9);
  sub_118BA0((__int64)v8);
  return v10 - __readfsqword(0x28u);
}
