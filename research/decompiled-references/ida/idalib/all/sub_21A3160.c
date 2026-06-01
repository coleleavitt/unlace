__int64 __fastcall sub_21A3160(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx
  char v6; // al
  bool v7; // zf

  v2 = *(_QWORD *)(a1 + 560) + 144 * HIDWORD(a2);
  v3 = 1LL << *(_BYTE *)(v2 + 16);
  result = v3 & 0x35;
  if ( (v3 & 0x35) != 0 )
    return *(unsigned int *)(v2 + 96);
  if ( (v3 & 8) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 496) + 104LL * *(unsigned int *)(v2 + 96);
    v6 = *(_BYTE *)(v5 + 24);
    if ( v6 == 65 )
    {
      return *(_QWORD *)(v2 + 104) + *(int *)(v5 + 32);
    }
    else
    {
      v7 = v6 == 66;
      result = *(_QWORD *)(v2 + 104);
      if ( v7 )
        result += *(_QWORD *)(v5 + 32);
    }
  }
  return result;
}
