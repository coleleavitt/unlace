bool __fastcall sub_557C30(__int64 a1, unsigned int a2)
{
  char v2; // dh
  char v3; // bh
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  int v6; // [rsp+8h] [rbp-30h]
  int v7; // [rsp+Ch] [rbp-2Ch]
  int v8; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v3 = v2;
  if ( (getinf(38) & 3) != 0 || (v3 & 0x40) == 0 && !(unsigned __int8)is_debugger_on() )
    return 0;
  v5 = 24;
  v8 = 0;
  v6 = getinf(37);
  v7 = 0;
  return get_ea_name(a1, a2, 13, &v5) > 0;
}

