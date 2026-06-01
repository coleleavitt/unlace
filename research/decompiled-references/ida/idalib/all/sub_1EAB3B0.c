__int64 __fastcall sub_1EAB3B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  if ( *(char *)(a2 + 29) >= 0 )
    return 0;
  v2 = sub_B88050(a2);
  if ( v2 <= 0x13 )
    return 0;
  else
    return *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL * (unsigned int)(HIDWORD(v2) - 1));
}
