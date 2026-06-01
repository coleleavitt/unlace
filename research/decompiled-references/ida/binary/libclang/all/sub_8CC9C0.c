void __fastcall sub_8CC9C0(__int64 a1, int *a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a1 + 56);
  if ( v2 == 3 )
  {
    sub_6A63E0(a1, (__int64)a2);
  }
  else
  {
    if ( v2 != -1 )
    {
      if ( v2 == 1 )
        sub_A1C0C0(a1);
      *(_BYTE *)(a1 + 56) = -1;
    }
    sub_6A4260(a1, a2);
    *(_BYTE *)(a1 + 56) = 3;
  }
}

