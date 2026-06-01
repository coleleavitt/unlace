__int64 __fastcall sub_4167A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = sub_4EE820(a1 + 1552, a2);
  if ( v2 )
    return (unsigned int)(2 << *(_BYTE *)(v2 + 23));
  result = 8;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) & 0x2000) == 0 )
    return (unsigned int)(2 << ((*(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) & 2) != 0));
  return result;
}

