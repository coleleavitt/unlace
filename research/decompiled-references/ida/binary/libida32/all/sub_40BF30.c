unsigned __int64 __fastcall sub_40BF30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int16 custom_fixup; // r14
  unsigned __int16 v6; // ax
  int v7; // r12d
  __int64 v8; // rbp
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  int v12; // [rsp+Ch] [rbp-5Ch]
  unsigned int v13; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v14[11]; // [rsp+1Dh] [rbp-4Bh] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 1480);
  v15 = __readfsqword(0x28u);
  custom_fixup = find_custom_fixup(a2);
  v6 = find_custom_fixup(a3);
  if ( !custom_fixup || (v7 = v6) == 0 )
    sub_365330();
  v8 = v3 + 2356;
  if ( (unsigned __int8)sub_79B370(a1, v8) )
  {
    v10 = sub_79B7E0(v8, a1, 83);
    if ( v10 != -1 )
    {
      v12 = custom_fixup & 0x7FFF;
      while ( 1 )
      {
        if ( sub_79B5C0(v8, a1, v10, v14, 11, 83) != 11 )
          goto LABEL_10;
        if ( (v14[0] & 0xF) == 0xA )
          break;
        if ( (v14[0] & 0xF) == 0xB )
        {
          v11 = v7 & 0xFFFF7FFF;
LABEL_9:
          v14[0] |= 0xFu;
          sub_79B440(v8, a1, v10, v14, 11, 83);
          v13 = v11;
          sub_79B440(v8, a1, v10, &v13, 4, 67);
        }
LABEL_10:
        v10 = sub_79B840(v8, a1, v10, 83);
        if ( v10 == -1 )
          return v15 - __readfsqword(0x28u);
      }
      v11 = v12;
      goto LABEL_9;
    }
  }
  return v15 - __readfsqword(0x28u);
}

