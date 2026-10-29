__int64 __fastcall sub_1704B80(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 result; // rax

  if ( !a2 || (*(_BYTE *)(a2 + 28) & 0x7F) != 0x12 || (*(_BYTE *)(a2 + 58) & 8) == 0 )
    return 0;
  v2 = sub_BACEB0(a2, 1);
  if ( !v2 )
    return 0;
  v3 = *(_QWORD *)(a2 + 40);
  if ( *(_QWORD *)(v2 + 80) != v3 )
    return 0;
  v4 = *(_QWORD *)(v2 + 40);
  if ( (v4 & 7) != 0 )
  {
    v5 = 0;
    if ( (v3 & 7) != 0 )
      return 0;
  }
  else
  {
    v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    v6 = 0;
    if ( (v3 & 7) != 0 )
      goto LABEL_9;
  }
  v6 = v3 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_9:
  if ( v6 == v5 )
    return 0;
  result = sub_A92C20(a1, a2, nullptr);
  if ( !result )
    return sub_A92C20(a1, v2, nullptr);
  return result;
}
