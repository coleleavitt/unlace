__int64 __fastcall sub_2E02F0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  const char *v4; // rdx

  v2 = sub_1E8D00(*a2 + 576LL);
  v3 = 7;
  if ( v2 && (*(_BYTE *)(v2 + 72) & 2) != 0 )
  {
    v4 = &s1;
    if ( *(_QWORD *)(v2 + 40) )
      v4 = *(const char **)(v2 + 32);
    return v4 == nullptr ? 7 : 3;
  }
  return v3;
}
