unsigned __int64 __fastcall sub_3EC660(__int64 a1, __int64 a2, int a3, int a4, int a5, unsigned __int8 a6, double a7)
{
  _DWORD v8[4]; // [rsp+0h] [rbp-48h] BYREF
  _DWORD v9[6]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( (int)a2 >= a3 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCECEu, a2, a7);
    BUG();
  }
  v8[2] = a4;
  v8[0] = 1;
  v8[1] = a2;
  v9[0] = 1;
  v9[1] = a3;
  v9[2] = a5;
  sub_3EBC10(a1, 9 - a6, (unsigned __int8 *)v8, nullptr, (unsigned __int8 *)v9);
  sub_1181E0((__int64)v9);
  sub_1181E0((__int64)v8);
  return v10 - __readfsqword(0x28u);
}
