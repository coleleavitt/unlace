__int64 __fastcall sub_DC14E0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rbp
  unsigned __int8 **v4; // rax
  int v6; // edx
  __int64 *v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx

  v1 = *(_QWORD *)(a1 + 400);
  v2 = *(_QWORD *)(v1 + 32);
  if ( !v2 || *(_DWORD *)(v2 + 8) != 1 )
    goto LABEL_3;
  v6 = *(_DWORD *)(v1 + 64);
  if ( v6 == 1 )
  {
    v7 = *(__int64 **)(v1 + 72);
  }
  else
  {
    if ( (unsigned int)(v6 - 2) <= 1 )
      BUG();
    v7 = *(__int64 **)(*(_QWORD *)(v1 + 72) + 32LL);
  }
  v8 = *v7;
  v9 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v8 & 2) != 0 )
    v9 = 0;
  if ( *(_QWORD *)(a1 + 416) == v9 )
    return 1;
LABEL_3:
  v3 = sub_E1EF60(v1);
  if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 0x10) != 0 )
  {
    v4 = (unsigned __int8 **)sub_E33C10(a1, v3, 2458, 0);
    if ( v4 )
    {
      sub_AE9DF0(v4, *(_QWORD *)(v3 + 8), 8u);
      return 0;
    }
  }
  else
  {
    sub_E33C10(a1, v3, 108, 0);
  }
  return 0;
}
