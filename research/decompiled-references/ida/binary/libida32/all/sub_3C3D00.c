__int64 __fastcall sub_3C3D00(__int64 *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  _BYTE v7[2]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+2h] [rbp-46h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v4 = (int)a3;
  v9 = __readfsqword(0x28u);
  if ( (unsigned __int8)is_off(a4, a3) )
  {
    sub_4CB2C0(a1, a2, (unsigned int)v4);
    return sub_3A1A90(a1, a2, a2 + 1, 0x28u);
  }
  if ( (unsigned __int8)is_enum(a4, (unsigned int)v4) )
  {
    sub_400F00(a1, a2, (unsigned int)v4);
    return sub_3A1A90(a1, a2, a2 + 1, 0x28u);
  }
  if ( (unsigned __int8)is_stroff(a4, (unsigned int)v4) )
  {
    sub_3C3C20(a1, a2, v4);
    return sub_3A1A90(a1, a2, a2 + 1, 0x28u);
  }
  if ( (unsigned __int8)is_manual(a4, (unsigned int)v4) )
    return sub_5803B0(a1, a2, (unsigned int)v4, &byte_22CD811);
  if ( (unsigned __int8)is_custfmt(a4, (unsigned int)v4) && (int)sub_3E33B0(a1, v7, a2) > 0 )
  {
    if ( (unsigned int)v4 > 7 )
      v8 = -1;
    else
      *((_WORD *)&v8 + v4) = -1;
    sub_3E3740(a1, a2, v7);
  }
  return v9 - __readfsqword(0x28u);
}

