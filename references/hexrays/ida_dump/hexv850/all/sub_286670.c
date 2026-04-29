__int64 __fastcall sub_286670(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ebp
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-78h] BYREF
  int v7; // [rsp+8h] [rbp-70h]
  __int64 v8; // [rsp+10h] [rbp-68h]
  __int128 v9; // [rsp+18h] [rbp-60h]
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int128 v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+40h] [rbp-38h]
  int v13; // [rsp+48h] [rbp-30h]
  unsigned __int64 v14; // [rsp+58h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 12) == -1 )
  {
    return 0;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)(a2 + 8) == 80 || (v4 = 0, a2 == *(_QWORD *)(*(_QWORD *)(v3 + 40) + 8LL) + 16LL) )
    {
      v6 = (__int64 (__fastcall **)())&off_4B4670;
      v7 = 0;
      v8 = 0;
      v10 = 0;
      v12 = a2;
      v13 = 0;
      v9 = 0;
      v11 = 0;
      sub_2506C0((__int64 *)&v6, v3 + 16, 0);
      v4 = 0;
      if ( v13 )
      {
        *(_DWORD *)(a2 + 12) = -1;
        v4 = 1;
      }
      v6 = off_4AF6D8;
      if ( v10 )
      {
        *(_QWORD *)&v11 = 0;
        qfree(v10);
      }
      if ( v8 )
      {
        *(_QWORD *)&v9 = 0;
        qfree(v8);
      }
    }
  }
  return v4;
}
