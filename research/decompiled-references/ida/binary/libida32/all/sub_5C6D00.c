unsigned __int64 __fastcall sub_5C6D00(__int64 a1)
{
  char v2; // al
  char *v3; // rbp
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 41) & 0xF0) == 0 && !(unsigned __int8)getinf_flag(3, 4) )
  {
    s1 = nullptr;
    v5 = 0;
    get_abi_name(&s1);
    v2 = getinf(57);
    v3 = s1;
    if ( (v2 & 0xF) == 1 && (!(_QWORD)v5 || strcmp(s1, "mingw")) )
      *(_QWORD *)(a1 + 40) |= 0x5000uLL;
    if ( v3 )
    {
      *(_QWORD *)&v5 = 0;
      qfree(v3);
    }
  }
  return v6 - __readfsqword(0x28u);
}

