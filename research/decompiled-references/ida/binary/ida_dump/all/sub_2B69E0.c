__int64 __fastcall sub_2B69E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebp
  int v5; // [rsp+40h] [rbp-48h]

  sub_2B61B0(*(_QWORD *)(a2 + 1496), *(_QWORD *)(a2 + 40), 0);
  v2 = netnode_supval();
  if ( v2 == -1 )
    return 0;
  if ( v2 != 8 )
  {
    if ( !under_debugger )
      sub_383060(51164);
LABEL_14:
    BUG();
  }
  v3 = v5 - 1;
  if ( !v5 )
    return 0;
  if ( (v3 & 0x40000000) != 0 )
  {
    if ( !under_debugger )
      sub_383060(51004);
    goto LABEL_14;
  }
  sub_CFF70();
  if ( v3 < 0 )
  {
    *(_DWORD *)a1 = -1;
    *(_DWORD *)(a1 + 4) = -1;
    *(_QWORD *)(a1 + 8) = -1;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = -1;
    *(_QWORD *)(a1 + 8) = v3;
    *(_DWORD *)a1 = 0;
  }
  return 1;
}
