__int64 __fastcall sub_5A03C0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // r12d
  int v6; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned int v7; // [rsp+10h] [rbp-38h] BYREF
  char v8; // [rsp+14h] [rbp-34h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( (sub_3C0CC0((__int64)a1, a3) & 2) != 0 )
    return 0;
  if ( (unsigned int)find_sp_value(&v6, a3, 0xFFFFFFFFLL) == 1 )
  {
    sub_5A02E0(a1, a2, a3, v6);
  }
  else
  {
    v8 = 0;
    v7 = -1;
    sub_3DC4D0(a1, (__int64)&v7, a3);
    v5 = v7;
    if ( v7 >= a3 )
      return 0;
    while ( (int)sub_5AEEA0(a1, a2, v5) < 0 )
    {
      sub_3DD2D0(a1, &v7, a3);
      v5 = v7;
      if ( v7 >= a3 )
        return 0;
    }
    v6 = sub_59EEC0(a1, a2, v5);
    sub_5A02E0(a1, a2, a3, v6);
  }
  return 1;
}

