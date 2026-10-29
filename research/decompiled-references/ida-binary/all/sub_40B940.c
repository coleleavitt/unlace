__int64 __fastcall sub_40B940(char a1, __int64 a2)
{
  unsigned __int8 v2; // di
  __int64 v3; // rax

  if ( !a2 )
    return sub_40B380(a1);
  v2 = a1 - 6;
  v3 = 2165563904LL;
  if ( v2 <= 0x1Cu )
    v3 = dword_5EADE0[v2];
  return sub_524FA0(a2 + 40, v3, 0);
}
