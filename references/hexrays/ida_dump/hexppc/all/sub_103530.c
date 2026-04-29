unsigned __int64 __fastcall sub_103530(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // r14d
  _UNKNOWN **v8; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+8h] [rbp-50h]
  __int128 v10; // [rsp+10h] [rbp-48h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 4) & 4) == 0 )
    return v11 - __readfsqword(0x28u);
  v10 = 0;
  v9 = 0;
  v8 = &off_4CA5D0;
  v7 = sub_1032F0((__int64)&v8, a2, a3, a4);
  v8 = &off_4D8DA8;
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  if ( v7 )
    return sub_1034A0(a1, a2, a3, a4);
  else
    return v11 - __readfsqword(0x28u);
}
