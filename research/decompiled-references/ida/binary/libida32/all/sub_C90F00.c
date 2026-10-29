unsigned __int64 __fastcall sub_C90F00(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx

  LOBYTE(v3) = 1;
  v4 = 13;
  if ( (*(_BYTE *)(a2 + 1) & 6) == 0 )
  {
    v2 = sub_CC2440(*(_QWORD *)(a1 + 1264), *(_QWORD *)(a2 + 8));
    v4 = (unsigned int)v2;
    v3 = HIDWORD(v2);
  }
  return ((unsigned __int64)(unsigned __int8)v3 << 32) | v4 & 0xFFFFFF00FFFFFFFFLL | v2 & 0xFFFFFF0000000000LL;
}

