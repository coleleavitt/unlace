unsigned __int64 __fastcall sub_80BA40(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_DWORD *)(a1 + 8) & 3) == 1 )
  {
    v2 = *(_QWORD *)(v1 + 40);
    v1 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v2 & 7) != 0 )
      return 0;
  }
  return v1;
}

