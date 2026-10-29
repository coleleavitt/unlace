void __fastcall sub_405A70(__int64 a1, int a2)
{
  int v2; // eax

  if ( a2 )
  {
    v2 = a2 & *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 12) = v2;
    if ( v2 )
    {
      if ( !*(_QWORD *)(a1 + 64) )
        *(_QWORD *)(a1 + 64) = sub_497BA0(5, sub_405A30, a1);
    }
  }
  else if ( *(_QWORD *)(a1 + 64) )
  {
    sub_4979A0();
    *(_QWORD *)(a1 + 64) = 0;
  }
}

