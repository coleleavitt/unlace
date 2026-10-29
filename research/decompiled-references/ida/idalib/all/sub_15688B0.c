__int64 __fastcall sub_15688B0(__int64 a1)
{
  int v1; // ecx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v6; // rdi
  unsigned __int8 *vars0[13]; // [rsp+0h] [rbp+0h] BYREF

  v1 = 1728;
  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_WORD *)(v3 + 32) != 458 )
    v1 = 14;
  sub_FC70B0((__int64)vars0, *(_QWORD *)(v3 + 104), *(_DWORD *)(v3 + 16), v1);
  sub_AE9DF0(vars0, *(unsigned __int16 *)(a1 + 26), 4u);
  sub_AEA040((__int64)vars0);
  sub_FC70B0((__int64)vars0, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL), *(_DWORD *)(a1 + 48), 109);
  sub_AE9DF0(vars0, *(unsigned __int16 *)(a1 + 24), 4u);
  sub_AEA040((__int64)vars0);
  v4 = *(_QWORD *)(a1 + 16);
  if ( (*(_WORD *)(v4 + 32) & 0xFFFD) != 0x15 && *(_WORD *)(v4 + 32) != 25 )
  {
    LODWORD(vars0[0]) = *(_DWORD *)(a1 + 26);
    if ( (unsigned __int8)sub_15680D0(v4, vars0, (_WORD *)&dword_0 + 1, 3) )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( *(_WORD *)(a1 + 26) == *(_WORD *)(v6 + 32) )
        *(_DWORD *)(a1 + 52) = sub_149F520(v6, 0);
    }
  }
  return 1;
}
