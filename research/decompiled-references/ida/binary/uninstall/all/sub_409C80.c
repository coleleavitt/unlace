__int64 __fastcall sub_409C80(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax

  sub_48B350(a1);
  if ( a2 == 3 )
    return sub_48B710(a1, (unsigned int)"invoked \"break\" outside of a loop", 0, v3, v4, v5);
  if ( a2 == 4 )
    return sub_48B710(a1, (unsigned int)"invoked \"continue\" outside of a loop", 0, v3, v4, v5);
  v6 = sub_48F930((unsigned int)"command returned bad code: %d", a2, v2, v3, v4, v5);
  return sub_48AFD0(a1, v6);
}

