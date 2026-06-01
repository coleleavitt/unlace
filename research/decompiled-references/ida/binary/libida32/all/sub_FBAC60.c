__int64 __fastcall sub_FBAC60(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax

  v2 = *a1;
  if ( (*a1 & 4) != 0 )
  {
    v3 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF8LL) + 8LL * a2 + 16);
  }
  else
  {
    if ( (v2 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      return 0;
    v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  }
  if ( v3 )
    return *(_QWORD *)(v3 + 16) + 16LL;
  return 0;
}

