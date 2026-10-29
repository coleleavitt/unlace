unsigned __int64 __fastcall sub_1CB0730(int a1, _DWORD *a2, double a3)
{
  __int64 (__fastcall **v4)(); // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+8h] [rbp-20h]
  int v6; // [rsp+Ch] [rbp-1Ch]
  __int16 v7; // [rsp+10h] [rbp-18h]
  unsigned int v8; // [rsp+14h] [rbp-14h]

  if ( (*a2 & 0x10000) == 0 )
    return 0;
  v4 = off_2C68DE0;
  v6 = a1;
  v5 = 16777472;
  v7 = 1;
  v8 = 0;
  sub_BC97E0((__int64 *)&v4, (__int64)a2);
  if ( v8 )
    return ((unsigned __int64)v8 << 32) | v8;
  else
    return sub_EEC8C0((unsigned __int64)a2, (__int64)a2, a3);
}
