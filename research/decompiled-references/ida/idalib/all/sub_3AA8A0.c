__int64 __fastcall sub_3AA8A0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // r10
  _QWORD *v4; // r11
  __int64 v5; // rdx
  __int64 result; // rax
  _QWORD v7[2]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v8; // [rsp+10h] [rbp-68h]
  __int64 v9; // [rsp+20h] [rbp-58h]
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+40h] [rbp-38h]
  __int64 v14; // [rsp+48h] [rbp-30h]
  unsigned __int64 v15; // [rsp+50h] [rbp-28h]
  __int64 v16; // [rsp+58h] [rbp-20h]
  unsigned __int64 v17; // [rsp+68h] [rbp-10h]

  v17 = __readfsqword(0x28u);
  v7[0] = 96;
  v11 = 0xFFFFFFFFLL;
  v7[1] = 0;
  v9 = -1;
  v10 = 0;
  v12 = -1;
  v13 = 4;
  v14 = 9;
  v15 = 0xFFFFFFFF00000000LL;
  v16 = a2;
  v8 = 0;
  v2 = (__int64 *)sub_3AA830((__int64)v7);
  if ( v2 == (__int64 *)(*(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1576) + 240LL)
                       + 8LL * *(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1576) + 248LL)) )
    return 0;
  v5 = *v2;
  result = 0;
  if ( *(_QWORD *)(v5 + 88) == v3 )
  {
    if ( v4 )
      *v4 = v5;
    return 1;
  }
  return result;
}
