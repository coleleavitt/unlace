unsigned __int64 __fastcall sub_780F50(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 152);
  v2 = 0;
  if ( v1 )
  {
    v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 152) & 6LL) == 4 )
      return v3;
  }
  return v2;
}

