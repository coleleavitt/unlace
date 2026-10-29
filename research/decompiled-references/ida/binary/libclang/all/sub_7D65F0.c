unsigned __int64 __fastcall sub_7D65F0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 152);
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
      v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v1 & 4) == 0 || !v3 )
        break;
      v1 = *(_QWORD *)(*(_QWORD *)v3 + 152LL);
      if ( !v1 )
        return 0;
    }
  }
  return v2;
}

