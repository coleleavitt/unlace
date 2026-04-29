void __fastcall sub_B440(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rbp

  if ( !*(_BYTE *)(a1 + 383) )
  {
    v1 = *(_BYTE *)(a1 + 381) == 0;
    *(_BYTE *)(a1 + 383) = 1;
    if ( !v1 )
    {
      if ( *(_QWORD *)(a1 + 279) )
      {
        setinf(14);
        v2 = *(_QWORD *)(a1 + 303);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 385) + 16LL) != v2 && v2 != -1 )
        {
          if ( !*(_QWORD *)(a1 + 16) )
            getinf_flag(3, 32);
          setinf(15);
        }
      }
    }
  }
}
