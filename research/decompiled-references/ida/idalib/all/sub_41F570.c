unsigned __int64 __fastcall sub_41F570(__int64 a1, const char *a2, const char *a3)
{
  __int64 v3; // rbp
  __int16 custom_fixup; // r14
  unsigned __int16 v6; // ax
  int v7; // r12d
  __int64 v8; // rbp
  __int64 v10; // r15
  signed int v11; // r14d
  int v12; // [rsp+Ch] [rbp-7Ch]
  __int64 v13; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v14[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 1672);
  v15 = __readfsqword(0x28u);
  custom_fixup = find_custom_fixup(a2);
  v6 = find_custom_fixup(a3);
  if ( !custom_fixup || (v7 = v6) == 0 )
    sub_368890();
  v8 = v3 + 2464;
  if ( (unsigned __int8)sub_7BE6E0(a1, v8) )
  {
    v10 = sub_7BEB80(v8, a1, 83);
    if ( v10 != -1 )
    {
      v12 = custom_fixup & 0x7FFF;
      while ( 1 )
      {
        if ( sub_7BE950(v8, a1, v10, v14, 25, 83) != 25 )
          goto LABEL_10;
        if ( (v14[0] & 0xF) == 0xA )
          break;
        if ( (v14[0] & 0xF) == 0xB )
        {
          v11 = v7 & 0xFFFF7FFF;
LABEL_9:
          v14[0] |= 0xFu;
          sub_7BE7C0(v8, a1, v10, v14, 25, 83);
          v13 = v11;
          sub_7BE7C0(v8, a1, v10, &v13, 8, 67);
        }
LABEL_10:
        v10 = sub_7BEBF0(v8, a1, v10, 83);
        if ( v10 == -1 )
          return v15 - __readfsqword(0x28u);
      }
      v11 = v12;
      goto LABEL_9;
    }
  }
  return v15 - __readfsqword(0x28u);
}
