unsigned __int64 __fastcall sub_411050(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 result; // rax

  if ( *(_BYTE *)(a1 + 2321) )
  {
    v1 = *(_QWORD *)(a1 + 456);
    if ( v1 )
    {
      result = *(_QWORD *)(a1 + 2200) + *(_QWORD *)(a1 + 2096) + *(_QWORD *)(a1 + 1888) + *(_QWORD *)(a1 + 1992);
      if ( v1 < result )
        sub_368890();
    }
  }
  return result;
}
