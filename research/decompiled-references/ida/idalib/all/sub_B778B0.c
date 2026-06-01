__int64 __fastcall sub_B778B0(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  result = 0;
  if ( (*(_DWORD *)(a1 + 40) & 7) == 7 )
  {
    v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_DWORD *)v2 == 1 )
      return *(_QWORD *)(v2 + 16);
  }
  return result;
}
