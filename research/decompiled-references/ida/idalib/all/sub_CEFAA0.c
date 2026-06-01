__int64 __fastcall sub_CEFAA0(__int64 a1, unsigned int a2)
{
  return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (a2 >> 6)) >> a2) & 1LL;
}
