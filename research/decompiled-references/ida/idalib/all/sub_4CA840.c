__int64 __fastcall sub_4CA840(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  char v4; // dl
  __int64 result; // rax
  int v6; // eax
  __int16 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rax
  char v11; // dl

  v4 = sub_510230(a1, a3);
  result = 34;
  if ( v4 != 1 )
  {
    if ( a2 != -1 && (get_aflags(a3) & 0x4000) != 0 )
    {
      v10 = sub_5CAA10(a1);
      if ( (int)sub_5C9B30(a1, v10, a3) >= 0 )
        return 23;
    }
    v6 = sub_3BE900(a1, a3, 4);
    v7 = v6;
    v8 = v6 & 0x600;
    if ( v8 == 1536 )
    {
      if ( (v6 & 0x10000000) == 0 || (v9 = sub_5CAA10(a1)) == 0 || (result = 24, (*(_BYTE *)(v9 + 16) & 4) == 0) )
      {
        if ( (v7 & 0xC000) != 0x4000 )
          return 26;
        v11 = is_in_nlist(a3);
        result = 37;
        if ( !v11 )
          return 23;
      }
    }
    else if ( (v6 & 0xC000) == 0x4000 )
    {
      if ( !(unsigned __int8)is_in_nlist(a3) )
        return 23;
      result = 7;
      if ( v8 != 1024 )
        return 38;
    }
    else
    {
      result = 36;
      if ( v8 == 1024 )
        return 6;
    }
  }
  return result;
}
