unsigned __int64 __fastcall sub_3FDD90(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 result; // rax

  if ( *(_BYTE *)(a1 + 2233) )
  {
    v1 = *(_QWORD *)(a1 + 448);
    if ( v1 )
    {
      result = *(_QWORD *)(a1 + 2112) + *(_QWORD *)(a1 + 2008) + *(_QWORD *)(a1 + 1800) + *(_QWORD *)(a1 + 1904);
      if ( v1 < result )
        sub_365330();
    }
  }
  return result;
}

