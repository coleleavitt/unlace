__int64 __fastcall sub_3A60E0(__int64 a1, int a2)
{
  __int64 *v2; // rax
  int v3; // r10d
  _QWORD *v4; // r11
  __int64 v5; // rdx
  __int64 result; // rax
  _QWORD v7[2]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v8; // [rsp+10h] [rbp-58h]
  __int64 v9; // [rsp+20h] [rbp-48h]
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]
  unsigned __int64 v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+38h] [rbp-30h]
  __int64 v13; // [rsp+40h] [rbp-28h]
  unsigned __int64 v14; // [rsp+48h] [rbp-20h]
  int v15; // [rsp+50h] [rbp-18h]
  unsigned __int64 v16; // [rsp+58h] [rbp-10h]

  v16 = __readfsqword(0x28u);
  v9 = 0xFFFFFFFFLL;
  v10 = 0xFFFFFFFF00000000LL;
  v11 = 0xFFFFFFFF00000000LL;
  v7[0] = 88;
  v7[1] = 0;
  v12 = 4;
  v13 = 9;
  v14 = 0xFFFFFFFF00000000LL;
  v15 = a2;
  v8 = 0;
  v2 = (__int64 *)sub_3A6070((__int64)v7);
  if ( v2 == (__int64 *)(*(_QWORD *)(*(_QWORD *)(qword_2CA1698 + 1384) + 240LL)
                       + 8LL * *(_QWORD *)(*(_QWORD *)(qword_2CA1698 + 1384) + 248LL)) )
    return 0;
  v5 = *v2;
  result = 0;
  if ( *(_DWORD *)(v5 + 80) == v3 )
  {
    if ( v4 )
      *v4 = v5;
    return 1;
  }
  return result;
}

