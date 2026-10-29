__int64 __fastcall sub_B73270(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 128);
  if ( !v1 || (*(_BYTE *)(v1 + 10) & 0x20) == 0 || (*(_BYTE *)(v1 + 104) & 4) == 0 )
    return 0;
  v2 = sub_B72170(a1);
  v3 = v2;
  if ( v2 && (*(_BYTE *)(v2 + 28) & 0x7F) == 0x47 )
    v3 = *(_QWORD *)(v2 + 48);
  v4 = sub_B53CF0(v3);
  if ( v4 )
    return *(_QWORD *)(v4 + 56);
  else
    return 0;
}

