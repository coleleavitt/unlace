__int64 __fastcall sub_3E7290(__int64 a1, double a2)
{
  __int64 v2; // rbp
  _BOOL4 v3; // edx
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  const char *v6; // r12
  int v7; // eax
  int v8; // eax

  v2 = *(_QWORD *)(a1 + 96);
  if ( *(_BYTE *)(v2 + 144) )
    return 0;
  v3 = 1;
  *(_QWORD *)(a1 + 24) = "HEXV850";
  v4 = *(_QWORD *)(v2 + 168);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4 - 1;
  if ( v5 <= 4 )
  {
    if ( v5 <= 2 )
      goto LABEL_9;
    v6 = *(const char **)(v2 + 160);
  }
  else
  {
    v6 = *(const char **)(v2 + 160);
    v7 = strncmp(v6, "rh850", 5u);
    v3 = 0;
    if ( !v7 )
      goto LABEL_9;
  }
  v8 = *(unsigned __int8 *)v6 - 103;
  if ( *v6 == 103 )
  {
    v8 = *((unsigned __int8 *)v6 + 1) - 104;
    if ( v6[1] == 104 )
      v8 = *((unsigned __int8 *)v6 + 2) - 115;
  }
  v3 = v8 != 0;
LABEL_9:
  *(_DWORD *)(a1 + 568) = v3;
  *(_QWORD *)(a1 + 80) = 0x400000004LL;
  if ( *(_DWORD *)(*(_QWORD *)(v2 + 24) + 24LL) != 4 )
    return 0;
  *(_QWORD *)(a1 + 88) = 0x1000000008LL;
  sub_3E6460(a1, a2);
  return 1;
}
