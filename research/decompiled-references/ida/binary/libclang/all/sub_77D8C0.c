_BOOL8 __fastcall sub_77D8C0(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdi
  __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v2 = *(_QWORD *)v1;
  if ( *(_BYTE *)(*(_QWORD *)v1 + 16LL) == 26 )
    return (*(_BYTE *)(v2 + 23) & 0x10) != 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
    return 0;
  v4 = sub_B0D320(v2);
  return v4 && (*(_BYTE *)(v4 + 23) & 0x10) != 0;
}

