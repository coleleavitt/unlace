void __fastcall sub_17BC70(TView *a1, TView **a2)
{
  int v2; // eax

  if ( a1 != a2[1] )
  {
    v2 = (*(__int64 (__fastcall **)(TView **, TView *))*a2)(a2, a1);
    if ( v2 > *((_DWORD *)a2 + 4) )
      *((_DWORD *)a2 + 4) = v2;
  }
}

