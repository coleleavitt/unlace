__int64 __fastcall sub_7A44C0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 128);
  if ( !v1 || (*(_BYTE *)(v1 + 10) & 0x20) == 0 || (*(_BYTE *)(v1 + 104) & 4) == 0 )
    return 0;
  v2 = sub_7A2060(a1);
  if ( (*(_BYTE *)(v2 + 28) & 0x7F) == 0x45 )
    v2 = *(_QWORD *)(v2 + 48);
  v3 = sub_780E20(v2);
  if ( v3 )
    return *(_QWORD *)(v3 + 56);
  else
    return 0;
}

