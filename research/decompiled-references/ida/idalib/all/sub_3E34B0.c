unsigned __int64 __fastcall sub_3E34B0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  bool v3; // zf
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 j; // rdx
  __int64 item_end; // rax
  __int64 i; // rdx
  _QWORD v10[2]; // [rsp+8h] [rbp-60h] BYREF
  __int64 v11; // [rsp+18h] [rbp-50h] BYREF
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  char v13; // [rsp+28h] [rbp-40h]
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v2 = a2;
  v10[0] = a2;
  v14 = __readfsqword(0x28u);
  v3 = *(_BYTE *)(a1 + 2321) == 0;
  v13 = 0;
  v12 = -1;
  if ( v3 )
  {
    sub_40F780(a1, &v12);
    for ( i = v12; v12 != -1; i = v12 )
    {
      if ( (unsigned __int8)(v13 - 4) > 1u && (v13 & 0x20) == 0 )
        sub_411F00(a1, v10[0], i);
      sub_410770(a1, &v12, v10[0]);
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 24);
    v5 = 1;
    v11 = 1;
    if ( *(_QWORD *)(v4 + 16) >= a2 )
    {
      item_end = get_item_end(a2, a2, a2, 1);
      v2 = v10[0];
      v11 = item_end - a2;
      v5 = item_end - a2;
    }
    sub_40F640(&v12, a1 + 1792, v2, v5, v10, &v11);
    for ( j = v12; v12 != -1; j = v12 )
    {
      if ( (v13 & 0x20) == 0 && (unsigned __int8)(v13 - 4) > 1u )
        sub_411F00(a1, v10[0], j);
      sub_40F6E0(&v12, a1 + 1792, v10[0], v11, v10, &v11);
    }
  }
  return v14 - __readfsqword(0x28u);
}
