unsigned __int64 __fastcall extract_insn_opreprs_from_metadata_ex(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v3; // eax
  unsigned int v4; // eax
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v8; // [rsp+10h] [rbp-48h]
  __int64 v9; // [rsp+18h] [rbp-40h]
  char v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+28h] [rbp-30h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v11 = a1;
  v10 = 1;
  v9 = 0;
  v6 = &off_2B3B608;
  v7 = a2;
  v8 = a3;
  LODWORD(v9) = unpack_dd(&v7);
  while ( v7 < v8 )
  {
    while ( 1 )
    {
      v3 = unpack_dd(&v7);
      if ( v10 == 1 || v3 )
        break;
      v4 = unpack_dd(&v7);
      v10 = 1;
      v9 = v4;
      if ( v7 >= v8 )
        return v12 - __readfsqword(0x28u);
    }
    HIDWORD(v9) += v3;
    if ( (unsigned int)sub_7E3440((unsigned __int64 *)&v6) )
      break;
    if ( v10 )
      v10 = 0;
  }
  return v12 - __readfsqword(0x28u);
}
