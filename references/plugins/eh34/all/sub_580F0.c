__int64 __fastcall sub_580F0(__int64 a1, __int64 a2)
{
  char v2; // al
  const char *v3; // rcx
  const char *v4; // rdx
  int v5; // r9d
  const char *v6; // r8

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = *(_BYTE *)(a2 + 4);
  if ( *(_BYTE *)(a2 + 5) )
  {
    v3 = "try";
    if ( v2 )
      v3 = "wind";
    v4 = "exit_";
  }
  else
  {
    v3 = "catch";
    if ( v2 )
      v3 = "unwind";
    v4 = "";
  }
  v5 = *(_DWORD *)a2;
  v6 = "";
  if ( *(int *)a2 < 0 )
  {
    v5 = -v5;
    v6 = "minus_";
  }
  sub_FB10((__int64 *)a1, (__int64)"%s%s_state_%s%d", v4, v3, v6, v5);
  return a1;
}
