unsigned __int64 __fastcall sub_D9F200(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (v1 & 4) != 0 )
    return 0;
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v2 || (*(_BYTE *)(v2 + 28) & 0x7Fu) - 35 > 3 )
    return 0;
  v3 = *(_QWORD *)(sub_B68470(v2 + 72) + 16);
  if ( (v3 & 4) != 0 )
    v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v4 )
    return v4 - 64;
  else
    return 0;
}

