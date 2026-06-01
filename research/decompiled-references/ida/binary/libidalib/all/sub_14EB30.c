__int64 __fastcall sub_14EB30(__int64 a1)
{
  unsigned int tinfo_details; // r14d
  __int128 vars0; // [rsp+8h] [rbp+0h]
  __int64 vars10; // [rsp+18h] [rbp+10h]
  __int128 vars18; // [rsp+20h] [rbp+18h]
  int vars28; // [rsp+30h] [rbp+28h]
  char vars2C; // [rsp+34h] [rbp+2Ch]
  unsigned __int64 vars30; // [rsp+38h] [rbp+30h]

  vars30 = __readfsqword(0x28u);
  vars10 = 0;
  vars28 = 0;
  vars2C = 0x80;
  vars0 = 0;
  vars18 = 0;
  tinfo_details = get_tinfo_details();
  if ( (_BYTE)tinfo_details )
  {
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 56) = 0;
  }
  return tinfo_details;
}

