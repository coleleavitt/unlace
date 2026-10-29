bool __fastcall sub_99A460(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  void *v4; // r12

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL * a2);
  if ( !v2 )
    return 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * a2);
  if ( !v3 )
    return 0;
  v4 = qword_1C7F2C0;
  if ( (*(_BYTE *)(v2 + 20) & 1) != 0 || (*(_BYTE *)(v3 + 20) & 1) != 0 )
  {
    if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, v2 + 16, v3 + 16) )
      goto LABEL_6;
    return 0;
  }
  if ( *(_DWORD *)(v2 + 16) != *(_DWORD *)(v3 + 16) )
    return 0;
LABEL_6:
  if ( (*(_BYTE *)(v2 + 36) & 1) != 0 || (*(_BYTE *)(v3 + 36) & 1) != 0 )
    return (unsigned int)sub_182C7B0(v4, v2 + 32, v3 + 32) == 0;
  else
    return *(_DWORD *)(v2 + 32) == *(_DWORD *)(v3 + 32);
}

